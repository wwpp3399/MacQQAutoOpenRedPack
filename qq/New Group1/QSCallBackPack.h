//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface QSCallBackPack : NSObject
{
    id _callBackObj;
    id _callBackParam;
}

+ (id)callBackPackWithObj:(id)arg1 param:(id)arg2;
@property(retain, nonatomic) id callBackParam; // @synthesize callBackParam=_callBackParam;
@property(nonatomic) __weak id callBackObj; // @synthesize callBackObj=_callBackObj;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithObj:(id)arg1 param:(id)arg2;

@end
