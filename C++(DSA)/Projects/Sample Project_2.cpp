#include <QApplication>
#include <QWidget>
#include <QTableWidget>
#include <QPushButton>
#include <QVBoxLayout>
#include <QDateTimeEdit>
#include <QComboBox>
#include <QLineEdit>
#include <QMessageBox>

class Task {
public:
    QString description;
    QDateTime deadline;
    int priority;  // 1 = High, 2 = Medium, 3 = Low
    bool isCompleted;

    Task(QString desc, QDateTime date, int prio)
        : description(desc), deadline(date), priority(prio), isCompleted(false) {}
};

class TaskManager : public QWidget {
    Q_OBJECT

public:
    TaskManager(QWidget* parent = nullptr) : QWidget(parent) {
        // Set up the task table
        taskTable = new QTableWidget(0, 4, this);
        taskTable->setHorizontalHeaderLabels({"Description", "Deadline", "Priority", "Status"});
        taskTable->setEditTriggers(QAbstractItemView::NoEditTriggers);  // Disable editing

        // Set up the input fields
        descriptionEdit = new QLineEdit(this);
        deadlineEdit = new QDateTimeEdit(this);
        deadlineEdit->setDateTime(QDateTime::currentDateTime());
        priorityComboBox = new QComboBox(this);
        priorityComboBox->addItem("High", 1);
        priorityComboBox->addItem("Medium", 2);
        priorityComboBox->addItem("Low", 3);

        // Set up buttons
        addButton = new QPushButton("Add Task", this);
        removeButton = new QPushButton("Remove Task", this);
        markCompletedButton = new QPushButton("Mark Completed", this);

        // Set up layout
        QVBoxLayout* layout = new QVBoxLayout;
        layout->addWidget(descriptionEdit);
        layout->addWidget(deadlineEdit);
        layout->addWidget(priorityComboBox);
        layout->addWidget(addButton);
        layout->addWidget(removeButton);
        layout->addWidget(markCompletedButton);
        layout->addWidget(taskTable);
        setLayout(layout);

        // Connect signals to slots
        connect(addButton, &QPushButton::clicked, this, &TaskManager::addTask);
        connect(removeButton, &QPushButton::clicked, this, &TaskManager::removeTask);
        connect(markCompletedButton, &QPushButton::clicked, this, &TaskManager::markTaskCompleted);
    }

public slots:
    void addTask() {
        QString description = descriptionEdit->text();
        QDateTime deadline = deadlineEdit->dateTime();
        int priority = priorityComboBox->currentData().toInt();

        Task newTask(description, deadline, priority);
        tasks.append(newTask);

        int row = taskTable->rowCount();
        taskTable->insertRow(row);
        taskTable->setItem(row, 0, new QTableWidgetItem(description));
        taskTable->setItem(row, 1, new QTableWidgetItem(deadline.toString()));
        taskTable->setItem(row, 2, new QTableWidgetItem(QString::number(priority)));
        taskTable->setItem(row, 3, new QTableWidgetItem("Pending"));
    }

    void removeTask() {
        int row = taskTable->currentRow();
        if (row >= 0) {
            tasks.removeAt(row);
            taskTable->removeRow(row);
        }
    }

    void markTaskCompleted() {
        int row = taskTable->currentRow();
        if (row >= 0) {
            tasks[row].isCompleted = true;
            taskTable->item(row, 3)->setText("Completed");
        }
    }

private:
    QTableWidget* taskTable;
    QLineEdit* descriptionEdit;
    QDateTimeEdit* deadlineEdit;
    QComboBox* priorityCombo
