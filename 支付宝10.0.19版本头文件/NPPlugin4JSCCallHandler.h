//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NBPluginBase.h"

#import "APConfigObserverProtocol.h"

@class NSArray, NSString;

@interface NPPlugin4JSCCallHandler : NBPluginBase <APConfigObserverProtocol>
{
    NSArray *_serviceWorkOnlyEventsConfig;
}

@property(retain, nonatomic) NSArray *serviceWorkOnlyEventsConfig; // @synthesize serviceWorkOnlyEventsConfig=_serviceWorkOnlyEventsConfig;
- (void).cxx_destruct;
- (void)configChangedForKey:(id)arg1 value:(id)arg2;
- (void)handleEvent:(id)arg1;
- (_Bool)shouldDispatchEventOnlyToJSC:(id)arg1;
- (int)priority;
- (void)pluginDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

