# COMPUTER NETWORKS

---

- **Name : Akash Negi**
- **Course : MCA (Master of Computer Applications)**
- **College : Graphic Era Hill University , Dehradun**
- **Session : 2022 - 2024**

---

### What is a Network
A network is a collection of devices connected to each other with a physical media link to allow the sharing of data.Example of a network is an internet. An internet connects the millions of people across the world.

Types of Network - 
- **PAN (Personal Area Network)** - Let devices connect and communicate over the range of a person like connecting Bluetooth devices.
- **LAN (Local Area Network)** - It is a privately owned network that operates within and nearby a single building like a home, office, factory.
- **MAN (Metropolitan Area Network)** - It connects and covers the whole city like TV Cable connection over the city.
- **WAN (Wide Area Network)** - It spans a large geographical area, often a country or continent. The Internet is the largest WAN.
- **GAN (Global Area Network)** - It is also known as the Internet which connects the globe using satellites. The Internet is also called the Network of WANs.

### What is Network Topology
Network topology refers to the arrangement of different elements like nodes, links, and devices in a computer network. It defines how these components are connected and interact with each other.

Types of Network Topology - 
- **Bus Topology** - All the nodes are connected using the central link known as the bus. It is useful to connect a smaller number of devices. If the main cable gets damaged, it will damage the whole network.
- **Ring Topology** - Each node is connected to exactly two nodes forming a ring structure. If one of the nodes are damaged, it will damage the whole network. It is used very rarely as it is expensive and hard to install and manage.
- **Star Topology** - All the nodes are connected to one single node known as the central node. It is more robust. If the central node fails the complete network is damaged. Easy to troubleshoot. Mainly used in home and office networks.
- **Mesh Topology** - Each node is connected to one or many nodes. It is robust as failure in one link only disconnects that node. It is rarely used and installation and management are difficult.
- **Tree Topology** - A combination of star and bus topology also know as an extended bus topology. All the smaller star networks are connected to a single bus. If the main bus fails, the whole network is damaged.
- **Hybrid Topology** - It is a combination of different topologies to form a new topology. It helps to ignore the drawback of a particular topology and helps to pick the strengths from other.

### What are Nodes and Links
- **Nodes** - Any communicating device that can send/receive data and information within a network is called a Node.
Example - computers, laptops, printers, servers, modems.
- **Links** - A link or edge refers to the connectivity between two nodes in the network. It includes the type of connectivity (wired or wireless) between the nodes and protocols used for one node to be able to communicate with the other.

### What is Bandwidth
Bandwidth, or precisely network bandwidth, is the maximum rate at which data transfer occurs across any particular path of the network. Bandwidth is basically a measure of the amount of data that can be sent and received at any instance of time. That simply means that the higher the bandwidth of a network, the larger the amount of data the network can be sending to and from across its path.

### Explain Hub v/s Switch
- **Hub** - Hub is a networking devices which is used to transmit the signal to each port (except one port) to respond from which the signal was received. Hub is operated on Physical layer. In this packet filtering is not available. It is of two types: Active Hub, Passive Hub. 

- **Switch** - Switch is a network device which is used to enable the connection establishment and connection termination on the basis of need. Switch is operated on Data link layer. In this packet filtering is available. It is type of full duplex transmission mode and it is also called efficient bridge. 

| Hub | Switch |
| --- | ------ |
| Hub is operated on Physical layer of OSI model. | While switch is operated on Data link layer of OSI Model. |
| Hub is a broadcast type transmission. | While switch is a Unicast, multicast and broadcast type transmission. |
| Hub have 4/12 ports. | While switch can have 24 to 48 ports. |
| In hub, there is only one collision domain. | While in switch, different ports have own collision domain. |
| Hub is a half duplex transmission mode. | While switch is a full duplex transmission mode. |
| In hub, Packet filtering is not provided. | While in switch, Packet filtering is provided. |
| Hub cannot be used as a repeater. | While switch can be used as a repeater. |
| Hub is not an intelligent device that sends message to all ports hence it is comparatively inexpensive. | While switch is an intelligent device that sends message to selected destination so it is expensive. |
| Hub is simply old type of device and is not generally used. | While switch is very sophisticated device and widely used. |
| Hacking of systems attached to hub is complex. | Hacking of systems attached to switch is little easy. |
| Speed of original hub 10Mbps and modern internet hub is 100Mbps. | Maximum speed is 10Mbps to 100Mbps. |
| Hubs are used in LANs. | Switch is used in LANs. |
| Cheaper as compared to switch. | Expensive as compared to HUB. |

### Explain Router v/s Gateway
- **Router** - A router is basically a device or a hardware which is responsible for receiving, analyzing and forwarding the data packets to other networks. A router actually determines the destination or the target IP address of the packet and thus the best way for transferring the packet is determined by the help of forwarding tables and headers. 

- **Gateway** - A gateway is basically a device or a hardware which acts like a “gate” among the networks.Thus it can also be defined as a node which acts as an entrance for the other nodes in the network.It is also responsible for enabling the traffic flow within the network.Gateway uses more than one protocol for communication thus its activities are much more complex than a switch or a router. 

| Router | Gateway |
| ------ | ------- |
| It is a hardware device which is responsible for receiving, analyzing and forwarding the data packets to other networks. | It is a device that is used for the communication among the networks which have a different set of protocols. |
| It supports the dynamic routing. | It does not support dynamic routing. |
| The main function of a router is routing the traffic from one network to the other. | The main function of a gateway is to translate one protocol to the other. |
| A router operates on layer 3 and layer 4 of the OSI model. | A gateway operates upto layer 5 of the OSI model. |
| Working principle of a router is to install routing details for multiple networks and routing traffic based upon the destination address. | Working principle of a gateway is to differentiate what is inside the network and what is outside the network. |
| It is hosted on only the dedicated applications. | It is hosted on dedicated applications, physical servers or virtual applications. |
| The additional features provided by a router are Wireless networking, Static routing, NAT, DHCP server etc. | The additional features provided by a gateway are network access control, protocol conversion etc. |

### What does Ping Command do
A ping is a basic Internet command that allows a user to test and verify whether a given destination IP address exists and can accept requests in computer network administration. Ping is also used for diagnosis to confirm that the computer the user tries to reach is operational.

Ping (Packet Internet Groper) is a method for determining communication latency between two networks or ping is a method of determining the time it takes for data to travel between two devices or across a network.

Ping sends an Internet Control Message Protocol (ICMP) Echo Request to a network interface and then waits for a response. When the ping command is executed, a ping signal is delivered to the provided address. When the target host receives the echo request, it answers with an echo reply packet. This method has two distinct purposes: calculating round-trip time (RTT) or latency and ensuring that the target host is available. RTT is a measure of the time it takes to receive a response. Measured in milliseconds (ms), the process begins when a browser submits a request to a server and concludes when the server responds. RTT is an important performance figure for online applications.

### Explain VPN
A virtual private network (VPN) is a technology that creates a safe and encrypted connection over a less secure network, such as the Internet. A Virtual Private Network is a way to extend a private network using a public network such as the Internet. The name only suggests that it is a “Virtual Private Network”, i.e. user can be part of a local network sitting at a remote location. It makes use of tuneling protocols to establish a secure connection.

VPN is a mechanism of employing encryption, authentication, and integrity protection so that we can use a public network as if it is a private network. It offers a high amount of security and allows users to remotely access private networks. In this article, we will cover every point about virtual private networks.

### Explain OSI Reference Model
OSI stands for Open Systems Interconnection. The OSI model, created in 1984 by ISO, is a reference framework that explains the process of transmitting data between computers. It is divided into seven layers that work together to carry out specialised network functions, allowing for a more systematic approach to networking.

When we transfer information from one device to another, it travels through 7 layers of OSI model. First data travels down through 7 layers from the sender’s end and then climbs back 7 layers on the receiver’s end.

Data flows through the OSI model in a step-by-step process:
- **Application Layer** : Applications create the data.
- **Presentation Layer** : Data is formatted and encrypted.
- **Session Layer** : Connections are established and managed.
- **Transport Layer** : Data is broken into segments for reliable delivery.
- **Network Layer** : Segments are packaged into packets and routed.
- **Data Link Layer** : Packets are framed and sent to the next device.
- **Physical Layer** : Frames are converted into bits and transmitted physically.

### TCP/IP Reference Model
The TCP/IP model is a fundamental framework for computer networking. It stands for Transmission Control Protocol/Internet Protocol, which are the core protocols of the Internet. This model defines how data is transmitted over networks, ensuring reliable communication between devices. It consists of four layers: the Link Layer, the Internet Layer, the Transport Layer, and the Application Layer. Each layer has specific functions that help manage different aspects of network communication, making it essential for understanding and working with modern networks.

TCP/IP was designed and developed by the Department of Defense (DoD) in the 1960s and is based on standard protocols. The TCP/IP model is a concise version of the OSI model. It contains four layers, unlike the seven layers in the OSI model.

Layers of TCP/IP Model
- **Application Layer** - It contains all the higher-level protocols.
- **Transport Layer(TCP/UDP)** - Its functionality is almost the same as the OSI transport layer. It enables peer entities on the network to carry on a conversation.
- **Network/Internet Layer(IP)** - The internet layer is the most important layer which holds the whole architecture together. It delivers the IP packets where they are supposed to be delivered.
- **Network Access Layer** - Decides which links such as serial lines or classic Ethernet must be used to meet the needs of the connectionless internet layer.

### Explain OSI Reference Model v/s TCP/IP Reference Model
The OSI (Open Systems Interconnection) model and the TCP/IP (Transmission Control Protocol/Internet Protocol) model are both conceptual frameworks used to describe how different network protocols interact to provide communication between computers over a network. However, they differ in their structure, origin, and purpose. Here’s a comparison of the two models:

**OSI Model**
The OSI model was developed by the International Organization for Standardization (ISO) and is a theoretical framework that describes networking systems in seven distinct layers.

7 Layers of the OSI Model:
Physical Layer: Deals with the transmission of raw data bits over a physical medium (e.g., cables, wireless).
Data Link Layer: Responsible for node-to-node data transfer, error detection, and handling (e.g., Ethernet, MAC addresses).
Network Layer: Manages the routing and forwarding of data packets across networks (e.g., IP, routers).
Transport Layer: Ensures reliable data transfer between two hosts (e.g., TCP, UDP).
Session Layer: Manages sessions and controls dialogues between computers (e.g., managing a session in a video call).
Presentation Layer: Translates data between the application layer and the network, handling data encryption, decryption, compression, etc.
Application Layer: Provides network services directly to end-user applications (e.g., HTTP, FTP, DNS).

**TCP/IP Model**
The TCP/IP model was developed by the Department of Defense (DoD) to enable communication across different types of networks. Unlike the OSI model, the TCP/IP model is based on protocols that are widely used on the Internet. It has fewer layers (4 instead of 7).

4 Layers of the TCP/IP Model:
Link Layer (Network Interface): Corresponds to the physical and data link layers of the OSI model, handling data transmission across the network (e.g., Ethernet, Wi-Fi).
Internet Layer: Handles logical addressing and routing of data packets across networks (e.g., IP).
Transport Layer: Ensures end-to-end communication and data flow control between hosts (e.g., TCP, UDP).
Application Layer: Combines the functions of the OSI’s session, presentation, and application layers, providing services such as file transfers, email, and network management (e.g., HTTP, FTP, DNS).

| TCP/IP | OSI |
| ------ | --- |
| TCP refers to Transmission Control Protocol. | OSI refers to Open Systems Interconnection. |
| TCP/IP uses both the session and presentation layer in the application layer itself. | OSI uses different session and presentation layers. |
| TCP/IP follows connectionless a horizontal approach. | OSI follows a vertical approach. |
| The Transport layer in TCP/IP does not provide assurance delivery of packets. | In the OSI model, the transport layer provides assurance delivery of packets. |
| Protocols cannot be replaced easily in TCP/IP model. | 	While in the OSI model, Protocols are better covered and are easy to replace with the technology change. |
| TCP/IP model network layer only provides connectionless (IP) services. The transport layer (TCP) provides connections. | Connectionless and connection-oriented services are provided by the network layer in the OSI model. |

### What is MAC Address
To communicate or transfer data from one computer to another, we need an address. In computer networks, various types of addresses are introduced; each works at a different layer. MAC Addresses are unique 48-bit hardware numbers of a computer that are embedded into a network card (known as a Network Interface Card) during manufacturing. The MAC Address is also known as the Physical Address of a network device.

### What is IP Address
All the computers of the world on the Internet network communicate with each other with underground or underwater cables or wirelessly. If I want to download a file from the internet or load a web page or literally do anything related to the internet, my computer must have an address so that other computers can find and locate mine in order to deliver that particular file or webpage that I am requesting. In technical terms, that address is called IP Address or Internet Protocol Address.

Types of IP Address - 
- **IPv4** - Internet Protocol version 4. It consists of 4 numbers separated by the dots. Each number can be from 0-255 in decimal numbers. But computers do not understand decimal numbers, they instead change them to binary numbers which are only 0 and 1. Therefore, in binary, this (0-255) range can be written as (00000000 – 11111111). Since each number N can be represented by a group of 8-digit binary digits. So, a whole IPv4 binary address can be represented by 32-bits of binary digits. In IPv4, a unique sequence of bits is assigned to a computer, so a total of (2^32) devices approximately = 4,294,967,296 can be assigned with IPv4. 
- **IPv6** - With IPv4, we can connect only the above number of 4 billion devices uniquely, and apparently, there are much more devices in the world to be connected to the internet. So, gradually we are making our way to IPv6 Address which is a 128-bit IP address. In human-friendly form, IPv6 is written as a group of 8 hexadecimal numbers separated with colons(:). But in the computer-friendly form, it can be written as 128 bits of 0s and 1s. Since, a unique sequence of binary digits is given to computers, smartphones, and other devices to be connected to the internet. So, via IPv6 a total of (2^128) devices can be assigned with unique addresses which are actually more than enough for upcoming future generations.

### What is Public IP Address and Private IP Address
- **Public IP Address** - This address is available publicly and it is assigned by your network provider to your router.
- **Private IP Address** - This is an internal address of your device which are not routed to the internet and no exchange of data can take place between a private address and the internet.

### Explain IPv4 v/s IPv6
| IPv4 | IPv6 |
| ---- | ---- |
| IPv4 has a 32-bit address length | IPv6 has a 128-bit address length |
| It Supports Manual and DHCP address configuration | It supports Auto and renumbering address configuration |
| In IPv4 end to end, connection integrity is Unachievable | In IPv6 end-to-end, connection integrity is Achievable |
| It can generate 4.29×10^9 address space | The address space of IPv6 is quite large it can produce 3.4×10^38 address space |
| The Security feature is dependent on the application | IPSEC is an inbuilt security feature in the IPv6 protocol |
| Address representation of IPv4 is in decimal | Address representation of IPv6 is in hexadecimal |
| Fragmentation performed by Sender and forwarding routers | In IPv6 fragmentation is performed only by the sender |
| In IPv4 Packet flow identification is not available | In IPv6 packet flow identification are Available and uses the flow label field in the header |
| In IPv4 checksum field is available | In IPv6 checksum field is not available |
| It has a broadcast Message Transmission Scheme | In IPv6 multicast and anycast message transmission scheme is available |
| In IPv4 Encryption and Authentication facility not provided | In IPv6 Encryption and Authentication are provided  |
| IPv4 has a header of 20-60 bytes. | IPv6 has a header of 40 bytes fixed  |
| IPv4 can be converted to IPv6 | Not all IPv6 can be converted to IPv4 |
| IPv4 consists of 4 fields which are separated by addresses dot (.) | IPv6 consists of 8 fields, which are separated by a colon (:) |
| IPv4’s  IP addresses are divided into five different classes. Class A , Class B, Class C, Class D , Class E. | IPv6 does not have any classes of the IP address. |
| IPv4 supports VLSM(Variable Length subnet mask). | IPv6 does not support VLSM. |
| Example of IPv4:  66.94.29.13 | Example of IPv6: 2001:0000:3238:DFE1:0063:0000:0000:FEFB |

### What is APIPA
APIPA (Automatic Private IP Addressing) is a networking functionality that enables computers to automatically assign themselves an IP address when they are unable to acquire one from a DHCP server.

### What is HTTP and HTTPS
**HTTP** - HTTP is the HyperText Transfer Protocol which defines the set of rules and standards on how the information can be transmitted on the World Wide Web (WWW).  It helps the web browsers and web servers for communication. It is a ‘stateless protocol’ where each command is independent with respect to the previous command. HTTP is an application layer protocol built upon the TCP. It uses port 80 by default.
**HTTPS** - HTTPS is the HyperText Transfer Protocol Secure or Secure HTTP. It is an advanced and secured version of HTTP. On top of HTTP, SSL/TLS protocol is used to provide security. It enables secure transactions by encrypting the communication and also helps identify network servers securely. It uses port 443 by default.

### What is SMTP
SMTP is the Simple Mail Transfer Protocol. SMTP sets the rule for communication between servers. This set of rules helps the software to transmit emails over the internet. It supports both End-to-End and Store-and-Forward methods. It is in always-listening mode on port 25.

### What is DNS
DNS is the Domain Name System. It is considered as the devices/services directory of the Internet. It is a decentralized and hierarchical naming system for devices/services connected to the Internet. It translates the domain names to their corresponding IPs.
Example - interviewbit.com to 172.217.166.36. It uses port 53 by default. 

### What is NIC
NIC stands for Network Interface Card. It can be clarified as the programmable card that changes over the address to electrical signals through the cables to the web and vice versa like ethernet, and for remote, it changes over the bits to radio signals and vice versa like Wi-fi.

### What is FTP
FTP is a File Transfer Protocol. It is an application layer protocol used to transfer files and data reliably and efficiently between hosts. It can also be used to download files from remote servers to your computer. It uses port 27 by default.

### What is TCP
TCP or TCP/IP is the Transmission Control Protocol/Internet Protocol. It is a set of rules that decides how a computer connects to the Internet and how to transmit the data over the network. It creates a virtual network when more than one computer is connected to the network and uses the three ways handshake model to establish the connection which makes it more reliable.

### What is UDP
TCP or TCP/IP is the Transmission Control Protocol/Internet Protocol. It is a set of rules that decides how a computer connects to the Internet and how to transmit the data over the network. It creates a virtual network when more than one computer is connected to the network and uses the three ways handshake model to establish the connection which makes it more reliable.

### Explain TCP/IP vs UDP
| TCP/IP | UDP |
| ------ | --- |
| Connection-Oriented Protocol | Connectionless Protocol |
| More Reliable | Less Reliable |
| Slower Transmission | Faster Transmission |
| Packets order can be preserved or can be rearranged | Packets order is not fixed and packets are independent of each other. |
| Uses three ways handshake model for connection. | No handshake for establishing the connection. |
| CP packets are heavyweight. | UDP packets are light-weight. |
| Offers error checking mechanism. | No error checking mechanism. |
| Protocols like HTTP, FTP, Telnet, SMTP, HTTPS, etc use TCP at the transport layer. | Protocols like DNS, RIP, SNMP, RTP, BOOTP, TFTP, NIP, etc use UDP at the transport layer. |

### What is Subnet
A subnet is a network inside a network achieved by the process called subnetting which helps divide a network into subnets. It is used for getting a higher routing efficiency and enhances the security of the network. It reduces the time to extract the host address from the routing table.

### What is 3 - Way Handshaking
The TCP 3-Way Handshake is a fundamental process used in the Transmission Control Protocol (TCP) to establish a reliable connection between a client and a server before data transmission begins. This handshake ensures that both parties are synchronized and ready for communication.

It involves 3 steps - 
- Step 1 - **(SYN)** : In the first step, the client wants to establish a connection with a server, so it sends a segment with SYN(Synchronize Sequence Number) which informs the server that the client is likely to start communication and with what sequence number it starts segments with
- Step 2 - **(SYN + ACK)** : Server responds to the client request with SYN-ACK signal bits set. Acknowledgement(ACK) signifies the response of the segment it received and SYN signifies with what sequence number it is likely to start the segments with
- Step 3 - **(ACK)** : In the final part client acknowledges the response of the server and they both establish a reliable connection with which they will start the actual data transfer

### What are Delays
The delays, here, means the time for which the processing of a particular packet takes place.

Types of Delays - 
- **Transmission Delay** - The time taken to transmit a packet from the host to the transmission medium is called Transmission delay. 
- **Propagation delay** - After the packet is transmitted to the transmission medium, it has to go through the medium to reach the destination. Hence the time taken by the last bit of the packet to reach the destination is called propagation delay. 
- **Queueing delay** - Let the packet is received by the destination, the packet will not be processed by the destination immediately. It has to wait in a queue in something called a buffer. So the amount of time it waits in queue before being processed is called queueing delay. 
- **Processing delay** - Now the packet will be taken for the processing which is called processing delay.

### What is Firewall
The firewall is a network security system that is used to monitor the incoming and outgoing traffic and blocks the same based on the firewall security policies. It acts as a wall between the internet (public network) and the networking devices (a private network). It is either a hardware device, software program, or a combination of both. It adds a layer of security to the network.

### What are Unicasting, Anycasting, Multicasting, Broadcasting
- **Unicasting** : If the message is sent to a single node from the source then it is known as unicasting. This is commonly used in networks to establish a new connection.
- **Anycasting** : If the message is sent to any of the nodes from the source then it is known as anycasting. It is mainly used to get the content from any of the servers in the Content Delivery System.
- **Multicasting** : If the message is sent to a subset of nodes from the source then it is known as multicasting. Used to send the same data to multiple receivers.
- **Broadcasting** : If the message is sent to all the nodes in a network from a source then it is known as broadcasting. DHCP and ARP in the local network use broadcasting.

### What happens when enter google.com in the web browser?
- Check the browser cache first if the content is fresh and present in cache display the same.
- If not, the browser checks if the IP of the URL is present in the cache (browser and OS) if not then request the OS to do a DNS lookup using UDP to get the corresponding IP address of the URL from the DNS server to establish a new TCP connection.
- A new TCP connection is set between the browser and the server using three way handshaking.
- An HTTP request is sent to the server using the TCP connection.
- The web servers running on the Servers handle the incoming HTTP request and send the HTTP response.
- The browser process the HTTP response sent by the server and may close the TCP connection or reuse the same for future requests.
- If the response data is cacheable then browsers cache the same.
- Browser decodes the response and renders the content.
 
---
