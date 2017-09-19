void simpleNavigate {
	// while not at end square
	while(true) {
		// Go to next intersection
		travelToNextIntersection();

		// Determine available directions
		int directions = determineAvailableDirections();

		// If directions & 1
		if (directions & 1) {
			// Turn left
			turnAtIntersection(1);
		// else if direction & 2
		} else if (directions & 2) {
			// Go straight
			turnAtIntersection(2);
		// else if direction & 4
		} else if (directions & 4) {
			// Turn right
			turnAtIntersection(4);
		// else
		} else {
			turnLeft();
			turnLeft();
			// Turn left
			// Turn left
		}
	}
}
