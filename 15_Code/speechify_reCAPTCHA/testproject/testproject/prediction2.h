
//GROUP NO: 15

// Testing.cpp : Defines the entry point for the console application.
//



//#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <conio.h>
#include <math.h>
#include <time.h>

//#include "obs.h"


#define N 5
#define T 85
#define M 32
#define msgsize 1024
using namespace std;

int predicted_word_index = 0;

long double a[6][6]={0},b[6][33]={0},Pi[6]={0};

long double delta0[86][6],delta1[86][6]={0},delta2[86][6]={0},delta3[86][6]={0},delta4[86][6]={0},delta5[86][6]={0},delta6[86][6]={0},delta7[86][6]={0},delta8[86][6]={0},delta9[86][6]={0},delta10[86][6]={0},delta11[86][6]={0},delta12[86][6]={0},delta13[86][6]={0},delta14[86][6]={0};

long double alpha0[86][6]={0},alpha1[86][6]={0},alpha2[86][6]={0},alpha3[86][6]={0},alpha4[86][6]={0},alpha5[86][6]={0},alpha6[86][6]={0},alpha7[86][6]={0},alpha8[86][6]={0},alpha9[86][6]={0},alpha10[86][6]={0},alpha11[86][6]={0},alpha12[86][6]={0},alpha13[86][6]={0},alpha14[86][6]={0};

long double beta0[86][6]={0},beta1[86][6]={0},beta7[86][6]={0},beta8[86][6]={0},beta2[86][6]={0},beta3[86][6]={0},beta4[86][6]={0},beta5[86][6]={0},beta6[86][6]={0},beta9[86][6]={0},beta10[86][6]={0},beta11[86][6]={0},beta12[86][6]={0},beta13[86][6]={0},beta14[86][6]={0};

long double gamma0[86][6]={0},gamma1[86][6]={0},gamma2[86][6]={0},gamma3[86][6]={0},gamma4[86][6]={0},gamma5[86][6]={0},gamma6[86][6]={0},gamma7[86][6]={0},gamma8[86][6]={0},gamma9[86][6]={0},gamma10[86][6]={0},gamma11[86][6]={0},gamma12[86][6]={0},gamma13[86][6]={0},gamma14[86][6]={0};

long double POL0=0,POL1=0,POL2=0,POL3=0,POL4=0,POL5=0,POL6=0,POL7=0,POL8=0,POL9=0,POL10=0,POL11=0,POL12=0,POL13=0,POL14=0;

long double zai0[86][6][6]={0},zai1[86][6][6]={0},zai2[86][6][6]={0},zai3[86][6][6]={0},zai4[86][6][6]={0},zai5[86][6][6]={0},zai6[86][6][6]={0},zai7[86][6][6]={0},zai8[86][6][6]={0},zai9[86][6][6]={0},zai10[86][6][6]={0},zai11[86][6][6]={0},zai12[86][6][6]={0},zai13[86][6][6]={0},zai14[86][6][6]={0};

int Psi0[86][6]={0},Psi1[86][6]={0},Psi2[86][6]={0},Psi3[86][6]={0},Psi4[86][6]={0},Psi5[86][6]={0},Psi6[86][6]={0},Psi7[86][6]={0},Psi8[86][6]={0},Psi9[86][6]={0},Psi10[86][6]={0},Psi11[86][6]={0},Psi12[86][6]={0},Psi13[86][6]={0},Psi14[86][6]={0};

int O[21][86]={0},q_star[86]={0};

int observation[86] = {1},accuracy = 0,count_val=0;		//to store individual observaition sequence while prediction

long double POlambda=0;
long double aprime0[6][6]={0},bprime0[6][33]={0},Piprime0[6]={0};
long double aprime1[6][6]={0},bprime1[6][33]={0},Piprime1[6]={0};
long double aprime2[6][6]={0},bprime2[6][33]={0},Piprime2[6]={0};
long double aprime3[6][6]={0},bprime3[6][33]={0},Piprime3[6]={0};
long double aprime4[6][6]={0},bprime4[6][33]={0},Piprime4[6]={0};
long double aprime5[6][6]={0},bprime5[6][33]={0},Piprime5[6]={0};
long double aprime6[6][6]={0},bprime6[6][33]={0},Piprime6[6]={0};
long double aprime7[6][6]={0},bprime7[6][33]={0},Piprime7[6]={0};
long double aprime8[6][6]={0},bprime8[6][33]={0},Piprime8[6]={0};
long double aprime9[6][6]={0},bprime9[6][33]={0},Piprime9[6]={0};
long double aprime10[6][6]={0},bprime10[6][33]={0},Piprime10[6]={0};
long double aprime11[6][6]={0},bprime11[6][33]={0},Piprime11[6]={0};
long double aprime12[6][6]={0},bprime12[6][33]={0},Piprime12[6]={0};
long double aprime13[6][6]={0},bprime13[6][33]={0},Piprime13[6]={0};
long double aprime14[6][6]={0},bprime14[6][33]={0},Piprime14[6]={0};

long double afinal0[6][6] = {0},bfinal0[6][33] = {0};
long double afinal1[6][6] = {0},bfinal1[6][33] = {0};
long double afinal2[6][6] = {0},bfinal2[6][33] = {0};
long double afinal3[6][6] = {0},bfinal3[6][33] = {0};
long double afinal4[6][6] = {0},bfinal4[6][33] = {0};
long double afinal5[6][6] = {0},bfinal5[6][33] = {0};
long double afinal6[6][6] = {0},bfinal6[6][33] = {0};
long double afinal7[6][6] = {0},bfinal7[6][33] = {0};
long double afinal8[6][6] = {0},bfinal8[6][33] = {0};
long double afinal9[6][6] = {0},bfinal9[6][33] = {0};
long double afinal10[6][6] = {0},bfinal10[6][33] = {0};
long double afinal11[6][6] = {0},bfinal11[6][33] = {0};
long double afinal12[6][6] = {0},bfinal12[6][33] = {0};
long double afinal13[6][6] = {0},bfinal13[6][33] = {0};
long double afinal14[6][6] = {0},bfinal14[6][33] = {0};

long double Pifinal0[6] ={0},Pifinal1[6]={0},Pifinal2[6] = {0},Pifinal3[6] = {0},Pifinal4[6]={0},Pifinal5[6] = {0},Pifinal6[6] = {0},Pifinal7[6] = {0},Pifinal8[6] = {0},Pifinal9[6] ={0},Pifinal10[6] ={0},Pifinal11[6] ={0},Pifinal12[6] ={0},Pifinal13[6] ={0},Pifinal14[6] ={0},P_sstar = 0;



#define p 12
#define N_W 320
#define Ni 320


using namespace std;

long double rough[30000]={0};
int obs[86]={0};
long double ref_0[85][12],ref_1[85][12],ref_2[85][12],ref_3[85][12],ref_4[85][12],ref_5[85][12],ref_6[85][12],ref_7[85][12],ref_8[85][12],ref_9[85][12],ref_10[85][12],ref_11[85][12],ref_12[85][12],ref_13[85][12],ref_14[85][12];

int sliding_size=65;


#define window 80
#define p 12


//long double ref_0[85][12],ref_1[85][12],ref_2[85][12],ref_3[85][12],ref_4[85][12],ref_5[85][12],ref_6[85][12],ref_7[85][12],ref_8[85][12],ref_9[85][12];

//int obs_0[21][86],obs_1[21][86],obs_2[21][86],obs_3[21][86],obs_4[21][86],obs_5[21][86],obs_6[21][86],obs_7[21][86],obs_8[21][86],obs_9[21][86];

long double norm[200000]={0},steady_samples[100000]={0};

long double Cepstral0[85][12]={0},Cepstral1[85][12]={0},Cepstral2[85][12]={0},Cepstral3[85][12]={0},Cepstral4[85][12]={0},Cepstral5[85][12]={0},Cepstral6[85][12]={0},Cepstral7[85][12]={0},Cepstral8[85][12]={0},Cepstral9[85][12]={0},Cepstral10[85][12]={0},Cepstral11[85][12]={0},Cepstral12[85][12]={0},Cepstral13[85][12]={0},Cepstral14[85][12]={0};

long double Universe[17000][12]={0};

int universe_row =0;

//#define M 17000

//long double universe[17000][12]={0.0};
long double codebook[32][12]={0.0};

char *words[15] = {"0","1","2","3","4","5","6","7","8","9","car","alexa","speech","book","red"};



int normalize_max(const char *filename,int num)
{
	//Welcome to normalize_max
	//This function calculates the max value of sample i.e. max amplitude of the waveform 

		FILE *fpointer = fopen(filename,"r");
		long double  temp=0,max=INT_MIN;
		char line[30] ="";
		int i=0;
		for(i=1;i<7;i++)
			fgets(line,30,fpointer);									//discard initial frames (as it is header)
		while(num!=0)
			{
				fgets(line,30,fpointer);
				sscanf(line,"%lf",&temp);
				if(abs(temp)>max)										//comparing scanned value with max value
					{
						max = abs(temp);								//updating max value
					}
				num = num -1;
			 }
		fclose(fpointer);
	
		return max;														//returns max value
}

int cal_max_energy(long double norm[200000],int num)
{
	//This function does the following
	//First it find the frame for which energy is maximum it uses sliding window with stride = 80
	//It returns the index of the first data sample of the frame which has the maximum energy

	int i=0,m=0;
	long double energy,max_energy=0;
	int max_en_index;
	for(i=0;i<num;i=i+80)
	{
		energy = 0;
		for(m=0;m<320;m++)
		{
			energy += norm[i+m]*norm[i+m];
		}
		if(energy > max_energy)
		{
			max_energy = energy;
			max_en_index = i;
		}
		//m = m+80;
	}
	
	return max_en_index;
}

void normalize_frames(const char *filename)
{
	//This function does the following
	//1. It makes call to normalize_max to calculate the maximum absolute value 
	//2. It normalizes the data and stores it in norm array
	//3. It makes call to cal_max_energy to find max_energy_sample
	//4. It then calculates the start and end marker for start marker it considers 40 samples ahead of max_energy_sample and 44 frames after max_energy sample's frame 
	//5. Here total number of frames in an audio file are considered to be fixed and is equal to 85 ie. T=85
	//6. It stores 85 steady frames in array steady_samples

	int max_nf=0,num=0,i=0,j=0;
	FILE *fpointer = fopen(filename,"r");
	char ch=' ';
	char line[30]=" ";
	//calculating number of lines
	while((ch=fgetc(fpointer))!=EOF)									  //calculating number of samples in the file
		{
			if(ch=='\n')
				num++;
		}
	num = num - 5;
	fclose(fpointer);
	//calcultaing abs max value
	max_nf = normalize_max(filename,num);
	for(i=0;i<200000;i++)
		norm[i] =0;
	
	fpointer = fopen(filename,"r");
	for(i=1;i<7;i++)
			fgets(line,30,fpointer);
	int temp=0;
	for(i=0;i<=num;i++)
	{
		fgets(line,30,fpointer);
		sscanf_s(line,"%d",&temp);
		//fscanf(fpointer,"%d ",&temp);
		norm[i] = (double)(temp*5000)/max_nf;
		//fscanf(fpointer,"\n");
		//norm[i] = temp;
	}

	int max_energy_sample = cal_max_energy(norm,num);
	int start_marker=0,end_marker=0;

	start_marker = max_energy_sample - (40*80 + 240);
	if(start_marker < 0)
	{
		start_marker = 0;
	}
	end_marker = start_marker + (85*80 + 240);
	if(end_marker > num)
	{
		end_marker = num;
		start_marker = end_marker - (85*80 +240);
	}

	for(i=0;i<100000;i++)
	{
		steady_samples[i] = 0;
	}
	//int j=0;
	j=0;
	for(i=start_marker;i<=end_marker;i++)
	{

		steady_samples[j] = norm[i];
		j++;
	}




	fclose(fpointer);
}

void Calculate_Ri(long double *R, const char *filename)	
{	

	//This function calculates Ri's for the frame stored in file filename and stores the corresponding Ri's in array R

	FILE *fptr = fopen(filename,"r");										//fptr is file pointer of file containing 1 frame i.e.320 normalised sample values
	long double sample[320]={0.0},temp=0;
	int i=0,j=0;
	char line[30] = "";
	for(i=0;i<320;i++)														//storing 320 normalised sample values in array sample
		{
			fgets(line,30,fptr);
			sscanf_s(line, "%lf",&temp);								
			sample[i] = temp;												

		}
	for(i=0;i<=p;i++)
		{
			for(j=0;j<=320-1-i;j++)
			{
				R[i] = R[i] + sample[j]*sample[j+i];						//Calculating R using correlation formula
			}
			
		}
	fclose(fptr);
}

void Calculate_Ai(long double *A,long double *R)
{

	//This function calulates the value of Ai coefficients and stores corresponding Ai's in array A
	
	int i=0,j=0;
	
	long double E=R[0],k=0;													//k is the reflection coefficient, E is initialised with R[0]= energy
	long double B[13];														//to store the value of A in (i-1)th iteration 
	
	for(i=0;i<=12;i++)
	 {
		B[i] = 0;
	 }
	long double sum=0;
	
	for(i=1;i<=p;i++)
	 {
		sum = 0;
		for(j=1;j<=i-1;j++)
		  {
			 sum = sum + B[j]*R[i-j];
		  }
		 k = (R[i] - sum)/E;
		 A[i] = k;
		 for(j=1;j<=i-1;j++)
		  {	
			  A[j] = B[j] - k*B[i-j];									     //updating Ai's using Bi's 
		  }
		 for(j=1;j<=i;j++)
		  {
			  B[j] = A[j] ;
		  }
		 E = (1-k*k)*E;
	 }	
}

void Calculate_Ci(const char *filename,double *rough_c)
{
  //file name contains the name of the sample file whose Ci values needs to be calculated

	long double Ri[13],Ai[13],Ci[13],Lifter[13];						//Array Ri to store Ri's, Ai to store Ai's, Ci to store Ci's,Lifter to store tampered window weights
	int i=0,k=0;
	long double sum=0;
	for(i=0;i<=12;i++)
	 {
		Ri[i] = 0.00000;
		Ai[i] = 0.00000;
		Ci[i] = 0;
	 }

	Calculate_Ri(Ri,filename);
	Calculate_Ai(Ai,Ri);

	Ci[0] = log10(Ri[0]*Ri[0]);
	for(i=1;i<13;i++)
	 {
		sum = 0;
		for(k=1;k<=i-1;k++)
		  {
			
			 sum = sum + ((long double)k*Ci[k]*Ai[i-k])/(long double)i;			
		  }
		Ci[i] = Ai[i] + sum;											//Calculating Ci's using cepstral coefficient formula
	 }
	
	Lifter[0] = 1;
	for(i=1;i<=p;i++)
	  {
		 Lifter[i] = 1 + 6*sin((3.14*i)/12);							//calculating tampered window values Q=12
	  }
	int j =0;
	for(j = 0;j<12;j++)
	  {
			rough_c[j] =0;
	  }
	for(i=1;i<=p;i++)
	  {
		Ci[i]*= Lifter[i];												//Multiplying Ci's with tampered window weights
	  }
	
	for(i=0;i<12;i++)
	  {
		rough_c[i] = Ci[i+1];											//storing Ci's in rough_c matrix
	  }		
}

void Compute_Cepstral(long double (*Cepstral)[12],bool flag = true)
{
	//This fucntion computes the cepstral coeeficient and stores the cepstral coefficient in Cepstral matrix 
	//If flag = true then it indicates that the computed cepstral coefficient needs to be stored in the Universe (for computing universe)
	int i=0,j=0,m=0,cindex=0,k=0;
	for(i=0;i<85;i = i+1)
	{
		
		FILE *fname = fopen("steady_file.txt","w");
		for(k=m;k<320+m;k++)
		{
			fprintf(fname,"%lf\n",steady_samples[k]);
		}
		fclose(fname);
		m = m+80;
		double rough_c[12]={0};
		Calculate_Ci("steady_file.txt",rough_c);
		for(j=0;j<12;j++)
		{
			Cepstral[cindex][j] = rough_c[j];
			if(flag == true)
				Universe[universe_row][j] = rough_c[j];
		}
		cindex++;
		if(flag == true)
		{
			//cout<<"Universe row "<<universe_row<<" calculated \n";
			universe_row++;
		}
	}

}

long double cal_distortion(int j , int i)
{
	//This function calculates the distance between universe[j] vector and centroid[i] using tokhura distance as the distance metric
		long double dist=0.0;
		int k=0;
		double w[12] = {1.0,3.0,7.0,13.0,19.0,22.0,25.0,33.0,42.0,50.0,56.0,61.0};
		for(k=0;k<12;k++)
			{
				dist = dist + w[k]*(Universe[j][k] - codebook[i][k])*(Universe[j][k] - codebook[i][k]);
			}
		return dist;
}

long double K_means(int size)
{
	//This function performs K_means algorithm
		long double new_centroid[32][12]={0.0},distortion = 0.0, d = 0.0, avg_distortion=0.0,prev_distortion =0.0;									//array new_centroid is used while updating the centroids
		int Ci[17000] ={0}, Mi[32] = {0};																												//array Ci[j] stores the Cluster to which universe[j] is mapped to ; Mi[j] stores the number of universe vectors mapped to Cluster j					
		bool flag = true;
		int i=0,j=0,m=0;

		while(flag)
		{
			avg_distortion = 0.0;
			for(i=0;i<32;i++)
			{
				Mi[i] = 0;
			}
			for(j=0;j<17000;j++)
			{
				distortion = pow(10,9.0);																											//setting distortion to some large value
				for(i=0;i<size;i++)
				{
					d = cal_distortion(j,i);																										//calling cal_distortion function to calculate distortion by obtaining tokhura distance between universe[j] vector and codebook[i](cluster i)
					if(d < distortion)
					{
						distortion = d;
						Ci[j] = i;																													//mapping universe[j] to cluster with which distortion is minimum
					}
				}
				avg_distortion += distortion;																										//incrementing the number of universe vector mapped to cluster Ci[j]
				Mi[Ci[j]] += 1;
			}
			avg_distortion /= 17000;
			m=m+1;
			if(abs(avg_distortion - prev_distortion)<0.00001)																						//stop iterating while loop if the difference between previous and current distortion is less than delta(here 0.0001)
			{
				flag = false;
			}
			else{
				prev_distortion = avg_distortion;
				for(i=0;i<32;i++)
					for(j=0;j<12;j++)
						new_centroid[i][j] = 0.0;
				for(i=0;i<17000;i++)
					for(j=0;j<12;j++)
						new_centroid[Ci[i]][j] += Universe[i][j];																					 //summing up all the universe vector assigned to a particular cluster
				for(i=0;i<32;i++)
					for(j=0;j<12;j++)
					{
						new_centroid[i][j] /= Mi[i];																								//taking average w.r.t the number of universe vectors assigned to the cluster
						codebook[i][j] = new_centroid[i][j];																						//updating codebook
					}
			}
		}
		return avg_distortion;
}


void LBG(long double epsilon, int Max_Size)
{
	//This fucntion performs the LBG algorithm for the generation of the codebook of size 32 x 12
	
		int size = 1,i=0,j=0;
		for(i=0;i<17000;i++)
		 {
			for(j=0;j<12;j++)
			{
				codebook[0][j] += Universe[i][j];																									//summing up all the universe vectors as a single cluster
			}
		 }
		for(j=0;j<12;j++)
			{
				codebook[0][j] /=17000;																													//taking average w.r.t universe t obtain global centroid
			}
	
		while(size < Max_Size)																														//iterating till codebook size < 8
		 {
			for(i=0;i<size;i++)
			  {
				for(j=0;j<12;j++)																													//splitting the codebook vectors
				 {
					codebook[size+i][j] = codebook[i][j]*(1-epsilon);																			    //obatining y- using the formula y- = y*(1-epsilon)
					codebook[i][j] = codebook[i][j]*(1+epsilon);																					//obatining y+ using the formula y+ = y*(1+epsilon)
				 }
		      }
			size = 2*size;																															//doubling the size codebook
			long double distortion = K_means(size);
			cout<<"Codebook Size = "<<size<<" Distortion :"<<distortion<<"\n\n"; 


		}
		FILE *fptr = fopen("Codebook.txt","w");
		cout<<"Final Cluster Centroids are: \n"<<endl;
		for(i=0;i<32;i++)
			{
				cout<<"Centroid "<<i<<" : ";
				for(j=0;j<12;j++)
					{
						fprintf(fptr,"%lf ",codebook[i][j]);
						cout<<codebook[i][j]<<" ";
					}
				fprintf(fptr,"\n");
				cout<<"\n\n";;
			}
		fclose(fptr);
}

void compute_universe()
{
	//This fucntion generates universe and uses the following steps
	//1. For each 20 utterances fo each digit it calculates the 85 steady frames and then converts each frame into cepstral coefficient 
	//2. Now it stores this cepstral coeffient into Universe array (this is done in Compute_Cpestral function) 
	//3. Once done it writes it in Universe.txt file

	int i=1;
	const char *filename ={0};
	char name[60] = "0_";
	cout<<"file0\n\n";
	for(i=1;i<=20;i++)
	 {
		  sprintf(name,"%s%d.txt","0_",i);
		  filename = name;
		  normalize_frames(filename);
		  Compute_Cepstral(Cepstral0);
	}
	//name = "1_";
	const char *filename1 ={0};
	cout<<"file 1\n\n";

	for(i=1;i<=20;i++)
	 {
		  sprintf(name,"%s%d.txt","1_",i);
		  filename1 = name;
		  normalize_frames(filename1);
		  Compute_Cepstral(Cepstral0);
	}
	//name = "2_";
	const char *filename2 ={0};
	cout<<"file 2\n\n";
	for(i=1;i<=20;i++)
	 {
		  sprintf(name,"%s%d.txt","2_",i);
		  filename2 = name;
		  normalize_frames(filename2);
		  Compute_Cepstral(Cepstral0);
	}
	 //name = "3_";
	cout<<"file 3\n\n";
	 const char *filename3 ={0};
	for(i=1;i<=20;i++)
	 {
		  sprintf(name,"%s%d.txt","3_",i);
		  filename3 = name;
		  normalize_frames(filename3);
		  Compute_Cepstral(Cepstral0);
	}
	//name = "4_";
	cout<<"file 4\n\n";
	const char *filename4 ={0};
	for(i=1;i<=20;i++)
	 {
		  sprintf(name,"%s%d.txt","4_",i);
		  filename4 = name;
		  normalize_frames(filename4);
		  Compute_Cepstral(Cepstral0);
	}
	//name = ;
	cout<<"file 5\n\n";
	const char *filename5 ={0};
	for(i=1;i<=20;i++)
	 {
		  sprintf(name,"%s%d.txt","5_",i);
		  filename5 = name;
		  normalize_frames(filename5);
		  Compute_Cepstral(Cepstral0);
	}
	//name = "6_";
	cout<<"file 6\n\n";
	const char *filename6 ={0};
	for(i=1;i<=20;i++)
	 {
		  sprintf(name,"%s%d.txt","6_",i);
		  filename6 = name;
		  normalize_frames(filename6);
		  Compute_Cepstral(Cepstral0);
	}
	const char *filename7 ={0};
	cout<<"file 7\n\n";
	for(i=1;i<=20;i++)
	 {
		  sprintf(name,"%s%d.txt","7_",i);
		  filename7 = name;
		  normalize_frames(filename7);
		  Compute_Cepstral(Cepstral0);
	}
 //name = "8_";
	cout<<"file 8\n\n";
	const char *filename8 ={0};
	for(i=1;i<=20;i++)
	 {
		  sprintf(name,"%s%d.txt","8_",i);
		  filename8 = name;
		  normalize_frames(filename8);
		  Compute_Cepstral(Cepstral0);
	}
	
	//name = "9_";
	cout<<"file 9\n\n";
	const char *filename9 ={0};
	for(i=1;i<=20;i++)
	 {
		  sprintf(name,"%s%d.txt","9_",i);
		  filename9 = name;
		  normalize_frames(filename9);
		  Compute_Cepstral(Cepstral0);
	}
	
	int j=0;
	FILE *uni_file = fopen("Universe.txt","w");
	cout<<"Universe matrix :\n\n";
	for(i=0;i<17000;i++)
	{
		
		for(j=0;j<12;j++)
		{
			//cout<<Universe[i][j]<<" ";
			fprintf(uni_file,"%lf ",Universe[i][j]);
		}
		fprintf(uni_file,"\n");
	}
	fclose(uni_file);
}

void generate_codebook()
{
	//Makes call to LBG algorithm for computing the universe
	LBG(0.03,32);
}

void read_codebook()
{
	//This fucntion reads the Codebook.txt file and stores it in codebook matrix
	FILE *fptr = fopen("Codebook.txt","r");
	int i=0,j=0;
	long double temp;
	for(i=0;i<32;i++)
	{
		for(j=0;j<12;j++)
		{
			fscanf(fptr,"%lf",&temp);
			codebook[i][j] = temp;
		}
		fscanf(fptr,"\n");
	}
	cout<<"Codebook Read\n\n";



}



void Compute_Distance(long double Cepstral[][12],int row,const char *filename)
{
	//this function computes the observation sequrnce and stores it in file filename

	int i=0,ic=0,j=0;
	long double distance ,d;
	int min_index=0;
	double w[12] = {1.0,3.0,7.0,13.0,19.0,22.0,25.0,33.0,42.0,50.0,56.0,61.0};
	FILE *fptr = fopen(filename,"a+");
			for(i=0;i<85;i++)
			 {
				 distance = 100;
				for(ic=0;ic<32;ic++)
				 {
					 d=0;
					for(j=0;j<12;j++)
					 {	 
							d += w[j]*(codebook[ic][j] - Cepstral[i][j])*(codebook[ic][j] - Cepstral[i][j]);
							
															//taking average of each ith row and storing it at index i of dis_avg
					 }
					if(distance > d)
							 {
								 distance = d;
								 min_index = ic;
							 }
					 
				}
				//obs[i+1] = min_index+1;
				fprintf(fptr,"%d ",min_index+1);


			}
			fprintf(fptr,"\n");
}





void generate_obs()
{

	//this function generates observation sequence for each digit and stores it in file obs_seq_digit.txt

	int i=1;
	const char *filename ={0};
	for(i=10;i<=14;i++)
	{
		FILE *fptr ={0};
		char s[100] = "obs_seq_";
		char name[100]=" ";
		sprintf(name,"%s%d.txt",s,i);
		filename = name;
		fptr = fopen(filename,"w");
		fclose(fptr);
	}
	char name[60] = "0_";
	cout<<"file0\n\n";
	for(i=1;i<=20;i++)
	 {
		  sprintf(name,"%s%d.txt","0_",i);
		  filename = name;
		  normalize_frames(filename);
		  Compute_Cepstral(Cepstral0,false);
		  Compute_Distance(Cepstral0,i,"obs_seq_0.txt");
	}
	//name = "1_";
	const char *filename1 ={0};
	cout<<"file 1\n\n";

	for(i=1;i<=20;i++)
	 {
		  sprintf(name,"%s%d.txt","1_",i);
		  filename1 = name;
		  normalize_frames(filename1);
		  Compute_Cepstral(Cepstral0,false);
		  Compute_Distance(Cepstral0,i,"obs_seq_1.txt");
	}
	//name = "2_";
	const char *filename2 ={0};
	cout<<"file 2\n\n";
	for(i=1;i<=20;i++)
	 {
		  sprintf(name,"%s%d.txt","2_",i);
		  filename2 = name;
		  normalize_frames(filename2);
		  Compute_Cepstral(Cepstral0,false);
		  Compute_Distance(Cepstral0,i,"obs_seq_2.txt");
	}
	 //name = "3_";
	cout<<"file 3\n\n";
	 const char *filename3 ={0};
	for(i=1;i<=20;i++)
	 {
		  sprintf(name,"%s%d.txt","3_",i);
		  filename3 = name;
		  normalize_frames(filename3);
		  Compute_Cepstral(Cepstral0,false);
		  Compute_Distance(Cepstral0,i,"obs_seq_3.txt");
	}
	//name = "4_";
	cout<<"file 4\n\n";
	const char *filename4 ={0};
	for(i=1;i<=20;i++)
	 {
		  sprintf(name,"%s%d.txt","4_",i);
		  filename4 = name;
		  normalize_frames(filename4);
		  Compute_Cepstral(Cepstral0,false);
		  Compute_Distance(Cepstral0,i,"obs_seq_4.txt");
	}
	//name = ;
	cout<<"file 5\n\n";
	const char *filename5 ={0};
	for(i=1;i<=20;i++)
	 {
		  sprintf(name,"%s%d.txt","5_",i);
		  filename5 = name;
		  normalize_frames(filename5);
		  Compute_Cepstral(Cepstral0,false);
		  Compute_Distance(Cepstral0,i,"obs_seq_5.txt");
	}
	//name = "6_";
	cout<<"file 6\n\n";
	const char *filename6 ={0};
	for(i=1;i<=20;i++)
	 {
		  sprintf(name,"%s%d.txt","6_",i);
		  filename6 = name;
		  normalize_frames(filename6);
		  Compute_Cepstral(Cepstral0,false);
		  Compute_Distance(Cepstral0,i,"obs_seq_6.txt");
	}
	const char *filename7 ={0};
	cout<<"file 7\n\n";
	for(i=1;i<=20;i++)
	 {
		  sprintf(name,"%s%d.txt","7_",i);
		  filename7 = name;
		  normalize_frames(filename7);
		  Compute_Cepstral(Cepstral0,false);
		  Compute_Distance(Cepstral0,i,"obs_seq_7.txt");
	}
 //name = "8_";
	cout<<"file 8\n\n";
	const char *filename8 ={0};
	for(i=1;i<=20;i++)
	 {
		  sprintf(name,"%s%d.txt","8_",i);
		  filename8 = name;
		  normalize_frames(filename8);
		  Compute_Cepstral(Cepstral0,false);
		  Compute_Distance(Cepstral0,i,"obs_seq_8.txt");
	}
	
	//name = "9_";
	cout<<"file 9\n\n";
	const char *filename9 ={0};
	for(i=1;i<=20;i++)
	 {
		  sprintf(name,"%s%d.txt","9_",i);
		  filename9 = name;
		  normalize_frames(filename9);
		  Compute_Cepstral(Cepstral0,false);
		  Compute_Distance(Cepstral0,i,"obs_seq_9.txt");
	}
	for(i=1;i<=20;i++)
	 {
		  sprintf(name,"%s%d.txt","10_",i);
		  filename = name;
		  normalize_frames(filename);
		  Compute_Cepstral(Cepstral0,false);
		  Compute_Distance(Cepstral0,i,"obs_seq_10.txt");
	}
	for(i=1;i<=20;i++)
	 {
		  sprintf(name,"%s%d.txt","11_",i);
		  filename = name;
		  normalize_frames(filename);
		  Compute_Cepstral(Cepstral0,false);
		  Compute_Distance(Cepstral0,i,"obs_seq_11.txt");
	}
	for(i=1;i<=20;i++)
	 {
		  sprintf(name,"%s%d.txt","12_",i);
		  filename = name;
		  normalize_frames(filename);
		  Compute_Cepstral(Cepstral0,false);
		  Compute_Distance(Cepstral0,i,"obs_seq_12.txt");
	}
	for(i=1;i<=20;i++)
	 {
		  sprintf(name,"%s%d.txt","13_",i);
		  filename = name;
		  normalize_frames(filename);
		  Compute_Cepstral(Cepstral0,false);
		  Compute_Distance(Cepstral0,i,"obs_seq_13.txt");
	}
	for(i=1;i<=20;i++)
	 {
		  sprintf(name,"%s%d.txt","14_",i);
		  filename = name;
		  normalize_frames(filename);
		  Compute_Cepstral(Cepstral0,false);
		  Compute_Distance(Cepstral0,i,"obs_seq_14.txt");
	}



}

void generate_single_obs(long double test_cepstral[][12])
{
	//This fucntion computes the observation sequence for one input file used while performing prediction
	FILE *fptr = fopen("observation.txt","w");
	double w[12] = {1.0,3.0,7.0,13.0,19.0,22.0,25.0,33.0,42.0,50.0,56.0,61.0};
	long double distance = 1000000000,d=0;
	int min_index=0;
	
	int i,ic=0,j=0;
	for(i=0;i<85;i++)
	{
		 distance = 1000000000;
		for(ic=0;ic<32;ic++)
		{
			d=0;
			for(j=0;j<12;j++)
			 {
						 
				 d += w[j]*(codebook[ic][j] - test_cepstral[i][j])*(codebook[ic][j] - test_cepstral[i][j]);							 
																
			 }
			if(distance > d)
				 {
					 distance = d;
					 min_index = ic;
				}
					 
		}
		observation[i+1] = min_index+1;
		fprintf(fptr,"%d ",min_index+1);
   }
	
	fclose(fptr);
}



void digit_Prediction(const char *filename)
{
	//This function performs prediction of the input file 
	//1. It first makes call to normalize_frames which store the 85 steady frames in steady_saamples array
	//2. It then computes cepstral coefficent for these frames so total 85 cepstral coefficeint
	//3. It then makes call to generate_obs_sequence which computes the distance these cepstral coeeficient which codebook and generates observaiton sequence
	long double test_cepstral[85][12] = {0};
	//Calculate_normalize(filename);

	normalize_frames(filename);

	int i=0,j=0,m=0;
	for(i=0;i<85;i++)
	{
		FILE *fptr = fopen("test_ref_rough.txt","w");
		for(j=m;j<m+320;j++)
		  {
				fprintf(fptr,"%lf\n",steady_samples[j]);								//writes 320 sample values in ref_rough file
		  }
		fclose(fptr);
		double rough_c[12]={0};
		Calculate_Ci("test_ref_rough.txt",rough_c);
		
		for(j=0;j<12;j++)
		  {
			 //ref_mat[i][j] += rough_c[j];
			 test_cepstral[i][j] = rough_c[j];
		  }
		m = m + 80;	
		
	}	
	/*cout<<"Printing test matrix \n\n";
	for(i=0;i<85;i++)
	{
		for(j=0;j<12;j++)
		  {
			  cout<<test_mat[i][j]<<" ";
		}
		cout<<"\n";
	}*/


	generate_single_obs(test_cepstral);

}

//******************************HMM MODELLING******************************************************************************************

void Read_Lambda(char c)
{
	//This function reads the value of the elements of lambda i.e A in matrix a; B in matrix b; pi in matrix pi; observation sequence in O.

		int i=0,j=0;

	//Reading A
	{
		char name[100] = "A_";
		FILE *fpointer;
		const char * fname = {0};
		sprintf(name,"%s%c%s",name,c,".txt");
		fname = name;
		fpointer = fopen(fname,"r");
		for(i=0;i<=N;i++)
		{
			a[i][0] = 0;
			a[0][i] = 0;
		}
		for(i=1;i<=N;i++)
		{
			for(j=1;j<=N;j++)
			{
				fscanf(fpointer,"%lf",&a[i][j]);
			}
			fscanf(fpointer,"\n");
		}
		fclose(fpointer);
	
	//printing a matrix 
		/*cout<<"printing a matrix "<<endl;

		for(i=1;i<=N;i++)
		{
			for(j=1;j<=N;j++)
			{
				cout<<a[i][j]<<" ";
			}
			cout<<endl;
		}*/
		cout<<"\n\n";
	}

	//Reading B
	{
		char name[100] = "B_",line[300];
		FILE *fpointer;
		const char * fname = {0};
		sprintf(name,"%s%c%s",name,c,".txt");
		fname = name;
		fpointer = fopen(fname,"r");
		for(i=0;i<=M;i++)
		{
			b[0][i] = 0;
		}
		for(i=0;i<=N;i++)
		{
			b[0][i] = 0;
		}
		for(i=1;i<=N;i++)
		{
			for(j=1;j<=M;j++)
			{
				fscanf(fpointer,"%lf",&b[i][j]);
			}
			fscanf(fpointer,"\n");
		}
		fclose(fpointer);

		//printing b matrix 
		/*cout<<"printing b matrix:"<<endl;
		for(i=1;i<=N;i++)
		{
			for(j=1;j<=M;j++)
			{
				cout<<b[i][j]<<" ";
			}
			cout<<endl;
		}*/
		cout<<"\n\n";
		
	}

	//Reading Obs_Seq

	{
		char name[100] = "obs_seq_",line[300];
		FILE *fpointer;
		const char * fname = {0};
		sprintf(name,"%s%c%s",name,c,".txt");
		fname = name;
		fpointer = fopen(fname,"r");
		for(i=0;i<=T;i++)
		{
			O[0][i] = 0;
		}
		for(i=0;i<21;i++)
		{
			O[i][0] = 0;
		}
		for(i=1;i<21;i++)
		{
			//fgets(line,500,fpointer);
			for(j=1;j<=T;j++)
			{
				fscanf(fpointer,"%d ",&O[i][j]);
			}
			fscanf(fpointer,"\n");
		}
		fclose(fpointer);
		//printing O matrix 
		/*cout<<"printing O matrix:"<<endl;
		for(i=1;i<21;i++)
		{
			for(j=1;j<=T;j++)
			{
				cout<<O[i][j]<<" ";
			}
			cout<<"\n";
		}
		cout<<"\n\n";*/
	}

	//Reading Pi
	{
		char name[100] = "Pi_",line[300];
		FILE *fpointer;
		const char * fname = {0};
		sprintf(name,"%s%c%s",name,c,".txt");
		fname = name;
		fpointer = fopen(fname,"r");
		Pi[0] = 0;
		for(i=1;i<=T;i++)
		{
			fscanf(fpointer,"%lf",&Pi[i]);
			
		}
		fclose(fpointer);
		//printing P matrix 
		/*cout<<"Printing Pi matrix"<<endl;
		for(i=1;i<=N;i++)
		{
				cout<<Pi[i]<<" ";
		}	
			cout<<"\n\n";*/
		}


}

void Initialization(long double delta[][6],long double alpha[][6],long double beta[][6],int it,int Psi[][6])
{
	int i=0,j=0;
	
	for(i=1;i<=N;i++)
	{
		delta[1][i] = Pi[i] * b[i][O[it][1]];
		Psi[1][i] = 0;
		alpha[1][i] = Pi[i] * b[i][O[it][1]];
		beta[T][i] = 1;
	}


	

}

void Compute_delta(long double delta[][6],int it,long double a[6][6],long double b [6][33],int Psi[][6])
{
	//Initialization(delta);
	//Calculting matrix delta
	//long double delta[86][6] = {0};
	int t=2,i=0,j=0,index=0;
	long double max = 0,y=0;
	int q[86]={0};
	//long double y;
	for(i=1;i<=N;i++)
	{
		delta[1][i] = Pi[i] * b[i][O[it][1]];
		Psi[1][i] = 0;
	}
	for(t=2;t<=T;t++)
	{
		
		for(j=1;j<=N;j++)
		{
			max = 0;
			//index = 1;
			index = 0;
			
			//y=0;
			for(i=1;i<=N;i++)
			{
				y = delta[t-1][i] * a[i][j];		// * b[j][O[it][t]];
				if(max < y)
				{
					max = y;
					index = i;
					
				}
			}
				delta[t][j] = max * b[j][O[it][t]] ;
				Psi[t][j] = index;
	
		}
	}
	long double P_star = max;
	q[85] = index;
	cout<<"\n\nindex = "<<index<<"\n\n\n";
	q[0] = 0;
	//Printing delta matrix 
	/*cout<<"\n---- Delta matrix ---\n\n";
	for(j=1;j<=T;j++)
	{
		printf("t = %d = ",j);
		for(i=1;i<=N;i++)
		{
			//cout<<delta1[i][j]<<" "<<setw(10);
			printf("%g ",delta[j][i]);
		}
		cout<<endl;
	}*/
	cout<<"\n\n";
	cout<<"P* = "<<P_star<<endl;
	P_sstar = P_star;
	for(t=T-1;t>=1;t--)
	{
		q[t] = Psi[t+1][q[t+1]];
		
	}
	cout<<"Obs is : ";
	for(t=1;t<=85;t++)
	{
		cout<<O[it][t]<<" "; 
	}
	cout<<"Q* is  : ";
	for(t=1;t<=85;t++)
	{
		q_star[t] = q[t];
		cout<<q[t]<<" "; 
	}
	cout<<" \n\n";

}

void Compute_alpha_forward(long double alpha[][6],int it,long double a[][6],long double b[][33])
{
	int i=0,t=2,j=0;
//Induction
	for(i=1;i<=N;i++)
	{
		
		alpha[1][i] = Pi[i] * b[i][O[it][1]];
		
	}
	for(t=2;t<=T;t++)
	{
		for(j=1;j<=N;j++)
		{
			long double alpha_temp=0;
			for(i=1;i<=N;i++)
			{
				alpha_temp += alpha[t-1][i] * a[i][j] ;
			}
			alpha[t][j] = alpha_temp * b[j][O[it][t]];
		}
	}
//Termination
	 POlambda=0;
	for(i=1;i<=N;i++)
	{
		POlambda += alpha[T][i];
	}
	cout<<"P(O | lambda) = "<<POlambda<<endl;//<<"\n\nalpha matrix is ";
	/*cout<<"alpha matrix is : "<<endl;
	for(t=1;t<=T;t++)
	{
		for(j=1;j<=N;j++)
		{	
			cout<<alpha[t][j]<<" ";
		}
		cout<<endl;
	}*/
	cout<<"alpha calculated\n\n";



}

void Compute_beta_backward(long double beta[][6],int it,long double a[][6],long double b[][33])
{
	int t=0,i=0,j=0;
	for(i=1;i<=N;i++)
	{
		
		//alpha[1][i] = Pi[i] * b[i][O[it][1]];
		beta[T][i] = 1;
	}
	for(t=T-1;t>=1;t--)
	{
		for(i=1;i<=N;i++)
		{
			long double beta_temp=0;
			for(j=1;j<=N;j++)
			{
				beta_temp += a[i][j] * beta[t+1][j] * b[j][O[it][t+1]]  ;
			}
			beta[t][i] = beta_temp ;
		}
	}
	/*cout<<"beta matrix is : "<<endl;
	for(t=1;t<=T;t++)
	{
		for(j=1;j<=N;j++)
		{	
			cout<<beta[t][j]<<" ";
		}
		cout<<endl;
	}*/
	
cout<<"beta calculated\n\n";
}

void Compute_gamma(long double alpha[][6], long double beta[][6],long double gamma[][6],long double POL)
{
	int t=0,i=0,j=0;
	//int q[86]={0};
	for(t=1;t<=T;t++)
	{
		long double sum =0;
		for(i=1;i<=N;i++)
		{
			sum += alpha[t][i] * beta[t][i];
			
		}
		for(i=1;i<=N;i++)
		{
			gamma[t][i] = (alpha[t][i] * beta[t][i])/sum;
			//gamma[t][i] = (alpha[t][i] * beta[t][i])/POL;
			
		}
		
	}
	//printing gamma matrix
	/*cout<<"gamma matrix: \n";
	for(t=1;t<=T;t++)
	{
		for(i=1;i<=N;i++)
		{
			cout<<gamma[t][i]<<"  ";
		}
		cout<<endl;
	}*/
	/*int max_index=0;
	long double m=-1;
	for(t=1;t<=T-1;t++)
	{
		for(i=1;i<=N;i++)
		{
			if(m < gamma[t][i])
			{
				m = gamma[t][i];
				max_index = i;
			}
			
		}
		q[t] = max_index;
	}
	q[85] = q[84];
	cout<<"Q*:";
	for(t=1;t<=85;t++)
	{
		q_star[t] = q[t];
		cout<<q[t]<<" "; 
	}*/
	cout<<"Gamma calculated\n\n";
}

void Compute_zai(long double alpha[][6],long double beta[][6],long double zai[][6][6],long double POL,int it,long double a[][6],long double b [][33])
{
	int t=0,i=0,j=0;
	for(t=1;t<=T;t++)
	{
		
		for(i=1;i<=N;i++)
		{
			for(j=1;j<=N;j++)
			{
				zai[t][i][j] = 0;
			}
		}
	}
	for(t=1;t<=T;t++)
	{
		long double d=0;
		for(i=1;i<=N;i++)
		{
			for(j=1;j<=N;j++)
			{
				//zai[t][i][j] = (alpha[t][i]*a[i][j]*b[j][O[it][t+1]]*beta[t+1][j])/POL;
				//zai[t][i][j] = alpha[t][i]*a[i][j]*b[j][O[it][t+1]]*beta[t+1][j];
				d += alpha[t][i]*a[i][j]*b[j][O[it][t+1]]*beta[t+1][j];
			}
		}
		for(i=1;i<=N;i++)
		{
			for(j=1;j<=N;j++)
			{
				zai[t][i][j] = (alpha[t][i]*a[i][j]*b[j][O[it][t+1]]*beta[t+1][j])/d;
				//zai[t][i][j] = (alpha[t][i]*a[i][j]*b[j][O[it][t+1]]*beta[t+1][j])/POL;
				//zai[t][i][j] = alpha[t][i]*a[i][j]*b[j][O[it][t+1]]*beta[t+1][j];
				//d *= alpha[t][i]*a[i][j]*b[j][O[it][t+1]]*beta[t+1][j];
			}
		}
		//zai[t][i][j]/=d;
	}
	/*cout<<"zai values are \n";
	for(t=1;t<=T;t++)
	{
		cout<<"t = "<<t<<" \n";
		for(i=1;i<=N;i++)
		{
			for(j=1;j<=N;j++)
			{
				cout<<zai[t][i][j]<<" ";// = (alpha[t][i]*a[i][j]*b[j][O[it][t+1]*beta[t+1][j])/POL;
			}
			cout<<"\n\n";
		}
		cout<<"\n\n";
	}
	cout<<"Zai calculated\n\n";/
	/*cout<<"gamma reborn for observation "<<it<<" is : "<<endl;

	for(t=1;t<=T;t++)
	{
		cout<<"t = "<<t<<" : ";
		for(i=1;i<=N;i++)
		{
			long double gam = 0;
			for(j=1;j<=N;j++)
			{
				gam += zai[t][i][j];
			}
			//cout<<gam<<" ";
			printf("%g ",gam);
		}
		cout<<endl;
	}*/
	


}

void reestimation(long double Piprime[6],long double gamma[][6],long double aprime[][6],long double bprime[][33],long double zai[][6][6],int it)
{
	int i=0,j=0,t=0,k=0;
	long double d=0;


	//reestimating Pi
	for(i=1;i<=N;i++)
		{
			Piprime[i] = gamma[1][i];
		}
	cout<<"New Pi is : ";
	for(i=1;i<=N;i++)
		{
			cout<<Piprime[i]<<" "; //=gamma[1][i];
		}


	//calcultaing expected #transitions from Si
	
	/*for(i=1;i<=N;i++)
		{
			for(t=1;t<=T-1;t++)
			{
				d += gamma[t][i];
			}
		}*/

	//reestimating a
	long double numerator=0,denominator=0;
	/*for(i=1;i<=N;i++)
		{
			numerator = 0;
			denominator = 0;
			for(t=1;t<=T;t++)
			{
				denominator += gamma[t][i];
			}
			for(j=1;j<=N;j++)
			{
				numerator = 0;
				for(t=1;t<=T-1;t++)
				{
					numerator += zai[t][i][j];
				}
				aprime[i][j] = numerator/denominator;
			}
	}*/

	for(i=1;i<=N;i++)
		{
			//numerator=0;
			//denominator=0;
			//long double h=0;
			for(j=1;j<=N;j++)
			{
				numerator=0;
				denominator=0;
				for(t=1;t<=T-1;t++)
				{
					//h += (zai[t][i][j]);
					numerator += (zai[t][i][j]);
					denominator += gamma[t][i];
				}
				aprime[i][j] = numerator/denominator;
			
				//h/=d;
		}
			//aprime[i][j] /= d;
	}

//preserving stochastic property of aprime
	long double sum=0,max_value=-1;
	int max_index=0;
	for(i=1;i<=N;i++)
	{
		sum =0;
		max_value=-1;
		max_index=0;
		for(j=1;j<=N;j++)
		{
			sum += aprime[i][j];
			if(aprime[i][j] > max_value)
			{
				max_value = aprime[i][j];
				max_index = j;
			}
		}
		sum = 1 - sum;
		aprime[i][max_index] += sum;
	}

	/*cout<<"\nprinting a prime:\n";
	for(i=1;i<=N;i++)
		{
			for(j=1;j<=N;j++)
			{
				cout<<aprime[i][j]<<" ";// += (Zai[t][i][j])/d;
			}
			cout<<"\n\n";
		}*/
	cout<<endl;

//reestimating b

	long double bnumerator=0;
	long double bdenominator=0;

	for(j=1;j<=N;j++)
	{
		bnumerator=0;
		bdenominator=0;
		for(t=1;t<=T-1;t++)
		{
			bdenominator += gamma[t][j];
		}
		for(k=1;k<=M;k++)
		{
			bnumerator=0;
			for(t=1;t<=T-1;t++)
				{
					if(O[it][t] == k)
						bnumerator += gamma[t][j];
			}
			bprime[j][k] = bnumerator/bdenominator;
		}
	}



	/*for(j=1;j<=N;j++)
		{
			
			for(k=1;k<=M;k++)
			{
				bnumerator=0;
				bdenominator=0;
				for(t=1;t<=T-1;t++)
				{
					if(O[it][t] == k)
						bnumerator += gamma[t][j];
					bdenominator += gamma[t][j];
				}
				bprime[j][k] = bnumerator/bdenominator;
			
				
		}
			
	}*/

	
//preserving stochastic property of b
	int zero_count=0;
	double v = -30.0;
	max_value=-1;max_index=0;
	for(i=1;i<=N;i++)
	{
		sum =0;
		max_value=-1;
		max_index=0;
		zero_count = 0;
		
		for(j=1;j<=M;j++)
		{
			if(bprime[i][j] > max_value)
			{
				max_value = bprime[i][j];
				max_index = j;
			}
			
			if(bprime[i][j] == 0)
			{
				bprime[i][j] = 1e-30; //1.0*pow(2.17,v);
				zero_count++;
			}
			sum += bprime[i][j];
		}
		sum = 1 - sum;
		bprime[i][max_index] += sum;
	}
	/*cout<<"\nprinting b prime:\n";
	for(i=1;i<=N;i++)
		{
			for(j=1;j<=M;j++)
			{
				cout<<bprime[i][j]<<" ";
			}
			cout<<"\n\n";
		}*/
	cout<<endl;
}

void training(int it,long double Piprime[6],long double gamma[][6],long double aprime[][6],long double bprime[][33],long double zai[][6][6],long double delta[][6],int Psi[][6],long double alpha[][6],long double beta[][6],long double POL,char s[],int digit,long double Pifinal[6] , long double afinal[][6],long double bfinal[][33])
{
	int iterations = 100,count=0;
	int i=0,j=0;
	//long double Piprimet[6]={0}
	for(i=0;i<=N;i++)
	{
		Piprime[i] = Pi[i];
	}
	cout<<"copying a in aprime\n";
	for(i=0;i<=N;i++)
	{
		for(j=0;j<=N;j++)
		{
		aprime[i][j] = a[i][j];
		cout<<aprime[i][j]<<" ";
		}
		cout<<"\n\n";
	}
	for(i=0;i<=N;i++)
	{
		for(j=0;j<=M;j++)
		{
		bprime[i][j] = b[i][j];
		}
	}
	while(iterations--)
	{
		count++;
		cout<<"iteration no. "<<count<<" for observation = "<<it<<endl;
		reestimation(Piprime,gamma,aprime,bprime,zai,it); 				//this will computer lambda prime (new lambda)
		Initialization(delta,alpha,beta,it,Psi);
		Compute_alpha_forward(alpha,it,aprime,bprime);
		POL = POlambda;
		Compute_beta_backward(beta,it,aprime,bprime);
		Compute_gamma(alpha,beta,gamma,POL);
		Compute_zai(alpha,beta,zai,POL,it,aprime,bprime);
		Compute_delta(delta,it,aprime,bprime,Psi);						//applying viterbi again
	}
	
	for(i=0;i<=N;i++)
	{
		Pifinal[i] += floor(Piprime[i]/10);
	}

	for(i=0;i<=N;i++)
	{
		for(j=0;j<=N;j++)
		{
			afinal[i][j] += (aprime[i][j]/10);
		}
	}

	for(i=0;i<=N;i++)
	{
		for(j=0;j<=M;j++)
		{
			bfinal[i][j] += (bprime[i][j]/10);
		}
	}

	FILE *fptr;
	char name[60] = "";
	const char *filename= {0};
	sprintf(name,"%s_%d_lambda.txt",s,it);
	filename = name;
	cout<<"Processing file "<<name<<endl;
	fptr = fopen(filename,"w");
	
	fprintf(fptr,"Pi for digit %d and observation %d : \n",digit,it);



if(digit == 1)
{
	POL1 = POlambda;
	for(i=1;i<=N;i++)
	{
		Pifinal1[i] += (Piprime[i]);
		fprintf(fptr,"%g ",Pi[i]);
	}
	fprintf(fptr,"\n\n");
	fprintf(fptr,"a prime for digit %d and observation %d : \n",digit,it);

	for(i=1;i<=N;i++)
	{
		for(j=0;j<=N;j++)
		{
			fprintf(fptr,"%g ",aprime[i][j]);
			afinal1[i][j] += (aprime[i][j]);
		}
		fprintf(fptr,"\n");
	}
	fprintf(fptr,"\n");
	fprintf(fptr,"b prime for digit %d and observation %d : \n",digit,it);
	for(i=1;i<=N;i++)
	{
		for(j=1;j<=M;j++)
		{
			fprintf(fptr,"%g ",bprime[i][j]);
			bfinal1[i][j] += (bprime[i][j]);
		}
	}
}
else if(digit == 0)
{
	POL0 = POlambda;
	for(i=1;i<=N;i++)
	{
		Pifinal0[i] += (Piprime[i]);
		fprintf(fptr,"%g ",Pi[i]);
	}
	fprintf(fptr,"\n\n");
	fprintf(fptr,"a prime for digit %d and observation %d : \n",digit,it);

	for(i=1;i<=N;i++)
	{
		for(j=0;j<=N;j++)
		{
			fprintf(fptr,"%g ",aprime[i][j]);
			afinal0[i][j] += (aprime[i][j]);
		}
		fprintf(fptr,"\n");
	}
	fprintf(fptr,"\n");
	fprintf(fptr,"b prime for digit %d and observation %d : \n",digit,it);
	for(i=1;i<=N;i++)
	{
		for(j=1;j<=M;j++)
		{
			fprintf(fptr,"%g ",bprime[i][j]);
			bfinal0[i][j] += (bprime[i][j]);
		}
	}
}

else if(digit == 2)
{
	POL2 = POlambda;
	for(i=1;i<=N;i++)
	{
		Pifinal2[i] += (Piprime[i]);
		fprintf(fptr,"%g ",Pi[i]);
	}
	fprintf(fptr,"\n\n");
	fprintf(fptr,"a prime for digit %d and observation %d : \n",digit,it);

	for(i=1;i<=N;i++)
	{
		for(j=1;j<=N;j++)
		{
			fprintf(fptr,"%g ",aprime[i][j]);
			afinal2[i][j] += (aprime[i][j]);
		}
		fprintf(fptr,"\n");
	}
	fprintf(fptr,"\n");
	fprintf(fptr,"b prime for digit %d and observation %d : \n",digit,it);
	for(i=1;i<=N;i++)
	{
		for(j=1;j<=M;j++)
		{
			fprintf(fptr,"%g ",bprime[i][j]);
			bfinal2[i][j] += (bprime[i][j]);
		}
	}
}

else if(digit == 3)
{
	POL3 = POlambda;
	for(i=1;i<=N;i++)
	{
		Pifinal3[i] += (Piprime[i]);
		fprintf(fptr,"%g ",Pi[i]);
	}
	fprintf(fptr,"\n\n");
	fprintf(fptr,"a prime for digit %d and observation %d : \n",digit,it);

	for(i=1;i<=N;i++)
	{
		for(j=0;j<=N;j++)
		{
			fprintf(fptr,"%g ",aprime[i][j]);
			afinal3[i][j] += (aprime[i][j]);
		}
		fprintf(fptr,"\n");
	}
	fprintf(fptr,"\n");
	fprintf(fptr,"b prime for digit %d and observation %d : \n",digit,it);
	for(i=1;i<=N;i++)
	{
		for(j=1;j<=M;j++)
		{
			fprintf(fptr,"%g ",bprime[i][j]);
			bfinal3[i][j] += (bprime[i][j]);
		}
	}
}

else if(digit == 4)
{
	POL4 = POlambda;
	for(i=1;i<=N;i++)
	{
		Pifinal1[i] += (Piprime[i]);
		fprintf(fptr,"%g ",Pi[i]);
	}
	fprintf(fptr,"\n\n");
	fprintf(fptr,"a prime for digit %d and observation %d : \n",digit,it);

	for(i=1;i<=N;i++)
	{
		for(j=0;j<=N;j++)
		{
			fprintf(fptr,"%g ",aprime[i][j]);
			afinal4[i][j] += (aprime[i][j]);
		}
		fprintf(fptr,"\n");
	}
	fprintf(fptr,"\n");
	fprintf(fptr,"b prime for digit %d and observation %d : \n",digit,it);
	for(i=1;i<=N;i++)
	{
		for(j=1;j<=M;j++)
		{
			fprintf(fptr,"%g ",bprime[i][j]);
			bfinal4[i][j] += (bprime[i][j]);
		}
	}
}

else if(digit == 5)
{
	POL5 = POlambda;
	for(i=1;i<=N;i++)
	{
		Pifinal5[i] += (Piprime[i]);
		fprintf(fptr,"%g ",Pi[i]);
	}
	fprintf(fptr,"\n\n");
	fprintf(fptr,"a prime for digit %d and observation %d : \n",digit,it);

	for(i=1;i<=N;i++)
	{
		for(j=0;j<=N;j++)
		{
			fprintf(fptr,"%g ",aprime[i][j]);
			afinal5[i][j] += (aprime[i][j]);
		}
		fprintf(fptr,"\n");
	}
	fprintf(fptr,"\n");
	fprintf(fptr,"b prime for digit %d and observation %d : \n",digit,it);
	for(i=1;i<=N;i++)
	{
		for(j=1;j<=M;j++)
		{
			fprintf(fptr,"%g ",bprime[i][j]);
			bfinal5[i][j] += (bprime[i][j]);
		}
	}
}


else if(digit == 6)
{
	if(digit == 6)
{
	POL6 = POlambda;
	for(i=1;i<=N;i++)
	{
		Pifinal6[i] += (Piprime[i]);
		fprintf(fptr,"%g ",Pi[i]);
	}
	fprintf(fptr,"\n\n");
	fprintf(fptr,"a prime for digit %d and observation %d : \n",digit,it);

	for(i=1;i<=N;i++)
	{
		for(j=0;j<=N;j++)
		{
			fprintf(fptr,"%g ",aprime[i][j]);
			afinal6[i][j] += (aprime[i][j]);
		}
		fprintf(fptr,"\n");
	}
	fprintf(fptr,"\n");
	fprintf(fptr,"b prime for digit %d and observation %d : \n",digit,it);
	for(i=1;i<=N;i++)
	{
		for(j=1;j<=M;j++)
		{
			fprintf(fptr,"%g ",bprime[i][j]);
			bfinal6[i][j] += (bprime[i][j]);
		}
	}
}
}
else if(digit == 7)
{
	POL7 = POlambda;
	for(i=1;i<=N;i++)
	{
		Pifinal7[i] += (Piprime[i]);
		fprintf(fptr,"%g ",Pi[i]);
	}
	fprintf(fptr,"\n\n");
	fprintf(fptr,"a prime for digit %d and observation %d : \n",digit,it);

	for(i=1;i<=N;i++)
	{
		for(j=0;j<=N;j++)
		{
			fprintf(fptr,"%g ",aprime[i][j]);
			afinal7[i][j] += (aprime[i][j]);
		}
		fprintf(fptr,"\n");
	}
	fprintf(fptr,"\n");
	fprintf(fptr,"b prime for digit %d and observation %d : \n",digit,it);
	for(i=1;i<=N;i++)
	{
		for(j=1;j<=M;j++)
		{
			fprintf(fptr,"%g ",bprime[i][j]);
			bfinal7[i][j] += (bprime[i][j]);
		}
	}

}
else if(digit == 8)
{
	POL8 = POlambda;
	for(i=1;i<=N;i++)
	{
		Pifinal8[i] += (Piprime[i]);
		fprintf(fptr,"%g ",Pi[i]);
	}
	fprintf(fptr,"\n\n");
	fprintf(fptr,"a prime for digit %d and observation %d : \n",digit,it);

	for(i=1;i<=N;i++)
	{
		for(j=0;j<=N;j++)
		{
			fprintf(fptr,"%g ",aprime[i][j]);
			afinal8[i][j] += (aprime[i][j]);
		}
		fprintf(fptr,"\n");
	}
	fprintf(fptr,"\n");
	fprintf(fptr,"b prime for digit %d and observation %d : \n",digit,it);
	for(i=1;i<=N;i++)
	{
		for(j=1;j<=M;j++)
		{
			fprintf(fptr,"%g ",bprime[i][j]);
			bfinal8[i][j] += (bprime[i][j]);
		}
	}
}


else if(digit == 9)
{
	POL9 = POlambda;
	for(i=1;i<=N;i++)
	{
		Pifinal9[i] += (Piprime[i]);
		fprintf(fptr,"%g ",Pi[i]);
	}
	fprintf(fptr,"\n\n");
	fprintf(fptr,"a prime for digit %d and observation %d : \n",digit,it);

	for(i=1;i<=N;i++)
	{
		for(j=0;j<=N;j++)
		{
			fprintf(fptr,"%g ",aprime[i][j]);
			afinal9[i][j] += (aprime[i][j]);
		}
		fprintf(fptr,"\n");
	}
	fprintf(fptr,"\n");
	fprintf(fptr,"b prime for digit %d and observation %d : \n",digit,it);
	for(i=1;i<=N;i++)
	{
		for(j=1;j<=M;j++)
		{
			fprintf(fptr,"%g ",bprime[i][j]);
			bfinal9[i][j] += (bprime[i][j]);
		}
	}
}


if(digit == 10)
{
	POL1 = POlambda;
	for(i=1;i<=N;i++)
	{
		Pifinal10[i] += (Piprime[i]);
		fprintf(fptr,"%g ",Pi[i]);
	}
	fprintf(fptr,"\n\n");
	fprintf(fptr,"a prime for digit %d and observation %d : \n",digit,it);

	for(i=1;i<=N;i++)
	{
		for(j=0;j<=N;j++)
		{
			fprintf(fptr,"%g ",aprime[i][j]);
			afinal10[i][j] += (aprime[i][j]);
		}
		fprintf(fptr,"\n");
	}
	fprintf(fptr,"\n");
	fprintf(fptr,"b prime for digit %d and observation %d : \n",digit,it);
	for(i=1;i<=N;i++)
	{
		for(j=1;j<=M;j++)
		{
			fprintf(fptr,"%g ",bprime[i][j]);
			bfinal10[i][j] += (bprime[i][j]);
		}
	}
}

if(digit == 11)
{
	POL1 = POlambda;
	for(i=1;i<=N;i++)
	{
		Pifinal11[i] += (Piprime[i]);
		fprintf(fptr,"%g ",Pi[i]);
	}
	fprintf(fptr,"\n\n");
	fprintf(fptr,"a prime for digit %d and observation %d : \n",digit,it);

	for(i=1;i<=N;i++)
	{
		for(j=0;j<=N;j++)
		{
			fprintf(fptr,"%g ",aprime[i][j]);
			afinal11[i][j] += (aprime[i][j]);
		}
		fprintf(fptr,"\n");
	}
	fprintf(fptr,"\n");
	fprintf(fptr,"b prime for digit %d and observation %d : \n",digit,it);
	for(i=1;i<=N;i++)
	{
		for(j=1;j<=M;j++)
		{
			fprintf(fptr,"%g ",bprime[i][j]);
			bfinal11[i][j] += (bprime[i][j]);
		}
	}
}

if(digit == 12)
{
	POL1 = POlambda;
	for(i=1;i<=N;i++)
	{
		Pifinal12[i] += (Piprime[i]);
		fprintf(fptr,"%g ",Pi[i]);
	}
	fprintf(fptr,"\n\n");
	fprintf(fptr,"a prime for digit %d and observation %d : \n",digit,it);

	for(i=1;i<=N;i++)
	{
		for(j=0;j<=N;j++)
		{
			fprintf(fptr,"%g ",aprime[i][j]);
			afinal12[i][j] += (aprime[i][j]);
		}
		fprintf(fptr,"\n");
	}
	fprintf(fptr,"\n");
	fprintf(fptr,"b prime for digit %d and observation %d : \n",digit,it);
	for(i=1;i<=N;i++)
	{
		for(j=1;j<=M;j++)
		{
			fprintf(fptr,"%g ",bprime[i][j]);
			bfinal12[i][j] += (bprime[i][j]);
		}
	}
}


if(digit == 13)
{
	POL1 = POlambda;
	for(i=1;i<=N;i++)
	{
		Pifinal13[i] += (Piprime[i]);
		fprintf(fptr,"%g ",Pi[i]);
	}
	fprintf(fptr,"\n\n");
	fprintf(fptr,"a prime for digit %d and observation %d : \n",digit,it);

	for(i=1;i<=N;i++)
	{
		for(j=0;j<=N;j++)
		{
			fprintf(fptr,"%g ",aprime[i][j]);
			afinal13[i][j] += (aprime[i][j]);
		}
		fprintf(fptr,"\n");
	}
	fprintf(fptr,"\n");
	fprintf(fptr,"b prime for digit %d and observation %d : \n",digit,it);
	for(i=1;i<=N;i++)
	{
		for(j=1;j<=M;j++)
		{
			fprintf(fptr,"%g ",bprime[i][j]);
			bfinal13[i][j] += (bprime[i][j]);
		}
	}
}

if(digit == 14)
{
	POL1 = POlambda;
	for(i=1;i<=N;i++)
	{
		Pifinal14[i] += (Piprime[i]);
		fprintf(fptr,"%g ",Pi[i]);
	}
	fprintf(fptr,"\n\n");
	fprintf(fptr,"a prime for digit %d and observation %d : \n",digit,it);

	for(i=1;i<=N;i++)
	{
		for(j=0;j<=N;j++)
		{
			fprintf(fptr,"%g ",aprime[i][j]);
			afinal14[i][j] += (aprime[i][j]);
		}
		fprintf(fptr,"\n");
	}
	fprintf(fptr,"\n");
	fprintf(fptr,"b prime for digit %d and observation %d : \n",digit,it);
	for(i=1;i<=N;i++)
	{
		for(j=1;j<=M;j++)
		{
			fprintf(fptr,"%g ",bprime[i][j]);
			bfinal14[i][j] += (bprime[i][j]);
		}
	}
}


	fclose(fptr);

}

void copy_in_file(char s[],int digit,long double Pifinal[6] , long double afinal[][6] , long double bfinal[][33],long double POL)
	{
		int i=0,j=0;
		FILE *fptr;
		char name[60] = "";
		const char *filename= {0};
		sprintf(name,"%sfinal_lambda.txt",s);
		filename = name;
		cout<<"Generating file : "<<name<<endl;
		fptr = fopen(filename,"w");
		fprintf(fptr,"----Digit %d-----\n\n",digit);
		
		fprintf(fptr,"Final Pi for digit %d  : \n",digit);
		for(i=1;i<=N;i++)
		{
			
			fprintf(fptr,"%g ",Pifinal[i]);
		}
		fprintf(fptr,"\n\n");
		fprintf(fptr,"Final A prime for digit %d  : \n",digit);

		for(i=1;i<=N;i++)
		{
			for(j=1;j<=N;j++)
			{
				fprintf(fptr,"%g ",afinal[i][j]);
				
			}
			fprintf(fptr,"\n");
		}
		fprintf(fptr,"\n");
		fprintf(fptr,"Final B prime for digit %d : \n",digit);
		for(i=1;i<=N;i++)
		{
			for(j=1;j<=M;j++)
			{
				fprintf(fptr,"%g ",bfinal[i][j]);
				
			}
			fprintf(fptr,"\n");
		}
		fprintf(fptr,"\n\n");
		fprintf(fptr,"P(O|lambda) = %g : ",POL);
		fprintf(fptr,"\n\n");
		fprintf(fptr,"P* = %g \n\n",P_sstar);
		fprintf(fptr,"\n\n");
		for(i=1;i<=T;i++)
		{
			fprintf(fptr,"%d ",q_star[i]);
		}
		fprintf(fptr,"\n\n");
		fclose(fptr);
	}

void check(long double (*afinal)[6] , long double (*bfinal)[33])
{
	long double sum=0,max_value=-1;
	int max_index=0;
	int i=0,j=0;
	for(i=1;i<=N;i++)
	{
		sum =0;
		max_value=-1;
		max_index=0;
		for(j=1;j<=N;j++)
		{
			sum += afinal[i][j];
			if(afinal[i][j] > max_value)
			{
				max_value = afinal[i][j];
				max_index = j;
			}
		}

		cout<<"row "<<i<<" sum = "<<sum<<"\n\n"; 
		cout<<"max = "<<max_index<<"\n\n";
		sum = 1 - sum;
		afinal[i][max_index] += sum;
	}

	for(i=1;i<=N;i++)
	{
		sum =0;
		max_value=-1;
		max_index=0;
		for(j=1;j<=M;j++)
		{
			//bfinal2[i][j] = bfinal2[i][j];
			sum += bfinal[i][j]; 
			if(bfinal[i][j] > max_value)
			{
				max_value = bfinal[i][j];
				max_index = j;
			}
			//cout<<bfinal2[i][j]<<" ";

		}
		cout<<"row "<<i<<" sum = "<<sum<<"\n\n"; 
		cout<<"max = "<<max_index<<"\n\n";
		sum = 1 - sum;
		bfinal[i][max_index] += sum;
	}


}


void train()
{
	//this fucntion computes alpha beta gamma zai once for each digit and then calls function training to compute final lambda model for each digit
	int i=0,j=0;
	int it = 1;
	for(it=1;it<=10;it++)
	{
		cout<<"						Reading elements of lambda 0\n"<<endl;
		Read_Lambda('0');
		Initialization(delta0,alpha0,beta0,it,Psi0);
		Compute_delta(delta0,it,a,b,Psi0);
		Compute_alpha_forward(alpha0,it,a,b);
		POL9 = POlambda;
		Compute_beta_backward(beta0,it,a,b);
		Compute_gamma(alpha0,beta0,gamma0,POL0);
		Compute_zai(alpha0,beta0,zai0,POL0,it,a,b);
		//reestimation(Piprime8,gamma8,aprime8,bprime8,zai8,it);
		training(it,Piprime0,gamma0,aprime0,bprime0,zai0,delta0,Psi0,alpha0,beta0,POL0,"0_",0,Pifinal0,afinal0,bfinal0);
		}
	cout<<"Printing final lambda for digit 0 \n\n";
	//check(afinal0,bfinal0);
	for(i=1;i<=N;i++)
	{
		Pifinal0[i] = Pi[i];
		cout<<Pifinal0[i]<<" ";
	}
	cout<<"\n\n";
	for(i=1;i<=N;i++)
	{
		for(j=1;j<=N;j++)
		{
			afinal0[i][j] = afinal0[i][j]/it;
			cout<<afinal0[i][j]<<" ";
		}
		cout<<"\n\n";
	}
	cout<<"\n\n";

	for(i=1;i<=N;i++)
	{
		for(j=1;j<=M;j++)
		{
			bfinal0[i][j] = bfinal0[i][j]/it;
			cout<<bfinal0[i][j]<<" ";

		}
		cout<<"\n\n";
	}
	copy_in_file("0_",0,Pifinal0,afinal0,bfinal0,POL0);
	cout<<"\n\n";
	cout<<"--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n"<<endl;
	
	cout<<"--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n"<<endl;
	for(it = 1;it<=10;it++)
	{
		cout<<"	\n\n					Reading elements of lambda 1 for observation "<<it<<"\n"<<endl;
		Read_Lambda('1');
		Initialization(delta1,alpha1,beta1,it,Psi1);
		Compute_delta(delta1,it,a,b,Psi1);
		Compute_alpha_forward(alpha1,it,a,b);
		POL1 = POlambda;
		//cout<<"\nPOL1 = "<<POL1<<endl;
		Compute_beta_backward(beta1,it,a,b);
		Compute_gamma(alpha1,beta1,gamma1,POL1);
		Compute_zai(alpha1,beta1,zai1,POL1,it,a,b);
		//reestimation(Piprime1,gamma1,aprime1,bprime1,zai1,it);
		//training(it);
		training(it,Piprime1,gamma1,aprime1,bprime1,zai1,delta1,Psi1,alpha1,beta1,POL1,"1_",1,Pifinal1,afinal1,bfinal1);
	}
	//check(afinal1,bfinal1);
	cout<<"Printing final lambda for digit 1 \n\n";
	
	for(i=1;i<=N;i++)
	{
		Pifinal1[i] = Pi[i];
		cout<<Pifinal1[i]<<" ";
	}
	cout<<"\n\n";
	
	for(i=1;i<=N;i++)
	{
		for(j=1;j<=N;j++)
		{
			afinal1[i][j] = afinal1[i][j]/it;
			cout<<afinal1[i][j]<<" ";
		}
		cout<<"\n\n";
	}
	cout<<"\n\n";

	for(i=1;i<=N;i++)
	{
		for(j=1;j<=M;j++)
		{
			bfinal1[i][j] = bfinal1[i][j]/it;
			cout<<bfinal1[i][j]<<" ";

		}
		cout<<"\n\n";
	}
	cout<<"\n\n";
	copy_in_file("1_",1,Pifinal1,afinal1,bfinal1,POL1);
	cout<<"--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n"<<endl;
	for(it = 1;it<=10;it++)
	{
		cout<<"						Reading elements of lambda 2\n"<<endl;
	
		Read_Lambda('2');
		Initialization(delta2,alpha2,beta2,it,Psi2);
		Compute_delta(delta2,it,a,b,Psi2);
		Compute_alpha_forward(alpha2,it,a,b);
		POL2 = POlambda;
		//cout<<"\nPOL7 = "<<POL7<<endl;
		Compute_beta_backward(beta2,it,a,b);
		Compute_gamma(alpha2,beta2,gamma2,POL2);
		Compute_zai(alpha2,beta2,zai2,POL2,it,a,b);
		//reestimation(Piprime7,gamma7,aprime7,bprime7,zai7,it);
		training(it,Piprime2,gamma2,aprime2,bprime2,zai2,delta2,Psi2,alpha2,beta2,POL2,"2_",2,Pifinal2,afinal2,bfinal2);
	}

	cout<<"Printing final lambda for digit 2 \n\n";
	
	for(i=1;i<=N;i++)
	{
		Pifinal2[i] = Pi[i];
		cout<<Pifinal7[i]<<" ";
	}
	cout<<"\n\n";
	//check(afinal2,bfinal2);
	
	
	cout<<"\n\n";

	
	//check(afinal2,bfinal2);
	for(i=1;i<=N;i++)
	{
		for(j=1;j<=N;j++)
		{
			afinal2[i][j] = afinal2[i][j]/it;
			cout<<afinal2[i][j]<<" ";
		}
		cout<<"\n\n";
	}
	cout<<"\n\n";
	

	

	for(i=1;i<=N;i++)
	{
		for(j=1;j<=M;j++)
		{
			bfinal2[i][j] = bfinal2[i][j]/it;
			cout<<bfinal2[i][j]<<" ";
		}
		cout<<"\n\n";
	}
	cout<<"\n\n";
	copy_in_file("2_",2,Pifinal2,afinal2,bfinal2,POL2);
	
	cout<<"\n\n";
	cout<<"--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n"<<endl;
	for(it = 1;it<=10;it++)
	{
		cout<<"						Reading elements of lambda 3\n"<<endl;
	
		Read_Lambda('3');
		Initialization(delta3,alpha3,beta3,it,Psi3);
		Compute_delta(delta3,it,a,b,Psi3);
		Compute_alpha_forward(alpha3,it,a,b);
		POL3 = POlambda;
		//cout<<"\nPOL3 = "<<POL3<<endl;
		Compute_beta_backward(beta3,it,a,b);
		Compute_gamma(alpha3,beta3,gamma3,POL3);
		Compute_zai(alpha3,beta3,zai3,POL3,it,a,b);
		//reestimation(Piprime7,gamma7,aprime7,bprime7,zai7,it);
		training(it,Piprime3,gamma3,aprime3,bprime3,zai3,delta3,Psi3,alpha3,beta3,POL3,"3_",3,Pifinal3,afinal3,bfinal3);
	}

	cout<<"Printing final lambda for digit 3 \n\n";
	//long double sum=0;
	//check(afinal3,bfinal3);
	for(i=1;i<=N;i++)
	{
		Pifinal3[i] = Pi[i];
		cout<<Pifinal3[i]<<" ";
	}
	cout<<"\n\n";

	
	for(i=1;i<=N;i++)
	{
		for(j=1;j<=N;j++)
		{
			afinal3[i][j] = afinal3[i][j]/it;
			cout<<afinal3[i][j]<<" ";
		}
		cout<<"\n\n";
	}
	cout<<"\n\n";


	for(i=1;i<=N;i++)
	{
		//sum=0;
		for(j=1;j<=M;j++)
		{
			bfinal3[i][j] = bfinal3[i][j]/it;
			cout<<bfinal3[i][j]<<" ";

		}
		//cout<<"row "<<i<<" sum = "<<sum<<"\n\n";
		cout<<"\n\n";
	}
		copy_in_file("3_",3,Pifinal3,afinal3,bfinal3,POL3);
	
	cout<<"\n\n";
	
	cout<<"--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n"<<endl;
	for(it = 1;it<=10;it++)
	{
		cout<<"						Reading elements of lambda 4\n"<<endl;
	
		Read_Lambda('4');
		Initialization(delta4,alpha4,beta4,it,Psi4);
		Compute_delta(delta4,it,a,b,Psi4);
		Compute_alpha_forward(alpha4,it,a,b);
		POL4 = POlambda;
		//cout<<"\nPOL4 = "<<POL4<<endl;
		Compute_beta_backward(beta4,it,a,b);
		Compute_gamma(alpha4,beta4,gamma4,POL4);
		Compute_zai(alpha4,beta4,zai4,POL4,it,a,b);
		//reestimation(Piprime7,gamma7,aprime7,bprime7,zai7,it);
		training(it,Piprime4,gamma4,aprime4,bprime4,zai4,delta4,Psi4,alpha4,beta4,POL4,"4_",4,Pifinal4,afinal4,bfinal4);
	}

	cout<<"Printing final lambda for digit 4 \n\n";
	//check(afinal4,bfinal4);
	for(i=1;i<=N;i++)
	{
		Pifinal4[i] = Pi[i];
		cout<<Pifinal4[i]<<" ";
	}
	cout<<"\n\n";
	for(i=1;i<=N;i++)
	{
		for(j=1;j<=N;j++)
		{
			afinal4[i][j] = afinal4[i][j]/it;
			cout<<afinal4[i][j]<<" ";
		}
		cout<<"\n\n";
	}
	cout<<"\n\n";
	

	for(i=1;i<=N;i++)
	{
		for(j=1;j<=M;j++)
		{
			bfinal4[i][j] = bfinal4[i][j]/it;
			cout<<bfinal4[i][j]<<" ";

		}
		cout<<"\n\n";
	}
		copy_in_file("4_",4,Pifinal4,afinal4,bfinal4,POL4);
	
	cout<<"\n\n";
	cout<<"--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n"<<endl;
	for(it = 1;it<=10;it++)
	{
		cout<<"						Reading elements of lambda 5\n"<<endl;
	
		Read_Lambda('5');
		Initialization(delta5,alpha5,beta5,it,Psi5);
		Compute_delta(delta5,it,a,b,Psi5);
		Compute_alpha_forward(alpha5,it,a,b);
		POL5 = POlambda;
		//cout<<"\nPOL5 = "<<POL5<<endl;
		Compute_beta_backward(beta5,it,a,b);
		Compute_gamma(alpha5,beta5,gamma5,POL5);
		Compute_zai(alpha5,beta5,zai5,POL5,it,a,b);
		//reestimation(Piprime7,gamma7,aprime7,bprime7,zai7,it);
		training(it,Piprime5,gamma5,aprime5,bprime5,zai5,delta5,Psi5,alpha5,beta5,POL5,"5_",5,Pifinal5,afinal5,bfinal5);
	}

	cout<<"Printing final lambda for digit 5 \n\n";
	//check(afinal5,bfinal5);
	for(i=1;i<=N;i++)
	{
		Pifinal5[i] = Pi[i];
		cout<<Pifinal5[i]<<" ";
	}
	cout<<"\n\n";
	for(i=1;i<=N;i++)
	{
		for(j=1;j<=N;j++)
		{
			afinal5[i][j] = afinal5[i][j]/it;
			cout<<afinal5[i][j]<<" ";
		}
		cout<<"\n\n";
	}
	cout<<"\n\n";

	for(i=1;i<=N;i++)
	{
		for(j=1;j<=M;j++)
		{
			bfinal5[i][j] = bfinal5[i][j]/ it;
			cout<<bfinal5[i][j]<<" ";

		}
		cout<<"\n\n";
	}
		copy_in_file("5_",5,Pifinal5,afinal5,bfinal5,POL5);
	
	cout<<"\n\n";
	cout<<"--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n"<<endl;
	for(it = 1;it<=5;it++)
	{
		cout<<"						Reading elements of lambda 6\n"<<endl;
	
		Read_Lambda('6');
		Initialization(delta6,alpha6,beta6,it,Psi6);
		Compute_delta(delta6,it,a,b,Psi6);
		Compute_alpha_forward(alpha6,it,a,b);
		POL6 = POlambda;
		//cout<<"\nPOL6 = "<<POL6<<endl;
		Compute_beta_backward(beta6,it,a,b);
		Compute_gamma(alpha6,beta6,gamma6,POL6);
		Compute_zai(alpha6,beta6,zai6,POL6,it,a,b);
		//reestimation(Piprime7,gamma7,aprime7,bprime7,zai7,it);
		training(it,Piprime6,gamma6,aprime6,bprime6,zai6,delta6,Psi6,alpha6,beta6,POL6,"6_",6,Pifinal6,afinal6,bfinal6);
	}

	cout<<"Printing final lambda for digit 6 \n\n";
	//check(afinal6,bfinal6);
	for(i=1;i<=N;i++)
	{
		Pifinal6[i] = Pi[i];
		cout<<Pifinal6[i]<<" ";
	}
	cout<<"\n\n";
	for(i=1;i<=N;i++)
	{
		for(j=1;j<=N;j++)
		{
			afinal6[i][j] = afinal6[i][j]/it;
			cout<<afinal6[i][j]<<" ";
		}
		cout<<"\n\n";
	}
	cout<<"\n\n";

	for(i=1;i<=N;i++)
	{
		for(j=1;j<=M;j++)
		{
			bfinal6[i][j] = bfinal6[i][j]/ it;
			cout<<bfinal6[i][j]<<" ";

		}
		cout<<"\n\n";
	}
		copy_in_file("6_",6,Pifinal6,afinal6,bfinal6,POL6);
	
	cout<<"\n\n";
cout<<"--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n"<<endl;
	for(it = 1;it<=10;it++)
	{
		cout<<"						Reading elements of lambda 7\n"<<endl;
	
		Read_Lambda('7');
		Initialization(delta7,alpha7,beta7,it,Psi7);
		Compute_delta(delta7,it,a,b,Psi7);
		Compute_alpha_forward(alpha7,it,a,b);
		POL7 = POlambda;
		//cout<<"\nPOL7 = "<<POL7<<endl;
		Compute_beta_backward(beta7,it,a,b);
		Compute_gamma(alpha7,beta7,gamma7,POL7);
		Compute_zai(alpha7,beta7,zai7,POL7,it,a,b);
		//reestimation(Piprime7,gamma7,aprime7,bprime7,zai7,it);
		training(it,Piprime7,gamma7,aprime7,bprime7,zai7,delta7,Psi7,alpha7,beta7,POL7,"7_",7,Pifinal7,afinal7,bfinal7);
	}

	cout<<"Printing final lambda for digit 7 \n\n";
	//check(afinal7,bfinal7);
	for(i=1;i<=N;i++)
	{
		Pifinal7[i] = Pi[i];
		cout<<Pifinal7[i]<<" ";
	}
	cout<<"\n\n";
	for(i=1;i<=N;i++)
	{
		for(j=1;j<=N;j++)
		{
			afinal7[i][j] = afinal7[i][j]/it;
			cout<<afinal7[i][j]<<" ";
		}
		cout<<"\n\n";
	}
	cout<<"\n\n";

	for(i=1;i<=N;i++)
	{
		for(j=1;j<=M;j++)
		{
			bfinal7[i][j] = bfinal7[i][j]/ it;
			cout<<bfinal7[i][j]<<" ";

		}
		cout<<"\n\n";
	}
		copy_in_file("7_",7,Pifinal7,afinal7,bfinal7,POL7);
	
	cout<<"\n\n";
	cout<<"--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n"<<endl;
	for(it=1;it<=10;it++)
	{
		cout<<"						Reading elements of lambda 8\n"<<endl;
		Read_Lambda('8');
		Initialization(delta8,alpha8,beta8,it,Psi8);
		Compute_delta(delta8,it,a,b,Psi8);
		Compute_alpha_forward(alpha8,it,a,b);
		POL8 = POlambda;
		//cout<<"\nPOL8 = "<<POL8<<endl;
		Compute_beta_backward(beta8,it,a,b);
		Compute_gamma(alpha8,beta8,gamma8,POL8);
		Compute_zai(alpha8,beta8,zai8,POL8,it,a,b);
		//reestimation(Piprime8,gamma8,aprime8,bprime8,zai8,it);
		training(it,Piprime8,gamma8,aprime8,bprime8,zai8,delta8,Psi8,alpha8,beta8,POL8,"8_",8,Pifinal8,afinal8,bfinal8);
		}
	cout<<"Printing final lambda for digit 8 \n\n";
	//check(afinal8,bfinal8);	
	for(i=1;i<=N;i++)
	{
		Pifinal8[i] = Pi[i];
		cout<<Pifinal8[i]<<" ";
	}
	cout<<"\n\n";
	for(i=1;i<=N;i++)
	{
		for(j=1;j<=N;j++)
		{
			afinal8[i][j] = afinal8[i][j]/it;
			cout<<afinal8[i][j]<<" ";
		}
		cout<<"\n\n";
	}
	cout<<"\n\n";

	for(i=1;i<=N;i++)
	{
		for(j=1;j<=M;j++)
		{
			bfinal8[i][j] = bfinal8[i][j]/it;
			cout<<bfinal8[i][j]<<" ";

		}
		cout<<"\n\n";
	}
	copy_in_file("8_",8,Pifinal8,afinal8,bfinal8,POL8);
	cout<<"\n\n";
	cout<<"--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n"<<endl;
	for(it=1;it<=10;it++)
	{
		cout<<"						Reading elements of lambda 9\n"<<endl;
		Read_Lambda('9');
		Initialization(delta9,alpha9,beta9,it,Psi9);
		Compute_delta(delta9,it,a,b,Psi9);
		Compute_alpha_forward(alpha9,it,a,b);
		POL9 = POlambda;
		//cout<<"\nPOL9 = "<<POL9<<endl;
		Compute_beta_backward(beta9,it,a,b);
		Compute_gamma(alpha9,beta9,gamma9,POL9);
		Compute_zai(alpha9,beta9,zai9,POL9,it,a,b);
		//reestimation(Piprime8,gamma8,aprime8,bprime8,zai8,it);
		training(it,Piprime9,gamma9,aprime9,bprime9,zai9,delta9,Psi9,alpha9,beta9,POL9,"9_",9,Pifinal9,afinal9,bfinal9);
		}
	cout<<"Printing final lambda for digit 9 \n\n";
	//check(afinal9,bfinal9);
	for(i=1;i<=N;i++)
	{
		Pifinal9[i] = Pi[i];
		cout<<Pifinal9[i]<<" ";
	}
	cout<<"\n\n";
	for(i=1;i<=N;i++)
	{
		for(j=1;j<=N;j++)
		{
			afinal9[i][j] = afinal9[i][j]/it;
			cout<<afinal9[i][j]<<" ";
		}
		cout<<"\n\n";
	}
	cout<<"\n\n";

	for(i=1;i<=N;i++)
	{
		for(j=1;j<=M;j++)
		{
			bfinal9[i][j] = bfinal9[i][j]/it;
			cout<<bfinal9[i][j]<<" ";

		}
		cout<<"\n\n";
	}
	copy_in_file("9_",9,Pifinal9,afinal9,bfinal9,POL9);
	cout<<"\n\n";
	cout<<"----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n"<<endl;
	for(it = 1;it<=10;it++)
	{
		cout<<"	\n\n					Reading elements of lambda car for observation "<<it<<"\n"<<endl;
		Read_Lambda('10');
		Initialization(delta10,alpha10,beta10,it,Psi10);
		Compute_delta(delta10,it,a,b,Psi10);
		Compute_alpha_forward(alpha10,it,a,b);
		POL10 = POlambda;
		Compute_beta_backward(beta10,it,a,b);
		Compute_gamma(alpha10,beta10,gamma10,POL10);
		Compute_zai(alpha10,beta10,zai10,POL10,it,a,b);
		training(it,Piprime10,gamma10,aprime10,bprime10,zai10,delta10,Psi10,alpha10,beta10,POL10,"10_",10,Pifinal10,afinal10,bfinal10);
	}
	
	cout<<"Printing final lambda for car \n\n";
	
	for(i=1;i<=N;i++)
	{
		Pifinal10[i] = Pi[i];
		cout<<Pifinal1[i]<<" ";
	}
	cout<<"\n\n";
	
	for(i=1;i<=N;i++)
	{
		for(j=1;j<=N;j++)
		{
			afinal10[i][j] = afinal10[i][j]/it;
			cout<<afinal10[i][j]<<" ";
		}
		cout<<"\n\n";
	}
	cout<<"\n\n";

	for(i=1;i<=N;i++)
	{
		for(j=1;j<=M;j++)
		{
			bfinal10[i][j] = bfinal10[i][j]/it;
			cout<<bfinal10[i][j]<<" ";

		}
		cout<<"\n\n";
	}
	cout<<"\n\n";
	copy_in_file("10_",10,Pifinal10,afinal10,bfinal10,POL10);
	cout<<"--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n"<<endl;
	for(it = 1;it<=10;it++)
	{
		cout<<"	\n\n					Reading elements of lambda alexa for observation "<<it<<"\n"<<endl;
		Read_Lambda('11');
		Initialization(delta11,alpha11,beta11,it,Psi11);
		Compute_delta(delta11,it,a,b,Psi11);
		Compute_alpha_forward(alpha11,it,a,b);
		POL11 = POlambda;
		Compute_beta_backward(beta11,it,a,b);
		Compute_gamma(alpha11,beta11,gamma11,POL1);
		Compute_zai(alpha11,beta11,zai11,POL11,it,a,b);
		training(it,Piprime11,gamma11,aprime11,bprime11,zai11,delta11,Psi11,alpha11,beta11,POL11,"11_",11,Pifinal11,afinal11,bfinal11);
	}
	
	cout<<"Printing final lambda for digit 1 \n\n";
	
	for(i=1;i<=N;i++)
	{
		Pifinal11[i] = Pi[i];
		cout<<Pifinal11[i]<<" ";
	}
	cout<<"\n\n";
	
	for(i=1;i<=N;i++)
	{
		for(j=1;j<=N;j++)
		{
			afinal11[i][j] = afinal11[i][j]/it;
			cout<<afinal11[i][j]<<" ";
		}
		cout<<"\n\n";
	}
	cout<<"\n\n";

	for(i=1;i<=N;i++)
	{
		for(j=1;j<=M;j++)
		{
			bfinal11[i][j] = bfinal11[i][j]/it;
			cout<<bfinal11[i][j]<<" ";

		}
		cout<<"\n\n";
	}
	cout<<"\n\n";
	copy_in_file("11_",11,Pifinal11,afinal11,bfinal11,POL11);
	cout<<"--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n"<<endl;
	
	for(it = 1;it<=10;it++)
	{
		cout<<"	\n\n					Reading elements of lambda speech for observation "<<it<<"\n"<<endl;
		Read_Lambda('12');
		Initialization(delta12,alpha12,beta12,it,Psi12);
		Compute_delta(delta12,it,a,b,Psi12);
		Compute_alpha_forward(alpha12,it,a,b);
		POL12 = POlambda;
		//cout<<"\nPOL1 = "<<POL1<<endl;
		Compute_beta_backward(beta12,it,a,b);
		Compute_gamma(alpha12,beta12,gamma12,POL12);
		Compute_zai(alpha12,beta12,zai12,POL12,it,a,b);
		//reestimation(Piprime1,gamma1,aprime1,bprime1,zai1,it);
		//training(it);
		training(it,Piprime12,gamma12,aprime12,bprime12,zai12,delta12,Psi12,alpha12,beta12,POL12,"12_",1,Pifinal12,afinal12,bfinal12);
	}
	cout<<"Printing final lambda for speech \n\n";
	
	for(i=1;i<=N;i++)
	{
		Pifinal12[i] = Pi[i];
		cout<<Pifinal12[i]<<" ";
	}
	cout<<"\n\n";
	
	for(i=1;i<=N;i++)
	{
		for(j=1;j<=N;j++)
		{
			afinal12[i][j] = afinal12[i][j]/it;
			cout<<afinal12[i][j]<<" ";
		}
		cout<<"\n\n";
	}
	cout<<"\n\n";

	for(i=1;i<=N;i++)
	{
		for(j=1;j<=M;j++)
		{
			bfinal12[i][j] = bfinal12[i][j]/it;
			cout<<bfinal12[i][j]<<" ";

		}
		cout<<"\n\n";
	}
	cout<<"\n\n";
	copy_in_file("12_",12,Pifinal12,afinal12,bfinal12,POL12);
	cout<<"--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n"<<endl;
	
	for(it = 1;it<=10;it++)
	{
		cout<<"	\n\n					Reading elements of lambda Book for observation "<<it<<"\n"<<endl;
		Read_Lambda('13');
		Initialization(delta13,alpha13,beta13,it,Psi13);
		Compute_delta(delta13,it,a,b,Psi13);
		Compute_alpha_forward(alpha13,it,a,b);
		POL13 = POlambda;
		//cout<<"\nPOL1 = "<<POL1<<endl;
		Compute_beta_backward(beta13,it,a,b);
		Compute_gamma(alpha13,beta13,gamma13,POL13);
		Compute_zai(alpha13,beta13,zai13,POL13,it,a,b);
		//reestimation(Piprime1,gamma1,aprime1,bprime1,zai1,it);
		//training(it);
		training(it,Piprime13,gamma13,aprime13,bprime13,zai13,delta13,Psi13,alpha13,beta13,POL13,"13_",1,Pifinal13,afinal13,bfinal13);
	}
	//check(afinal1,bfinal1);
	cout<<"Printing final lambda for digit Book \n\n";
	
	for(i=1;i<=N;i++)
	{
		Pifinal13[i] = Pi[i];
		cout<<Pifinal13[i]<<" ";
	}
	cout<<"\n\n";
	
	for(i=1;i<=N;i++)
	{
		for(j=1;j<=N;j++)
		{
			afinal13[i][j] = afinal13[i][j]/it;
			cout<<afinal13[i][j]<<" ";
		}
		cout<<"\n\n";
	}
	cout<<"\n\n";

	for(i=1;i<=N;i++)
	{
		for(j=1;j<=M;j++)
		{
			bfinal13[i][j] = bfinal13[i][j]/it;
			cout<<bfinal13[i][j]<<" ";

		}
		cout<<"\n\n";
	}
	cout<<"\n\n";
	copy_in_file("13_",13,Pifinal13,afinal13,bfinal13,POL13);
	cout<<"--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n"<<endl;
	
	for(it = 1;it<=10;it++)
	{
		cout<<"	\n\n					Reading elements of lambda Red for observation "<<it<<"\n"<<endl;
		Read_Lambda('14');
		Initialization(delta14,alpha14,beta14,it,Psi14);
		Compute_delta(delta14,it,a,b,Psi14);
		Compute_alpha_forward(alpha14,it,a,b);
		POL14 = POlambda;
		Compute_beta_backward(beta14,it,a,b);
		Compute_gamma(alpha14,beta14,gamma14,POL14);
		Compute_zai(alpha14,beta14,zai14,POL14,it,a,b);
		training(it,Piprime14,gamma14,aprime14,bprime14,zai14,delta14,Psi14,alpha14,beta14,POL14,"14_",14,Pifinal14,afinal14,bfinal14);
	}
	//check(afinal1,bfinal1);
	cout<<"Printing final lambda for Red \n\n";
	
	for(i=1;i<=N;i++)
	{
		Pifinal14[i] = Pi[i];
		cout<<Pifinal14[i]<<" ";
	}
	cout<<"\n\n";
	
	for(i=1;i<=N;i++)
	{
		for(j=1;j<=N;j++)
		{
			afinal14[i][j] = afinal14[i][j]/it;
			cout<<afinal14[i][j]<<" ";
		}
		cout<<"\n\n";
	}
	cout<<"\n\n";

	for(i=1;i<=N;i++)
	{
		for(j=1;j<=M;j++)
		{
			bfinal14[i][j] = bfinal14[i][j]/it;
			cout<<bfinal14[i][j]<<" ";

		}
		cout<<"\n\n";
	}
	cout<<"\n\n";
	copy_in_file("14_",14,Pifinal14,afinal14,bfinal14,POL14);
	cout<<"--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n"<<endl;
	

	cout<<"--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n"<<endl;
	
	}

//************************************************Reading lambda ************************************************************************

void read_trained_Lambda(long double *Pifinal , long double (*afinal)[6] , long double (*bfinal)[33],int digit)
{
	
	
	//for(digit = 0;digit<=9;digit++)
	{
		FILE *fptr;
		char name[60] = "";
		const char *filename= {0};
		sprintf(name,"%d_final_lambda.txt",digit);
		filename = name;
		fptr = fopen(filename,"r");
		if(!fptr)
		{
			cout<<"Error opening file "<<filename<<"\n\n";
		}
		else
		{
			int i=0,j=0;
			for(i=0;i<=N;i++)
			{
				Pifinal[i] = 0;
			}
			for(i=0;i<=N;i++)
			{
				for(j=0;j<=N;j++)
				{
					afinal[i][j] = 0;
				}
			}
			for(i=0;i<=N;i++)
			{
				for(j=0;j<=M;j++)
				{
					bfinal[i][j] = 0;
				}
			}

			char line[100] ="";
			//skipping first three lines
			fgets(line,100,fptr);
			fgets(line,100,fptr);
			fgets(line,100,fptr);
			long double temp;
			for(i=1;i<=N;i++)
			{
				//fscanf(fptr,"%lf ",&Pifinal[i]);
				fscanf(fptr,"%lf ",&temp);
				Pifinal[i] = temp;
			}

			fgets(line,100,fptr);
			//fgets(line,100,fptr);

			for(i=1;i<=N;i++)
			{
				for(j=1;j<=N;j++)
				{
					//afinal[i] = 0;
					//fscanf(fptr,"%lf",&afinal[i][j]);
					fscanf(fptr,"%lf",&temp);
					afinal[i][j] = temp;
				}
				fscanf(fptr,"\n");
			}
			fgets(line,100,fptr);
			for(i=1;i<=N;i++)
			{
				for(j=1;j<=M;j++)
				{
					fscanf(fptr,"%lf",&temp);
					bfinal[i][j] = temp;
				}
				fscanf(fptr,"\n");
			}

		}
		fclose(fptr);

	}
	cout<<"Lambda read for "<<digit<<endl;
}

//********************************************PREDICTION**********************************************************************************

long double compute_POL(long double Pifinal[6],long double afinal[][6], long double bfinal[][33],int OB[86],int digit)
{
	long double alpha_check[86][6]={0};
	
	int i=0,t=2,j=0;		//Induction
	//cout<<"afinal\n\n";

	for(i=1;i<=N;i++)
	{
		
		alpha_check[1][i] = Pifinal[i] * bfinal[i][OB[1]];
		
	}
	

	for(t=2;t<=T;t++)
	{
		for(j=1;j<=N;j++)
		{
			long double alpha_temp=0;
			for(i=1;i<=N;i++)
			{
				alpha_temp += alpha_check[t-1][i] * afinal[i][j] ;
			}
			alpha_check[t][j] = alpha_temp * bfinal[j][OB[t]];
		}
	}
	
	/*cout<<"alpha matrix \n\n";
	for(t=2;t<=T;t++)
	{
		for(j=1;j<=N;j++)
		{
			cout<<alpha_check[t][j]<<" ";
		}
		cout<<"\n\n";
	}*/

//Termination
	 long double POlambda_check = 0;
	for(i=1;i<=N;i++)
	{
		POlambda_check += alpha_check[T-1][i];
	}
	if(POlambda_check < 0)
	{
		POlambda_check = 0;
	}
	
	cout<<"P(O | lambda) = "<<POlambda_check<<" with word "<<words[digit]<<endl;
	
	return POlambda_check;

}



void test(const char *filename,int digit,int iteration,bool flag = true)
{
	int OB[86]= {1};
	//FILE *fptr = fopen("observation.txt","r");
	long double pol_arr[15]={0};
	int i=0;
	int temp=0;
	//writing observations into array
	for(i=1;i<=85;i++)
	{
		//fscanf(fptr,"%d ",&temp);
		OB[i] = observation[i];
	}
	//fclose(fptr);
	

	pol_arr[0] = compute_POL(Pifinal0,afinal0,bfinal0,OB,0);
	pol_arr[1] = compute_POL(Pifinal1,afinal1,bfinal1,OB,1);
	pol_arr[2] = compute_POL(Pifinal2,afinal2,bfinal2,OB,2);
	pol_arr[3] = compute_POL(Pifinal3,afinal3,bfinal3,OB,3);
	pol_arr[4] = compute_POL(Pifinal4,afinal4,bfinal4,OB,4);
	pol_arr[5] = compute_POL(Pifinal5,afinal5,bfinal5,OB,5);
	pol_arr[6] = compute_POL(Pifinal6,afinal6,bfinal6,OB,6);
	pol_arr[7] = compute_POL(Pifinal7,afinal7,bfinal7,OB,7);
	pol_arr[8] = compute_POL(Pifinal8,afinal8,bfinal8,OB,8);
	pol_arr[9] = compute_POL(Pifinal9,afinal9,bfinal9,OB,9);
	pol_arr[10] = compute_POL(Pifinal10,afinal10,bfinal10,OB,10);
	pol_arr[11] = compute_POL(Pifinal11,afinal11,bfinal11,OB,11);
	pol_arr[12] = compute_POL(Pifinal12,afinal12,bfinal12,OB,12);
	pol_arr[13] = compute_POL(Pifinal13,afinal13,bfinal13,OB,13);
	pol_arr[14] = compute_POL(Pifinal14,afinal14,bfinal14,OB,14);

	long double max_pol=-1;
	int max_pol_index=0;
	for(i=0;i<=14;i++)
	{
		if(pol_arr[i] > max_pol)
		{
			max_pol = pol_arr[i];
			max_pol_index = i;
		}
	}

	predicted_word_index = max_pol_index;
	
	if(max_pol_index == digit)
		accuracy++;
	
		cout<<"\nPredicted word = "<<words[max_pol_index]<<"\n\n";
	
	if(flag == true)
		cout<<"Actual word = "<<words[digit]<<"\n\n";

}




void prediction(const char s[],int digit)
{
	int i=0;
	for(i=11;i<=20;i++)
	{
		count_val++;
		
		/*
			char name[100] = "A_";
			FILE *fpointer;
			const char * fname = {0};
			sprintf(name,"%s%c%s",name,c,".txt");
			fname = name;
			fpointer = fopen(fname,"r");
		*/
		char name[100] ="";
		sprintf(name,"%s%d.txt",s,i);
		const char *filename = name;
		if(!filename)
		{
			cout<<"Error opening file "<<filename<<"\n\n";
		}
		else
		{

		digit_Prediction(filename);
		test(filename,digit,i);
		}
	}
	//print_result(digit,digit);
}


//**********************************************************MAIN************************************************************************************

int predict()
{
	char num[3], ch_time[10],in_filepath[4096];
	//compute_universe();																		//universe has already been created and stored in file Universe.txt hence commented
	//generate_codebook();																		//codebook has already been created and stored in file Codebook.txt hence commented
	read_codebook();
	//generate_obs();																			//to create observation sequence for each digit already done heance commented
	//train();

	
	cout<<"Reading tranied Lambda values .......\n\n";
	read_trained_Lambda(Pifinal0,afinal0,bfinal0,0);
	read_trained_Lambda(Pifinal1,afinal1,bfinal1,1);
	read_trained_Lambda(Pifinal2,afinal2,bfinal2,2);
	read_trained_Lambda(Pifinal3,afinal3,bfinal3,3);
	read_trained_Lambda(Pifinal4,afinal4,bfinal4,4);
	read_trained_Lambda(Pifinal5,afinal5,bfinal5,5);
	read_trained_Lambda(Pifinal6,afinal6,bfinal6,6);
	read_trained_Lambda(Pifinal7,afinal7,bfinal7,7);
	read_trained_Lambda(Pifinal8,afinal8,bfinal8,8);
	read_trained_Lambda(Pifinal9,afinal9,bfinal9,9);
	read_trained_Lambda(Pifinal10,afinal10,bfinal10,10);
	read_trained_Lambda(Pifinal11,afinal11,bfinal11,11);
	read_trained_Lambda(Pifinal12,afinal12,bfinal12,12);
	read_trained_Lambda(Pifinal13,afinal13,bfinal13,13);
	read_trained_Lambda(Pifinal14,afinal14,bfinal14,14);
	
	/*
	int input;
	do
	{
	cout<<"Enter 1.Train 2.Predict input files 3.Live Testing 4. Exit: ";
	cin>>input;
	switch (input)
	{
	case 1:
		{
			train();
			break;
		}
	case 2:
		{
			accuracy = 0;
			prediction("0_",0);
			prediction("1_",1);
			prediction("2_",2);
			prediction("3_",3);
			prediction("4_",4);
			prediction("5_",5);
			prediction("6_",6);
			prediction("7_",7);
			prediction("8_",8);
			prediction("9_",9);
			prediction("10_",10);
			prediction("11_",11);
			prediction("12_",12);
			prediction("13_",13);
			prediction("14_",14);
			cout<<"\n\nTotal Accuracy = "<<(accuracy*100)/count_val<<"%\n\n";
			break;
		}
	case 3:
		{*/
			//testing on live recording
				int training = 0;
				int timeslice = 3;
				//printf("\nEnter recording time (in integral seconds): ");
				//scanf("%d",&timeslice);
					
				//resetting buffers
				memset(in_filepath,0,msgsize);
				memset(ch_time,0,sizeof(ch_time));
				memset(num,0,3);
				sprintf(ch_time,"%d",timeslice);
				
				_snprintf(in_filepath, sizeof(in_filepath), "%s %s %s %s","Recording_Module.exe", ch_time, "input_file.wav","input_file.txt");
				system(in_filepath);
				// return 0;
				digit_Prediction("input_file.txt");
				test("input_file.txt",1,1,false);
				//Ex. - ("Recording_Module.exe 3 input_file.wav input_file.txt)
		/*break;
		}
	case 4:
		{
		cout<<"Exiting\n";
		break;
		}
	default:
		{
		cout<<"enter correct input\n";
		break;
		}
	}
	
	}while(input != 4);
	


	

	*/
	return predicted_word_index;
	//return 0;
}

















/*

//training for digit 1 working well
void training(int it)
{
	int iterations = 200,count=0;
	//long double Piprimet[6]={0}
	while(iterations--)
	{
		count++;
		cout<<"iteration no. "<<count<<endl;

		reestimation(Piprime1,gamma1,aprime1,bprime1,zai1,it); 				//this will computer lambda prime (new lambda)
		Initialization(delta1,alpha1,beta1,it,Psi1);
		Compute_alpha_forward(alpha1,it,aprime1,bprime1);
		POL1 = POlambda;
		Compute_beta_backward(beta1,it,aprime1,bprime1);
		Compute_gamma(alpha1,beta1,gamma1,POL1);
		Compute_zai(alpha1,beta1,zai1,POL1,it,aprime1,bprime1);
		Compute_delta(delta1,it,aprime1,bprime1,Psi1);						//applying viterbi again


	}
}



*/