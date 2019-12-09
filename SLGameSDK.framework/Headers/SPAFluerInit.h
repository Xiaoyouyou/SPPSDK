//
//  SPAFluerInit.h
//  SLGameSDK
//
//  Created by 罗小友 on 2019/9/12.
//  Copyright © 2019 com.SGame.www. All rights reserved.
//


#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface SPAFluerInit : NSObject
+ (instancetype)shareInstance;



//AF买点的接口
#pragma mark  用户等级埋点
-(void)gameUserLevelWithRoleLevel:(NSString *)level;

#pragma mark  户注册埋点
-(void)gameUserRegister;

#pragma mark  记录教程埋点
-(void)gameUserCourse;

//af_tutorial_completion
#pragma mark  用户登录埋点(login，auto，facebook，tourist）
-(void)gameUserLoginWithType:(NSString *)type userRoleLevel:(NSString *)level;

#pragma mark  购买月卡埋点
-(void)gameUserBuyCardWithRoleLevel:(NSString *)level;

#pragma mark  创角
-(void)gameUserCreateRole;

#pragma mark  首充
-(void)gameUserFirstBuyWithRoleLevel:(NSString *)level;

#pragma mark  次留
-(void)gameUserNextDayPlay;

#pragma mark  追踪收入
-(void)gameUserInitiatedTrackWithGoodsPrice:(NSString *)price gameGoodsOrderID:(NSString *)goodsOrderID goopsTpye:(NSString *)goodsID currencyType:(NSString *)currencyType;

#pragma mark  成就解锁事件
-(void)gameUserAchievementUnlocked;

@end

NS_ASSUME_NONNULL_END
