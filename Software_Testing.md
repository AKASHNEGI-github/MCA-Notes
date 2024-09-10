# SOFTWARE TESTING

---

### What is Software
In a computer system, the software is basically a set of instructions or commands that tell a computer what to do. In other words, the software is a computer program that provides a set of instructions to execute a user’s commands and tell the computer what to do. For example like MS-Word, MS-Excel, PowerPoint, etc.

Types of Software -
- System Software : System Software is software that directly operates the computer hardware and provides the basic functionality to the users as well as to the other software to operate smoothly. Or in other words, system software basically controls a computer’s internal functioning and also controls hardware devices such as monitors, printers, and storage devices, etc. 
Examples - Operating System , Language Processor , Device Driver
- Application Software : Application Software is a software that performs special functions or provides functions that are much more than the basic operation of the computer is known as application software. Or in other words, application software is designed to perform a specific task for end-users.
Examples - General Purpose Software , Customize Software , Utility Software

### What is SDLC
SDLC (Software Development Life Cycle) is a structured process used by software developers to design, develop, and test high-quality software. The SDLC process ensures that software is built efficiently and meets both customer and business requirements. 

Stages of SDLC  - 
- **Planning** : In this initial phase, the project’s objectives, scope, and feasibility are determined. It involves gathering requirements, creating a project plan, and allocating resources.
- **Requirements Analysis** : During this phase, developers and stakeholders collaborate to define the functional and non-functional requirements of the software. This step produces a detailed description of the system requirements.
- **Design** : This phase involves creating the architecture of the system. Designers plan the software structure and its components. High-level design outlines the system as a whole, while detailed design specifies individual components.
- **Implementation (Coding/Development)** : Developers write code based on the design documents. This is the actual development stage where the software is built according to the specifications defined earlier.
- **Testing** : Once the software is developed, it is thoroughly tested to ensure that it meets the required quality standards. Bugs are identified, reported, and fixed in this phase.
- **Deployment** : After testing, the software is deployed to a production environment where it is made available to users. This may involve a staged or full rollout.
- **Maintenance** : After deployment, the software requires ongoing maintenance to fix any issues, update features, and ensure the software continues to meet user needs. This phase may also include enhancements based on user feedback.

### What is STLC
STLC (Software Testing Life Cycle) is a set of phases in software testing that are executed in a systematic and planned way. It defines the steps and activities performed by the testing team to ensure the quality of the software product. Like SDLC, STLC has its own stages that start from test planning and extend through test execution and closure. It helps in improving the quality of the final software product by identifying and fixing defects.

Phases of STLC - 
- **Requirement Analysis** : In this phase, the testing team studies and analyzes the software requirements from a testing perspective to identify what needs to be tested.
- **Test Planning** : The test plan is created in this phase. It involves determining the scope, objectives, budget, schedule, and resources required for testing.
- **Test Case Development** : Based on the requirements, test cases are written, and test data is prepared. These test cases define the actions to be performed during testing.
- **Test Environment Setup** : The testing environment, which mirrors the production environment, is prepared. It involves setting up hardware and software configurations, network, and testing tools.
- **Test Execution** : During this phase, the test cases are executed in the test environment. The actual testing is done to find defects in the software.
- **Test Closure** : After all testing activities are completed, the team evaluates the testing process, analyzes the test results, and prepares a test closure report. This phase also involves learning and archiving test artifacts for future use.

### What is Defect/Bug Life Cycle
The Defect/Bug Life Cycle refers to the process through which a software bug or defect goes from being identified to being resolved and closed. It defines the various stages a bug goes through during its lifecycle and ensures that issues are managed systematically.

Stages in Defect/Bug Life Cycle - 
- **New** : When a tester finds a bug, they create a new defect in the defect tracking system and assign it the status New. The bug has just been logged but has not yet been reviewed.
- **Assigned** : The defect is assigned to a developer or a team responsible for analyzing and fixing it. At this point, the status changes to Assigned.
- **Open** : The developer starts working on the defect to understand its nature and identify the cause. The status changes to Open.
- **Deferred** : Sometimes, the defect may be valid but is not critical to fix immediately. In such cases, the defect can be deferred to a future release or version. The status is changed to Deferred.
- **Rejected** : If the developer or the team finds that the defect is not valid or reproducible, or it is due to misunderstanding, they may reject the defect, changing the status to Rejected.
- **Duplicate** : If the defect is found to be a duplicate of another bug already reported, the status is marked as Duplicate.
- **In Progress** : Once the developer starts working on fixing the defect, the status is updated to In Progress. This indicates that the resolution process has begun.
- **Fixed** : After the developer has made the necessary changes to resolve the issue, the status is changed to Fixed. At this point, the defect is resolved, but it hasn’t been tested yet.
- **Pending Retest** : Once the fix is deployed, the status is updated to Pending Retest, meaning it is awaiting retesting by the testing team to confirm the fix.
- **Retest** : The tester now retests the bug to verify if the issue has been fixed. If the defect is no longer present, they move it to the next stage.
- **Verified** : If the tester confirms that the defect has been successfully fixed and no longer exists, the status is changed to Verified.
- **Reopen** : If the defect is still present after the fix, the tester reopens the bug, assigning it a Reopen status. The bug will go through the cycle again until it's resolved.
- **Closed** : If the tester verifies that the defect has been fixed and it is functioning as expected, the status is changed to Closed. This means the bug has been successfully resolved and no further action is needed.


### What is Software Testing
Software Testing is the process of evaluating a software application to ensure it meets the specified requirements and functions correctly without any defects. It involves executing the software under controlled conditions to identify bugs, errors, or missing requirements. The goal of software testing is to ensure that the software product is reliable, performs as expected, and meets user needs.

Key Objectives of Software Testing -
- Identify Defects : Detect bugs or issues in the software that can cause incorrect behavior.
- Ensure Quality : Ensure the software meets the required quality standards, including functionality, usability, and performance.
- Verify Requirements : Confirm that the software meets the specified functional and non-functional requirements.
- Enhance User Satisfaction : Deliver a product that provides a seamless and reliable user experience.
- Ensure Security : Identify vulnerabilities that could lead to security issues.

Importance of Software Testing -
- Prevents Bugs in Production: Detecting bugs early reduces the risk of encountering them in the production environment.
- Cost-Effective: Fixing issues during development is less expensive than after release.
- Improves Product Quality: Testing ensures that the product meets both functional and non-functional requirements.
- Builds Customer Trust: A well-tested product is more reliable, which increases customer satisfaction and trust.

Types of Software Testing -
1. Manual Testing :
- Definition: In manual testing, test cases are executed manually by a tester without using any automation tools. The tester follows a set of predefined test cases, interacts with the software, and verifies whether it behaves as expected.
- Purpose: Ensure that the software works correctly from an end-user perspective.
- When to Use: When test cases require human intuition, creativity, and exploratory checks.
2. Functional Testing :
- Definition: Functional testing involves validating the software system against the functional requirements or specifications. The goal is to verify that each function of the software operates in conformance with the requirement.
- Purpose: Ensures that the system provides the required functionality.
- Examples: Input field validation, navigation, calculations, etc.
3. Non-Functional Testing :
- Definition: Non-functional testing focuses on the performance, usability, reliability, and other non-functional aspects of the system, rather than specific behaviors or features.
- Purpose: Ensure the software performs under load, stress, and is usable.
- Examples: Performance testing, scalability, security testing, and load testing.
4. Regression Testing :
- Definition: Regression testing involves re-running test cases on previously tested functionality after code changes (like bug fixes or feature enhancements) to ensure no new bugs were introduced.
- Purpose: Verify that the existing functionalities still work after modifications.
- When to Use: After bug fixes, updates, or code integration.
5. Smoke Testing :
- Definition: Smoke testing is a type of preliminary testing to check the basic functionality of a build. It ensures that the critical paths of the application are working and that the build is stable enough for further testing.
- Purpose: Quickly verify that the major functions work.
- When to Use: After receiving a new software build, before starting detailed testing.
6. Sanity Testing :
- Definition: Sanity testing is a subset of regression testing focused on verifying specific functionalities after a bug fix or small code change. It ensures that specific changes or bugs have been fixed without affecting other parts.
- Purpose: Quickly assess the correctness of recent changes.
- When to Use: After minor changes, bug fixes, or patches.
7. System Testing :
- Definition: System testing is the process of testing the entire system as a whole. It involves testing the integrated system to ensure it meets the specified requirements.
- Purpose: Validate the complete and integrated system.
- When to Use: After all modules or components are integrated.
8. User Acceptance Testing (UAT) :
- Definition: UAT is the final phase of testing where real end-users or stakeholders test the software in real-world conditions to verify whether it meets their needs and requirements.
- Purpose: Ensure that the software works in real-world scenarios and meets business needs.
- When to Use: Before deploying the product to production.
9. Positive Testing :
- Definition: Positive testing checks that the system behaves as expected when provided with valid and correct input. This is used to verify that the software functions correctly under normal conditions.
- Purpose: Confirm the system works as expected when given valid inputs.
10. Negative Testing :
- Definition: Negative testing involves testing the software with invalid, incorrect, or unexpected inputs to ensure the system can handle such scenarios gracefully (e.g., proper error handling).
- Purpose: Verify that the software behaves correctly with invalid inputs and prevents crashes or security vulnerabilities.
11. Exploratory Testing :
- Definition: Exploratory testing is a type of testing where the tester actively explores the application, designing and executing tests as they go, rather than following a predefined set of test cases. Testers use their intuition and experience to discover defects.
- Purpose: Find issues that may not be covered by predefined test cases.
- When to Use: In early-stage development or when time is limited for formal testing.
12. Monkey Testing :
- Definition: Monkey testing is an approach where testers input random data into the system in an attempt to cause it to fail and observe how the software behaves under unpredictable inputs.
- Purpose: Test system robustness and stability under random or unexpected conditions.
- When to Use: To check how the software handles random actions and inputs.
13. Ad-hoc Testing :
- Definition: Ad-hoc testing is an informal, unstructured form of testing where testers try to find defects without any planning or documentation. It is usually performed without test cases and focuses on the tester’s knowledge and understanding of the system.
- Purpose: Identify defects that are not found in structured testing.
- When to Use: When there’s limited time, or for quick checks.

### What are Test Cases
A Test Case is a detailed set of conditions or steps used to test a specific aspect of the software system. It includes input conditions, execution steps, and expected results to determine whether a particular feature or function of the software is working as intended.

Components of a Test Case -
- Test Case ID : A unique identifier for the test case.
- Test Case Description : A brief description of what is being tested.
- Preconditions : Any prerequisites or conditions that must be met before executing the test.
- Test Steps : A detailed list of actions to be performed.
- Test Data : Specific inputs to be used in the test.
- Expected Result : The anticipated outcome of the test.
- Actual Result : The actual outcome after executing the test.
- Status : Indicates whether the test case passed or failed.
- Priority : The importance of the test case (high, medium, or low).
- Postconditions : Conditions that should hold true after the test is executed.

### What are Test Case Design Techniques
Test case design techniques are methods used to create effective and efficient test cases that cover various scenarios in software testing. These techniques help in systematically identifying test scenarios that will reveal defects in the software.

- Equivalence Partitioning (EP) : In this technique, input data is divided into equivalence classes or partitions, and a single test case is designed for each partition. If one condition in a partition passes or fails, the others in that partition are assumed to behave similarly.
- Boundary Value Analysis (BVA) : This technique focuses on testing the boundaries or limits of input data ranges, as defects often occur at these boundary points.
- Decision Table Testing : This method is used when a system's behavior depends on multiple conditions or decision combinations. A decision table outlines all possible conditions and the corresponding actions.
- State Transition Testing : This technique is used to test systems that have a finite number of states and transition from one state to another based on specific inputs. Each state and transition is tested.
- Use Case Testing : Test cases are designed based on use cases, which describe how users interact with the system to achieve specific goals. Each use case covers a user scenario.
- Statement Coverage : Test cases are designed to ensure that every statement in the code is executed at least once.
- Branch Coverage : Ensures that every decision point (i.e., every branch of an if-else statement) is executed at least once.
- Path Coverage : This technique ensures that all possible paths in the code, including loops and conditions, are covered.
- Error Guessing : Based on the tester’s experience, they “guess” which parts of the software may be more prone to errors and design test cases around those areas.
- Exploratory Testing : This involves exploring the software without predefined test cases. The tester simultaneously learns about the system, designs tests, and executes them.



---
