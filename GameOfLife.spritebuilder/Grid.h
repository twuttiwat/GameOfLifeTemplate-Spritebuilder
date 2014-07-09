//
//  Grid.h
//  GameOfLife
//
//  Created by jippo on 7/9/2557 BE.
//  Copyright (c) 2557 Apportable. All rights reserved.
//

#import "CCSprite.h"

@interface Grid : CCSprite
    @property (nonatomic, assign) int totalAlive;
    @property (nonatomic, assign) int generation;
@end
