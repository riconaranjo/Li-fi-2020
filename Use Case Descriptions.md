# Use Case Descriptions
The main use cases for the features we wish to fulfill.

## UC-1
**Name:** Character Transmission  
**Actors:** Initiated by users  
**Flow of Events:**
1. User connects user device to modem device (**includes UC-3**).
2. User transmits keyboard character from modem device to user device (**includes UC-5**) by pressing on keyboard keys.
3. User device displays transmitted characters.

**Entry Conditions:** (none)
**Exit Conditions:**
- Modem device has not received M3-1 for 90 seconds or,
- User device has not received M3-2 response for 90 seconds.
- User sets device to speed transmitting mode.

**Quality Requirements:**
- Feedback to the user indicating that a connection is being created, and whether it was created on both modem and user devices.
- Feedback to the user indicating the transmission mode of the modem device.
- Feedback to the user displaying transmitted characters in real-time.

**Functional Requirements:** 
-  C1, C3, P1, P2, P3, P5

**Messages:** 
-  M1, M2, M3

## UC-2
**Name:** Speed Transmission
**Actors:** Initiated by users
**Flow of Events:** 
1. User connects user device to modem (**includes UC-3**).
2. User transmits large data file from modem device to user device (**includes UC-6**).
3. User device displays final transmission speed.

**Entry Conditions:** (none)
**Exit Conditions:** 
- Modem device has not received message M3-1 for 90 seconds or,
- User device has not received response M3-2 for 90 seconds.
- User sets device to character transmitting mode.

**Quality Requirements:** 
- Feedback to the user indicating that a connection is being created, and whether it was created on both modem and user devices.
- Feedback to the user indicating the transmission mode of the modem device.
- Feedback to the user showing the transmission speed between devices.

**Functional Requirements:** 
-  C1, C3, P1, P2, P4, P5

**Messages:** 
- M1, M2, M3

## UC-3
**Name:** Connect Devices
**Actors:** Initiated by users
**Flow of Events:**
1. User turns on modem device.
2. User turns on user device.
3. User device transmits request to connect (**M1-1**). 
	1. Modem device receives and processes user message (**M1-1**).
	2. Modem device transmits response to initiate or not the connection (**M1-2, M1-3**).
4. User device receives connection request response (**M1-2, M1-3**).
5. User device sends message (**M3-1**) to modem device to indicate connection is still valid, every 30 seconds.
	1. Modem device acknowledges the message (**M3-2**).

**Entry Conditions:**  (none)  
**Exit Conditions:**
- Modem device has not received message M3-1 for 90 seconds or,
- User device has not received response M3-2 for 90 seconds.

**Quality Requirements:**
- Feedback to the user indicating that a connection is being created, and whether it was created on both modem and user devices.

**Functional Requirements:** 
-  C1, C3, C4

**Messages:** 
-  M1-1, M1-2, M1-3

## UC-4
**Name:** Disconnect Devices
**Actors:** Initiated by users
**Flow of Events:**
1. User sets device A (modem or user device) to end connection
2. Device A sends request (**M4-1**) to end connection to device B (user or modem device).
	1. Device B responds with acknowledgement  (**M4-2**) to end connection.

**Entry Conditions:**
- Modem and user devices must already be connected.

**Exit Conditions:**
- Modem device has not received message M3-1 for 90 seconds or,
- User device has not received response M3-2 for 90 seconds.

**Quality Requirements:**
- Feedback to the user on device A indicating that the end connection request is underway, and whether it was successful or not.

**Functional Requirements:**
- C1, C2, C3, C4

**Messages:**
- M4-1, M4-2

## UC-5
**Name:** Transmitting Characters
**Actors:**Initiated by users
**Flow of Events:**
1. User selects character transmitting mode on modem device.
2. While user presses keyboard key.
	1. Modem device will show inputted character in its 7-segment display.
	2. Modem device sends request (**M2-1**) to send a data message.
		1. User device responds with acknowledgement (**M2-2**) or rejection (**M2-3**).
	3. If Modem device receives an acknowledgement message (**M2-2**) then it will send a data message (**M2-4**) with the pressed key character.
		1. User device will respond with either and acknowledgement (**M2-5**) or a request for retransmission (**M2-6**).
		2. If the modem device receives a request for retransmission (**M2-6**) then it will resend the last data message (**M2-4**).
	4. If Modem device receives a rejection message (**M2-3**) then it will wait 0.1 seconds and attempt again; if it gets 25 repeated rejections then transmission will be aborted.
3. User device receives and decodes the data message.
4. User devices displays the character on its 7-segment display

**Entry Conditions:**
- Modem device must be connected with a user device.

**Exit Conditions:**
- Modem device has not received message M3-1 for 90 seconds or,
- User device has not received response M3-2 for 90 seconds.

**Quality Requirements:**
- Feedback to the user on the modem device indicating that it is transmitting in character transmission mode.

**Functional Requirements:**
- C1, C2, C3, C4, P1, P2-1

**Messages:**
- M2-1, M2-2, M2-3, M2-4,  M2-5, M2-6, M3

## UC-6
**Name:** Transmitting Data
**Actors:**Initiated by users
**Flow of Events:**
1. User selects speed transmitting mode on modem device.
2. Modem device sends request (**M2-1**) to send a data message.
	1. User device responds with acknowledgement (**M2-2**) or rejection (**M2-3**).
3. If Modem device receives acknowledgement (**M2-2**) then it will send a data message (**M2-4**) of maximum size.
	1. User device will respond with either and acknowledgement (**M2-5**) or a request for retransmission (**M2-6**).
	2. If the modem device receives a request for retransmission (**M2-6**) then it will resend the last data message (**M2-4**).
4. If Modem device receives a rejection (**M2-3**) then it will wait 0.1 seconds and attempt again; if it gets 100 repeated rejections then transmission will be aborted.
5. User device receives and decodes the data message.
6. User device reconstructs the entire data file and displays it on the external display.
7. User devices displays the overall transmission speed on the 7-segment display.

**Entry Conditions:**
- Modem device must be connected with a user device.

**Exit Conditions:**
- Modem device has not received message M3-1 for 90 seconds or,
- User device has not received response M3-2 for 90 seconds.

**Quality Requirements:**
- Feedback to the user on the modem device indicating that it is transmitting in speed transmission mode.
- Feedback to the user on the user device of the current approximate transmission speed while the transmission is underway.

**Functional Requirements:**
- C1, C2, C3, C4, P1, P2-2

**Messages:**
- M2, M3