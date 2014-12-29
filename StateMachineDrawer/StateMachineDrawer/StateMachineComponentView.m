//
//  StateMachineComponentView.m
//  StateMachineDrawer
//
//  Created by sharif ahmed on 12/29/14.
//  Copyright (c) 2014 Feef. All rights reserved.
//

#import "StateMachineComponentView.h"

@implementation StateMachineComponentView

@synthesize strokeColor;

-(void)updateView {
    
    [NSException raise:@"Subclassing error" format:@"Subclasses must overwrite the %s function", __FUNCTION__];
    
}

-(UIColor *)strokeColor {
    
    if(!strokeColor) {
        strokeColor = [UIColor blackColor];
    }
    return strokeColor;
    
}

-(void)setStrokeColor:(UIColor *)color {
    
    strokeColor = color;
    [self updateView];
    
}

@end
