//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSMutableSet, NSString;

@interface QQMessageCacheManager : NSObject
{
    NSMutableDictionary *_localSentMessageCache;
    NSMutableDictionary *_localLatestMessageCache;
    NSMutableSet *_tempSendCache;
    NSString *_curSelfUin;
    unsigned long long _sentCacheSaveTicket;
}

+ (id)defaultManager;
@property(nonatomic) unsigned long long sentCacheSaveTicket; // @synthesize sentCacheSaveTicket=_sentCacheSaveTicket;
@property(copy, nonatomic) NSString *curSelfUin; // @synthesize curSelfUin=_curSelfUin;
@property(retain, nonatomic) NSMutableSet *tempSendCache; // @synthesize tempSendCache=_tempSendCache;
@property(retain, nonatomic) NSMutableDictionary *localLatestMessageCache; // @synthesize localLatestMessageCache=_localLatestMessageCache;
@property(retain, nonatomic) NSMutableDictionary *localSentMessageCache; // @synthesize localSentMessageCache=_localSentMessageCache;
- (void).cxx_destruct;
- (id)mergeDBMessageArray:(id)arg1 withCacheArray:(id)arg2;
- (id)queryMessagesOfUin:(id)arg1 sessionType:(int)arg2 identityUin:(unsigned long long)arg3 withPredicate:(id)arg4 limit:(unsigned long long)arg5;
- (void)_clearOutOfDateSentCache;
- (void)_sortMsgCacheArray:(id)arg1 msgSesstionType:(int)arg2;
- (void)_cacheMessage:(id)arg1 key:(id)arg2;
- (id)_sentMessageCacheFilePath;
- (void)_loadLatestMessageOfUin:(id)arg1 sessionType:(int)arg2 identityUin:(unsigned long long)arg3;
- (id)msgCacheArrayWithUin:(id)arg1 sessionType:(int)arg2 identityUin:(unsigned long long)arg3;
- (void)_checkUinLatestMessageCacheLimit:(id)arg1;
- (void)_loadSentCache;
- (void)_saveSentCacheIfNeed;
- (id)_cacheKeyFromUin:(unsigned long long)arg1 sesstionType:(int)arg2 identityUin:(unsigned long long)arg3;
- (id)_cacheKeyFromCacheModel:(id)arg1;
- (id)_cacheKeyFromMessage:(id)arg1;
- (void)_onCurrentAccountDeleted:(id)arg1;
- (void)_accountDidChanged:(id)arg1;
- (BOOL)_isEqaul:(id)arg1 toMsg:(id)arg2;
- (id)_duplicatedMessage:(id)arg1 fromArray:(id)arg2;
- (id)cachedMessageForMessage:(id)arg1;
- (id)containsC2CMessage:(id)arg1;
- (BOOL)isContainsC2CMsg_Pb:(const struct Msg *)arg1;
- (BOOL)isContainsClusterMsg_Pb:(const struct Msg *)arg1;
- (BOOL)isContainsC2CMessage:(id)arg1;
- (BOOL)isContainsClusterMessage:(id)arg1;
- (void)cacheRecvMessage:(id)arg1;
- (void)saveSentCacheImmediately:(BOOL)arg1;
- (id)removeCacheModelFromSendCache:(id)arg1;
- (void)markFaildInSendCacheWithUin:(unsigned long long)arg1 sesstionType:(int)arg2 msgRandom:(unsigned int)arg3;
- (BOOL)isInCurrentSendingCache:(id)arg1;
- (void)cacheSentMessage:(id)arg1;
- (void)prepareCacheSendMessage:(id)arg1;
- (void)dealloc;
- (id)init;

@end

