//
//  ModelOneAdapter.h
//  DesignModeDemo
//
//  Created by koala on 2018/4/16.
//  Copyright © 2018年 koala. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "UserInfoProtocol.h"
#import "ModelOne.h"

@interface ModelOneAdapter : NSObject <UserInfoProtocol>

- (instancetype)initWithModel:(ModelOne *)model;

@end
