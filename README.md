# <h1>Line_follower_robot</h1>

# <h3>Aim</h3>

The Robot movement control along a specified Line/Path using two infrared
sensors.
List of Kit &amp; tools Requirements:
 Arduino and IDE
 Robotics platform
 Motor driver module
 IR-Sensor’s
 Battery
Theory:
A simple motor-operated robot is a robot whose movement can be controlled to
follow a predetermined path. The path is typically a black line on a white floor, or
vice versa; in this lab, the former setup is used. Two infrared (IR) sensors are
mounted on the front panel of the robot kit. The robot is positioned on the black
line, and the IR sensors are pointed at the white floor. As the robot follows the
black line, the sensors detect the white surface, sending a digital output or logic
level 1 to the configured IR sensor output pin on the Arduino Uno board.
If the robot deviates from the black line in either direction, one of the IR sensors
will detect the change and read a digital output of 0. For example, if the right IR
sensor reads 0, the robot has veered to the left of the black line, and the robot will
need to turn right to correct its path. Conversely, if the left IR sensor reads 0, the
robot has moved too far to the right, and it will need to turn left. This system
continuously adjusts the robot’s movement, allowing it to stay on the determined
path.
At the end of the path, a large black patch is placed to signal the robot to stop.
When the robot reaches this patch, both IR sensors will read a digital output of 0,
causing the robot to stop. The corresponding line path and motor control logic are
depicted in the following figures.
