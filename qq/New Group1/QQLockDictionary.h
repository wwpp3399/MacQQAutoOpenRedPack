//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSLock, NSMutableDictionary;

@interface QQLockDictionary : NSObject
{
    NSLock *_lock;
    NSMutableDictionary *_dict;
}

+ (id)dictionaryWithMutableDictionary:(id)arg1;
- (void).cxx_destruct;
- (id)initWithMutableDictionary:(id)arg1;
- (unsigned long long)count;
- (void)removeObjectsForKeys:(id)arg1;
- (void)removeAllObjects;
- (id)allKeys;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)removeObjectForKey:(id)arg1;
- (id)objectForKey:(id)arg1;
- (id)init;

@end

