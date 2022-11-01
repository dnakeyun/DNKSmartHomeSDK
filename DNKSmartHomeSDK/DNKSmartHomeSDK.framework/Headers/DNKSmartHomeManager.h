//
//  DNKSmartHomeManager.h
//  DNKSmartHomeSDK
//
//  Created by dnake_ay on 2019/10/9.
//  Copyright © 2019 dnake_ay. All rights reserved.
//

#import <Foundation/Foundation.h>
//网关 -> APP(成功回调数据)
typedef void(^DNKSmartHomeManagerResponseSuccessBlock)(NSDictionary *_Nullable);
//网关 -> APP(失败错误码)
typedef void(^DNKSmartHomeManagerResponseFailureBlock)(NSNumber *_Nullable);
//网关 -> APP(网关主动推送到APP信息：包括报警、设备状态、门锁状态推送等)
typedef void(^DNKSmartHomeManagerResponseCmtBlock)(NSDictionary *_Nullable);

NS_ASSUME_NONNULL_BEGIN

@interface DNKSmartHomeManager : NSObject

@property (strong, nonatomic) DNKSmartHomeManagerResponseSuccessBlock responseSuccessBlock;

@property (strong, nonatomic) DNKSmartHomeManagerResponseFailureBlock responseFailureBlock;

@property (strong, nonatomic) DNKSmartHomeManagerResponseCmtBlock responseCmtBlock;

+ (instancetype)sharedInstance;
/**
 *  2.12.1 SDK初始化(JNI_EVENT_SDK_INIT)
 *  2.12.3设置本地IOT帐号(JNI_EVENT_SET_IOT_ACCOUNT)
 *  2.12.4添加远程IOT帐号(JNI_EVENT_ADD_REMOTE_DEV)
 *  iotUrl:iot服务器地址
 *  iotPort:iot端口
 *  iotProductKey:iotKey
 *  appIotName:appIot账号
 *  appIotSecret:appIot密钥
 *  gatewayIotName:网关iot账号
 */
- (void)initSDKWithiotUrl:(nonnull NSString *)iotUrl
                  iotPort:(nonnull NSNumber *)iotPort
            iotProductKey:(nonnull NSString *)iotProductKey
               appIotName:(nonnull NSString *)appIotName
             appIotSecret:(nonnull NSString *)appIotSecret
           gatewayIotName:(nonnull NSString *)gatewayIotName;
/**
 *  2.12.2 SDK退出（JNI_EVENT_SDK_EXIT）
 */
- (void)exitSDK;
/**
 *  2.1.2局域网对码绑定网关(match)
 *  udid:网关码
 *  iotProductkey:iotKey
 *  iotUrl:iot服务器地址
 *  iotPort:iot端口
 *  appIotName:appIot账号
 *  gatewayIotName:网关iot账号
 *  gatewayIotSecret:网关iot密钥
 */
- (void)matchGatewayWithUdid:(nonnull NSString *)udid
               iotProductkey:(nonnull NSString *)iotProductkey
                      iotUrl:(nonnull NSString *)iotUrl
                     iotPort:(nonnull NSNumber *)iotPort
                  appIotName:(nonnull NSString *)appIotName
              gatewayIotName:(nonnull NSString *)gatewayIotName
            gatewayIotSecret:(nonnull NSString *)gatewayIotSecret;
/**
 *  2.1.2局域网对码绑定网关(match)
 */
- (void)discoverGateway;
/**
 *  2.1.3局域网查找IOT(discover)（网关未实现）
 */
- (void)discoverIotInfo;
/**
 *  App -> 网关（app发送数据给网关）(局域网/外网指令)
 *  sendData : 发送给网关的数据
 */
- (void)sendDataToGateway:(NSDictionary *)sendData;

@end

NS_ASSUME_NONNULL_END
