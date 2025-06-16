# <h1>🤖Line Follower Robot</h1>

The Robot movement control along a specified Line/Path using two infrared sensors.

# <h3>⚙️List of Kit & tools Requirements</h3>

⁕ Arduino and IDE

⁕ Robotics platform

⁕ Motor driver module

⁕ IR-Sensor’s

⁕ Battery

# <h3>📒Theory</h3>

A simple motor-operated robot is a robot whose movement can be controlled to follow a predetermined path. The path is typically a black line on a white floor, or vice versa; in this lab, the former setup is used. Two infrared (IR) sensors are mounted on the front panel of the robot kit. The robot is positioned on the black line, and the IR sensors are pointed at the white floor. As the robot follows the black line, the sensors detect the white surface, sending a digital output or logic level 1 to the configured IR sensor output pin on the Arduino Uno board. If the robot deviates from the black line in either direction, one of the IR sensors will detect the change and read a digital output of 0. For example, if the right IR sensor reads 0, the robot has veered to the left of the black line, and the robot will need to turn right to correct its path. Conversely, if the left IR sensor reads 0, the robot has moved too far to the right, and it will need to turn left. This system continuously adjusts the robot’s movement, allowing it to stay on the determined path. At the end of the path, a large black patch is placed to signal the robot to stop. When the robot reaches this patch, both IR sensors will read a digital output of 0, causing the robot to stop. The corresponding line path and motor control logic are depicted in the following figures.

# <h3>🛠️Hardware setup</h3>

Connect the IR sensors to the Arduino UNO Board and configure the output
pins to Digital pins 2 and 5.

# <h3>💻Experimental Procedure</h3>
I. Open the Arduino UNO IDE on the computer, then select the Arduino UNO board type and choose the correct communication port under the Tools menu.

II. Click on File and create a New Sketch

III. Write, Load, and Compile the program for IR-sensors.

IV. Disconnect the communication cable from the computer and connect it to the battery attached to the robot.

V. Place the robot on a flat surface and check if the sensors give correct digital outputs based on obstacle detection.

VI. If needed, adjust the hardware or modify the code to ensure the IR sensors are configured correctly.

VII. Next, write the program for controlling the robot&#39;s movement (motors) according to the logic table provided.

VIII. Compile and load the program onto the Arduino board. Then, disconnect the communication cable from the computer and reconnect it to the robot&#39;s battery.

IX. Place the robot on the predetermined path provided in the lab and observe whether it follows the path correctly.

X. If the robot is not following the predetermined path, make the necessary adjustments either to the hardware connections or to the program.
