#import <Foundation/Foundation.h>

@interface NSObject (Addition)

/// 使用字典创建模型对象
///
/// @param dict 字典
///
/// @return 模型对象
+ (instancetype)objectWithDict:(NSDictionary *)dict;

@end
