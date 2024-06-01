// Muhammad Noor
// 23i-2520
// DS-A
#include <iostream>
#include <stdlib.h>
#include <cstdlib>
#include<stdio.h>
#include<ctime>
using namespace std;
int main(){
	char maze[26][26]={"#########################",// making the obstacles for the game for smooth work
			  "#.......................#",
			  "#.......................#",
			  "#..######.......######..#",
			  "#..######.......######..#",
			  "#.......................#",
			  "#.......................#",
			  "#.......................#",
			  "#...#...#########...#...#",
			  "#...#.......#.......#...#",
			  "#...#.......#.......#...#",
			  "#...#.......#.......#...#",
			  "#...######..#..######...#",
			  "#...#.......#.......#...#",
			  "#...#.......#.......#...#",
			  "#...#...............#...#",
			  "#...#...###...###...#...#",
			  "#...#...#.......#...#...#",
			  "#...#...#.......#...#...#",
			  "#...#...#.......#...#...#",
			  "#...#...#.......#...#...#",
			  "#...#...#########...#...#",
			  "#.......................#",
			  "#.......................#",
			  "#########################"};
			  
	char maze_2[26][26]={"#########################",
			  "#.......................#",
			  "#.......................#",
			  "#..######.......######..#",
			  "#..######.......######..#",
			  "#.......................#",
			  "#.......................#",
			  "#.......................#",
			  "#...#...#########...#...#",
			  "#...#.......#.......#...#",
			  "#...#.......#.......#...#",
			  "#...#.......#.......#...#",
			  "#...######..#..######...#",
			  "#...#.......#.......#...#",
			  "#...#.......#.......#...#",
			  "#...#...............#...#",
			  "#...#...###...###...#...#",
			  "#...#...#.......#...#...#",
			  "#...#...#.......#...#...#",
			  "#...#...#.......#...#...#",
			  "#...#...#.......#...#...#",
			  "#...#...#########...#...#",
			  "#.......................#",
			  "#.......................#",
			  "#########################"};
			  
			  
	int monster_1_x = 8,monster_1_y = 7;
	int monster_2_x = 16,monster_2_y = 7;
	int player_x = 19, player_y 	 = 11;
	char player = 'v',control;
	int rand_mov=0,rand_mov_2=0,dot_check = 0;
	srand(time(0));
	while(true){
	
	
		if(player_y == monster_1_y && (player_x == monster_1_x+1 || player_x == monster_1_x-1 || player_x == monster_1_x)){
			cout<<"You lose"<<endl;
			break;}
		if(player_y == monster_2_y && (player_x == monster_2_x+1 || player_x == monster_2_x-1 || player_x == monster_2_x)){
			cout<<"You lose"<<endl;
			break;}
		
		system ("/bin/stty raw");
  		system ("/bin/stty -echo");
  		control = getc(stdin);
  		system ("/bin/stty echo");
  		system ("/bin/stty cooked");
  	
  		
			rand_mov = rand()%4;
		
		if(rand_mov == 0 && maze[monster_1_y+1][monster_1_x] != '#'){
			monster_1_y += 1;
			maze[monster_1_y-1][monster_1_x] = maze_2[monster_1_y-1][monster_1_x];
			}
		else if(rand_mov == 1 && maze[monster_1_y-1][monster_1_x] != '#'){
			monster_1_y -= 1;
			maze[monster_1_y+1][monster_1_x] = maze_2[monster_1_y+1][monster_1_x];
			}
		else if(rand_mov == 2 && maze[monster_1_y][monster_1_x-1] != '#'){
			monster_1_x -= 1;
			maze[monster_1_y][monster_1_x+1] = maze_2[monster_1_y][monster_1_x+1];
			}
		else if(rand_mov == 3 && maze[monster_1_y][monster_1_x+1] != '#'){
			monster_1_x += 1;
			maze[monster_1_y][monster_1_x-1] = maze_2[monster_1_y][monster_1_x-1];
			}
		

			rand_mov_2 = rand()%4;
		
			
		if(rand_mov_2 == 0 && maze[monster_2_y+1][monster_2_x] != '#'){
			monster_2_y += 1;
			maze[monster_2_y-1][monster_2_x] = maze_2[monster_2_y-1][monster_2_x];
			}
		else if(rand_mov_2 == 1 && maze[monster_2_y-1][monster_2_x] != '#'){
			monster_2_y -= 1;
			maze[monster_2_y+1][monster_2_x] = maze_2[monster_2_y+1][monster_2_x];
			}
		else if(rand_mov_2 == 2 && maze[monster_2_y][monster_2_x-1] != '#'){
			monster_2_x -= 1;
			maze[monster_2_y][monster_2_x+1] = maze_2[monster_2_y][monster_2_x+1];
			}
		else if(rand_mov_2 == 3 && maze[monster_2_y][monster_2_x+1] != '#'){
			monster_2_x += 1;
			maze[monster_2_y][monster_2_x-1] = maze_2[monster_2_y][monster_2_x-1];
			}
	
		system("clear");
		
		maze[player_y][player_x] = ' ';
		maze_2[player_y][player_x] = ' ';
		if(control == 'w' && maze[player_y-1][player_x] != '#'){
			player_y -= 1;
			player = 'v';}
		else if(control == 's' && maze[player_y+1][player_x] != '#'){
			player_y += 1;
			player = '^';}
		else if(control == 'a' && maze[player_y][player_x-1] != '#'){
			player_x -= 1;
			player = '>';}
		else if(control == 'd' && maze[player_y][player_x+1] != '#'){
			player_x += 1;	
			player = '<';}
		else if(control == 'q')
			break;
			
			
			
		for(int i=0;i<25;i++)
			{
			for(int j=0;j<25;j++){
				if(i == player_x && j == player_y)
					maze[j][i] = player;
				if(i == monster_1_x && j == monster_1_y)
					maze[j][i] = '8';
				if(i == monster_2_x && j == monster_2_y)
					maze[j][i] = '8';
			}
	
			}
			
		for(int i=0;i<25;i++){
			for(int j=0;j<25;j++){
				cout<<maze[i][j];
			}
			cout<<endl;
		}
		
		//checking the connditions
		dot_check = 0;
		for(int i=0;i<25;i++){
			for(int j=0;j<25;j++){
				if(maze[j][i] == '.')
					dot_check++;
				}
			}
	
	if(dot_check == 0){
		cout<<"You win";
		break;}	
		
	}
	
	return 0;
	
	}
