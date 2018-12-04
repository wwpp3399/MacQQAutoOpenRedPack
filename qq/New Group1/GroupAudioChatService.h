//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary, NSTimer;

@interface GroupAudioChatService : NSObject
{
    BOOL _IsInOneChatting;
    BOOL _IsInOneBuddyShare;
    int _entranceType;
    int _chattingBusinessType;
    int _chattingBusinessSubType;
    int _chattingRelationType;
    unsigned long long _chattingRelationID;
    unsigned long long _chattingScreenShareMemUin;
    int _PrepareBusinessType;
    int _PrepareBusinessSubType;
    int _PrepareChatingRelationType;
    unsigned long long _PrepareChatingRelationID;
    int _PreparePstnConfId;
    int _checkingRelationType;
    int _checkingBusinessType;
    unsigned long long _checkingRelationID;
    NSMutableDictionary *_audioChatStateDict;
    NSMutableArray *_offlineInviteArray;
    NSMutableDictionary *_selfRequestDict;
    NSTimer *_onLineNoticeTimer;
    NSTimer *_offlineInviteTimer;
    BOOL _isSwitchFromP2P;
    unsigned long long _friUin;
    BOOL _peerPSGAbility;
    NSTimer *_inviteTimer;
    BOOL _isAddingMem;
    NSMutableDictionary *_inviteInfoDict;
    NSTimer *_timer_push;
    long long _pushInviter;
    int _pushBusinessType;
    int _pushRelationType;
    long long _pushRelationID;
    NSTimer *_ConnServerTimer;
    int _curNetStatus;
    NSMutableDictionary *_tinyID2OpenIDDict;
}

+ (id)GetInstance;
- (void).cxx_destruct;
- (int)ShareInData:(unsigned long long)arg1 pCamBuffer:(char *)arg2 bufferSize:(unsigned int)arg3 width:(unsigned int)arg4 height:(unsigned int)arg5 framAngle:(unsigned int)arg6 time:(unsigned int)arg7;
- (int)VideoInData:(unsigned long long)arg1 pCamBuffer:(char *)arg2 bufferSize:(unsigned int)arg3 width:(unsigned int)arg4 height:(unsigned int)arg5 framAngle:(unsigned int)arg6 time:(unsigned int)arg7;
- (id)getOpenIDWithTinyID:(id)arg1;
- (void)setOpenID:(id)arg1 withTinyID:(id)arg2;
- (void)createRoomFail:(unsigned int)arg1 relationType:(int)arg2 businessType:(int)arg3 relationID:(unsigned long long)arg4 retCode:(int)arg5 content:(id)arg6;
- (BOOL)InOneBuddyShare;
- (void)switchToGroupAV:(id)arg1 fromBuddyShare:(id)arg2;
- (void)ActionQuitBuddyShare:(id)arg1;
- (void)QuitBuddyShare:(int)arg1 businessType:(int)arg2 relationID:(unsigned long long)arg3 closeReasion:(int)arg4;
- (void)ActionAcceptBuddyShare;
- (_Bool)getPeerPSGAbility;
- (void)setPeerPSGAbility:(_Bool)arg1;
- (void)switchFromP2POver;
- (BOOL)isSwitchFromP2P;
- (void)startGroupAVFromP2P:(id)arg1 withFriUin:(id)arg2;
- (void)refreshChattingNumGroup:(id)arg1;
- (void)refreshChattingNumDiscuss:(id)arg1;
- (void)onPushTimer:(id)arg1;
- (void)handleDismissCallView:(int)arg1 businessType:(int)arg2 relationID:(unsigned long long)arg3 byOtherTerm:(BOOL)arg4 byOtherTermAccept:(BOOL)arg5;
- (void)onVideoChatNotification;
- (void)OnMSFNetworkStateNotification:(id)arg1;
- (void)OnNetworkReachabilityDidChange:(id)arg1;
- (id)getChatListDictChattingSecondMem:(int)arg1 businessType:(int)arg2 relationID:(unsigned long long)arg3;
- (id)getChatListDictChattingMem:(int)arg1 businessType:(int)arg2 relationID:(unsigned long long)arg3;
- (int)getChatListDictSubType:(int)arg1 businessType:(int)arg2 relationID:(unsigned long long)arg3;
- (id)getChatListDictList:(int)arg1 businessType:(int)arg2 relationID:(unsigned long long)arg3;
- (int)getChatListDictChattingNum:(int)arg1 businessType:(int)arg2 relationID:(unsigned long long)arg3;
- (int)getChatListDictChatState:(int)arg1 businessType:(int)arg2 relationID:(unsigned long long)arg3;
- (id)getAudioChatStateModel:(int)arg1 businessType:(int)arg2 relationID:(unsigned long long)arg3;
- (id)pureChatStateModel:(int)arg1 businessType:(int)arg2 relationID:(unsigned long long)arg3;
- (void)postStateChangeNotificationForChatStateModel:(id)arg1 changeType:(unsigned int)arg2;
- (BOOL)updateChatListDict:(int)arg1 businessType:(int)arg2 relationID:(unsigned long long)arg3 subType:(int)arg4;
- (BOOL)updateChatListDict:(int)arg1 businessType:(int)arg2 relationID:(unsigned long long)arg3 chatCount:(int)arg4 friUinList:(id)arg5;
- (BOOL)updateChatListDict:(int)arg1 businessType:(int)arg2 relationID:(unsigned long long)arg3 chatCount:(int)arg4 firstUser:(id)arg5 secondUser:(id)arg6;
- (BOOL)updateChatListDict:(int)arg1 businessType:(int)arg2 relationID:(unsigned long long)arg3 audioState:(int)arg4;
- (id)chatStateModel:(int)arg1 businessType:(int)arg2 relationID:(unsigned long long)arg3;
- (void)deleteAllChatListDict;
- (void)setChattingScreenShareMemUin:(unsigned long long)arg1;
- (int)getChattingBusinessSubType;
- (unsigned long long)getChattingScreenShareMemUin;
- (unsigned long long)getRelationID;
- (BOOL)InOneGroup;
- (void)DoStopConRoomTimer;
- (void)StopConRoomTimer;
- (void)quitGroupAudioChatByTimeOut;
- (void)DoConnectRoomTimeout;
- (void)ConnectRoomTimeout;
- (int)GetNetState;
- (void)changeSpeakerMode:(id)arg1;
- (int)setMAVShareSend:(BOOL)arg1;
- (int)setMAVVideoSend:(BOOL)arg1;
- (int)setMAVAudioRecv:(BOOL)arg1;
- (int)setMAVAudioSend:(BOOL)arg1;
- (int)GetVolume;
- (void)GetRoomInfo:(int)arg1 businessType:(int)arg2 relationID:(unsigned long long)arg3;
- (void)ActionKickedByOtherTerm;
- (void)KickedByOtherTerm;
- (void)ActionConnectServerTimeout;
- (void)ConnectServerTimeout;
- (int)ActionAcceptGroupAudioChat;
- (int)ActionRequestGroupAudioChat;
- (int)IgnoreGroupAudioChat:(int)arg1 withRelationID:(unsigned long long)arg2 busiType:(int)arg3;
- (int)DestroyGroupAudioChat:(int)arg1 businessType:(int)arg2 relationID:(unsigned long long)arg3;
- (void)resetChattingState;
- (int)ActionQuitGroupAudioChat:(id)arg1;
- (void)appendQuitGroupAudioChatMsg;
- (int)QuitGroupAudioChat:(int)arg1 withRelationID:(unsigned long long)arg2 IsByCloseButton:(BOOL)arg3;
- (int)P2PShareWiteTimeOut:(int)arg1 withRelationID:(unsigned long long)arg2;
- (int)InviteGroupAudioChat:(int)arg1 businessType:(int)arg2 relationID:(unsigned long long)arg3 friendsID:(id)arg4 flag:(int)arg5;
- (void)onInviteTimer:(id)arg1;
- (int)ActionInviteGroupAudioChat:(id)arg1;
- (int)InviteGroupAudioChat:(id)arg1;
- (int)AcceptGroupAudioChat:(int)arg1 withRelationID:(unsigned long long)arg2 withAVType:(int)arg3 withAVSubType:(int)arg4 pstnConfId:(int)arg5;
- (int)RequestGroupAudioChat:(int)arg1 withRelationID:(unsigned long long)arg2 withAVType:(int)arg3 withAVSubType:(int)arg4 pstnConfId:(int)arg5;
- (int)CheckRecvCall:(int)arg1 businessType:(int)arg2 subType:(int)arg3 relationID:(unsigned long long)arg4;
- (int)RecvInviteSwitchedFromP2P:(unsigned long long)arg1 withInviter:(unsigned long long)arg2;
- (BOOL)RecvGroupAudioChat:(int)arg1 businessType:(int)arg2 subType:(int)arg3 relationID:(unsigned long long)arg4 inviter:(unsigned long long)arg5 invitees:(id)arg6 isOnLine:(BOOL)arg7 isFromP2P:(int)arg8 clientSeq:(int)arg9 sendTime:(int)arg10;
- (int)StartMultiAVChat:(int)arg1 withRelationID:(unsigned long long)arg2 withAVType:(int)arg3 withAVSubType:(int)arg4 withEntrance:(int)arg5 pstnConfId:(int)arg6;
- (int)StartMultiAVChat:(int)arg1 withRelationID:(unsigned long long)arg2 withAVType:(int)arg3 withAVSubType:(int)arg4 withEntrance:(int)arg5;
- (void)didRecvConfigSystemInfo:(id)arg1;
- (void)stopOfflineTimer;
- (void)didRecievedGroupAudioOfflineMsg:(unsigned long long)arg1:(int)arg2:(char *)arg3:(int)arg4;
- (void)onEngineEvent:(id)arg1;
- (void)UpdateSelfChatState;
- (void)UpdateSelfUin;
- (void)OnRecvLoginSuc;
- (void)onForceOffLine;
- (BOOL)isOnlineTimerStarted;
- (void)stopOnlineTimer;
- (void)startOnlineTimer;
- (void)InitLoginData;
- (void)UnitGroupAudioNotification;
- (void)InitGroupAudioNotification;
- (void)resetConnServerTimer;
- (void)UnitGroupAudioChatService;
- (void)InitGroupAudioChatService;
- (void)dealloc;
- (id)init;
- (void)showStateLog;

@end
