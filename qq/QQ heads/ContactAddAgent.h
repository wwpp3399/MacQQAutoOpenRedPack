//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ContactAddAgent : NSObject
{
}

+ (BOOL)checkUinIsVaild:(id)arg1;
+ (void)convertValidateArrayToStr:(id)arg1 answerArray:(id)arg2 convertBlock:(id)arg3;
+ (void)showContactAddValidate:(long long)arg1 questionArray:(id)arg2 sourceId:(long long)arg3 groupUin:(double)arg4;
+ (void)fetchContactAdd:(id)arg1 completeBlock:(id)arg2;
+ (void)fetchContactInfoSearch:(id)arg1 completeBlock:(id)arg2;
+ (void)fetchContactValidateInfo:(id)arg1 sourceId:(long long)arg2 completeBlock:(id)arg3;
+ (id)getContactInfo;

@end
