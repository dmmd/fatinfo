#include <string>
#include <cstdlib>
#include <iostream>

using namespace std;

class filesystem{
	string BS_jmpBoot;
	string BS_OEMName;
	int BPB_BytsPerSec;
	short int BPB_SecPerClus;
	int BPB_RsvdSecCnt;
	short int BPB_NumFATs;
	int BPB_RootEntCnt;
	int BPB_TotSec16;
	string BPB_Media;
	int BPB_FATSz16;
	int BPB_SecPerTrk;
	int BPB_NumHeads;
	long BPB_HiddSec;
	long BPB_TotSec32;
	string BS_DrvNum;
	
public:

	void getFileSystem() const;
	void setBS_jmpBoot(string s);
	void setBS_OEMName(string s);
	void setBPB_BytsPerSec(int i);
	void setBPB_SecPerClus(int i);
	void setBPB_RsvdSecCnt(int i);
	void setBPB_NumFATs(int i);
	void setBPB_RootEntCnt(int i);
	void setBPB_TotSec16(int i);
	void setBPB_Media(string s);
	void setBPB_FATSz16(int i);
	void setBPB_SecPerTrk(int i);
	void setBPB_NumHeads(int i);
	void setBPB_HiddSec(long l);
	void setBPB_TotSec32(long l);
	void setBS_DrvNum(string s);
	void printFS() const;
};