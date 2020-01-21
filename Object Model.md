# Object Model
The principle objects for the overall software design.

# Entity Objects
These are objects are mapped to persistent information tracked by each use case.

## EO-1
**Name:** Message  
**Definition:** Parent class for all message objects  
**Use Cases:** UC-1, UC-2, UC-3, UC-4, UC-5, UC-6  

## EO-2
**Name:** Control Message  
**Definition:** Parent class for all control message objects (M1-1, M1-2, M1-3, M2-1, M2-2, M2-3, M2-5, M2-6, M2-6, M3-1, M3-2, M4-1, M4-2)  
**Use Cases:** UC-1, UC-2, UC-3, UC-4, UC-5, UC-6  

## EO-3
**Name:** Data Message  
**Definition:** Class for data message object (M2-4)  
**Use Cases:** UC-1, UC-2, UC-3, UC-4, UC-5, UC-6  

## EO-4
**Name:** Data  
**Definition:** Class for data to be transmitted. Stores character or data fragment and fragment number.  
**Use Cases:** UC-1, UC-2, UC-3, UC-4, UC-5, UC-6  

## EO-5
**Name:** Data File  
**Definition:** Container class for Data objects. Used for storing, deconstructing files for transmission, and reconstructing transmitted files.  
**Use Cases:** UC-1, UC-2, UC-3, UC-4, UC-5, UC-6  

## EO-6
**Name:** Modem  
**Definition:** Class for storing all connections as well as managing and queueing messages for transmission.  
**Use Cases:** UC-1, UC-2, UC-3, UC-4, UC-5, UC-6  

## EO-7
**Name:**Connection  
**Definition:** Class for connection information and status. Connections between modem and user devices.  
**Use Cases:** UC-1, UC-2, UC-3, UC-4, UC-5, UC-6  

## EO-8
**Name:** Transmission Speed  
**Definition:** Class for storing metrics for determining transmission speeds.  
**Use Cases:** UC-2, UC-3 UC-6

# Boundary Objects
These objects interact with external subsystems (keyboard, FPGA). The create control objects. They initiate use cases.  

## BO-1
**Name:** Keyboard  
**Definition:** Class for reading input from external keyboard.  
**Use Cases:** UC-1, UC-5  

## BO-2
**Name:** FPGA  
**Definition:** Class for communicating with FPGA on device.  
**Use Cases:** UC-1, UC-2, UC-3, UC-4, UC-5, UC-6  

## BO-3
**Name:** Display  
**Definition:** Parent class for all displays.  
**Use Cases:** UC-1, UC-2, UC-3, UC-4, UC-5, UC-6  

## BO-4
**Name:** Seven Segment Display  
**Definition:** Class for writing to the 7-segment display.  
**Use Cases:** UC-1, UC-2, UC-3, UC-4, UC-5, UC-6  

## BO-5
**Name:** External Display  
**Definition:** Class for writing to the external display.  
**Use Cases:** UC-2, UC-6  

# Control Objects
These objects dictate control flow. They create entity objects and boundary objects.  

## CO-1
**Name:** Character Transmission Control  
**Definition:**  Responsible for managing control flow for **UC-1**. Created by Keyboard object  (**BO-1**).  
**Use Cases:** UC-1  

## CO-2
**Name:** Speed Transmission Control  
**Definition:** Responsible for managing control flow for **UC-2**. Created by Keyboard object (**BO-1**).  
**Use Cases:** UC-2  

## CO-3
**Name:** Connect Devices Control  
**Definition:** Responsible for managing control flow for **UC-3**. Created by FPGA object (**BO-2**).  
**Use Cases:** UC-3  

## CO-4
**Name:** Disconnect Devices Control  
**Definition:** Responsible for managing control flow for **UC-4**. Created by FPGA object (**BO-2**).  
**Use Cases:** UC-4  

## CO-5
**Name:** Transmitting Characters Control  
**Definition:** Responsible for managing control flow for **UC-5**. Created by Character Transmission Control object (**CO-1**).  
**Use Cases:** UC-5  

## CO-6
**Name:** Transmitting Data Control  
**Definition:** Responsible for managing control flow for **UC-6**. Created by Speed Transmission Control object (**CO-2**).  
**Use Cases:** UC-6  