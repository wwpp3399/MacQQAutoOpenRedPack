//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSString;

@interface mac_banner_info : JceObjectV2
{
    int jcev2_p_0_o_banner_type;
    unsigned int jcev2_p_4_o_feedsTime;
    NSString *jcev2_p_1_o_title;
    NSString *jcev2_p_2_o_content;
    NSString *jcev2_p_3_o_time;
}

+ (id)jceType;
+ (void)initialize;
@property(nonatomic, getter=jce_feedsTime, setter=setJce_feedsTime:) unsigned int jcev2_p_4_o_feedsTime; // @synthesize jcev2_p_4_o_feedsTime;
@property(retain, nonatomic, getter=jce_time, setter=setJce_time:) NSString *jcev2_p_3_o_time; // @synthesize jcev2_p_3_o_time;
@property(retain, nonatomic, getter=jce_content, setter=setJce_content:) NSString *jcev2_p_2_o_content; // @synthesize jcev2_p_2_o_content;
@property(retain, nonatomic, getter=jce_title, setter=setJce_title:) NSString *jcev2_p_1_o_title; // @synthesize jcev2_p_1_o_title;
@property(nonatomic, getter=jce_banner_type, setter=setJce_banner_type:) int jcev2_p_0_o_banner_type; // @synthesize jcev2_p_0_o_banner_type;
- (void).cxx_destruct;
- (id)init;

@end

