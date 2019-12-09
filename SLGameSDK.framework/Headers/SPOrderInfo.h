//
//  SPOrderInfo.h
//  SLGameSDK
//
//  Created by 罗小友 on 2019/11/4.
//  Copyright © 2019 com.SGame.www. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface SPOrderInfo : NSObject

@property (nonatomic ,strong)NSString *orderID; //cp订单ID
@property (nonatomic ,strong)NSString *roleID;//角色ID
@property (nonatomic ,strong)NSString *roleName;//角色名称
@property (nonatomic ,strong)NSString *roleLevel;//角色等级
@property (nonatomic ,strong)NSString *goodsID;//商品ID(内购ID)
@property (nonatomic ,strong)NSString *goodsName;//商品名称
@property (nonatomic ,strong)NSString *amount;//价格
@property (nonatomic ,strong)NSString *serverID;//服务器ID
@property (nonatomic ,strong)NSString *serverName;//服务器名称




@end

NS_ASSUME_NONNULL_END
