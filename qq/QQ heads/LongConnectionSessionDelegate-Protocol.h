//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class LongConnectionSession, NSData;

@protocol LongConnectionSessionDelegate <NSObject>
- (void)onSend:(LongConnectionSession *)arg1;
- (void)onRecvData:(LongConnectionSession *)arg1 recvData:(NSData *)arg2 noMoreDataToRecv:(char *)arg3;
- (void)onStateChanged:(LongConnectionSession *)arg1 state:(unsigned long long)arg2;
@end

