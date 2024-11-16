This program is a Mini Project for a user account management system, implemented in C++. The system includes functionalities for registration, login, and account recovery options like password or email retrieval. It provides a three-level authentication system and ensures security using password masking, color patterns, and security questions.

Key Features and Flow:
1. Account Registration
Users can register by providing:
User ID: Unique identification number.
Name: Their full name.
Email: An active email ID.
Password: Entered securely with masked characters (displayed as *).
Color Pattern: A sequence of colors (e.g., red, blue, green) chosen by the user to serve as a secondary authentication factor.
Security Question and Answer: Users select a question (e.g., "What is your pet's name?") and provide an answer.
After completing the steps, the account is registered successfully.

2. Login
The login process is divided into three levels of authentication:
Level 1: Email and Password Verification

The user provides their registered email and password.
If incorrect, the user can retry or exit the login process.

Level 2: Color Pattern Authentication

The user inputs their saved color pattern (in the correct order).
If the entered pattern doesn't match, the process ends.

Level 3: Security Question Verification

The user selects the same security question they chose during registration.
They must provide the correct answer to complete the login.
Upon successful authentication at all three levels, the user’s details are displayed.

3. Password Recovery
If a user forgets their password:
They enter their registered email and verify their color pattern.
If verified, they can set a new password.

4. Email Recovery
If a user forgets their email:
They provide their User ID.
If the ID matches, their registered email is displayed.

5. Exit
Users can exit the program at any time by selecting the Exit option from the main menu.

Design and Security Measures
Password Masking: Ensures passwords are not visible during input.
Color Pattern Authentication: Adds an extra layer of verification by requiring users to input their saved sequence of colors.
Security Questions: Enhances account security by tying login and recovery to personalized answers.
User-Friendly Prompts: The program offers clear prompts and retry options if an error occurs.
Data Storage: User details, including security credentials, are stored in a structured array for efficient access.

Menu Navigation
The program starts by displaying a Main Menu with options:
Register Account: To create a new user profile.
Login Account: To access an existing account.
Forget Password: To reset a forgotten password.
Forget Email: To retrieve a forgotten email.
Exit: To close the application.
Users can interact with the menu by entering the corresponding number for their desired action.

Potential Usage Scenarios
This project simulates an account management system and can be used as a prototype for applications requiring secure user registration and authentication. It demonstrates fundamental concepts of data validation, user interaction, and layered security.
