//
//  CommenPoolDelegate.h
//  yande.re
//
//  Created by YuJie on 16/4/25.
//  Copyright © 2016年 YuJie. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "RatingFilter.h"
#import "CommenPostdelegate.h"
#define SCREEN_SIZE self.view.bounds.size
@interface CommenPoolDelegate : CommenPostdelegate
{
    CGFloat StandWidth;
    CGFloat StandHeight;
    CGFloat WideWidth;
    CGFloat WideHeight;
}
-(instancetype)init;
@end
