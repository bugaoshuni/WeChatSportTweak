//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, O2OLabelItem;

@protocol O2OIndexTabChangeDelegate <NSObject>
- (_Bool)isFirstPage;
- (void)setPageType:(NSString *)arg1 tplId:(NSString *)arg2;
- (void)setTab:(O2OLabelItem *)arg1 transParam:(NSString *)arg2 currentCount:(long long)arg3 realCount:(long long)arg4 hasMore:(_Bool)arg5;
@end

