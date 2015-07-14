// This file is generated by kconfig_compiler from settings.kcfg.
// All changes you do to this file will be lost.

#include "settings.h"

#include <kglobal.h>
#include <QtCore/QFile>

class SettingsHelper
{
  public:
    SettingsHelper() : q(0) {}
    ~SettingsHelper() { delete q; }
    Settings *q;
};
K_GLOBAL_STATIC(SettingsHelper, s_globalSettings)
Settings *Settings::self()
{
  if (!s_globalSettings->q) {
    new Settings;
    s_globalSettings->q->readConfig();
  }

  return s_globalSettings->q;
}

Settings::Settings(  )
  : KConfigSkeleton( QLatin1String( "netnewstickerrc" ) )
{
  Q_ASSERT(!s_globalSettings->q);
  s_globalSettings->q = this;
  setCurrentGroup( QLatin1String( "Visual" ) );

  KConfigSkeleton::ItemFont  *itemFont;
  itemFont = new KConfigSkeleton::ItemFont( currentGroup(), QLatin1String( "Font" ), mFont, KGlobalSettings::fixedFont() );
  addItem( itemFont, QLatin1String( "Font" ) );
  KConfigSkeleton::ItemColor  *itemColor;
  itemColor = new KConfigSkeleton::ItemColor( currentGroup(), QLatin1String( "Color" ), mColor, QColor( "white" ) );
  addItem( itemColor, QLatin1String( "Color" ) );
  KConfigSkeleton::ItemBool  *itemHideReadArticles;
  itemHideReadArticles = new KConfigSkeleton::ItemBool( currentGroup(), QLatin1String( "HideReadArticles" ), mHideReadArticles, true );
  addItem( itemHideReadArticles, QLatin1String( "HideReadArticles" ) );
  KConfigSkeleton::ItemBool  *itemUIStyle;
  itemUIStyle = new KConfigSkeleton::ItemBool( currentGroup(), QLatin1String( "UIStyle" ), mUIStyle, false );
  addItem( itemUIStyle, QLatin1String( "UIStyle" ) );
  KConfigSkeleton::ItemBool  *itemScrollHorizontal;
  itemScrollHorizontal = new KConfigSkeleton::ItemBool( currentGroup(), QLatin1String( "ScrollHorizontal" ), mScrollHorizontal, true );
  addItem( itemScrollHorizontal, QLatin1String( "ScrollHorizontal" ) );
  KConfigSkeleton::ItemUInt  *itemScrollingSpeed;
  itemScrollingSpeed = new KConfigSkeleton::ItemUInt( currentGroup(), QLatin1String( "ScrollingSpeed" ), mScrollingSpeed, 25 );
  addItem( itemScrollingSpeed, QLatin1String( "ScrollingSpeed" ) );
  KConfigSkeleton::ItemDouble  *itemMessageDelay;
  itemMessageDelay = new KConfigSkeleton::ItemDouble( currentGroup(), QLatin1String( "MessageDelay" ), mMessageDelay, 4 );
  addItem( itemMessageDelay, QLatin1String( "MessageDelay" ) );
  KConfigSkeleton::ItemUInt  *itemScrollingDistance;
  itemScrollingDistance = new KConfigSkeleton::ItemUInt( currentGroup(), QLatin1String( "ScrollingDistance" ), mScrollingDistance, 1 );
  addItem( itemScrollingDistance, QLatin1String( "ScrollingDistance" ) );

  setCurrentGroup( QLatin1String( "FeedLoading" ) );

  QStringList defaultFeedUrls;
  defaultFeedUrls.append( QString::fromUtf8( "http://www.kde.org/dotkdeorg.rdf" ) );

  KConfigSkeleton::ItemStringList  *itemFeedUrls;
  itemFeedUrls = new KConfigSkeleton::ItemStringList( currentGroup(), QLatin1String( "FeedUrls" ), mFeedUrls, defaultFeedUrls );
  addItem( itemFeedUrls, QLatin1String( "FeedUrls" ) );
  QList<int> defaultFeedMaxItems;

  KConfigSkeleton::ItemIntList  *itemFeedMaxItems;
  itemFeedMaxItems = new KConfigSkeleton::ItemIntList( currentGroup(), QLatin1String( "FeedMaxItems" ), mFeedMaxItems, defaultFeedMaxItems );
  addItem( itemFeedMaxItems, QLatin1String( "FeedMaxItems" ) );
  KConfigSkeleton::ItemUInt  *itemUpdateInterval;
  itemUpdateInterval = new KConfigSkeleton::ItemUInt( currentGroup(), QLatin1String( "UpdateInterval" ), mUpdateInterval, 30 );
  addItem( itemUpdateInterval, QLatin1String( "UpdateInterval" ) );
  KConfigSkeleton::ItemUInt  *itemMaxNewsItems;
  itemMaxNewsItems = new KConfigSkeleton::ItemUInt( currentGroup(), QLatin1String( "MaxNewsItems" ), mMaxNewsItems, 10 );
  addItem( itemMaxNewsItems, QLatin1String( "MaxNewsItems" ) );

  setCurrentGroup( QLatin1String( "FilterProperties" ) );

  KConfigSkeleton::ItemStringList  *itemFilterEntries;
  itemFilterEntries = new KConfigSkeleton::ItemStringList( currentGroup(), QLatin1String( "FilterEntries" ), mFilterEntries );
  addItem( itemFilterEntries, QLatin1String( "FilterEntries" ) );
}

Settings::~Settings()
{
  if (!s_globalSettings.isDestroyed()) {
    s_globalSettings->q = 0;
  }
}

