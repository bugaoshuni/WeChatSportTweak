//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@interface SCWebSocketConfig : NSObject
{
    NSDictionary *_conf;
}

@property(retain, nonatomic) NSDictionary *conf; // @synthesize conf=_conf;
- (void).cxx_destruct;
- (long long)configTimeoutMS;
- (long long)configMaxTimeoutMS;
- (id)configDomainList;
- (long long)configDefaultTimeoutMS;

@end

