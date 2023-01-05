int start(){
        char* vbuff = (char*) 0xA0000;
        int y = 0;
        while(y < 200){
                int x = 0;
                while(x < 75){
                        *(vbuff + (y * 320) + x) = 0x03;
                        x++;
                }
                while(x < 245){
                        *(vbuff + (y * 320) + x) = 0x0b;                      
                        x++;
                }
                while(x < 320){
                        *(vbuff + (y * 320) + x) = 0x03;
                        x++;
               }
               y++;
       }
}