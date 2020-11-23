/* WizWebView - Creates Instance of wizard UIWebView.
 *
 * @author Wizcorp Inc. [ Incorporated Wizards ]
 * @copyright 2013
 * @file WizWebView.h for PhoneGap
 *
 */ 

#import <Foundation/Foundation.h>
#import <Cordova/CDVPlugin.h>
#import <UIKit/UIKit.h>
#import <WebKit/WebKit.h>

@interface WizWebView : NSObject <WKNavigationDelegate> {
}

@property (nonatomic, retain) WKWebView *wizView;
@property (nonatomic, retain) NSString *viewName;

- (WKWebView *)createNewInstanceViewFromManager:(CDVPlugin *)myViewManager newBounds:(CGRect)webViewBounds viewName:(NSString *)name sourceToLoad:(NSString *)src withOptions:(NSDictionary *)options;

@end
