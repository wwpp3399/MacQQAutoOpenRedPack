//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BHStructMessageParent.h"

@class BHStructMessageItem, BHStructMessageSource, NSArray, NSString;

@interface BHStructMessageRoot : BHStructMessageParent
{
    BHStructMessageItem *_item;
    BOOL _forwardable;
    BOOL _collectable;
    BOOL _showAvatar;
    BOOL _copyURL;
    unsigned long long _serviceID;
    NSString *_brief;
    NSString *_URL;
    NSString *_action;
    NSString *_actionData;
    BHStructMessageSource *_source;
}

@property(readonly, nonatomic) BHStructMessageSource *source; // @synthesize source=_source;
@property(readonly, nonatomic) NSString *actionData; // @synthesize actionData=_actionData;
@property(readonly, nonatomic) NSString *action; // @synthesize action=_action;
@property(copy, nonatomic) NSString *URL; // @synthesize URL=_URL;
@property(copy, nonatomic) NSString *brief; // @synthesize brief=_brief;
@property(nonatomic) BOOL copyURL; // @synthesize copyURL=_copyURL;
@property(nonatomic) BOOL showAvatar; // @synthesize showAvatar=_showAvatar;
@property(nonatomic) BOOL collectable; // @synthesize collectable=_collectable;
@property(nonatomic) BOOL forwardable; // @synthesize forwardable=_forwardable;
@property(nonatomic) unsigned long long serviceID; // @synthesize serviceID=_serviceID;
- (void).cxx_destruct;
- (id)addSourceWithName:(id)arg1;
- (id)addItemWithLayout:(unsigned long long)arg1;
- (void)setAction:(id)arg1 data:(id)arg2;
@property(readonly, copy, nonatomic) NSArray *items;
- (id)description;
- (id)node;
- (id)elementName;
- (void)_recurseNode:(id)arg1;
- (id)initWithXMLString:(id)arg1;

@end

