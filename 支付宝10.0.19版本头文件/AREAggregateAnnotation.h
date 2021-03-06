//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AREBaseAnnotation.h"

@class NSString;

@interface AREAggregateAnnotation : AREBaseAnnotation
{
    unsigned long long _type;
    NSString *_clusterCrowNo;
    long long _count;
    long long _aggregationRadius;
}

+ (id)annotationReuseIdentifier;
@property(nonatomic) long long aggregationRadius; // @synthesize aggregationRadius=_aggregationRadius;
@property(nonatomic) long long count; // @synthesize count=_count;
@property(retain, nonatomic) NSString *clusterCrowNo; // @synthesize clusterCrowNo=_clusterCrowNo;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)description;

@end

