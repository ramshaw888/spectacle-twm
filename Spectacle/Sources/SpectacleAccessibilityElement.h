#import <Carbon/Carbon.h>

@interface SpectacleAccessibilityElement : NSObject

+ (SpectacleAccessibilityElement *)frontmostApplicationElement;
+ (SpectacleAccessibilityElement *)frontmostWindowElement;
+ (NSMutableArray<SpectacleAccessibilityElement *> *)allApplicationWindowElements;

- (SpectacleAccessibilityElement *)elementWithAttribute:(CFStringRef)attribute;

- (NSString *)stringValueOfAttribute:(CFStringRef)attribute;

- (AXValueRef)valueOfAttribute:(CFStringRef)attribute type:(AXValueType)type;
- (void)setValue:(AXValueRef)value forAttribute:(CFStringRef)attribute;

- (CGRect)rectOfElement;
- (void)setRectOfElement:(CGRect)rect;

- (NSString *)windowTitle;

+ (CGRect)normalizeCoordinatesOfRect:(CGRect)rect frameOfScreen:(CGRect)frameOfScreen;

- (BOOL)isSheet;
- (BOOL)isSystemDialog;

@end
