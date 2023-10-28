#include <stdio.h>
#include <stdlib.h>

#define MAX_CANDIDATES 10
  
typedef struct
{
  
char name[50];
   
int votes;
 
} Candidate;

 
void
castVote (Candidate candidates[], int numCandidates)
{
  
int choice;
  
 
printf ("Candidates:\n");
  
for (int i = 0; i < numCandidates; i++)
    {
      
printf ("%d. %s\n", i + 1, candidates[i].name);
    
} 
 
printf ("Enter your choice: ");
  
scanf ("%d", &choice);
  
 
if (choice >= 1 && choice <= numCandidates)
    {
      
candidates[choice - 1].votes++;
      
printf ("Vote casted successfully!\n");
    
}
  else
    {
      
printf ("Invalid choice!\n");
    
}

}


 
void
displayResults (Candidate candidates[], int numCandidates)
{
  
printf ("Results:\n");
  
for (int i = 0; i < numCandidates; i++)
    {
      
printf ("%s: %d votes\n", candidates[i].name, candidates[i].votes);

} 
} 
 
int

main ()
{
  
int numCandidates;
  
 
printf ("Enter the number of candidates: ");
  
scanf ("%d", &numCandidates);
  
 
if (numCandidates <= 0 || numCandidates > MAX_CANDIDATES)
    {
      
printf ("Invalid number of candidates!\n");
      
return 1;
    
}
  
 
Candidate candidates[MAX_CANDIDATES];
  
 
for (int i = 0; i < numCandidates; i++)
    {
      
printf ("Enter the name of candidate %d: ", i + 1);
      
scanf ("%s", candidates[i].name);
      
candidates[i].votes = 0;
    
} 
 
while (1)
    {
      
int choice;
      
 
printf ("\nMenu:\n");
      
printf ("1. Cast Vote\n");
      
printf ("2. Display Results\n");
      
printf ("3. Exit\n");
      
printf ("Enter your choice: ");
      
scanf ("%d", &choice);
      
 
switch (choice)
	{
	
case 1:
	  
castVote (candidates, numCandidates);
	  
break;
	
case 2:
	  
displayResults (candidates, numCandidates);
	  
break;
	
case 3:
	  
printf ("Exiting...\n");
	  
return 0;
	
default:
	  
printf ("Invalid choice!\n");
	  
break;
	
}
    
}
  
 
return 0;

}


