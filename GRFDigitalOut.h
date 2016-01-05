//
//  GRFDigitalOut.h
//  GRFMap
//
//  Created by Marlene Cohen on 12/6/07.
//  Copyright 2007 . All rights reserved.
//

#import "GRF.h"
//#import <LablibITC18/LablibITC18.h>

@interface GRFDigitalOut : NSObject {

//	LLITC18DataDevice		*digitalOutDevice;
    LLDataDevice		*digitalOutDevice;
	NSLock					*lock;

}

- (NSString *)digitalCodeDictionary:(NSString *)eventName;
- (int)getDigitalValue:(NSString *)eventName;
- (BOOL)outputEvent:(long)event withData:(long)data;
- (BOOL)outputEvent:(long)event sleepInMicrosec:(int)sleepTimeInMicrosec;
- (BOOL)outputEventName:(NSString *)eventName withData:(long)data;
- (BOOL)outputEventName:(NSString *)eventName withData:(long)data sleepInMicrosec:(int)sleepTimeInMicrosec;
@end
