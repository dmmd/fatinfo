#include "filesystem.h"

void filesystem::getFileSystem() const{
	using namespace std;
	cout << "YEAH RIGHT" << endl;
}

void filesystem::setBS_jmpBoot(string s){
	BS_jmpBoot = s;
}

void filesystem::setBS_OEMName(string s){
	BS_OEMName = s;
}

void filesystem::setBPB_BytsPerSec(int i){
	BPB_BytsPerSec = i;
}

void filesystem::setBPB_SecPerClus(int i){
	BPB_SecPerClus = i;
}

void filesystem::setBPB_RsvdSecCnt(int i){
	BPB_SecPerClus = i;
}

void filesystem::setBPB_NumFATs(int i){
	BPB_NumFATs = i;
}

void filesystem::setBPB_RootEntCnt(int i){
	BPB_RootEntCnt = i;
}

void filesystem::setBPB_TotSec16(int i){
	BPB_TotSec16 = i;
}

void filesystem::setBPB_Media(string s){
	BPB_Media = s;
}

void filesystem::setBPB_FATSz16(int i){
	BPB_FATSz16 = i;
}

void filesystem::setBPB_SecPerTrk(int i){
	BPB_SecPerTrk = i;
}

void filesystem::setBPB_NumHeads(int i){
	BPB_NumHeads = i;
}

void filesystem::setBPB_HiddSec(long l){
	BPB_HiddSec = l;
}

void filesystem::setBPB_TotSec32(long l){
	BPB_TotSec32 = l;
} 

void filesystem::setBS_DrvNum(string s){
	BS_DrvNum = s;
}

void filesystem::printFS() const{
	cout << "FATVOL INFO\nBS_jmpBoot:\t" << BS_jmpBoot << "\n"
		<< "BS_OEMName:\t" << BS_OEMName << "\n"
		<< "BPB_BytsPerSec:\t" << BPB_BytsPerSec << "\n"
		<< "BPB_SecPerClus:\t" << BPB_SecPerClus << "\n" 
		<< "BPB_RsvdSecCnt:\t" << BPB_RsvdSecCnt << "\n" 
		<< "BPB_NumFATs:\t" << BPB_NumFATs << "\n"
		<< "BPB_RootEntCnt:\t" << BPB_RootEntCnt << "\n"
		<< "BPB_TotSec16:\t" << BPB_TotSec16 << "\n"
		<< "BPB_Media:\t" << BPB_Media << "\n"
		<< "BPB_FATSz16:\t" << BPB_FATSz16 << "\n"
		<< "BPB_SecPerTrk:\t" << BPB_SecPerTrk << "\n"
		<< "BPB_NumHeads:\t" << BPB_NumHeads << "\n"
		<< "BPB_HiddSec:\t" << BPB_HiddSec << "\n"
		<< "BPB_TotSec32:\t" << BPB_TotSec32 << "\n"
		<< "BS_DrvNum:\t" << BS_DrvNum
		<< endl;
}