/*
 RFID.h - Library for handling the RFID
 */
#ifndef RFID_h
#define RFID_h

#include<Arduino.h>
#include<MFRC522.h>

#define KEY_NOT_FOUND -1

class RFID {
public:
	RFID(int pinCS, int pinRS);
	void resetRFID();
	bool isCardAvailable();
	int *getCurrentKey();
	void dumpUID();
	int keySize;
private:
	int _pinCS;
	int _pinRS;
	MFRC522* _rfid;
	int _currentUID[5];
};
#endif

