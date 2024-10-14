# OPERATING SYSTEM

---

- **Name : Akash Negi**
- **Course : MCA (Master of Computer Applications)**
- **College : Graphic Era Hill University , Dehradun**
- **Session : 2022 - 2024**

---

### What is Operating System
An Operating System is a system software that manages computer hardware and software resources, and provides common services for computer programs. An operating system acts as an interface between the software and different parts of the computer or the computer hardware.

### What is the Main Goal of OS
The main purpose of an OS is to execute user programs and make it easier for users to understand and interact with computers as well as run applications.

### What is the Importance of OS
The operating system is crucial as it manages computer hardware and software resources, and provides a platform for applications to run, ensuring efficient and secure operation of a computer system.

### What is the Functions of OS
- **Process Management** : The OS manages processes, which are programs in execution. It allocates system resources, such as CPU time, memory, and input/output devices, to different processes, ensuring efficient multitasking.
- **Memory Management** : The OS is responsible for managing the computer’s memory. It allocates memory to processes, ensuring that each process has sufficient memory to run. It also handles memory deallocation when processes are completed or terminated.
- **File System Management** : The OS provides a file system that organizes and manages files on storage devices. It allows users to create, read, write, and delete files, ensuring data integrity and security.
- **Device Management** : The OS controls and manages input/output devices, such as keyboards, mice, printers, and disk drives. It provides an interface for applications to interact with these devices, ensuring proper device utilization and coordination.
- **User Interface** : The OS provides a user-friendly interface that allows users to interact with the computer system. It can be a command-line interface (CLI) or a graphical user interface (GUI), enabling users to execute commands, launch applications, and perform various tasks.

### Explain Types of OS
- **Batch Operating System** - Batch operating system does not interact with the computer directly. There is an operator which takes similar jobs having the same requirements and groups them into batches. It is the responsibility of the operator to sort jobs with similar needs. Batch Operating System is designed to manage and execute a large number of jobs efficiently by processing them in groups.
Example - Payroll Systems, Bank Statements.
- **Multi-Programming System** - Multiprogramming Operating Systems can be simply illustrated as more than one program is present in the main memory and any one of them can be kept in execution. This is basically used for better execution of resources.
Example - : Windows O/S, UNIX O/S.
- **Multi-Processing System** - Multi-Processing Operating System is a type of Operating System in which more than one CPU is used for the execution of resources. It betters the throughput of the System.
Example - 
- **Multi-Tasking Operating System** - Multitasking Operating System is simply a multiprogramming Operating System with having facility of a Round-Robin Scheduling Algorithm. It can run multiple programs simultaneously.
Example - 
- **Time-Sharing Operating System** - Each task is given some time to execute so that all the tasks work smoothly. Each user gets the time of the CPU as they use a single system. These systems are also known as Multitasking Systems. The task can be from a single user or different users also. The time that each task gets to execute is called quantum. After this time interval is over OS switches over to the next task. 
Example -  Multics.
- **Distributed Operating System** - These types of operating system is a recent advancement in the world of computer technology and are being widely accepted all over the world and, that too, at a great pace. Various autonomous interconnected computers communicate with each other using a shared communication network. Independent systems possess their own memory unit and CPU. These are referred to as loosely coupled systems or distributed systems. These systems’ processors differ in size and function. The major benefit of working with these types of the operating system is that it is always possible that one user can access the files or software which are not actually present on his system but some other system connected within this network i.e., remote access is enabled within the devices connected in that network. 
Example - LOCUS.
- **Network Operating System** - These systems run on a server and provide the capability to manage data, users, groups, security, applications, and other networking functions. These types of operating systems allow shared access to files, printers, security, applications, and other networking functions over a small private network. One more important aspect of Network Operating Systems is that all the users are well aware of the underlying configuration, of all other users within the network, their individual connections, etc. and that’s why these computers are popularly known as tightly coupled systems.
Example - Microsoft Windows Server 2003, Microsoft Windows Server 2008, UNIX, Linux, Mac OS X, Novell NetWare, BSD.
- **Real-Time Operating System** - These types of OSs serve real-time systems. The time interval required to process and respond to inputs is very small. This time interval is called response time. Real-time systems are used when there are time requirements that are very strict like missile systems, air traffic control systems, robots, etc. 

Types of Real-Time Operating Systems - 
- Hard Real-Time Systems : Hard Real-Time OSs are meant for applications where time constraints are very strict and even the shortest possible delay is not acceptable. These systems are built for saving life like automatic parachutes or airbags which are required to be readily available in case of an accident. Virtual memory is rarely found in these systems.
- Soft Real-Time Systems : These OSs are for applications where time-constraint is less strict.
Example - Scientific experiments, medical imaging systems, industrial control systems, weapon systems, robots, air traffic control systems.

### Explain MultiProcessing v/s MultiTasking
| MultiTasking | MultiProcessing |
| ------------ | --------------- |
| The execution of more than one task simultaneously is known as multitasking. | The availability of more than one processor per system, that can execute several set of instructions in parallel is known as multiprocessing. |
| The number of CPU is one. | The number of CPUs is more than one. |
| It takes moderate amount of time. | It takes less time for job processing. |
| In this, one by one job is being executed at a time. | In this, more than one process can be executed at a time. |
| It is economical. | It is less economical. |
| The number of users is more than one. | The number of users is can be one or more than one. |
| Throughput is moderate. | Throughput is maximum. |
| Its efficiency is moderate. | Its efficiency is maximum. |
| It is of two types: Single user multitasking and Multiple user multitasking. | It is of two types: Symmetric Multiprocessing and Asymmetric Multiprocessing.  |

### What is Intension (Schema)
Intension refers to the structure or schema of the database. It describes the set of attributes (columns) and relationships that define the database's design, but not the actual data stored in it.
Example : A table definition, such as the definition of a table "Employees" with attributes like EmployeeID, Name, Age, and Salary, is part of the intension.

### What is Extension (Instance)
Extension refers to the actual data or set of tuples (rows) present in a database table at a given point in time. It is the collection of records in the table that conforms to the schema (intension).
Example : The actual rows (data) in the "Employees" table, such as specific employee details, make up the extension.

### What is GUI
GUI (Graphical User Interface) is basically a type of user interface that allows users to use graphics to interact with OS. GUI is created because it is more user-friendly, less complex, and easier to understand rather than a command-line interface. Its main goal is to increase efficiency and ease of use. 

### What is RAID
RAID (Redundant Array of Independent Disks) is a way of storing the same data in different places on multiple hard disks or solid-state drives (SSDs) to protect data in the case of a drive failure. 

RAID Levels - 
- RAID 0 - Non-redundant striping: This level is used to increase the performance of the server.
- RAID 1 - Mirroring and duplexing: This level is also known as disk mirroring and is considered the simplest way to implement fault tolerance.
- RAID 2 - Memory-style error-correcting codes: This level generally uses dedicated hamming code parity I.e., a liner form of error correction code.
- RAID 3 - Bit-interleaved Parity: This level requires a dedicated parity drive to store parity information.
- RAID 4 - Block-interleaved Parity: This level is similar to RAID 5 but the only difference is that this level confines all parity data to a single drive.
- RAID 5 - Block-interleaved distributed Parity: This level provides far better performance than disk mirroring and fault tolerance.
- RAID 6 - P+Q Redundancy: This level generally provides fault tolerance for two drive failures.

### What is Spooling
Spooling (Simultaneous Peripheral Operations On-Line) in operating systems is a technique used to manage data by temporarily storing it in a buffer (usually on a disk) to be processed and sent to a peripheral device (such as a printer) at a more suitable pace.

### What is Bootstrap Program
A program that initializes OS during startup i.e., first code that is executed whenever computer system startups. OS is loaded through a bootstrapping process or program commonly known as booting. Overall OS only depends on the bootstrap program to perform and work correctly. It is fully stored in boot blocks at a fixed location on the disk. It also locates the kernel and loads it into the main memory after which the program starts its execution.

### What is Overlays
Overlays is basically a programming method that divides processes into pieces so that instructions that are important and need can be saved in memory. It does not need any type of support from the OS. It can run programs that are bigger in size than physical memory by only keeping only important data and instructions that can be needed at any given time.

### What is Process
The process is basically a program that is currently under execution. When a program is loaded into the memory and it becomes a process.

States of Process - 
- **New State** : In this state, a process is just created.
- **Running** : In this state, the CPU starts working on the process’s instructions.
- **Waiting** : In this state, the process cannot run because it just waits for some event to occur.
- **Ready** : In this state, the process has all resources available that are required to run but it waits to get assigned to a processor because CPUs are not working currently on instructions passed by the process.
- **Terminate** : In this state, the process is completed I.e., the process has finished execution.

### What is Zimbie Process
Zombie process, referred to as a defunct process, is basically a process that is terminated or completed but the whole process control block is not cleaned up from the main memory because it still has an entry in the process table to report to its parent process. It does not consume any of the resources and is dead, but it still exists. It also shows that resources are held by process and are not free.

### What is Orphan Process
An orphan process in operating systems is a process that continues to run even after its parent process has finished or terminated.

### What is Thread
A thread in an operating system (OS) is the smallest unit of execution within a process. Threads are sometimes referred to as lightweight processes because they share the same resources as their parent process, such as memory and file handles, but can be scheduled to run independently.

### Explain Process v/s Thread
| Process | Thread |
| ------- | ------ |
| Process means any program is in execution. | Thread means a segment of a process. |
| The process takes more time to terminate. | The thread takes less time to terminate. |
| It takes more time for creation. | It takes less time for creation. |
| It also takes more time for context switching. | It takes less time for context switching. |
| The process is less efficient in terms of communication. | Thread is more efficient in terms of communication. |
| Multiprogramming holds the concepts of multi-process. | We don’t need multi programs in action for multiple threads because a single process consists of multiple threads. |
| The process is isolated. | Threads share memory. |
| The process is called the heavyweight process. | A Thread is lightweight as each thread in a process shares code, data, and resources. |
| Process switching uses an interface in an operating system. | Thread switching does not require calling an operating system and causes an interrupt to the kernel. |
| If one process is blocked, then it will not affect the execution of other processes. | If a user-level thread is blocked, then all other user-level threads are blocked.  |
| The process has its own Process Control Block, Stack, and Address Space. | Thread has Parents’ PCB, its own Thread Control Block, and Stack and common Address space. |
| Changes to the parent process do not affect child processes. | Since all threads of the same process share address space and other resources so any changes to the main thread may affect the behavior of the other threads of the process. |
| A system call is involved in it. | No system call is involved, it is created using APIs. |
| The process does not share data with each other. | Threads share data with each other. |

### What is Kernel
The kernel is the core component of an operating system (OS) that manages system resources and allows communication between hardware and software. It acts as a bridge between applications and the physical hardware of a computer, ensuring efficient and secure operations.

Types of Lernel - 
- **Monolithic Kernel** - It is one of the types of kernel where all operating system services operate in kernel space.
Example - Unix, Linux, Open VMS, XTS-400.
- **Micro Kernel** - It is kernel types which has minimalist approach. It has virtual memory and thread scheduling. It is more stable with less services in kernel space. It puts rest in user space. It is use in small os.
Example - Mach, L4, AmigaOS, Minix, K42.
- **Exo Kernel** - It is the type of kernel which follows end-to-end principle. It has fewest hardware abstractions as possible. It allocates physical resources to applications. 
Example - Nemesis, ExOS.
- **Hybrid Kernel** - It is the combination of both monolithic kernel and microkernel. It has speed and design of monolithic kernel and modularity and stability of microkernel. 
Example - Windows NT, Netware, BeOS.

### Explain Operating System v/s Kernel
| Operating System | Kernel |
| ---------------- | ------ |
| Operating System is a system software. | Kernel is system software which is part of operating system. |
| Operating System provides interface between user and hardware. | Kernel provides interface between applications and hardware. |
| It also provides protection and security. | It’s main purpose is memory management, disk management, process management and task management. |
| An operating system is a complete software package that includes a kernel and other system-level components such as device drivers, system libraries, and utilities. | The kernel, on the other hand, is the core of the operating system that manages system resources, such as the CPU, memory, and I/O devices. |
| The operating system provides a higher-level interface to the user, such as the GUI, command-line interface, and file system. | The kernel provides low-level services, such as memory management, process management, and device management, to other parts of the operating system |
| The operating system is a more complex system that includes a large number of components. | The kernel is a relatively small and simple component of the operating system. |
| The operating system provides a more general-purpose interface that can be used on a wide range of hardware platforms. | The kernel is often customized for specific hardware platforms or applications. |
| The operating system is designed to be portable across different hardware platforms. | The kernel is often platform-specific. |
| All system needs operating system to run. | All operating systems need kernel to run. |
| Type of operating system includes single and multiuser OS, multiprocessor OS, Realtime OS, Distributed OS. | Type of kernel includes Monolithic and Micro kernel. |
| It is the first program to load when computer boots up. | It is the first program to load when operating system loads. |

### Explain Primary Memory v/s Secondary Memory
| Primary Memory | Secondary Memory |
| -------------- | ---------------- |
| Data can be directly accessed by the processing unit. | Firstly, data is transferred to primary memory and after then routed to the processing unit. |
| It can be both volatile and non-volatile in nature. | It is non-volatile in nature. |
| It is more costly than secondary memory. | It is more cost-effective or less costly than primary memory. |
| It is temporary because data is stored temporarily. | It is permanent because datais stored permanently. |
| In this memory, data can be lost whenever there is a power failure. | In this memory, data is stored permanently and therefore cannot be lost even in case of power failure. |
| It is much faster than secondary memory and saves data that is currently used by the computer. | It is slower as compared to primary memory and saves different kinds of data in different formats. |
| It can be accessed by data. | It can be accessed by I/O channels. |

### What is Context Switching 
Context switching is the process of storing the state of a currently running process or thread so that it can be restored and execution can be resumed from the same point later. This allows the operating system to switch between processes or threads to achieve multitasking and efficient CPU utilization.

### Explain CPU Scheduling Algorithms
CPU scheduling algorithms are techniques used by operating systems to allocate the CPU to various processes in the system. The primary goal of these algorithms is to optimize CPU utilization, maximize throughput, minimize waiting time, and ensure fair allocation of CPU resources to all processes.

### What is IPC
IPC (Interprocess Communication) is a mechanism that requires the use of resources like a memory that is shared between processes or threads. With IPC, OS allows different processes to communicate with each other. It is simply used for exchanging data between multiple threads in one or more programs or processes. In this mechanism, different processes can communicate with each other with the approval of the OS.
Different IPC Mechanisms - Pipes, Message Queuing, Semaphores, Socket, Shared Memory, Signals

### What is Pipe
The pipe is a connection among two or more processes that are interrelated to each other. It is a mechanism that is used for inter-process communication using message passing.  One can easily send information such as the output of one program process to another program process using a pipe. It can be used when two processes want to communicate one-way i.e., inter-process communication (IPC).

### What is Sockets
The socket is referred to as an endpoint for IPC (Interprocess Communication). Here, the endpoint is referred to as a combination of an IP address and port number. Sockets are used to make it easy for software developers to create network-enabled programs. It also allows communication or exchange of information between two different processes on the same or different machines. It is mostly used in client-server-based systems.

### What is Virtual Memory
It is a memory management technique feature of OS that creates the illusion to users of a very large (main) memory. It is simply space where a greater number of programs can be stored by themselves in the form of pages. It enables us to increase the use of physical memory by using a disk and also allows us to have memory protection. It can be managed in two common ways by OS i.e., paging and segmentation. It acts as temporary storage that can be used along with RAM for computer processes.

### What is Demand Paging
Demand paging is a method that loads pages into memory on demand. This method is mostly used in virtual memory. In this, a page is only brought into memory when a location on that particular page is referenced during execution.

### What is Fragmentation
Fragmentation is an unwanted problem in the operating system in which the processes are loaded and unloaded from memory, and free memory space is fragmented. Processes can't be assigned to memory blocks due to their small size, and the memory blocks stay unused.

### What is Segmentation
It is generally a memory management technique that divides processes into modules and parts of different sizes. These parts and modules are known as segments that can be allocated to process.

### What is Paging
It is a memory management technique that allows OS to retrieve processes from secondary storage into main memory. It is a non-contiguous allocation technique that divides each process in the form of pages.

### What is Thrashing
It is a situation where the CPU performs less productive work and more swapping or paging work. It spends more time swapping or paging activities rather than its execution.

### What is Starvation
It is a problem that usually occurs when a process has not been able to get the required resources it needs for progress with its execution for a long period of time. In this condition, low priority processes get blocked and only high priority processes proceed towards completion because of which low priority processes suffer from lack of resources.

### What is Aging
It is a technique that is used to overcome the situation or problem of starvation. It simply increases the priority of processes that wait in the system for resources for a long period of time.

### What is Deadlock
A deadlock is a situation where a set of processes is blocked because each process is holding a resource and waiting for another resource acquired by some other process.

Necessary Conditions for Deadlock - 
- **Mutual Exclusion** : Two or more resources are non-shareable (Only one process can use at a time).
- **Hold and Wait** : A process is holding at least one resource and waiting for resources. 
- **No Preemption** : A resource cannot be taken from a process unless the process releases the resource. 
- **Circular Wait** : A set of processes waiting for each other in circular form.

### What is Deadlock Detection
Deadlock detection in an operating system refers to the process of identifying situations where two or more processes are unable to proceed because each one is waiting for a resource held by another process, leading to a state where none of the processes can execute further. Deadlock detection is one of the strategies used to handle deadlocks, alongside prevention and avoidance.

**Deadlock Detection Algorithm** : For deadlock detection, the operating system may use the resource allocation graph or the wait-for graph.
- Resource Allocation Graph (RAG) : It is a directed graph where nodes represent processes and resources. Edges show resource requests and assignments between processes and resources. If a circular wait is found in this graph, it indicates a deadlock.
- Wait-for Graph : This is a simpler graph derived from the RAG, where only processes are represented as nodes. An edge from process P1 to process P2 means that P1 is waiting for a resource currently held by P2. A cycle in the wait-for graph indicates a deadlock.
- Banker’s Algorithm (for multi-resource systems) : Similar to the deadlock avoidance algorithm, the system can run the Banker's Algorithm periodically to detect unsafe states and identify potential deadlocks.

### What is Deadlock Prevention
To prevent deadlock, the operating system must ensure that at least one of the above four conditions cannot hold. 
- Mutual Exclusion : Make some resources sharable where possible.
- Hold and Wait : Ensure processes request all required resources upfront or release held resources before making new requests.
- No Preemption : Preempt resources if necessary to avoid deadlock.
- Circular Wait : Impose a strict order in which processes can request resources.

### What is Semaphore
Semaphores are just normal variables used to coordinate the activities of multiple processes in a computer system. They are used to enforce mutual exclusion, avoid race conditions, and implement synchronization between processes. Semaphore is a signaling mechanism. It only holds one positive integer value. It is simply used to solve the problem or issue of critical sections in the synchronization process by using two atomic operations i.e., wait() and signal().

Types of Semaphore - 
- **Binary Semaphore** – This is also known as a mutex lock. It can have only two values – 0 and 1. Its value is initialized to 1. It is used to implement the solution of critical section problems with multiple processes.
- **Counting Semaphore** – Its value can range over an unrestricted domain. It is used to control access to a resource that has multiple instances.

### What is Process Synchronization
Process synchronization is a mechanism to ensure that two or more concurrent processes (or threads) do not simultaneously execute some particular program segment known as the critical section. The critical section is a part of a program that accesses shared resources, like data structures or devices, which must not be concurrently accessed by more than one process.

---
