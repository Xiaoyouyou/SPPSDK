//
//  SPRoleInfo.h
//  SLGameSDK
//
//  Created by 罗小友 on 2019/11/4.
//  Copyright © 2019 com.SGame.www. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface SPRoleInfo : NSObject
@property (nonatomic ,strong)NSString *roleName;//角色名称
@property (nonatomic ,strong)NSString *level;//角色等级
@property (nonatomic ,strong)NSString *roleID; //角色ID
@property (nonatomic ,strong)NSString *serversID; //服务器ID
@property (nonatomic ,strong)NSString *serverName; //服务器名称
@property (nonatomic ,strong)NSString *type; //1：登录   2:创角


+ (instancetype)singleInitInfo;
@end

NS_ASSUME_NONNULL_END
