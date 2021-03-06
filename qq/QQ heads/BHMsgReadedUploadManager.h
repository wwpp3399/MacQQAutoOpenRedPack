//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQBaseSingleton.h"

#import "QQAccountEventObserver.h"

@class NSMutableDictionary, NSString;

@interface BHMsgReadedUploadManager : QQBaseSingleton <QQAccountEventObserver>
{
    NSMutableDictionary *_readDict;
}

- (void).cxx_destruct;
- (char *)_getsCookie:(int *)arg1 identityUin:(unsigned long long)arg2;
- (id)getMessageKey:(id)arg1 type:(int)arg2 identityUin:(unsigned long long)arg3;
- (void)_internalSetLastReadCache:(unsigned long long)arg1 byUin:(id)arg2 type:(int)arg3 identityUin:(unsigned long long)arg4;
- (unsigned long long)_internalGetLastReadCacheByUin:(id)arg1 type:(int)arg2 identityUin:(unsigned long long)arg3;
- (void)setLastReadCache:(unsigned long long)arg1 byUin:(id)arg2 type:(int)arg3 identityUin:(unsigned long long)arg4;
- (unsigned long long)getLastReadCacheByUin:(id)arg1 type:(int)arg2 identityUin:(unsigned long long)arg3;
- (void)_reportMsgReaded:(id)arg1 identityUin:(unsigned long long)arg2 completion:(id)arg3;
- (void)_clearUnreadCount:(id)arg1;
- (BOOL)_unPackReportReaded:(struct PbMsgReadedReportResp *)arg1;
- (void)_packReportReaded:(id)arg1 type:(int)arg2 value:(unsigned long long)arg3 pbReq:(struct PbMsgReadedReportReq *)arg4 identityUin:(unsigned long long)arg5;
- (void)_packReportReaded:(id)arg1 pbReq:(struct PbMsgReadedReportReq *)arg2 identityUin:(unsigned long long)arg3;
- (void)reportMsgReadedSingle:(id)arg1 type:(int)arg2 value:(unsigned long long)arg3 identityUin:(unsigned long long)arg4 completion:(id)arg5;
- (void)reportMsgReadedBatch:(id)arg1 completion:(id)arg2;
- (void)reportMsgReaded:(id)arg1 completion:(id)arg2;
- (void)onDidChangeAccount;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

