  #include   <stdio.h>   
  #include   <stdlib.h>   
  #include   <time.h>   
    
  int   main()   
  {   
        clock_t       start,   finish;   
          
        double       elapsed_time;   
    
        start=clock();   
        //do   sonething   ...   
        finish=clock();   
    
        elapsed_time = finish-start;   
		printf("%f",elapsed_time);
    
  }  