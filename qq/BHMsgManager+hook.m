//
//  BHMsgManager+hook.m
//  qq
//
//  Created by Mac on 2018/12/4.
//  Copyright © 2018 Mac. All rights reserved.
//

#import "BHMsgManager+hook.h"
#import "BHMsgManager.h"
#import "RedPackHelper.h"
#import "BHMessageModel.h"
@implementation NSObject (BHMsgManagerHook)
+ (void)hook{
    [self jr_swizzleMethod:@selector(appendReceiveMessageModel:msgSource:) withMethod:@selector(hook_appendReceiveMessageModel:msgSource:) error:NULL];
    [NSClassFromString(@"RedPackHelper") jr_swizzleClassMethod:@selector(openRedPackWithMsgModel:operation:) withClassMethod:@selector(hook_openRedPackWithMsgModel:operation:) error:NULL];

}
- (void)hook_appendReceiveMessageModel:(id)arg1 msgSource:(long long)arg2{
//    NSLog(@"+++接收到的消息：%@ class %@",arg1,[arg1 class] );
    for (BHMessageModel * msg in arg1) {
        if (msg.msgType == 311) {
            NSLog(@"+++收到红包消息 消息体 %@ 消息ID %d",msg, msg.msgID);
            [NSClassFromString(@"RedPackHelper") openRedPackWithMsgModel:msg operation:0];
        }
    }
    [self hook_appendReceiveMessageModel:arg1 msgSource:arg2];
}
+ (void)hook_openRedPackWithMsgModel:(id)arg1 operation:(id)arg2{
    [self hook_openRedPackWithMsgModel:arg1 operation:arg2];
}
@end
