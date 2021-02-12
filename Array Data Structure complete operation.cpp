#include<iostream>
using namespace std;
int main()
{
	//Insert at beginning of array
	int arr[10],totalelement=0,b=0;
	int element,choice =0,currentposition=0;
	while (choice!=9)
	{
	cout<<"\n****Main Menu****";
	cout<<"\nEnter Choice. \n 1. Insert at beginning. \n 2. Insert at last position. \n 3. Insert at specific position. \n 4. Delete from beginning. \n 5. Delete from last. \n 6. Delete from specific Position. \n 7. Search an Element. \n 8. View your array. \n 9. Exit. \n";
	cin>>choice;
	switch(choice)
	{
	case 1:
	if(totalelement>9)
	{
		cout<<"\nSorry Array is full. You have to delete an element before inserting.";
	}
	else 
	{
		cout<<"\nEnter Element you want to insert in array.";
	    cin>>element;
	    for (int i=9;i>0;i--)
	    {
	    	arr[i]=arr[i-1];
		}
	    arr[0]=element;
	    totalelement++;
	    currentposition++;
	    cout<<"\nElement inserted.";
	}
	break;
	case 2:
		if (currentposition>=9)
		{
			cout<<"\nSorry Array is full. First Delete an element before inserting any element.";
		}
		else 
		{
			cout<<"\nEnter element You want to insert : ";
			cin>>element;
			arr[currentposition]=element;
			cout<<"\nElement inserted.";
			totalelement++;
			currentposition++;
		}
		break;
	case 3:
		if(totalelement>=9)
		{
			cout<<"\nSorry Array is full. Delete an element before inserting one.";
		}
		else
		{
			int position;
			cout<<"\nEnter the position You want to insert the element : ";
			cin>>position;
			cout<<"\nEnter the element you want to insert : ";
			cin>>element;
			if(position<10 && position>-1)
			{
			
			for(int i=9;i>=position;i--)
			{
				arr[i]=arr[i-1];
			}
			arr[position-1]=element;
			cout<<"\nElement Inserted.";
			totalelement++;
			currentposition++;}
			else {
				cout<<"\nEnter a Valid Position.";
			}
		}
		break;
	case 4:
		if(totalelement==0)
		{
			cout<<"\nSorry No Element found to be deleted. Please Insert an ELement before deleting.";
		}
		else
		{
			for(int i=0;i<=9;i++)
			{
				arr[i]=arr[i+1];
			}
			cout<<"\nElement deleted.";
			totalelement--;
			currentposition--;
		}
		break;
	case 5:
		if (totalelement==0)
		{
			cout<<"\nNo Element present in array. Please Insert an element before Deleting.";
		}
		else
		{
			if(currentposition==9)
			{
				arr[9]=0;
				cout<<"\nElement Deleted.";
			}
			else 
			{
				arr[currentposition]=arr[currentposition+1];
				cout<<"\nElement Deleted.";
			}
		}
		break;
	case 6:
		if(totalelement == 0)
		{
			cout<<"\nNo Element is present in array. Please Insert element before deleting.";
		}
		else
		{
			int position;
			cout<<"\nEnter position you want to delete an element : ";
			cin>>position;
			if(position>=0 && position<10)
			{
				for (int i=position-1;i<9;i++)
				{
					arr[i]=arr[i+1];
				}
				cout<<"\nElement Deleted.";
				currentposition--;
				totalelement--;
			}
			
		}
	case 7:
		cout<<"\nEnter element you want to search : ";
		cin>>element;
		for (int i=0; i<=9;i++)
		{
			if (arr[i]==element)
			 cout<<"\nElement Found at "<<i<<" index.";
			 b=1;
		}
		if(b==0)
		{
			cout<<"\nElement not found.";
		}
		break;
	case 8 :
		if (currentposition==0)
		{
			cout<<"\nNo Element is present in array.";
		}
		else
		{
		for(int i=0; i<currentposition; i++)
		{
			cout<<"Element at position "<<i<<" = "<<arr[i]<<"\n";
		}
	}
	    break;
	case 9:
		choice=9;
		break;
	default :
		cout<<"\nEnter A Valid Choice.";
}
}
	return 0;
}
