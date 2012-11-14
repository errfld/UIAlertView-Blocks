//
//  RIButtonItem.h
//  Shibui
//
//  Created by Jiva DeVoe on 1/12/11.
//  Copyright 2011 Random Ideas, LLC. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef void (^RIActionBlock)(NSDictionary* userInfo);

@interface RIButtonItem : NSObject
{
    NSString *label;
    NSDictionary *userInfo;
}
@property (retain, nonatomic) NSString *label;
@property (retain, nonatomic) NSDictionary *userInfo;
@property (copy, nonatomic) RIActionBlock action;
+(id)item;
+(id)itemWithLabel:(NSString *)inLabel;
+(id)itemWithLabel:(NSString *)inLabel andUserInfo:(NSDictionary*)inUserInfo;
@end

