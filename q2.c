#include <stdio.h>
#include <stdlib.h>

struct student
{
	char* name;
	char* rollNo;
	char* email;
};

int main(void) {
	
	struct student s1,s2,s3;
	struct student* listOfStudents;
	int count = 0;
	
	listOfStudents = (struct student*)malloc( 100 * sizeof(struct student) );
	
	s1.name = "Basim";
	s1.rollNo = "L17-4022";
	s1.email = "basimbasi@hotmail.com";
	
	listOfStudents[count] = s1;
	count++;
	
	s2.name = "Gulraiz";
	s2.rollNo = "L18-9754";
	s2.email = "abc123@gmail.com";
	listOfStudents[count] = s2;
	count++;
	
	s3.name = "Ibrahim";
	s3.rollNo = "L17-9999";
	s3.email = "yahoo@gmail.com";
	listOfStudents[count] = s3;
	count++;
	
	printf("%s %s %s", listOfStudents[0].name, listOfStudents[0].rollNo, listOfStudents[0].email);
	printf("\n");
	printf("%s %s %s", listOfStudents[1].name, listOfStudents[1].rollNo, listOfStudents[1].email);
	printf("\n");
	printf("%s %s %s", listOfStudents[2].name, listOfStudents[2].rollNo, listOfStudents[2].email);
	printf("\n");
	
	printf("---Adding a Student---\n");
	
	char* tempName = (char*)malloc(100 * sizeof(char));
	char* tempRollNo = (char*)malloc(20 * sizeof(char));
	char* tempEmail = (char*)malloc(100 * sizeof(char));
	struct student s69;
	
	int AddChk = 1;
	char AddYN;
	while (AddChk == 1)
	{
		printf("Enter Name: ");
		scanf("%s", tempName);
		
		printf("Enter Roll Number: ");
		scanf(" %s", tempRollNo);
		
		printf("Enter Email: ");
		scanf(" %s", tempEmail);
		
		s69.name = tempName;
		s69.rollNo = tempRollNo;
		s69.email = tempEmail;
		
		listOfStudents[count] = s69;
		count++;
		
		printf("Do you want to ADD another Student? Y/N\n");
		scanf(" %c", &AddYN);
		
		if (AddYN == 'Y' || AddYN == 'y')
			AddChk = 1;
		else
			AddChk = 0;
	}
	
	printf("---Access Student---\n");
	
	int readPos;
	int readChk = 1;
	char ReadYN;
	while (readChk == 1){
	    
	    printf("Input index of student you want to read: ");
    	scanf("%d", &readPos);
    	
    	printf("\n");
    	printf("%s %s %s", listOfStudents[readPos].name, listOfStudents[readPos].rollNo, listOfStudents[readPos].email);
    	
    	printf("\n");
    	printf("Do you want to READ another Student? Y/N\n");
		scanf(" %c", &ReadYN);
		
		if (ReadYN == 'Y' || ReadYN == 'y')
			readChk = 1;
		else
			readChk = 0;
    	
	}
	
	
	printf("---Deleting Student---\n");
	
	int DeletPos;
	int deletChk = 1;
	char DeletYN;

	while(deletChk == 1){
		printf("Input index of student you want to delete: ");
	    	scanf("%d", &DeletPos);
		if(listOfStudents[DeletPos].name == NULL)
			printf("record doesn't exist\n");
		else{

		listOfStudents[DeletPos].name = NULL;
		listOfStudents[DeletPos].rollNo = NULL;
		listOfStudents[DeletPos].email = NULL;
		index--;
		printf("record deleted\n");
		}
		printf("Do you want to Delete another Student? Y/N\n");
		scanf(" %c", &DeletYN);
		if (DeletYN == 'Y' || DeletYN == 'y')
			deletChk = 1;
		else
			deletChk = 0;
	}
	return 0;
}
