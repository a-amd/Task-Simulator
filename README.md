# Event Driven Simulation using Data Structure in C++

This project is based on CS311 PA involving calculation the total time taken by a set of actors where the number of actors is chosen randomly (N where N > 0 and N < maximum number of actors) and the number of actors that can be processed at once is another random value (K where K > 0 but K may be > than N) and each actor has a random amount of time to process constrained to a minium and maximum time.

The scenario for the exact problem being solved is as follows:
> An administrator of a small hospital wants to a computer program to find out how long it will take for their medical staff to see and treat a number of patients (N). In any day of the year there is at least a minimum of 5 people that need to be seen, while the maximum capacity that the hospital can take in is up to 50 people in a day.
> If the maximum number of people that can be seen at one time (K) varies from a 1 to 10, and each patient requires a variable amount of time to treat from 15 minutes to 50 minutes at most, how long will it take for the hospital to treat every patient.

The requirements for this program are to compute the total time taken for the hospital to treat everyone that shows up. The program randomly generates integers N and K which are constrained 5 $\le$ N $\le$ 50 and 5 $\le$ K $\le$ 50. Each person also has a random time taken to treat where 15 $\le$ time $\le$ 50. This program is implemented using C++ and the STL.
