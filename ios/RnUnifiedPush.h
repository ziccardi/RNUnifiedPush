#import <React/RCTBridgeModule.h>

@interface RNUnifiedPush : NSObject <RCTBridgeModule>

+ (void)didRegisterForRemoteNotificationsWithDeviceToken:(NSData *)deviceToken;
+ (void)didReceiveRemoteNotification:(NSDictionary *)userInfo;

@end
