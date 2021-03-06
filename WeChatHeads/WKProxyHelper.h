//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface WKProxyHelper : NSObject
{
}

+ (void)checkProxyInfoWithCompletion:(CDUnknownBlockType)arg1;
+ (void)cleanupCrashState;
+ (void)downloadProxyInfoIfNecessary;
+ (void)resetStateWhenAppEnterBackground;
+ (void)crashProtectionEnd;
+ (void)crashProtectionBegin;
+ (_Bool)isProxyAvailable;
+ (_Bool)enableWKProxy:(id *)arg1;
+ (void)clearProxyMemory;
+ (_Bool)setProxyInfoLocallyWithError:(id *)arg1;
+ (void)downloadProxyInfo;
+ (void)initialize;
+ (_Bool)shouldDownloadWKProxy;
+ (id)phoneID;
+ (_Bool)isReportWithMemCmpEnabled;
+ (void)setReportEnabled:(_Bool)arg1;
+ (_Bool)isReportEnabled;
+ (void)setCrashReported:(_Bool)arg1;
+ (_Bool)isCrashHasReported;
+ (_Bool)isDetectedCrashWithTimes:(long long)arg1;
+ (_Bool)isDetectedCrash;
+ (long long)proxyResult;
+ (void)setProxyResult:(long long)arg1;
+ (void)setProxyActionState:(long long)arg1;
+ (long long)proxyActionState;
+ (void)finishActionWithResult:(long long)arg1;
+ (void)checkProxyActionState;
+ (void)downloadWKProxyInfoWithCompletion:(CDUnknownBlockType)arg1;
+ (_Bool)setWithProxyInfo:(id)arg1;
+ (_Bool)isProxyInfoValid:(id)arg1;
+ (void)registerMttSchemePrivate;
+ (const struct mach_header *)getWebkitHeader;
+ (id)generateMemory;
- (id)init;

@end

