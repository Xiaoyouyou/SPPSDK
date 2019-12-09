//
//  SPringInit.h
//  SLGameSDK
//
//  Created by 罗小友 on 2019/8/21.
//  Copyright © 2019 com.SGame.www. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "SPRoleInfo.h"
#import "SPOrderInfo.h"

NS_ASSUME_NONNULL_BEGIN


typedef void(^successBlock)(NSDictionary *success);
typedef void(^failBlock)(NSError *error,NSString *errorMsg);


//注销登录接口
typedef void(^LoginOutSDKBlock)(void);


@protocol SPringInitDelegate <NSObject>
//注销登录回调
-(void)LoginOutSucces:(NSDictionary *)dict;

@end


@interface SPringInit : NSObject
@property (nonatomic ,strong)id<SPringInitDelegate> delegate;
@property (nonatomic ,copy)successBlock success;
@property (nonatomic ,copy)failBlock fail;
@property (nonatomic ,copy)LoginOutSDKBlock loginOutSDKBolock;


+(instancetype)initShareInstance;


#pragma mark  程序启动时的初始化SDK接口
- (BOOL)spinitApplication:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions successBlock:(successBlock)successInit failBlock:(failBlock)failBlcok;

- (BOOL)spApplication:(UIApplication *)application openURL:(nonnull NSURL *)url options:(nonnull NSDictionary<UIApplicationOpenURLOptionsKey,id> *)options;
- (void)spApplicationDidBecomeActive:(UIApplication *)applicationA;



#pragma mark  登录接口
-(void)initLoginViewWithLoginSuccessBlock:(successBlock)success failBlock:(failBlock)failBlcok;

#pragma mark   退出登录回调（被动调用。当SDK内退出登录时，会调用此方法）
-(void)LoginOutWithMessage:(NSDictionary *)resultDic;

#pragma mark   退出登录（主动调用。当掉用此方法时，SDK会主动退出登录）
-(void)LoginOutSDKSuccessBlock:(successBlock)success failBlock:(failBlock)failBlcok;

#pragma mark  支付接口
-(void)buyWithCPOrderInfo:(SPOrderInfo *)orderInfo completionBlock:(successBlock)success failBlock:(failBlock)fail;

#pragma mark  上传角色接口
-(void)upLoadRoleInfo:(SPRoleInfo *)roleInfo successBlock:(successBlock)success failBlock:(failBlock)fail;


#pragma mark  FB礼包  -- 活动列表接口
-(void)activityListWithType:(NSString *)activityType successBlock:(successBlock)success failBlock:(failBlock)failBlcok;

#pragma mark  FB礼包  -- 分享活动点击事件的调用
-(void)shareClickWithActivityID:(NSString *)activityID withActivityURL:(NSString *)url successBlock:(successBlock)success failBlock:(failBlock)failBlcok;

#pragma mark  FB礼包  -- 点赞的接口
-(void)userTouchLikesWithActivityID:(NSString *)activityID touchLikesURL:(NSString *)url successBlock:(successBlock)success failBlock:(failBlock)failBlcok;

#pragma mark  FB礼包  -- 邀请活动的接口
-(void)invitedActivityWithActivityID:(NSString *)activityID invitedURL:(NSString *)url successBlock:(successBlock)success failBlock:(failBlock)failBlcok;

#pragma mark  FB礼包  -- 获取礼包的接口
-(void)getGTWithActivityID:(NSString *)activityID successBlock:(successBlock)success failBlock:(failBlock)failBlcok;

#pragma mark  获取国家码的接口
-(NSString *)getCountryCode;

#pragma mark  跳转评分接口
-(void)gotoStoreUserScore;
@end

NS_ASSUME_NONNULL_END
