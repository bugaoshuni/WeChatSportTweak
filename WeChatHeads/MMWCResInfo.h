//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMResInfo.h"

#import "WCTTableCoding.h"

@class NSString;

@interface MMWCResInfo : MMResInfo <WCTTableCoding>
{
    _Bool isAutoIncrement;
    NSString *packageId;
    NSString *resUrl;
    NSString *protocol;
    long long lastInsertedRowID;
    NSString *_configId;
}

+ (const struct WCTProperty *)protocol;
+ (const struct WCTProperty *)resUrl;
+ (const struct WCTProperty *)packageId;
+ (const struct WCTProperty *)configId;
+ (const struct WCTProperty *)isTemp;
+ (const struct WCTProperty *)supportVersion;
+ (const struct WCTProperty *)fileId;
+ (const struct WCTProperty *)resSubType;
+ (const struct WCTProperty *)isCompress;
+ (const struct WCTProperty *)isEncrypt;
+ (const struct WCTProperty *)chunkLength;
+ (const struct WCTProperty *)resType;
+ (const struct WCTProperty *)crc32;
+ (const struct WCTProperty *)offset;
+ (const struct WCTProperty *)size;
+ (const struct WCTProperty *)accessTime;
+ (const struct WCTProperty *)expireTime;
+ (const struct WCTProperty *)createTime;
+ (const struct WCTProperty *)localSubPath;
+ (const struct WCTProperty *)version;
+ (const struct WCTProperty *)domain;
+ (const struct WCTProperty *)appId;
+ (const struct WCTProperty *)resMd5;
+ (const struct WCTProperty *)resUrlMd5;
+ (const struct WCTProperty *)resInfoId;
+ (const struct WCTAnyProperty *)AnyProperty;
+ (const list_2812bee2 *)AllProperties;
+ (const struct WCTBinding *)objectRelationalMappingForWCDB;
@property(retain, nonatomic) NSString *configId; // @synthesize configId=_configId;
@property(nonatomic) long long lastInsertedRowID; // @synthesize lastInsertedRowID;
@property(nonatomic) _Bool isAutoIncrement; // @synthesize isAutoIncrement;
@property(retain, nonatomic) NSString *protocol; // @synthesize protocol;
@property(retain, nonatomic) NSString *resUrl; // @synthesize resUrl;
@property(retain, nonatomic) NSString *packageId; // @synthesize packageId;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
@property(readonly, nonatomic) NSString *fullPath;
- (id)init;

@end
