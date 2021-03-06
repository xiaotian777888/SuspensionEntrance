//  SEFloatingBall.h
//  SuspensionEntrance
//
//  Created by  XMFraker on 2019/8/8
//  Copyright © XMFraker All rights reserved. (https://github.com/ws00801526)
//  @class      SEFloatingBall

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class SEFloatingBall;
@protocol SEFloatingBallDelegate <NSObject>

@optional
- (void)floatingBallDidClicked:(SEFloatingBall *)floatingBall;

- (void)floatingBall:(SEFloatingBall *)floatingBall pressDidBegan:(UILongPressGestureRecognizer *)gesture;
- (void)floatingBall:(SEFloatingBall *)floatingBall pressDidChanged:(UILongPressGestureRecognizer *)gesture;
- (void)floatingBall:(SEFloatingBall *)floatingBall pressDidEnded:(UILongPressGestureRecognizer *)gesture;

@end

@protocol SEItem;
@interface SEFloatingBall : UIView

@property (assign, nonatomic, readonly) CGRect floatingRect;
@property (weak, nonatomic, nullable) id<SEFloatingBallDelegate> delegate;

- (void)reloadIconViews:(NSArray<id<SEItem>> *)items;
@end

NS_ASSUME_NONNULL_END
