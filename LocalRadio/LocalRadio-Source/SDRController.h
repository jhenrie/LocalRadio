//
//  SDRController.h
//  LocalRadio
//
//  Created by Douglas Ward on 5/29/17.
//  Copyright © 2017-2018 ArkPhone LLC. All rights reserved.
//

#import <Foundation/Foundation.h>

@class AppDelegate;
@class TaskPipelineManager;

@interface SDRController : NSObject
{
}


@property(strong) IBOutlet AppDelegate * appDelegate;

@property (strong) NSString * rtlsdrTaskMode;   // "frequency", "scan", or "stopped"
@property (strong) NSMutableDictionary * rtlsdrCategoryDictionary;

@property (strong) TaskPipelineManager * radioTaskPipelineManager;

@property (strong) NSMutableString * frequencyString;
@property (strong) NSString * modulationString;
@property (strong) NSNumber * tunerGainNumber;
@property (strong) NSNumber * squelchLevelNumber;
@property (strong) NSString * optionsString;
@property (strong) NSString * audioOutputFilterString;
@property (strong) NSNumber * tunerSampleRateNumber;
@property (strong) NSString * statusFunctionString;

@property (strong) NSString * deviceName;
@property (strong) NSString * customTaskID;

@property (assign) BOOL enableDirectSamplingQBranchMode;
@property (assign) BOOL enableTunerAGC;
@property (assign) BOOL stereoFlag;
@property (assign) BOOL biasTFlag;
@property (strong) NSString * usbDeviceString;  // device index or 8-digit serial number to match RTL-SDR USB

@property (strong) NSArray * rtlsdrTaskFrequenciesArray;
@property (assign) NSInteger udpTag;

- (void)terminateTasks;

- (void)startRtlsdrTasksForFrequency:(NSDictionary *)frequencyDictionary;
- (void)startRtlsdrTasksForFrequencies:(NSArray *)frequenciesArray category:(NSMutableDictionary *)categoryDictionary;
- (void)startTasksForDevice:(NSString *)deviceName;
- (void)startTasksForCustomTaskID:(NSString *)customTaskID;

@end
