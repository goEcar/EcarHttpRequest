//
//  EPHttpHeadBase.h
//  EcarRequestDemo
//
//  Created by liwei qiao on 2017/9/15.
//  Copyright © 2017年 liwei qiao. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface EPHttpHeadBase : NSObject
{
    
}
@property (nonatomic, strong) NSString *ClientType;
@property (nonatomic, strong) NSString *module;
@property (nonatomic, strong) NSString *service;
@property (nonatomic, strong) NSString *comid;
@property (nonatomic, strong) NSString *appId;
@property (nonatomic, strong) NSString *ve;
@property (nonatomic, strong) NSString *URLKEY;
@property (nonatomic, strong) NSString *HTTPAPI;

//+ (EPHttpHeadBase *)createTestingEnvironmentHead;
+ (EPHttpHeadBase *)createDevelopEnvironmentHead;
//+ (EPHttpHeadBase *)createArchiveEnvironmentHead;


- (NSDictionary *)headArgsToMap;

@end
