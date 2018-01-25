
union{
		char		byte1; 	// 8 bits
    	char		byte2; 	// 8 bits
     	short 	word1;	// 16 bits
}myUnion;

int main(void){
	myUnion.word1= 0x4567;

}