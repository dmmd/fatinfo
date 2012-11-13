#import "fi.h"

string getCharArrayHex(unsigned char* chars, string handle, int buffersize){
	stringstream ss;
	for(size_t i = 0; i < buffersize; ++i){	
		ss << setfill ('0') << setw (2) << hex << int(chars[i]);
		ss << " ";
	}
	
	return ss.str();
}

void printCharArrayInt(unsigned char* chars, string handle, int buffersize){
	stringstream ss;
	ss << handle << ": ";
	for(size_t i = 0; i < buffersize; ++i){	
		ss << int(chars[i]);
		ss << " ";
	}
	
	cout << ss.str() << endl;
	//cout << 256 * chars[0] + chars[1] << endl;
	//cout <<  << endl;
}

void printCharArrayHex(unsigned char* chars, string handle, int buffersize){
	stringstream ss;
	ss << handle << ": ";
	for(size_t i = 0; i < buffersize; ++i){	
		ss << setfill ('0') << setw (2) << hex << int(chars[i]);
		ss << " ";
	}
	
	cout << ss.str() << endl;
	//cout << 256 * chars[0] + chars[1] << endl;
	//cout <<  << endl;
}

string getCharArrayAscii(unsigned char* chars, string handle){
	int buffer = sizeof chars / sizeof chars[0];
	
	stringstream ss;
	for(size_t i = 0; i < buffer; ++i){	
		ss << chars[i];
	}
	return ss.str();
}

int getInt(unsigned char* chars){
	return 256 * chars[1] + chars[0];
}