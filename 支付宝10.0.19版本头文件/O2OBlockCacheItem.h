//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@interface O2OBlockCacheItem : NSObject
{
    NSDictionary *_data;
    NSDictionary *_blockTemplates;
}

+ (Class)blockTemplatesElementClass;
+ (Class)dataElementClass;
@property(retain, nonatomic) NSDictionary *blockTemplates; // @synthesize blockTemplates=_blockTemplates;
@property(retain, nonatomic) NSDictionary *data; // @synthesize data=_data;
- (void).cxx_destruct;

@end

