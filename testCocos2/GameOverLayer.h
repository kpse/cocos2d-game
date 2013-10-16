//
//  GameOverLayer.h
//  testCocos2
//
//  Created by kpse on 10/16/13.
//  Copyright 2013 tw. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "cocos2d.h"

@interface GameOverLayer : CCLayerColor

+ (CCScene *)sceneWithWon:(BOOL)won;

- (id)initWithWon:(BOOL)won;


@end
