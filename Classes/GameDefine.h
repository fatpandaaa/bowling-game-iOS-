/*
 *  GameDefine.h
 *  StrikeKnight
 *
 *  Created by admin on 5/17/11.
 *  Copyright 2011 __MyCompanyName__. All rights reserved.
 *
 */

#define ANI_RESOURCE_INCLUDE 
//Resource Nums
#define MENU_ANI_NUM	9
#define PIN_NUM			10

//Image Nums
#define PIN_IMGAE_NUM	8
#define BL_IMAGE_NUM	9
#define FB_IMAGE_NUM	9
#define NUMBER_IMAGE_NUM 10
//ANIMATION Image Nums

#define CRY_ANI_NUM		12
#define DANCE_ANI_NUM	21
#define FISTPUMP_ANI_NUM	10
#define GUITAR_ANI_NUM	12
#define HIGHSCORE_ANI_NUM	14
#define HSHAKE_ANI_NUM	14
#define LIGHTNINGARC_ANI_NUM	16
#define LIGHTNINGHAND_ANI_NUM	12
#define PINRAIN_ANI_NUM	20
#define POINT_ANI_NUM	12
#define PUNCH_ANI_NUM	11
#define SHIELD_ANI_NUM	10
#define SPLITIMAGE_ANI_NUM 8

#define IPAD_WIDTH	768
#define IPAD_HEIGHT	1024

#define MAX_USER_NUM 4
#define MAX_SCORE_LENGTH	4

#define CHECK_CHANGE_ALPHA	0.6
#define NUM_LENGTH 3
#define NUM_WIDTH	20
#define NUM_HEIGHT	23

#define SCORE_CHANGE_STEP	20
// Game Info
#define RATE_WIDTH 768.0f / 320
#define RATE_HEIGHT 1024.0f / 480

#define TOP_MARGIN 239.0f * RATE_HEIGHT
#define BOTTOM_MARGIN 480.0f * RATE_HEIGHT
#define LEFT_TOP_X 129.0f * RATE_WIDTH
#define RIGHT_TOP_X 211.0f * RATE_WIDTH
#define LEFT_BOTTOM_X 0.0f * RATE_WIDTH
#define RIGHT_BOTTOM_X 320.0f * RATE_WIDTH
#define FOUL_LINE_Y 330.0f * RATE_HEIGHT

#define INIT_PUCK_POS_X 160.0f * RATE_WIDTH
#define INIT_PUCK_POS_Y 420.0f * RATE_HEIGHT//non_needed
#define INIT_PUCK_WIDTH 45.0f * RATE_WIDTH
#define INIT_PUCK_HEIGHT 39.0f * RATE_HEIGHT
#define INIT_PUCK_APPEAR_V_X 10.0f * RATE_WIDTH
#define INIT_PUCK_APPEAR_V_Y 4.0f * RATE_HEIGHT
#define INIT_PUCK_APPEAR_POS_X 30.0f * RATE_WIDTH

#define PIN0_POS_LEFT_X 120.0f * RATE_WIDTH
#define PIN0_POS_RIGHT_X 141.0f * RATE_WIDTH
#define PIN0_POS_Y 242.0f * RATE_HEIGHT
#define PIN1_POS_LEFT_X 130.0f * RATE_WIDTH
#define PIN1_POS_RIGHT_X 151.0f * RATE_WIDTH
#define PIN1_POS_Y 250.0f * RATE_HEIGHT
#define PIN2_POS_LEFT_X 141.0f * RATE_WIDTH
#define PIN2_POS_RIGHT_X 162.0f * RATE_WIDTH
#define PIN2_POS_Y 255.0f * RATE_HEIGHT
#define PIN3_POS_LEFT_X 151.0f * RATE_WIDTH
#define PIN3_POS_RIGHT_X 172.0f * RATE_WIDTH
#define PIN3_POS_Y 258.0f * RATE_HEIGHT
#define PIN4_POS_LEFT_X 162.0f * RATE_WIDTH
#define PIN4_POS_RIGHT_X 183.0f * RATE_WIDTH
#define PIN4_POS_Y 255.0f * RATE_HEIGHT
#define PIN5_POS_LEFT_X 172.0f * RATE_WIDTH
#define PIN5_POS_RIGHT_X 193.0f * RATE_WIDTH
#define PIN5_POS_Y 250.0f * RATE_HEIGHT
#define PIN6_POS_LEFT_X 183.0f * RATE_WIDTH
#define PIN6_POS_RIGHT_X 204.0f * RATE_WIDTH
#define PIN6_POS_Y 244.0f * RATE_HEIGHT
#define PIN7_POS_LEFT_X 141.0f * RATE_WIDTH
#define PIN7_POS_RIGHT_X 162.0f * RATE_WIDTH
#define PIN7_POS_Y 242.0f * RATE_HEIGHT
#define PIN8_POS_LEFT_X 162.0f * RATE_WIDTH
#define PIN8_POS_RIGHT_X 183.0f * RATE_WIDTH
#define PIN8_POS_Y 242.0f * RATE_HEIGHT
#define PIN9_POS_LEFT_X 151.0f * RATE_WIDTH
#define PIN9_POS_RIGHT_X 172.0f * RATE_WIDTH
#define PIN9_POS_Y 250.0f * RATE_HEIGHT

#define PIN_WIDTH 28.0f * RATE_WIDTH
#define PIN_HEIGHT 57.0f * RATE_HEIGHT

#define PUCK_MOVE_INTERVAL 0.02f
#define PIN_MOVE_INTERVAL 0.01f
#define BL_FB_MOVE_INTERVAL 0.2f
#define NUM_CHANGE_INTERVAL	0.1f

#define MAX_VELOCITY_X 25.0f * RATE_WIDTH
#define MAX_VELOCITY_Y 25.0f * RATE_HEIGHT * 1.4f
#define MIN_VELOCITY_X 0.5f * RATE_WIDTH
#define MIN_VELOCITY_Y 0.5f * RATE_HEIGHT * 1.4f
#define K_VX 1.0f / 3.0f 
#define K_VY 1.0f / 3.0f 

#define FOUL_START_X		180
#define FOUL_END_X			604

#define CHARACTER_MOVE_INTERVAL 0.1f

#define MOVE_FRAME_VIEW_INTERVAL	1.5
#define SCALE_BIG_SMALL_VIEW_INTERVAL	1.0
