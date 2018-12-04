//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQBaseSingleton.h"

#import "QQAccountEventObserver.h"

@class NSMutableDictionary, NSString;

@interface BHAtMsgManager : QQBaseSingleton <QQAccountEventObserver>
{
    NSMutableDictionary *_specialMessageDict;
}

@property(retain, nonatomic) NSMutableDictionary *specialMessageDict; // @synthesize specialMessageDict=_specialMessageDict;
- (void).cxx_destruct;
- (void)getRestAtAllCountWithClusterId2:(long long)arg1 sessType:(int)arg2 completion:(id)arg3;
- (void)resetAtMsgWithUin:(id)arg1 sessType:(int)arg2;
- (id)getRefMsgArrayWithUin:(id)arg1 sessType:(int)arg2;
- (id)getWalletMsgArrayWithUin:(id)arg1 sessType:(int)arg2;
- (id)getAtMsgArrayWithUin:(id)arg1 sessType:(int)arg2;
- (id)getSpecialMsgArrayWithUin:(id)arg1 sessType:(int)arg2 specialType:(int)arg3;
- (id)keyWithUin:(id)arg1 sessType:(int)arg2;
- (void)onDidChangeAccount;
- (id)init;
- (void)setClusterMsgReaded:(long long)arg1 sessType:(int)arg2 maxSeq:(int)arg3;
- (void)addSpecialMessage:(id)arg1;
- (id)processMsgEncapsulation:(id)arg1;
- (void)revokeMessage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
