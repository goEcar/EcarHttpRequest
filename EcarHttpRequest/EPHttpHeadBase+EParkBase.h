//
//  EPHttpHeadBase+EParkBase.h
//  EcarRequestDemo
//
//  Created by liwei qiao on 2017/9/15.
//  Copyright © 2017年 liwei qiao. All rights reserved.
//  三位一体工程基本请求信息

#import "EPHttpHeadBase.h"

@interface EPHttpHeadBase (EParkBase)

+ (EPHttpHeadBase *)createTestingEnvironmentHeadWithEParkBase;
+ (EPHttpHeadBase *)createArchiveEnvironmentHeadWithEParkBase;

@end
