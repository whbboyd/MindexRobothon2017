// FIXME This syntax is wrong. I dunno if we have a preprocessor as such.
int LINE_THRESH = 500;
int INTO_INTERSECTION_DELAY = 500;
int INTERSECTION_CLEAR_THRESH = 10;


void travelToNextIntersection() {
	// drive forward until line detected
	forward(100);
	untilDark(LINE_THRESH);

	// drive forward into intersection
	forward(100);
	wait(INTO_INTERSECTION_DELAY);

	// deactivate motors
	stop();
}

int determineAvailableDirections() {
	// turn left
	turnLeft();

	int returnValue = 0;

	// rangefind
	// if range > threshold, set 1st bit of return value
	if (SensorValue(sonar) > INTERSECTION_CLEAR_THRESH) {
		returnValue &= 1;
	}

	// turn right
	turnRight();
	// rangefind
	// if range > threshold, set 2nd bit of return value
	if (SensorValue(sonar) > INTERSECTION_CLEAR_THRESH) {
		returnValue &= 2;
	}

	// turn right
	turnRight();
	// rangefind
	// if range > threshold, set 3rd bit of return value
	if (SensorValue(sonar) > INTERSECTION_CLEAR_THRESH) {
		returnValue &= 4;
	}

	// turn left
	turnLeft();

	// return
	return returnValue;
}

void turnAtIntersection(int direction) {
	// if direction = 1, turn left
	if (direction == 1) {
		turnLeft();
	}
	// if direction = 2, do nothing
	if (direction == 2) {
		// do nothing
	}
	// if direction = 4, turn right
	if (direction == 4) {
		turnRight();
	// drive forward through intersection
	forward(100);
	wait(INTO_INTERSECTION_DELAY);
	stop();
}

void turnLeft() {
	// activate motors to turn left
	// accumulatedRotation = 0
	// while accumulatedRotation < 90deg
		// accumulatedRotation += accelerometer rotation reading
	// deactivate motors
	// return
}

void turnRight() {
	// activate motors to turn right 
	// accumulatedRotation = 0
	// while accumulatedRotation < 90deg
		// accumulatedRotation += accelerometer rotation reading
	// deactivate motors
	// return
}

