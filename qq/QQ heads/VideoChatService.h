//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DAVStateModel, NSMutableDictionary;

@interface VideoChatService : NSObject
{
    long long _curNetStatus;
    NSMutableDictionary *_chatingStateDict;
    DAVStateModel *_inTheCallModel;
    _Bool _isBackGround;
    BOOL _audioEnable;
}

+ (id)GetInstance;
@property(nonatomic) BOOL audioEnable; // @synthesize audioEnable=_audioEnable;
@property(nonatomic) _Bool isBackGround; // @synthesize isBackGround=_isBackGround;
@property(readonly, nonatomic) DAVStateModel *inTheCallModel; // @synthesize inTheCallModel=_inTheCallModel;
- (void).cxx_destruct;
- (int)setVideoSend:(BOOL)arg1;
- (int)setAudioRecv:(BOOL)arg1;
- (int)setAudioSend:(BOOL)arg1;
@property(readonly, nonatomic) int dynamicVolumn;
- (int)getP2PSessionType:(unsigned long long)arg1;
- (void)setP2PSessionType:(int)arg1 withFriUin:(unsigned long long)arg2;
- (int)getP2PState:(unsigned long long)arg1;
- (void)setP2PState:(int)arg1 withFriUin:(unsigned long long)arg2;
- (BOOL)isChattingWithUin:(unsigned long long)arg1;
- (void)closedBySwitchToGroup:(BOOL)arg1;
- (void)switchToGroupAV:(id)arg1;
- (void)uploadLogFromPushWithBegin:(struct tm)arg1 End:(struct tm)arg2;
- (void)upLoadSharpLog:(unsigned long long)arg1:(const char *)arg2;
- (void)uploadVideoLog:(unsigned long long)arg1:(const char *)arg2;
- (void)printClientLog:(id)arg1;
- (BOOL)isInChatting;
- (BOOL)isVideoChat;
- (BOOL)isAudioChat;
- (void)onForceOffLine;
- (void)postNeworkOffLineNotification;
- (id)allChatStateModels;
- (void)deleteAllChatState;
- (void)deleteP2PAVChatState:(unsigned long long)arg1;
- (void)updateP2PAVChatState:(unsigned long long)arg1 andChatState:(int)arg2 andChatType:(int)arg3 andRoomID:(unsigned long long)arg4;
- (unsigned long long)getP2PAVFriUin:(unsigned long long)arg1;
- (id)getAVStateModel:(unsigned long long)arg1;
- (void)QueryRoomInfo:(unsigned long long)arg1 andPeerUin:(unsigned long long)arg2;
- (void)sendC2CNotifyMsg:(unsigned int)arg1 SessionType:(unsigned int)arg2 strArg1:(id)arg3 strArg2:(id)arg4;
- (int)transmitVideoData:(unsigned long long)arg1 pCamBuffer:(char *)arg2 bufferSize:(unsigned long long)arg3 Width:(unsigned long long)arg4 heightY:(unsigned long long)arg5 cameraAngle:(int)arg6;
- (void)onNetworkStateChange:(id)arg1;
- (void)OnNetworkReachabilityDidChange:(id)arg1;
@property(readonly, nonatomic) int netType;
- (void)ignoreAV:(unsigned long long)arg1;
- (void)rejectAV:(unsigned long long)arg1;
- (int)closeAV:(unsigned long long)arg1;
- (int)acceptAV:(unsigned long long)arg1 AVType:(int)arg2;
- (int)switchTerminalWithUin:(unsigned long long)arg1 andAVType:(int)arg2 andOldRoomID:(unsigned long long)arg3;
- (int)switchTerminal:(unsigned long long)arg1 avType:(int)arg2;
- (int)requestVideoChatType:(unsigned long long)arg1 avType:(int)arg2 relation:(int)arg3;
- (int)startAV:(unsigned long long)arg1 AVType:(int)arg2 sessType:(int)arg3 clusterId:(unsigned long long)arg4;
- (void)UpdateVideoChatUin;
- (void)UnitVideoChatService;
- (void)InitVideoChatService;
- (void)dealloc;
- (id)init;
- (void)resetChatingState;
- (BOOL)checkConflict;
- (BOOL)checkWIFI;
- (BOOL)checkBlock:(unsigned long long)arg1;
- (BOOL)checkConnect;
- (BOOL)checkLegal:(unsigned long long)arg1;
- (void)setCameraMicWithUin:(unsigned long long)arg1 device:(int)arg2 isEnable:(BOOL)arg3;
- (void)onClose:(unsigned long long)arg1;
- (BOOL)recvRequest:(unsigned long long)arg1 Type:(int)arg2 sessType:(int)arg3 clusterId:(unsigned long long)arg4 sign:(id)arg5;

@end

