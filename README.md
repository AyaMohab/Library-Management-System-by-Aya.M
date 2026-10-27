##### **Library Management System (C++)**



###### **Project Overview**

This is a console-based Library Management System built entirely in C++. The application simulates a real-world library environment, allowing users (Students and Teachers) to browse and borrow books, while providing Staff members with administrative tools to manage the inventory and track transactions. 



The project focuses on robust data handling, input validation, and logical flow using core C++ concepts.



###### **Features**



**User Authentication:** 

Complete Sign-up and Log-in functionality. The system validates user inputs (e.g., ensuring passwords match) and assigns roles (Student, Teacher, or Staff).

**Book Catalog:** A dynamic display of available books, including titles, categories, and available quantities.

**Borrowing System:** Students and Teachers can select a book to borrow. The system automatically calculates a 30-day borrowing limit and generates a specific due date based on the **current** date entered.



**Admin Dashboard (Staff Only):**

**Add Books:** Staff can add new books to the library and assign them categories.

**Update Books:** Staff can edit a book's title, author, or category. The system automatically updates the total counts for each category.

**Delete Books:** Staff can remove books from the system, which instantly updates the inventory totals.

**Transaction History:** Staff can view a formatted table of current book transactions, including the user, book borrowed, and due date.



###### **Technologies Used**

**Language:** C++

**Concepts:** Object-Oriented logic, Arrays for data storage, Loops, Conditional Statements, and Input Validation.



###### **How to Run the Project**

1\. Download the `.cpp` source code file from this repository.

2\. Open the file in any C++ IDE (such as Visual Studio, Code::Blocks, Dev-C++, or CLion).

3\. Compile the code.

4\. Run the executable in your terminal/console and follow the on-screen prompts to navigate the menus.

