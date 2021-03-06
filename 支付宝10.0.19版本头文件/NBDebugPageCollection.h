//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface NBDebugPageCollection : NSObject
{
    NSMutableDictionary *_pageCollection;
}

@property(retain, nonatomic) NSMutableDictionary *pageCollection; // @synthesize pageCollection=_pageCollection;
- (void).cxx_destruct;
- (void)removeViewInfo:(id)arg1;
- (void)updatePageScreenshot:(id)arg1 forViewId:(id)arg2;
- (id)getEventTimeForType:(id)arg1 viewId:(id)arg2;
- (id)getScreenshotsForViewId:(id)arg1;
- (void)updateTimeStampForViewId:(id)arg1 eventType:(id)arg2;
- (void)registerViewId:(id)arg1;
- (_Bool)ifViewIdExists:(id)arg1;
- (id)getPageOfViewId:(id)arg1;
- (id)getDefaultItem;
- (id)description;

@end

