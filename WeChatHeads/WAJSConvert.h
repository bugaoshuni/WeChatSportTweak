//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface WAJSConvert : NSObject
{
}

+ (void)jsObjectSetArrayBuffer:(struct OpaqueJSValue *)arg1 withData:(id)arg2 context:(struct OpaqueJSContext *)arg3;
+ (id)compatible_getDataWithArrayBuffer:(struct OpaqueJSValue *)arg1 context:(struct OpaqueJSContext *)arg2;
+ (struct OpaqueJSValue *)compatible_jsObjectMakeArrayBufferWithData:(id)arg1 context:(struct OpaqueJSContext *)arg2;
+ (id)ios10_getDataWithArrayBuffer:(struct OpaqueJSValue *)arg1 context:(struct OpaqueJSContext *)arg2;
+ (struct OpaqueJSValue *)ios10_jsObjectMakeArrayBufferWithData:(id)arg1 context:(struct OpaqueJSContext *)arg2;

@end

