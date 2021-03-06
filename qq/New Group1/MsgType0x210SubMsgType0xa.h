//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString;

@interface MsgType0x210SubMsgType0xa : NSObject
{
    unsigned int uSrcAppId;
    unsigned int uSrcInstId;
    unsigned int uDstAppId;
    unsigned int uDstInstId;
    long long uDstUin;
    unsigned int uType;
    unsigned int uServerIp;
    unsigned int uServerPort;
    NSData *vUrlNotify;
    NSData *vTokenKey;
    long long uFileLen;
    NSString *strFileName;
    NSData *vMd5;
    long long lSessionId;
    NSData *strOriginfile_md5;
    unsigned int uOriginfiletype;
    unsigned int uSeq;
}

+ (id)parseFromMsgBodyPack:(struct MsgType0x210SubMsgType0xa *)arg1;
@property(nonatomic) unsigned int uSeq; // @synthesize uSeq;
@property(nonatomic) unsigned int uOriginfiletype; // @synthesize uOriginfiletype;
@property(retain, nonatomic) NSData *strOriginfile_md5; // @synthesize strOriginfile_md5;
@property(nonatomic) long long lSessionId; // @synthesize lSessionId;
@property(retain, nonatomic) NSData *vMd5; // @synthesize vMd5;
@property(retain, nonatomic) NSString *strFileName; // @synthesize strFileName;
@property(nonatomic) long long uFileLen; // @synthesize uFileLen;
@property(retain, nonatomic) NSData *vTokenKey; // @synthesize vTokenKey;
@property(retain, nonatomic) NSData *vUrlNotify; // @synthesize vUrlNotify;
@property(nonatomic) unsigned int uServerPort; // @synthesize uServerPort;
@property(nonatomic) unsigned int uServerIp; // @synthesize uServerIp;
@property(nonatomic) unsigned int uType; // @synthesize uType;
@property(nonatomic) long long uDstUin; // @synthesize uDstUin;
@property(nonatomic) unsigned int uDstInstId; // @synthesize uDstInstId;
@property(nonatomic) unsigned int uDstAppId; // @synthesize uDstAppId;
@property(nonatomic) unsigned int uSrcInstId; // @synthesize uSrcInstId;
@property(nonatomic) unsigned int uSrcAppId; // @synthesize uSrcAppId;
- (void).cxx_destruct;
- (id)description;

@end

