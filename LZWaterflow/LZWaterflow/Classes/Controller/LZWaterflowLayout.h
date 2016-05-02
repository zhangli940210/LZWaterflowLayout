//
//  LZWaterflowLayout.h
//  LZWaterflow
//
//  Created by apple on 16/5/2.
//  Copyright © 2016年 m14a.cn. All rights reserved.
//

#import <UIKit/UIKit.h>
@class LZWaterflowLayout;

@protocol LZWaterflowLayoutDelegate <NSObject>

- (CGFloat)waterflowLayout:(LZWaterflowLayout *)waterflowLayout heightForWidth:(CGFloat)width atIndexPath:(NSIndexPath *)indexPath;

@end

@interface LZWaterflowLayout : UICollectionViewLayout
/** 内边距 */
@property (nonatomic, assign) UIEdgeInsets sectionInset;
/** 每一列之间的间距 */
@property (nonatomic, assign) CGFloat columnMargin;
/** 每一行之间的间距 */
@property (nonatomic, assign) CGFloat rowMargin;
/** 显示多少列 */
@property (nonatomic, assign) int columnsCount;
/** 代理 */
@property (nonatomic, weak) id<LZWaterflowLayoutDelegate> delegate;

@end
