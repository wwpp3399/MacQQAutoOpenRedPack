//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BDHIPInfo;

@interface ServerInfo : NSObject
{
    int connectSuccessCount;
    int connectFailedCount;
    BDHIPInfo *ipInfo;
    double lastAcessTime;
}

@property double lastAcessTime; // @synthesize lastAcessTime;
@property int connectFailedCount; // @synthesize connectFailedCount;
@property int connectSuccessCount; // @synthesize connectSuccessCount;
@property(retain) BDHIPInfo *ipInfo; // @synthesize ipInfo;
- (void)dealloc;
- (id)init;

@end
