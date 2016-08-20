#include <string.h>
#include <3ds.h>
#include <stdio.h>


int main()
{
	gfxInitDefault();
	//gfxSet3D(true); //Uncomment if using stereoscopic 3D
	consoleInit(GFX_TOP, NULL); //Change this line to consoleInit(GFX_BOTTOM, NULL) if using the bottom screen.
	
	
	printf("To Inject CIXHax, Select START");
	    
		
	u32 kDown = hidKeysDown();
		if (kDown & KEY_B)
	        printf("Unistalled.");
	
	     
			


	// Main loop
	while (aptMainLoop())
	{
		gspWaitForVBlank();
		hidScanInput();
		
		
		
        u32 kDown = hidKeysDown();
		if (kDown & KEY_START)
	        printf("6.66");
			

		// Flush and swap frame-buffers
		gfxFlushBuffers();
		gfxSwapBuffers();
	}

	gfxExit();
	return 0;
}