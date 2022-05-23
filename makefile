bags: driver.o
	g++ driver.o -o bags

driver.o: driver.cpp i_bag.h bag.h
	g++ -c driver.cpp

clean:
	rm *.o bags