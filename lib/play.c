#include "play.h"

void sheet_music(int notes[], int times[], size_t arr_size){
    size_t  i;
	for ( i = 0; i < arr_size; i++){
		Beep(notes[i], times[i]);
		sleep(times[i]/10000);
	}
}
