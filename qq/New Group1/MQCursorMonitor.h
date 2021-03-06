//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MQCursorMonitor : NSObject
{
    BOOL _isStarted;
    id <MQCursorMonitorDelegate> _delegate;
    id _globalMonitor;
    id _localMonitor;
}

+ (id)sharedMonitor;
@property(retain, nonatomic) id localMonitor; // @synthesize localMonitor=_localMonitor;
@property(retain, nonatomic) id globalMonitor; // @synthesize globalMonitor=_globalMonitor;
@property(nonatomic) id <MQCursorMonitorDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL isStarted; // @synthesize isStarted=_isStarted;
- (void)stopMonitor;
- (void)startMonitor;
- (void)dealloc;

@end

