//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseMessageProcessor.h"

@interface ShortVideoMessageProcessor : BaseMessageProcessor
{
}

- (BOOL)decodeMessageModelFormPb:(id)arg1 msgElem:(const struct Elem *)arg2;
- (void)encodeMessageModelToPb:(id)arg1 messagePacket:(id)arg2 msgBody:(MsgBody_1bee2359 *)arg3 sendType:(int)arg4;
- (BOOL)performMessageModel:(id)arg1 messagePacket:(id)arg2 completion:(id)arg3 progressBlock:(id)arg4 sendType:(int)arg5;
- (void)forwardMessageModel:(id)arg1 sourceMessageModel:(id)arg2 completion:(id)arg3 progressBlock:(id)arg4 sendType:(int)arg5;
- (void)prepareForMessageModel:(id)arg1 messagePacket:(id)arg2 sendType:(int)arg3;
- (BOOL)isSupportMessagePacket:(int)arg1 sendType:(int)arg2;

@end

