//
//  AIGameCardImageView.h
//  BalloonPopper
//
//  Created by Mun Fai Leong on 3/12/15.
//  Copyright (c) 2015 myAppIndustry. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AICommonUtils.h"

@protocol  AIGameCardImageViewDelegate;

@interface AIGameCardImageView : UIImageView

@property (nonatomic) AIGameCardName cardName;
@property (nonatomic) NSInteger arrayIndex;
@property (nonatomic) NSInteger cardId;

@property (nonatomic) id <AIGameCardImageViewDelegate> delegate;

@end

@protocol AIGameCardImageViewDelegate <NSObject>

@optional

-(void)tapAtGameCardForId:(NSInteger)cardId arrayIndex:(NSInteger)arrayIndex cardName:(AIGameCardName)cardName;

@end