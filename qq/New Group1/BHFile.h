//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSError, NSFileHandle, NSString;

@interface BHFile : NSObject
{
    NSString *_name;
    NSString *_folderPath;
    NSString *_path;
    NSFileHandle *_writeHandler;
    NSError *_error;
}

@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
- (void).cxx_destruct;
- (id)description;
- (id)fileWriter;
- (BOOL)copyToPath:(id)arg1 override:(BOOL)arg2;
- (BOOL)renameToPath:(id)arg1 override:(BOOL)arg2;
- (void)close;
- (BOOL)delete;
- (BOOL)mkdirs;
- (void)create;
- (BOOL)exists;
- (BOOL)isFolder;
@property(readonly, nonatomic) NSDate *lastModificationDate;
@property(readonly, nonatomic) NSDate *creationDate;
@property(readonly, nonatomic) unsigned long long length;
@property(readonly, nonatomic) NSString *path;
@property(readonly, nonatomic) NSString *name;
- (void)__setPath:(id)arg1;
- (id)initWithPath:(id)arg1;

@end

