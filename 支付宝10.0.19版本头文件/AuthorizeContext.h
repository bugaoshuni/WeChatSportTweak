//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface AuthorizeContext : NSObject
{
    NSDictionary *_appScheme;
    NSString *_UTDID;
}

+ (id)shareData;
@property(copy) NSString *UTDID; // @synthesize UTDID=_UTDID;
@property(retain, nonatomic) NSDictionary *appScheme; // @synthesize appScheme=_appScheme;
- (void).cxx_destruct;
- (id)init;

@end

