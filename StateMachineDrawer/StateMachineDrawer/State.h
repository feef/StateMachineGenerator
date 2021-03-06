//
//  State.h
//  StateMachineDrawer
//
//  Created by sharif ahmed on 12/28/14.
//  Copyright (c) 2014 Feef. All rights reserved.
//

#define STATE_DELETED_NOTIFICATION_KEY @"stateDeletedNotificaitonKey"

#import <UIKit/UIKit.h>
#import "UniqueIDModel.h"
#import "Transition.h"

@protocol State <NSObject>
@end

@interface State : UniqueIDModel

-(instancetype)initWithCenter:(CGPoint)center; //create a new state around a center location
-(void)deleteState; //delete the state and all it's transitions
-(void)updateFrame; //recalculate the frame to surround the state's text with proper inset and distance away from all other states
-(void)addTransitionToState:(State*)state;
-(void)addTransitionFromState:(Transition*)transition toState:(State*)state;
-(void)setTitle:(NSString*)title; //rename a state, will also call updateFrame
-(void)setColor:(UIColor*)color; //recolor a state
-(void)setDeselectColor:(UIColor*)color; //set the color of the state when deselected
-(void)setCenter:(CGPoint)center; //move a state
-(Transition*)returnTransitionToState:(State*)state; //Getter method for the transitions
-(NSMutableDictionary*)returnTransitions;

@property(nonatomic, readonly) CGRect frame;
@property(nonatomic) CGPoint center;
@property(nonatomic) UIColor *color;
@property(nonatomic) UIColor *deselectColor;
@property(nonatomic) NSString *title;
@property BOOL markedForDeletion;

@end