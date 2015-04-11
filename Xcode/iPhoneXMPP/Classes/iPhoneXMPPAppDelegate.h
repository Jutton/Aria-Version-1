#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

#import "XMPPFramework.h"

@class SettingsViewController;
@class SendMessageViewController;
@class MessageTableViewController;


@interface iPhoneXMPPAppDelegate : NSObject <UIApplicationDelegate, XMPPRosterDelegate, UIAlertViewDelegate>
{
	XMPPStream *xmppStream;
	XMPPReconnect *xmppReconnect;
    XMPPRoster *xmppRoster;
	XMPPRosterCoreDataStorage *xmppRosterStorage;
    XMPPvCardCoreDataStorage *xmppvCardStorage;
	XMPPvCardTempModule *xmppvCardTempModule;
	XMPPvCardAvatarModule *xmppvCardAvatarModule;
	XMPPCapabilities *xmppCapabilities;
	XMPPCapabilitiesCoreDataStorage *xmppCapabilitiesStorage;
    
    
    XMPPUserCoreDataStorageObject *currentUser;
	
	NSString *password;
	
	BOOL customCertEvaluation;
	
	BOOL isXmppConnected;
	
	UIWindow *window;
	UINavigationController *navigationController;
    SettingsViewController *loginViewController;
    UIBarButtonItem *loginButton;
}

@property (nonatomic, strong, readonly) XMPPStream *xmppStream;
@property (nonatomic, strong, readonly) XMPPReconnect *xmppReconnect;
@property (nonatomic, strong, readonly) XMPPRoster *xmppRoster;
@property (nonatomic, strong, readonly) XMPPRosterCoreDataStorage *xmppRosterStorage;
@property (nonatomic, strong, readonly) XMPPvCardTempModule *xmppvCardTempModule;
@property (nonatomic, strong, readonly) XMPPvCardAvatarModule *xmppvCardAvatarModule;
@property (nonatomic, strong, readonly) XMPPCapabilities *xmppCapabilities;
@property (nonatomic, strong, readonly) XMPPCapabilitiesCoreDataStorage *xmppCapabilitiesStorage;

@property (nonatomic, strong) IBOutlet XMPPUserCoreDataStorageObject *currentUser;
@property (nonatomic, strong) IBOutlet UIWindow *window;
@property (nonatomic, strong) IBOutlet UINavigationController *navigationController;
@property (nonatomic, strong) IBOutlet SettingsViewController *settingsViewController;
@property (nonatomic, strong) IBOutlet UIBarButtonItem *loginButton;

@property (nonatomic, strong) IBOutlet SendMessageViewController *messageViewController;
@property (nonatomic, strong) IBOutlet MessageTableViewController *messageTableViewController;

- (NSManagedObjectContext *)managedObjectContext_roster;
- (NSManagedObjectContext *)managedObjectContext_capabilities;

- (BOOL)connect;
- (void)disconnect;




@end
