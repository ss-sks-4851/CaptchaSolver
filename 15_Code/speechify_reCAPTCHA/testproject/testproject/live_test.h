//#include"prediction2.h"
#define msgsize 1024
static void live_train(int digit)
{
	int i = 0;
	char num[3], ch_time[10],in_filepath[4096];
	int timeslice = 3;

	for(i = 21 ; i <= 25 ; i++)
	{
		char filename[50];
		FILE *fp;
		sprintf(filename , "live_training_files/%d_%d.txt" , digit , i);
		//fp = fopen(filename , "w");
		memset(in_filepath,0,msgsize);
		memset(ch_time,0,sizeof(ch_time));
		memset(num,0,3);
		sprintf(ch_time,"%d",timeslice);
				
		_snprintf(in_filepath, sizeof(in_filepath), "%s %s %s %s","Recording_Module.exe", ch_time, "input_file.wav",filename);
		system(in_filepath);
		//fclose(fp);
	}
}
