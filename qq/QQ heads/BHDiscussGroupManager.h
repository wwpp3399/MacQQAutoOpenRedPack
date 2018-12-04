//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQBaseSingleton.h"

#import "IQQMessageProcessor.h"
#import "QQAccountEventObserver.h"

@class NSArray, NSMutableArray, NSMutableDictionary, NSString;

@interface BHDiscussGroupManager : QQBaseSingleton <IQQMessageProcessor, QQAccountEventObserver>
{
    NSMutableArray *_allDiscussGroupList;
    NSMutableArray *_validDiscussGroupListCache;
    NSMutableDictionary *_discussMemberDict;
    NSMutableDictionary *_discussMemberRoleDict;
}

@property(retain, nonatomic) NSMutableDictionary *discussMemberRoleDict; // @synthesize discussMemberRoleDict=_discussMemberRoleDict;
@property(retain, nonatomic) NSMutableDictionary *discussMemberDict; // @synthesize discussMemberDict=_discussMemberDict;
@property(retain) NSMutableArray *validDiscussGroupListCache; // @synthesize validDiscussGroupListCache=_validDiscussGroupListCache;
@property(retain) NSMutableArray *allDiscussGroupList; // @synthesize allDiscussGroupList=_allDiscussGroupList;
- (void).cxx_destruct;
- (void)setHRMeetingActiveType:(id)arg1 activeType:(int)arg2 completion:(id)arg3;
- (void)quitHRMeeting:(id)arg1 completion:(id)arg2;
- (void)addHRMeetingTips:(id)arg1 tips:(id)arg2 completion:(id)arg3;
- (void)addHRMeetingTips:(id)arg1 tips:(id)arg2 containResume:(BOOL)arg3 completion:(id)arg4;
- (void)requestAddMemberToHRMeeting:(id)arg1 addMembers:(id)arg2 completion:(id)arg3;
- (void)saveHRMeetingUserName:(id)arg1 uin:(long long)arg2 disussUin:(long long)arg3;
- (void)refreshHRMeetingUserNameWithUin:(long long)arg1 disussUin:(long long)arg2 completion:(id)arg3;
- (id)displayNameForHRMeetingWithDiscussUin:(id)arg1 memberUin:(id)arg2 asyncCallBack:(id)arg3;
- (void)requestJoinHRMeeting:(id)arg1 completionWithObject:(id)arg2;
- (id)getCompatibleRequestURL:(id)arg1 ticket_f:(id)arg2;
- (void)requestJoinMeeting:(id)arg1 completionWithObject:(id)arg2;
- (void)requestAddDiscussBySig:(id)arg1 completionWithObject:(id)arg2;
- (void)requestDiscussInfoBySig:(id)arg1 completionWithObject:(id)arg2;
- (void)requestDecodeShareUrl:(id)arg1 completionWithObject:(id)arg2;
- (void)requestDiscussShareUrl:(id)arg1 completionWithObject:(id)arg2;
- (BOOL)delDiscussLocalMember:(id)arg1 delUin:(id)arg2;
- (void)deleteDiscussMemberData:(long long)arg1;
- (id)loadDiscussMemberList:(long long)arg1;
- (id)processMsgEncapsulation:(id)arg1;
- (void)saveDiscussMemberList:(long long)arg1;
- (void)loadDiscussGroupList;
- (void)saveDiscussGroupList;
- (void)createDiscussFolder;
- (id)getDiscussGroupInfo:(id)arg1;
- (int)discussMaskPushState:(id)arg1;
- (void)setDiscussMaskPushState:(id)arg1 state:(int)arg2 completion:(id)arg3;
- (void)setDiscussNameCard:(id)arg1 nameCard:(id)arg2 completion:(id)arg3;
- (void)changeDiscussName:(id)arg1 newDiscussName:(id)arg2 completion:(id)arg3;
- (void)addDiscussMember:(id)arg1 addMembers:(id)arg2 completion:(id)arg3;
- (void)responseCreateDiscussGroup:(UniPacket_625f2f0c)arg1 complete:(id)arg2;
- (void)createDiscussGroup:(id)arg1 memberArray:(id)arg2 completion:(id)arg3;
- (void)quitDiscuss:(id)arg1 completion:(id)arg2;
- (id)getErrorStr:(int)arg1 type:(int)arg2;
- (id)_discussMemberList:(long long)arg1;
- (BOOL)_insertDiscussMemberArray:(id)arg1 insertMemberArray:(id)arg2;
- (id)getDiscussMemberList:(id)arg1;
- (id)getDiscussMember:(id)arg1 memberUin:(long long)arg2;
- (id)getGroupInfo:(long long)arg1;
- (id)getGroupInfoList;
- (void)removeMemberInfo:(long long)arg1;
- (void)addGroupInfo:(id)arg1;
- (void)deleteDiscussData:(id)arg1;
- (void)removeDiscussGroupInfoByUIN:(long long)arg1;
- (id)displayNameForDiscussMemberWithDiscussUin:(id)arg1 memberUin:(id)arg2 asyncCallBack:(id)arg3;
- (id)displayNameForDiscussMemberWithDiscussUin:(id)arg1 memberUin:(id)arg2;
- (void)requestOnlineState:(id)arg1 completion:(id)arg2;
- (struct ConfMemberInfo *)fakeMemberInfo;
- (struct ConfBaseInfo *)fakeBaseInfo;
- (void)responseGetDiscussInfo:(struct OIDBSSOPkg *)arg1 completion:(id)arg2;
- (void)refreshDiscussGroupInfo:(id)arg1 completion:(id)arg2;
- (void)responseGetDiscussList:(struct OIDBSSOPkg *)arg1 complete:(id)arg2;
- (void)refreshDiscussGroupListWithCompletion:(id)arg1;
- (void)notifyDiscussGroupInfoDidDelete:(long long)arg1;
- (void)notifyDiscussGroupInfoDidChange:(long long)arg1;
- (void)notifyDiscussGroupListDidChange;
@property(readonly, nonatomic) NSMutableDictionary *discussMemberListDict;
@property(readonly, nonatomic) NSArray *allDiscussGroupInfoList;
- (void)resetValidListCache;
@property(readonly, nonatomic) NSArray *discussGroupInfoList;
- (void)onDidChangeAccount;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
