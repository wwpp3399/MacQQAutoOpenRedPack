//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BDHConnection, NSData, NSString;

@protocol BDHConnectionDelegate <NSObject>
- (void)Notify:(BDHConnection *)arg1 SendResultState:(int)arg2 length:(int)arg3 tag:(long long)arg4;
- (void)Notify:(BDHConnection *)arg1 recvData:(NSData *)arg2;
- (void)Notify:(BDHConnection *)arg1 oldState:(int)arg2 newState:(int)arg3 errCode:(int)arg4 msg:(NSString *)arg5;

@optional
- (void)NotifyBytesAvailable:(BDHConnection *)arg1;
@end
