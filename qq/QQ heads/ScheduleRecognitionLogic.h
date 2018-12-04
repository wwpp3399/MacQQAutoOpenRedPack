//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableDictionary, OACDNConfigModel, ScheduleAIConfig;

@interface ScheduleRecognitionLogic : NSObject
{
    ScheduleAIConfig *config;
    NSMutableDictionary *resultsDict;
    NSArray *relativeTimes;
    NSMutableDictionary *oaResultsDict;
    OACDNConfigModel *oaConfig;
    id <ScheduleRecognitionLogicDelegate> _delegate;
}

@property(nonatomic) __weak id <ScheduleRecognitionLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)checkDateInfoWithRange:(struct _NSRange)arg1 msg:(id)arg2 inArray:(id)arg3;
- (id)fetchTimeInfos:(id)arg1 index:(int)arg2;
- (struct _NSRange)checkHasTheme:(id)arg1 isOA:(BOOL)arg2;
- (void)oaRecognitionWithMessages:(id)arg1 result:(id)arg2;
- (void)scheduleRecognitionWithMessages:(id)arg1 result:(id)arg2;
- (void)scheduleRecognition:(id)arg1;
- (id)init;

@end
