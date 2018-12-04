//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IEngineDispatchDelegate.h"
#import "QQRegisterProxyEventObserver.h"

@class NSMutableDictionary, NSString;

@interface QQC2CMsgChannel : NSObject <QQRegisterProxyEventObserver, IEngineDispatchDelegate>
{
    NSMutableDictionary *_msgHandleDelegateDic;
}

+ (id)getInstance;
- (void).cxx_destruct;
- (id)getMsgHandlerType:(unsigned int)arg1 c2cCmd:(unsigned int)arg2;
- (void)notifyError:(id)arg1;
- (void)handleC2CSyncMsg:(struct PbPushMsg *)arg1 msg:(CDStruct_a00ab4be)arg2 seqId:(int)arg3 requestId:(int)arg4 toUin:(long long)arg5;
- (id)handleOfflineOrGetMsgResp:(const struct PbGetMsgResp *)arg1 identityUin:(unsigned long long)arg2 source:(long long)arg3;
- (void)didRecievedSyncMsg:(CDStruct_a00ab4be)arg1;
- (void)didRecievedOnlinePushNotify:(CDStruct_a00ab4be)arg1;
- (void)handlePbGetMsgResp:(const struct PbGetMsgResp *)arg1 source:(long long)arg2 msg:(CDStruct_a00ab4be)arg3;
- (void)didRecievedOfflineOrGetMsg:(CDStruct_a00ab4be)arg1;
- (void)didRecievedOfflineMsg:(CDStruct_a00ab4be)arg1;
- (void)didRecievedMsg:(CDStruct_a00ab4be)arg1;
- (void)requestGetMsg:(id)arg1;
- (void)onlinePush0x20e:(unsigned long long)arg1;
- (id)parseUinPairMsg:(const struct UinPairMsg *)arg1;
- (id)removeDuplicateInArray:(id)arg1;
- (id)parseMsg:(const struct Msg *)arg1;
- (id)getMsgSyncInfo:(const struct UinPairMsg *)arg1;
- (void)unregisterC2CMsgHandleDelegate:(id)arg1;
- (BOOL)registerC2CMsgHandleDelegate:(id)arg1 handleDelegate:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
