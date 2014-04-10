//
//  HKLSocketStubResponse.h
//  HKLSocketStubServer
//
//  Created by Hirohito Kato on 2014/04/04.
//  Copyright (c) 2014 Hirohito Kato.
//

#import <Foundation/Foundation.h>
#import "HKLSocketStubConstants.h"

@interface HKLSocketStubResponse : NSObject
<HKLSocketStubResponseChaining, NSCopying>

@property (nonatomic) NSData *data;         // expected incoming data
@property (nonatomic) NSString *dataString; // expected incoming data(UTF-8 string expression)

@property (nonatomic) NSData *responseData;         // outgoing response data
@property (nonatomic) NSString *responseDataString; // outgoing response data(UTF-8 string expression)

@property (nonatomic) NSTimeInterval processingTimeSeconds;

@property (nonatomic, copy) HKLSocketStubDataCheckBlock checkBlock;

@property (nonatomic) BOOL external;

- (instancetype)initWithSocketStubResponse:(HKLSocketStubResponse *)response;
@end
