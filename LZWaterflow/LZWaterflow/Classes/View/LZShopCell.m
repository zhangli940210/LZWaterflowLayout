//
//  LZShopCell.m
//  LZWaterflow
//
//  Created by apple on 16/5/2.
//  Copyright © 2016年 m14a.cn. All rights reserved.
//

#import "LZShopCell.h"
#import "LZShop.h"
#import "UIImageView+WebCache.h"

@interface LZShopCell ()

@property (weak, nonatomic) IBOutlet UIImageView *imageView;
@property (weak, nonatomic) IBOutlet UILabel *priceLabel;

@end

@implementation LZShopCell

- (void)setShop:(LZShop *)shop
{
    _shop = shop;
    // 1.图片
    [self.imageView sd_setImageWithURL:[NSURL URLWithString:shop.img] placeholderImage:[UIImage imageNamed:@"loading"]];
    // 2.价格
    self.priceLabel.text = shop.price;
}

@end
