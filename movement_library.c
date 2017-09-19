
void travelToNextIntersection() {
	// while not line detected
		// drive forward
	// drive forward into intersection
	// deactivate motors
	// return
}

int determineAvailableDirections() {
	// turn left
	// rangefind
	// if range > threshold, set 1st bit of return value
	// turn right
	// rangefind
	// if range > threshold, set 2nd bit of return value
	// turn right
	// rangefind
	// if range > threshold, set 3rd bit of return value
	// turn left
	// return
}

void turnAtIntersection(int direction) {
	// if direction = 1, turn left
	// if direction = 2, return
	// if direction = 4, turn right
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

