//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSTimer;

@interface O2OTimerWrapper : NSObject
{
    NSTimer *_timer;
    id _delegate;
    SEL _select;
}

@property(nonatomic) SEL select; // @synthesize select=_select;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)timerSelect;
- (void)startTimer:(double)arg1;
- (_Bool)hasTimer;
- (void)stopTimer;

@end

