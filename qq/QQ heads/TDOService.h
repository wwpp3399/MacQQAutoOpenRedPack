//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSConnectionDelegate.h"
#import "TDOInterface.h"

@class NSConnection, NSMutableArray, NSString;

@interface TDOService : NSObject <NSConnectionDelegate, TDOInterface>
{
    NSString *_lock4Connection;
    id _messageHandler;
    id _disconnectHandler;
    NSConnection *_serviceConnection;
    NSString *_serviceName;
    id _connectionHandler;
    NSMutableArray *_connections;
}

+ (id)runServiceWithName:(id)arg1 connectionHandler:(id)arg2;
+ (id)runServiceWithName:(id)arg1;
@property(copy, nonatomic) NSMutableArray *connections; // @synthesize connections=_connections;
@property(copy, nonatomic) id connectionHandler; // @synthesize connectionHandler=_connectionHandler;
@property(copy, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
@property(retain, nonatomic) NSConnection *serviceConnection; // @synthesize serviceConnection=_serviceConnection;
@property(copy, nonatomic) id disconnectHandler; // @synthesize disconnectHandler=_disconnectHandler;
@property(copy, nonatomic) id messageHandler; // @synthesize messageHandler=_messageHandler;
- (void).cxx_destruct;
- (void)removeConnection:(id)arg1;
- (void)handleConnectionBroken:(id)arg1;
- (void)handleConnection:(id)arg1;
- (BOOL)connection:(id)arg1 shouldMakeNewConnection:(id)arg2;
- (id)serviceIdentifier;
- (void)handleMessage:(id)arg1;
- (void)sendMessage:(id)arg1;
- (void)runService;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

