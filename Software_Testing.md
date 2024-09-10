# SOFTWARE TESTING

---

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
Assigned: The defect is assigned to a developer or a team responsible for analyzing and fixing it. At this point, the status changes to Assigned.
Open: The developer starts working on the defect to understand its nature and identify the cause. The status changes to Open.
Deferred: Sometimes, the defect may be valid but is not critical to fix immediately. In such cases, the defect can be deferred to a future release or version. The status is changed to Deferred.
Rejected: If the developer or the team finds that the defect is not valid or reproducible, or it is due to misunderstanding, they may reject the defect, changing the status to Rejected.
Duplicate: If the defect is found to be a duplicate of another bug already reported, the status is marked as Duplicate.
In Progress: Once the developer starts working on fixing the defect, the status is updated to In Progress. This indicates that the resolution process has begun.
Fixed: After the developer has made the necessary changes to resolve the issue, the status is changed to Fixed. At this point, the defect is resolved, but it hasn’t been tested yet.
Pending Retest: Once the fix is deployed, the status is updated to Pending Retest, meaning it is awaiting retesting by the testing team to confirm the fix.
Retest: The tester now retests the bug to verify if the issue has been fixed. If the defect is no longer present, they move it to the next stage.
Verified: If the tester confirms that the defect has been successfully fixed and no longer exists, the status is changed to Verified.
Reopen: If the defect is still present after the fix, the tester reopens the bug, assigning it a Reopen status. The bug will go through the cycle again until it's resolved.
Closed: If the tester verifies that the defect has been fixed and it is functioning as expected, the status is changed to Closed. This means the bug has been successfully resolved and no further action is needed.












---
