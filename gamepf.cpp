//#include <iostream>
//#include "help.h"
//
//using namespace std;
//struct Enemies {
//	int x;
//	int y;
//	bool state;
//	int enem_no;
//};
//struct Bullets {
//	int x;
//	int y;
//	bool exists;
//	int xspeed;
//	int yspeed;
//
//};
//const int MAXbullets = 100;
//Bullets bullets[MAXbullets];
//// function to initialize bullet to store it into memory
//void initializeBullet(Bullets bullets[], int size) {
//	for (int i = 0; i < size; ++i) {
//		bullets[i].exists = false;
//		
//		bullets[i].xspeed = 0;
//		bullets[i].yspeed = -5; 
//	}
//}
//// function to shoot  bullet
//void shootBullet(Bullets bullets[], int size, int playerX, int playerY,int xspeed,int yspeed) {
//	for (int i = 0; i < size; ++i) {
//		if (!bullets[i].exists) {
//			bullets[i].exists = true;
//			bullets[i].x = playerX + 5; 
//			bullets[i].y = playerY - 20; 
//			xspeed = 10;
//			yspeed = 5;
//			
//			break; // Stop after shooting one bullet
//		}
//	}
//}
//void removeBox(int box_x, int box_y)
//{
//	myRect(box_x, box_y, box_x + 20, box_y + 20, 0, 0, 0);
//}
//
//void drawBox(int box_x, int box_y)
//{
//	myRect(box_x, box_y, box_x + 20, box_y + 20, 0, 0, 255, 255, 255, 0);
//}
//
//
//
//int main()
//{
//	const int MAX_BULLETS = 10;
//	Bullets bullets[MAX_BULLETS];
//
//	// Initialize bullets
//	initializeBullet(bullets, MAX_BULLETS);
//
//	int playerX = 400; // Example player position
//	int playerY = 300;
//	int left_limit = 20, right_limit = 820, top_limit = 60, bottom_limit = 360;
//	int box_x = 20, box_y = 60, step_size = 5;
//	char direction = ' ';
//
//	drawText(20, 10, 10, 255, 255, 255, "Welcome to the robot shooter game"); // drawText function draws text on the screen with arguments size, x, y, r, g, b, text
//	myRect(left_limit - 2, top_limit - 2, right_limit + 2, bottom_limit + 2, 255, 255, 255); // myRect function draws a rectangle with arguments x1, y1, x2, y2, r, g, b, r2, g2, b2
//	drawText(20, 10, 365, 0, 255, 0, "Use Cursor keys to move the box!");
//	drawBox(box_x, box_y);
//
//	int whichKey = 0;
//
//	while (whichKey != 7) // 7 is the code for ESC key
//	{
//		if (isKeyPressed(whichKey)) // isKeyPressed function returns true if a key is pressed and whichKey tells that which key was pressed
//		{
//			switch (whichKey)
//			{
//			case 1:
//				direction = 'L';
//				break;
//			case 2:
//				direction = 'U';
//				break;
//			case 3:
//				direction = 'R';
//				break;
//			case 4:
//				direction = 'D';
//				break;
//			case 5:
//				direction = ' ';
//				for (int i = 0; i < MAXbullets; i++) {
//					if (!bullets[i].exists) {
//						bullets[i].x = box_x;
//						bullets[i].y = box_y;
//						bullets[i].exists = true;
//						break;
//
//					}
//				}
//
//			}
//
//			Sleep(25); // 25 milliseconds
//
//			switch (direction)
//			{
//			case 'L':
//				// Left
//				removeBox(box_x, box_y);
//				if (box_x > left_limit)
//					box_x -= step_size;
//				drawBox(box_x, box_y);
//				direction = ' ';
//				break;
//			case 'U':
//				// Up
//				removeBox(box_x, box_y);
//				if (box_y > top_limit)
//					box_y -= step_size;
//				drawBox(box_x, box_y);
//				direction = ' ';
//				break;
//			case 'R':
//				// Right
//				removeBox(box_x, box_y);
//				if (box_x + 20 < right_limit)
//					box_x += step_size;
//				drawBox(box_x, box_y);
//				direction = ' ';
//				break;
//			case 'D':
//				// Down
//				removeBox(box_x, box_y);
//				if (box_y + 20 < bottom_limit)
//					box_y += step_size;
//				drawBox(box_x, box_y);
//				direction = ' ';
//				break;
//			}
//		}
//
//		return 0;
//	}
//}
