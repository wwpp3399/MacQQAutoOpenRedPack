//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQBaseMsgHandler.h"

@interface QQDiscussgroupMsgHandler : QQBaseMsgHandler
{
}

- (id)handleMsg:(const struct Msg *)arg1;
- (BOOL)parseMsgBody:(const MsgBody_1bee2359 *)arg1 msgType:(int)arg2 c2cCmd:(int)arg3 toModel:(id)arg4;
- (BOOL)parseMsgHead:(const struct MsgHead *)arg1 toModel:(id)arg2;
- (void)parseRichText:(const struct RichText *)arg1 toModel:(id)arg2;
- (void)ParseFile:(id)arg1 groupFile:(const struct GroupFile *)arg2;
- (id)peekPttContent:(const struct Ptt *)arg1 msgType:(int *)arg2;
- (id)parseNotOnlineImage:(const struct NotOnlineImage *)arg1;
- (BOOL)parseDiscussInfo:(const struct DiscussInfo *)arg1 toModel:(id)arg2;
- (id)init;

@end
