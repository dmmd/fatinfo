#include "fi.h"
#include "filesystem.h"

int main (int argc,char* argv[]) {
	filesystem f;	
  	ifstream file (argv[1], ios::in|ios::binary|ios::ate);
	file.seekg (0, ios::beg);

	int buffersize = 3;
	unsigned char * buffer = new unsigned char[buffersize];
	file.read(reinterpret_cast<char*>(buffer), buffersize);
	f.setBS_jmpBoot(getCharArrayHex(buffer, "BS_jmpBoot", buffersize));
	
	buffersize = 8;
	buffer = new unsigned char[buffersize];
	file.read(reinterpret_cast<char*>(buffer), buffersize);
	f.setBS_OEMName(getCharArrayAscii(buffer, "BS_OEMName"));
	
	
	buffersize = 2;
	buffer = new unsigned char[buffersize];
	file.read(reinterpret_cast<char*>(buffer), buffersize);
	f.setBPB_BytsPerSec(getInt(buffer));

	
	buffersize = 1;
	buffer = new unsigned char[buffersize];
	file.read(reinterpret_cast<char*>(buffer), buffersize);
	f.setBPB_SecPerClus(buffer[0]);
	
	buffersize = 2;
	buffer = new unsigned char[buffersize];
	file.read(reinterpret_cast<char*>(buffer), buffersize);
	f.setBPB_RsvdSecCnt(getInt(buffer));
	
	
	buffersize = 1;
	buffer = new unsigned char[buffersize];
	file.read(reinterpret_cast<char*>(buffer), buffersize);
	f.setBPB_NumFATs(buffer[0]);
	

	buffersize = 2;
	buffer = new unsigned char[buffersize];
	file.read(reinterpret_cast<char*>(buffer), buffersize);
	f.setBPB_RootEntCnt(getInt(buffer));	
	
	buffersize = 2;
	buffer = new unsigned char[buffersize];
	file.read(reinterpret_cast<char*>(buffer), buffersize);
	f.setBPB_TotSec16(getInt(buffer));
	
	buffersize = 1;
	buffer = new unsigned char[buffersize];
	file.read(reinterpret_cast<char*>(buffer), buffersize);
	stringstream ss;
	ss << setfill ('0') << setw (2) << hex << int(buffer[0]);
	f.setBPB_Media(ss.str());
	
	buffersize = 2;
	buffer = new unsigned char[buffersize];
	file.read(reinterpret_cast<char*>(buffer), buffersize);
	f.setBPB_FATSz16(getInt(buffer));
	
	
	buffersize = 2;
	buffer = new unsigned char[buffersize];
	file.read(reinterpret_cast<char*>(buffer), buffersize);
	f.setBPB_SecPerTrk(getInt(buffer));	
	
	buffersize = 2;
	buffer = new unsigned char[buffersize];
	file.read(reinterpret_cast<char*>(buffer), buffersize);
	f.setBPB_NumHeads(getInt(buffer));
	
	
		
	f.printFS();
	
	/*

	////
	int bps = BPB_BytsPerSec - 1;
	int RootDirSectors = ((BPB_RootEntCnt * 32) + bps) / BPB_BytsPerSec;
	cout << "RootDirSectors: " << RootDirSectors << endl;
	
	*/
	
	cout << endl;
	return EXIT_SUCCESS;
}

