#include<universe.h>
#include<stdlib.h>
char arr[3][3];
char name[20];
int changer=0;
int main()
{
     system("D:\\linker.vbs");
    printf("You are 'X' remember it::\n");
    printf("Dev. by Abhijnan Mallick\n");
    // printf("coordinates are like (0,0),(0,1),(1,1),(2,2) like that...::\nLets begin\n");
    int x,y;
    // char comma;
    printf("Enter your name::");
    gets(name);
    
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            arr[i][j]=' ';
            
        }
    }
    int level=0;
    while(1)
    {
        
        changer++;
        
        if(changer==1)
        {
            system("cls");
            display();
        }
        // display();
    printf("Enter the position::");

    scan(x);
    system("cls");
    
    if(x==1){x=0;y=0;}
    if(x==2){x=0;y=1;}
    if(x==3){x=0;y=2;}
    if(x==4){x=1;y=0;}
    if(x==5){x=1;y=1;}
    if(x==6){x=1;y=2;}
    if(x==7){x=2;y=0;}
    if(x==8){x=2;y=1;}
    if(x==9){x=2;y=2;}
    get_player(x,y);
    game_checker();
    display();
    system("cls");
    get_computer();
    game_checker();
    display();
for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                if(arr[j][i]!=' ')
                {
                    level++;
                }
            }
        }
        if(level==9){printf("draw..hehe!!\n\n");system("taskkill /im vlc.exe");exit(0);}
    level=0;
    }

}

void get_player(int x,int y)
{
    
    if(arr[x][y]==' ')
    {
        arr[x][y]='X';
    }
    else{printf("\nnot empty try again!!\n");getch();exit(0);}
}


void get_computer()
{
    int mark=0,vr=0;
    if(mark==0){vr=offence();}
    if(vr!=44){defence();}
}

int offence()
{
    
    int i,j,checker=0,breaker=0,returner=0,dark=0;
    //column
    if(dark==0)
    {
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            if(arr[j][i]=='O')
            {
                checker++;
            }
        }
        for(j=0;j<=2;j++)
        {
            if(checker==2&&arr[j][i]==' ')
            {
                dark=1;
                returner=44;
                breaker=1;
                arr[j][i]='O';
                break;
            }
            
        }
        checker=0;
        if(breaker==1)
        {
            break;
        }
    }
    }
    //column ends

    //row
    if(dark==0)
    {
       for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            if(arr[i][j]=='O')
            {
                checker++;
            }
        }
        for(j=0;j<=2;j++)
        {
            if(checker==2&&arr[i][j]==' ')
            {
                dark=1;
                returner=44;
                breaker=1;
                arr[i][j]='O';
                break;
            }
            
        }
        checker=0;
        if(breaker==1)
        {
            break;
        }
    } 
    }
    //row ends

    //diagonal:1
    if(dark==0)
    {
           for(i=0;i<=2;i++)
        {
        for(j=0;j<=2;j++)
        {
            if(arr[j][j]=='O')
            {
                checker++;
            }
        }
        for(j=0;j<=2;j++)
        {
            if(checker==2&&arr[j][j]==' ')
            {
                dark=1;
                returner=44;
                breaker=1;
                arr[j][j]='O';
                break;
            }
            
        }
        checker=0;
        if(breaker==1)
        {
            break;
        }
    }
    }
    //diagonal:1 ends
    
    //diagonal:2
    if(dark==0)
    {
        for(i=0;i<=2;i++)
        {
        for(j=0;j<=2;j++)
        {
            if(arr[j][2-j]=='O')
            {
                checker++;
            }
        }
        for(j=0;j<=2;j++)
        {
            if(checker==2&&arr[j][2-j]==' ')
            {
                dark=1;
                returner=44;
                breaker=1;
                arr[j][2-j]='O';
                break;
            }
            
        }
        checker=0;
        if(breaker==1)
        {
            break;
        }
    }
    }
    //diagonal:2 ends
    dark=0;
    return returner;
}

defence()
{
    int i,j,checker=0,mark=0,defender=0,attacker=0,atordef=0;

    //row
    if(defender==0)
    {
                        //row..
    for(j=0;j<3;j++)
    {
    for(i=0;i<3;i++)
    {
       
        if(arr[j][i]=='X')
        {
        checker++;
        }
    }
    for(i=0;i<3;i++)
    {
        if(checker==2&&arr[j][i]==' ')
        {
            defender=1;
            arr[j][i]='O';
            mark=1;
            
            break;
        }

    }
    checker=0;
    if(mark==1)
    {
        break;
    }
    }  

       //row ends..
    }

    //column
    if(defender==0)
    {
        for(j=0;j<3;j++)
        {
           
      
           
            for(i=0;i<3;i++)
            {
                if(arr[i][j]=='X')
                    {
                        checker++;
                    }
            }
            for(i=0;i<3;i++)
            {
                if(checker==2&&arr[i][j]==' ')
                    {
                        defender=1;
                        arr[i][j]='O';
                        mark=1;
                        break;
                    }
            }
            
    atordef=0;
    attacker=0;
    checker=0;
    if(mark==1)
    {
        break;
    }
    }
    }

    //diagonal:1
    if(defender==0)
    {
    for(j=0;j<3;j++)
    {
    for(i=0;i<3;i++)
    {
        if(arr[i][i]=='X')
       {
        attacker++;
       }
       if(arr[i][i]=='X')
       {
        checker++;
       }
    }
    for(i=0;i<3;i++)
    {
        if(attacker==2&&arr[i][i]==' ')
        {
            defender=1;
            arr[i][i]='O';
            mark=1;
            
            break;
        }
        if(checker==2&&arr[i][i]==' ')
        {
            defender=1;
            arr[i][i]='O';
            mark=1;
            
            break;
        }
    }
    attacker=0;
    checker=0;
    if(mark==1)
    {
        break;
    }
    } 
    }

    //diagonal:2
    if(defender==0)
    {
    for(j=0;j<3;j++)
    {
    for(i=0;i<3;i++)
    {
       if(arr[i][2-i]=='X')
       {
        attacker++;
       }
       if(arr[i][2-i]=='X')
       {
        checker++;
       }
    }
    for(i=0;i<3;i++)
    {
        if(attacker==2&&arr[i][2-i]==' ')
        {
            defender=1;
            arr[i][2-i]='O';
            mark=1;
            
            break;
        }
        if(checker==2&&arr[i][2-i]==' ')
        {
            defender=1;
            arr[i][2-i]='O';
            mark=1;
            
            break;
        }
    }
    attacker=0;
    checker=0;
    if(mark==1)
    {
        break;
    }
    } 
    }

    //default
    if(defender==0)
    {int breaker=0;int lealeaker=0;
        if(checker%2==0&&arr[1][1]==' ')
        {
            checker=1;
            arr[1][1]='O';
        }
        if(checker%2==0)
        {
            for(i=0;i<3;i++)
            {
                for(j=0;j<3;j++)
                {
                    if(arr[i][j]==' ')
                    {
                        checker=1;
                        arr[i][j]='O';
                        breaker=1;
                        break;
                    }
                }
                if(breaker==1)
                {
                    breaker=0;
                    break;
                }
            }
        }
        if(checker%3==0)
        {
            for(i=0;i<3;i++)
            {
                for(j=2;j>=0;j--)
                {
                    if(arr[i][j]==' ')
                    {
                        arr[i][j]='O';
                       lealeaker=1;
                        break;
                    }
                    if(lealeaker==1)
                    {
                        breaker=0;
                        break;
                    }
                }
            }
        }
     }
     checker=0;
}



void display()
{
    next;
    next;
    int i,j;
    for(i=0;i<=2;i++)
    {
        printf("\t\t");
        for(j=0;j<=2;j++)
        {
            if(j==0){printf("%2c ",arr[i][j]);}
            else{printf("|%2c ",arr[i][j]);}
            
        }next; if(i!=2){printf("\t\t-----------\n");}
    }next;next;
}

void game_checker()
{
    //row
    int i,j,player_row=0,comp_row=0,player_col=0,comp_col=0,player_diag=0,comp_diag=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(arr[i][j]=='X'){player_row++;}
            if(arr[j][i]=='X'){player_col++;}
            if(arr[j][j]=='X'){player_diag++;}
            if(arr[2][0]=='X'&&arr[1][1]=='X'&&arr[0][2]=='X'){system("cls");display();printf("%s won %c\n\n",name,3);system("taskkill /im vlc.exe");exit(0);}
            
            if(arr[i][j]=='O'){comp_row++;}
            if(arr[j][i]=='O'){comp_col++;}
            if(arr[j][j]=='O'){comp_diag++;}
            if(arr[2][0]=='O'&&arr[1][1]=='O'&&arr[0][2]=='O'){system("cls");display();printf("I won %c hehe\n\n",3);system("taskkill /im vlc.exe");exit(0);}
        }
        
        if(player_row==3){system("cls");display();printf("%s Wins %c\n\n",name,3);system("taskkill /im vlc.exe");exit(0);}
        if(player_col==3){system("cls");display();printf("%s Wins %c\n\n",name,3);system("taskkill /im vlc.exe");exit(0);}
        if(player_diag==3){system("cls");display();printf("%s Wins %c\n\n",name,3);system("taskkill /im vlc.exe");exit(0);}

        if(comp_row==3){system("cls");display();printf("I won %c you noob!!\n\n",2);system("taskkill /im vlc.exe");exit(0);}
        if(comp_col==3){system("cls");display();printf("I won %c\n\n",2);system("taskkill /im vlc.exe");exit(0);}
        if(comp_diag==3){system("cls");display();printf("I won %c lol\n\n",2);system("taskkill /im vlc.exe");exit(0);}
        
        player_row=0;
        player_col=0;
        player_diag=0;

        comp_row=0;
        comp_col=0;
        comp_diag=0;

    }
    
}