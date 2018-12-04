//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface BHPublicPlatformAccount : NSObject
{
    BOOL _isFollowed;
    unsigned int _certifiedGrade;
    unsigned long long _UIN;
    NSString *_name;
    NSString *_accountID;
    NSString *_summary;
    NSString *_certification;
    NSArray *_menus;
}

@property(retain, nonatomic) NSArray *menus; // @synthesize menus=_menus;
@property(copy, nonatomic) NSString *certification; // @synthesize certification=_certification;
@property(nonatomic) BOOL isFollowed; // @synthesize isFollowed=_isFollowed;
@property(nonatomic) unsigned int certifiedGrade; // @synthesize certifiedGrade=_certifiedGrade;
@property(copy, nonatomic) NSString *summary; // @synthesize summary=_summary;
@property(copy, nonatomic) NSString *accountID; // @synthesize accountID=_accountID;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) unsigned long long UIN; // @synthesize UIN=_UIN;
- (void).cxx_destruct;
- (id)description;
- (id)initWithUIN:(unsigned long long)arg1;

@end
