#pragma once
// IWYU pragma private; include "GlobalNamespace/CustomMapsListScreen.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__CustomMapsListScreen_ListScreenState_def.hpp"
#include "GlobalNamespace/zzzz__CustomMapsTerminalScreen_def.hpp"
#include "Modio/Mods/zzzz__Mod_def.hpp"
#include "Modio/Mods/zzzz__SortModsBy_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CustomMapsListScreen)
namespace GlobalNamespace {
class CustomMapsGalleryView;
}
namespace GlobalNamespace {
struct CustomMapsListScreen_ListScreenState;
}
namespace GlobalNamespace {
struct CustomMapsListScreen__OnGetFeaturedModsTitleData_d__102;
}
namespace GlobalNamespace {
struct CustomMapsListScreen__RetrieveAvailableMods_d__103;
}
namespace GlobalNamespace {
struct CustomMapsListScreen__RetrieveFavoriteMods_d__109;
}
namespace GlobalNamespace {
struct CustomMapsListScreen__RetrieveInstalledMods_d__107;
}
namespace GlobalNamespace {
struct CustomMapsListScreen__RetrieveSubscribedMods_d__105;
}
namespace GlobalNamespace {
class CustomMapsScreenButton;
}
namespace GorillaTagScripts::VirtualStumpCustomMaps::UI {
struct CustomMapKeyboardBinding;
}
namespace Modio::Mods {
class Mod;
}
namespace Modio::Mods {
struct SortModsBy;
}
namespace Modio::Users {
class User;
}
namespace PlayFab {
class PlayFabError;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace TMPro {
class TMP_Text;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class CustomMapsListScreen;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CustomMapsListScreen*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CustomMapsListScreen*, "", "CustomMapsListScreen");
// Dependencies CustomMapsListScreen::ListScreenState, CustomMapsTerminalScreen, Modio.Mods.Mod, Modio.Mods.SortModsBy, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: CustomMapsListScreen
class CORDL_TYPE CustomMapsListScreen : public ::GlobalNamespace::CustomMapsTerminalScreen {
public:
// Declarations
using ListScreenState = ::GlobalNamespace::CustomMapsListScreen_ListScreenState;

using _OnGetFeaturedModsTitleData_d__102 = ::GlobalNamespace::CustomMapsListScreen__OnGetFeaturedModsTitleData_d__102;

using _RetrieveAvailableMods_d__103 = ::GlobalNamespace::CustomMapsListScreen__RetrieveAvailableMods_d__103;

using _RetrieveFavoriteMods_d__109 = ::GlobalNamespace::CustomMapsListScreen__RetrieveFavoriteMods_d__109;

using _RetrieveInstalledMods_d__107 = ::GlobalNamespace::CustomMapsListScreen__RetrieveInstalledMods_d__107;

using _RetrieveSubscribedMods_d__105 = ::GlobalNamespace::CustomMapsListScreen__RetrieveSubscribedMods_d__105;

 __declspec(property(get=get_CommunityMapsOnly)) bool  CommunityMapsOnly;

 __declspec(property(get=get_CurrentModPage)) int32_t  CurrentModPage;

 __declspec(property(get=get_ModsPerPage)) int32_t  ModsPerPage;

 __declspec(property(get=get_SortType, put=set_SortType)) ::Modio::Mods::SortModsBy  SortType;

/// @brief Field allMapsButton, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_allMapsButton, put=__cordl_internal_set_allMapsButton)) ::UnityW<::GlobalNamespace::CustomMapsScreenButton>  allMapsButton;

/// @brief Field availableMods, offset 0x148, size 0x8 
 __declspec(property(get=__cordl_internal_get_availableMods, put=__cordl_internal_set_availableMods)) ::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*  availableMods;

/// @brief Field browseModsTitle, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_browseModsTitle, put=__cordl_internal_set_browseModsTitle)) ::StringW  browseModsTitle;

/// @brief Field communityMapsButton, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_communityMapsButton, put=__cordl_internal_set_communityMapsButton)) ::UnityW<::GlobalNamespace::CustomMapsScreenButton>  communityMapsButton;

/// @brief Field communityMapsOnly, offset 0x1c1, size 0x1 
 __declspec(property(get=__cordl_internal_get_communityMapsOnly, put=__cordl_internal_set_communityMapsOnly)) bool  communityMapsOnly;

/// @brief Field communityMapsTag, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get_communityMapsTag, put=__cordl_internal_set_communityMapsTag)) ::StringW  communityMapsTag;

/// @brief Field communityModsTitle, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_communityModsTitle, put=__cordl_internal_set_communityModsTitle)) ::StringW  communityModsTitle;

/// @brief Field currentAvailableModsRequestPage, offset 0x138, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentAvailableModsRequestPage, put=__cordl_internal_set_currentAvailableModsRequestPage)) int32_t  currentAvailableModsRequestPage;

/// @brief Field currentModPage, offset 0x1a0, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentModPage, put=__cordl_internal_set_currentModPage)) int32_t  currentModPage;

/// @brief Field currentState, offset 0x1e4, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentState, put=__cordl_internal_set_currentState)) ::GlobalNamespace::CustomMapsListScreen_ListScreenState  currentState;

/// @brief Field customMapsGalleryView, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_customMapsGalleryView, put=__cordl_internal_set_customMapsGalleryView)) ::UnityW<::GlobalNamespace::CustomMapsGalleryView>  customMapsGalleryView;

/// @brief Field displayFeaturedMods, offset 0x121, size 0x1 
 __declspec(property(get=__cordl_internal_get_displayFeaturedMods, put=__cordl_internal_set_displayFeaturedMods)) bool  displayFeaturedMods;

/// @brief Field displayedModProfiles, offset 0x1a8, size 0x8 
 __declspec(property(get=__cordl_internal_get_displayedModProfiles, put=__cordl_internal_set_displayedModProfiles)) ::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*  displayedModProfiles;

/// @brief Field errorLoadingAvailableMods, offset 0x144, size 0x1 
 __declspec(property(get=__cordl_internal_get_errorLoadingAvailableMods, put=__cordl_internal_set_errorLoadingAvailableMods)) bool  errorLoadingAvailableMods;

/// @brief Field errorLoadingFavoriteMods, offset 0x171, size 0x1 
 __declspec(property(get=__cordl_internal_get_errorLoadingFavoriteMods, put=__cordl_internal_set_errorLoadingFavoriteMods)) bool  errorLoadingFavoriteMods;

/// @brief Field errorLoadingInstalledMods, offset 0x159, size 0x1 
 __declspec(property(get=__cordl_internal_get_errorLoadingInstalledMods, put=__cordl_internal_set_errorLoadingInstalledMods)) bool  errorLoadingInstalledMods;

/// @brief Field errorLoadingSubscribedMods, offset 0x189, size 0x1 
 __declspec(property(get=__cordl_internal_get_errorLoadingSubscribedMods, put=__cordl_internal_set_errorLoadingSubscribedMods)) bool  errorLoadingSubscribedMods;

/// @brief Field errorText, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_errorText, put=__cordl_internal_set_errorText)) ::UnityW<::TMPro::TMP_Text>  errorText;

/// @brief Field failedToRetrieveModsString, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get_failedToRetrieveModsString, put=__cordl_internal_set_failedToRetrieveModsString)) ::StringW  failedToRetrieveModsString;

/// @brief Field favoriteMapsButton, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_favoriteMapsButton, put=__cordl_internal_set_favoriteMapsButton)) ::UnityW<::GlobalNamespace::CustomMapsScreenButton>  favoriteMapsButton;

/// @brief Field favoriteMods, offset 0x178, size 0x8 
 __declspec(property(get=__cordl_internal_get_favoriteMods, put=__cordl_internal_set_favoriteMods)) ::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*  favoriteMods;

/// @brief Field favoriteModsTitle, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_favoriteModsTitle, put=__cordl_internal_set_favoriteModsTitle)) ::StringW  favoriteModsTitle;

/// @brief Field featuredModIds, offset 0x128, size 0x8 
 __declspec(property(get=__cordl_internal_get_featuredModIds, put=__cordl_internal_set_featuredModIds)) ::System::Collections::Generic::List_1<int64_t>*  featuredModIds;

/// @brief Field featuredMods, offset 0x130, size 0x8 
 __declspec(property(get=__cordl_internal_get_featuredMods, put=__cordl_internal_set_featuredMods)) ::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*  featuredMods;

/// @brief Field featuredModsPlayFabKey, offset 0x118, size 0x8 
 __declspec(property(get=__cordl_internal_get_featuredModsPlayFabKey, put=__cordl_internal_set_featuredModsPlayFabKey)) ::StringW  featuredModsPlayFabKey;

/// @brief Field filteredAvailableMods, offset 0x150, size 0x8 
 __declspec(property(get=__cordl_internal_get_filteredAvailableMods, put=__cordl_internal_set_filteredAvailableMods)) ::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*  filteredAvailableMods;

/// @brief Field filteredFavoriteMods, offset 0x180, size 0x8 
 __declspec(property(get=__cordl_internal_get_filteredFavoriteMods, put=__cordl_internal_set_filteredFavoriteMods)) ::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*  filteredFavoriteMods;

/// @brief Field filteredInstalledMods, offset 0x168, size 0x8 
 __declspec(property(get=__cordl_internal_get_filteredInstalledMods, put=__cordl_internal_set_filteredInstalledMods)) ::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*  filteredInstalledMods;

/// @brief Field filteredSubscribedMods, offset 0x198, size 0x8 
 __declspec(property(get=__cordl_internal_get_filteredSubscribedMods, put=__cordl_internal_set_filteredSubscribedMods)) ::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*  filteredSubscribedMods;

/// @brief Field installedMapsButton, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_installedMapsButton, put=__cordl_internal_set_installedMapsButton)) ::UnityW<::GlobalNamespace::CustomMapsScreenButton>  installedMapsButton;

/// @brief Field installedMods, offset 0x160, size 0x8 
 __declspec(property(get=__cordl_internal_get_installedMods, put=__cordl_internal_set_installedMods)) ::ArrayW<::Modio::Mods::Mod*>  installedMods;

/// @brief Field installedModsTitle, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_installedModsTitle, put=__cordl_internal_set_installedModsTitle)) ::StringW  installedModsTitle;

/// @brief Field isAscendingOrder, offset 0x1c0, size 0x1 
 __declspec(property(get=__cordl_internal_get_isAscendingOrder, put=__cordl_internal_set_isAscendingOrder)) bool  isAscendingOrder;

/// @brief Field loadingAvailableMods, offset 0x13c, size 0x1 
 __declspec(property(get=__cordl_internal_get_loadingAvailableMods, put=__cordl_internal_set_loadingAvailableMods)) bool  loadingAvailableMods;

/// @brief Field loadingFavoriteMods, offset 0x170, size 0x1 
 __declspec(property(get=__cordl_internal_get_loadingFavoriteMods, put=__cordl_internal_set_loadingFavoriteMods)) bool  loadingFavoriteMods;

/// @brief Field loadingFeaturedMods, offset 0x120, size 0x1 
 __declspec(property(get=__cordl_internal_get_loadingFeaturedMods, put=__cordl_internal_set_loadingFeaturedMods)) bool  loadingFeaturedMods;

/// @brief Field loadingInstalledMods, offset 0x158, size 0x1 
 __declspec(property(get=__cordl_internal_get_loadingInstalledMods, put=__cordl_internal_set_loadingInstalledMods)) bool  loadingInstalledMods;

/// @brief Field loadingSubscribedMods, offset 0x188, size 0x1 
 __declspec(property(get=__cordl_internal_get_loadingSubscribedMods, put=__cordl_internal_set_loadingSubscribedMods)) bool  loadingSubscribedMods;

/// @brief Field loadingText, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_loadingText, put=__cordl_internal_set_loadingText)) ::UnityW<::TMPro::TMP_Text>  loadingText;

/// @brief Field maxModListItemLength, offset 0x108, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxModListItemLength, put=__cordl_internal_set_maxModListItemLength)) int32_t  maxModListItemLength;

/// @brief Field modPageText, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_modPageText, put=__cordl_internal_set_modPageText)) ::UnityW<::TMPro::TMP_Text>  modPageText;

/// @brief Field modsPerPage, offset 0x100, size 0x4 
 __declspec(property(get=__cordl_internal_get_modsPerPage, put=__cordl_internal_set_modsPerPage)) int32_t  modsPerPage;

/// @brief Field noFavoriteModsString, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get_noFavoriteModsString, put=__cordl_internal_set_noFavoriteModsString)) ::StringW  noFavoriteModsString;

/// @brief Field noInstalledModsString, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get_noInstalledModsString, put=__cordl_internal_set_noInstalledModsString)) ::StringW  noInstalledModsString;

/// @brief Field noModsAvailableString, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_noModsAvailableString, put=__cordl_internal_set_noModsAvailableString)) ::StringW  noModsAvailableString;

/// @brief Field noModsFoundGenericString, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_noModsFoundGenericString, put=__cordl_internal_set_noModsFoundGenericString)) ::StringW  noModsFoundGenericString;

/// @brief Field noSubscribedModsString, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_noSubscribedModsString, put=__cordl_internal_set_noSubscribedModsString)) ::StringW  noSubscribedModsString;

/// @brief Field numModsPerRequest, offset 0x104, size 0x4 
 __declspec(property(get=__cordl_internal_get_numModsPerRequest, put=__cordl_internal_set_numModsPerRequest)) int32_t  numModsPerRequest;

/// @brief Field pageDownButton, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_pageDownButton, put=__cordl_internal_set_pageDownButton)) ::UnityW<::GlobalNamespace::CustomMapsScreenButton>  pageDownButton;

/// @brief Field pageUpButton, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_pageUpButton, put=__cordl_internal_set_pageUpButton)) ::UnityW<::GlobalNamespace::CustomMapsScreenButton>  pageUpButton;

/// @brief Field restartCustomModListRetrieval, offset 0x1dc, size 0x1 
 __declspec(property(get=__cordl_internal_get_restartCustomModListRetrieval, put=__cordl_internal_set_restartCustomModListRetrieval)) bool  restartCustomModListRetrieval;

/// @brief Field restartCustomModListRetrievalForceRefresh, offset 0x1dd, size 0x1 
 __declspec(property(get=__cordl_internal_get_restartCustomModListRetrievalForceRefresh, put=__cordl_internal_set_restartCustomModListRetrievalForceRefresh)) bool  restartCustomModListRetrievalForceRefresh;

/// @brief Field restartFavoriteModsRetrieval, offset 0x1e0, size 0x1 
 __declspec(property(get=__cordl_internal_get_restartFavoriteModsRetrieval, put=__cordl_internal_set_restartFavoriteModsRetrieval)) bool  restartFavoriteModsRetrieval;

/// @brief Field restartFavoriteModsRetrievalForceRefresh, offset 0x1e1, size 0x1 
 __declspec(property(get=__cordl_internal_get_restartFavoriteModsRetrievalForceRefresh, put=__cordl_internal_set_restartFavoriteModsRetrievalForceRefresh)) bool  restartFavoriteModsRetrievalForceRefresh;

/// @brief Field restartInstalledModsRetrieval, offset 0x1de, size 0x1 
 __declspec(property(get=__cordl_internal_get_restartInstalledModsRetrieval, put=__cordl_internal_set_restartInstalledModsRetrieval)) bool  restartInstalledModsRetrieval;

/// @brief Field restartInstalledModsRetrievalForceRefresh, offset 0x1df, size 0x1 
 __declspec(property(get=__cordl_internal_get_restartInstalledModsRetrievalForceRefresh, put=__cordl_internal_set_restartInstalledModsRetrievalForceRefresh)) bool  restartInstalledModsRetrievalForceRefresh;

/// @brief Field restartSubscribedModsRetrieval, offset 0x1e2, size 0x1 
 __declspec(property(get=__cordl_internal_get_restartSubscribedModsRetrieval, put=__cordl_internal_set_restartSubscribedModsRetrieval)) bool  restartSubscribedModsRetrieval;

/// @brief Field searchBttnPosition, offset 0x1d0, size 0xc 
 __declspec(property(get=__cordl_internal_get_searchBttnPosition, put=__cordl_internal_set_searchBttnPosition)) ::UnityEngine::Vector3  searchBttnPosition;

/// @brief Field searchButton, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_searchButton, put=__cordl_internal_set_searchButton)) ::UnityW<::GlobalNamespace::CustomMapsScreenButton>  searchButton;

/// @brief Field searchTags, offset 0x1b8, size 0x8 
 __declspec(property(get=__cordl_internal_get_searchTags, put=__cordl_internal_set_searchTags)) ::System::Collections::Generic::List_1<::StringW>*  searchTags;

/// @brief Field sortByButton, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_sortByButton, put=__cordl_internal_set_sortByButton)) ::UnityW<::UnityEngine::GameObject>  sortByButton;

/// @brief Field sortType, offset 0x1b4, size 0x4 
 __declspec(property(get=__cordl_internal_get_sortType, put=__cordl_internal_set_sortType)) ::Modio::Mods::SortModsBy  sortType;

/// @brief Field sortTypeIndex, offset 0x1b0, size 0x4 
 __declspec(property(get=__cordl_internal_get_sortTypeIndex, put=__cordl_internal_set_sortTypeIndex)) int32_t  sortTypeIndex;

/// @brief Field sortTypeText, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_sortTypeText, put=__cordl_internal_set_sortTypeText)) ::UnityW<::TMPro::TMP_Text>  sortTypeText;

/// @brief Field subscribedBttnPosition, offset 0x1c4, size 0xc 
 __declspec(property(get=__cordl_internal_get_subscribedBttnPosition, put=__cordl_internal_set_subscribedBttnPosition)) ::UnityEngine::Vector3  subscribedBttnPosition;

/// @brief Field subscribedMapsButton, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_subscribedMapsButton, put=__cordl_internal_set_subscribedMapsButton)) ::UnityW<::GlobalNamespace::CustomMapsScreenButton>  subscribedMapsButton;

/// @brief Field subscribedMods, offset 0x190, size 0x8 
 __declspec(property(get=__cordl_internal_get_subscribedMods, put=__cordl_internal_set_subscribedMods)) ::ArrayW<::Modio::Mods::Mod*>  subscribedMods;

/// @brief Field subscribedModsTitle, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_subscribedModsTitle, put=__cordl_internal_set_subscribedModsTitle)) ::StringW  subscribedModsTitle;

/// @brief Field titleText, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_titleText, put=__cordl_internal_set_titleText)) ::UnityW<::TMPro::TMP_Text>  titleText;

/// @brief Field totalAvailableMods, offset 0x140, size 0x4 
 __declspec(property(get=__cordl_internal_get_totalAvailableMods, put=__cordl_internal_set_totalAvailableMods)) int32_t  totalAvailableMods;

/// @brief Field totalFavoriteMods, offset 0x174, size 0x4 
 __declspec(property(get=__cordl_internal_get_totalFavoriteMods, put=__cordl_internal_set_totalFavoriteMods)) int32_t  totalFavoriteMods;

/// @brief Field totalFeaturedMods, offset 0x124, size 0x4 
 __declspec(property(get=__cordl_internal_get_totalFeaturedMods, put=__cordl_internal_set_totalFeaturedMods)) int32_t  totalFeaturedMods;

/// @brief Field totalInstalledMods, offset 0x15c, size 0x4 
 __declspec(property(get=__cordl_internal_get_totalInstalledMods, put=__cordl_internal_set_totalInstalledMods)) int32_t  totalInstalledMods;

/// @brief Field totalModCount, offset 0x1a4, size 0x4 
 __declspec(property(get=__cordl_internal_get_totalModCount, put=__cordl_internal_set_totalModCount)) int32_t  totalModCount;

/// @brief Field totalSubscribedMods, offset 0x18c, size 0x4 
 __declspec(property(get=__cordl_internal_get_totalSubscribedMods, put=__cordl_internal_set_totalSubscribedMods)) int32_t  totalSubscribedMods;

/// @brief Field useMapName, offset 0x1c2, size 0x1 
 __declspec(property(get=__cordl_internal_get_useMapName, put=__cordl_internal_set_useMapName)) bool  useMapName;

/// @brief Method Awake, addr 0x59feb9c, size 0x64, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method FilterAvailableMods, addr 0x5a005b8, size 0x384, virtual false, abstract: false, final false
inline void FilterAvailableMods() ;

/// @brief Method FilterFavoriteMods, addr 0x5a00c60, size 0x294, virtual false, abstract: false, final false
inline void FilterFavoriteMods() ;

/// @brief Method FilterInstalledMods, addr 0x5a00acc, size 0x194, virtual false, abstract: false, final false
inline void FilterInstalledMods() ;

/// @brief Method FilterSubscribedMods, addr 0x5a0093c, size 0x190, virtual false, abstract: false, final false
inline void FilterSubscribedMods() ;

/// @brief Method GetDisplayedModList, addr 0x5a00ef4, size 0x1ac, virtual false, abstract: false, final false
inline void GetDisplayedModList(::by_ref<::ArrayW<int64_t>>  modList) ;

/// @brief Method GetLoadingStatusForCurrentState, addr 0x5a01bc8, size 0xe8, virtual false, abstract: false, final false
inline bool GetLoadingStatusForCurrentState() ;

/// @brief Method GetModListForCurrentState, addr 0x5a01d58, size 0x54, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::Modio::Mods::Mod*>* GetModListForCurrentState() ;

/// @brief Method GetNumPages, addr 0x5a01dac, size 0x1c, virtual false, abstract: false, final false
inline int32_t GetNumPages() ;

/// @brief Method GetTitleForCurrentState, addr 0x5a010a0, size 0x98, virtual false, abstract: false, final false
inline ::StringW GetTitleForCurrentState() ;

/// @brief Method GetTotalModsForCurrentState, addr 0x5a01d08, size 0x50, virtual false, abstract: false, final false
inline int32_t GetTotalModsForCurrentState() ;

/// @brief Method HasModLoadingErrorForCurrentState, addr 0x5a01cb0, size 0x58, virtual false, abstract: false, final false
inline bool HasModLoadingErrorForCurrentState() ;

/// @brief Method Hide, addr 0x59ff750, size 0x238, virtual true, abstract: false, final false
inline void Hide() ;

/// @brief Method Initialize, addr 0x59fec00, size 0x4, virtual true, abstract: false, final false
inline void Initialize() ;

/// @brief Method IsOnFirstPage, addr 0x5a01b8c, size 0x10, virtual false, abstract: false, final false
inline bool IsOnFirstPage() ;

/// @brief Method IsOnLastPage, addr 0x5a01b9c, size 0x2c, virtual false, abstract: false, final false
inline bool IsOnLastPage() ;

static inline ::GlobalNamespace::CustomMapsListScreen* New_ctor() ;

/// [AsyncStateMachine(typeof(CustomMapsListScreen::<OnGetFeaturedModsTitleData>d__102))]
/// @brief Method OnGetFeaturedModsTitleData, addr 0x5a004f0, size 0xc8, virtual false, abstract: false, final false
inline void OnGetFeaturedModsTitleData(::StringW  data) ;

/// @brief Method OnModCacheRefreshed, addr 0x59ffafc, size 0x84, virtual false, abstract: false, final false
inline void OnModCacheRefreshed() ;

/// @brief Method OnModCacheRefreshing, addr 0x59ffaf8, size 0x4, virtual false, abstract: false, final false
inline void OnModCacheRefreshing() ;

/// @brief Method OnModIOLoggedIn, addr 0x59ff988, size 0xd0, virtual false, abstract: false, final false
inline void OnModIOLoggedIn() ;

/// @brief Method OnModIOLoggedOut, addr 0x59ffa58, size 0x9c, virtual false, abstract: false, final false
inline void OnModIOLoggedOut() ;

/// @brief Method OnModIOUserChanged, addr 0x59ffaf4, size 0x4, virtual false, abstract: false, final false
inline void OnModIOUserChanged(::Modio::Users::User*  user) ;

/// @brief Method PressButton, addr 0x59ffb80, size 0x3e4, virtual true, abstract: false, final false
inline void PressButton(::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapKeyboardBinding  buttonPressed) ;

/// @brief Method Refresh, addr 0x5a003cc, size 0x124, virtual false, abstract: false, final false
inline void Refresh() ;

/// @brief Method RefreshDriverNickname, addr 0x5a01dc8, size 0x30, virtual false, abstract: false, final false
inline void RefreshDriverNickname(::StringW  driverNickname) ;

/// @brief Method RefreshModSearch, addr 0x59fff64, size 0xa4, virtual false, abstract: false, final false
inline void RefreshModSearch() ;

/// @brief Method RefreshScreenForAvailableMods, addr 0x5a01138, size 0x488, virtual false, abstract: false, final false
inline void RefreshScreenForAvailableMods() ;

/// @brief Method RefreshScreenForCurrentState, addr 0x5a015c0, size 0x3f4, virtual false, abstract: false, final false
inline void RefreshScreenForCurrentState() ;

/// @brief Method RefreshScreenState, addr 0x59ff4c8, size 0x288, virtual false, abstract: false, final false
inline void RefreshScreenState() ;

/// [AsyncStateMachine(typeof(CustomMapsListScreen::<RetrieveAvailableMods>d__103))]
/// @brief Method RetrieveAvailableMods, addr 0x59ff168, size 0xa8, virtual false, abstract: false, final false
inline void RetrieveAvailableMods() ;

/// [AsyncStateMachine(typeof(CustomMapsListScreen::<RetrieveFavoriteMods>d__109))]
/// @brief Method RetrieveFavoriteMods, addr 0x59ff300, size 0xf0, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* RetrieveFavoriteMods(bool  forceRefresh) ;

/// @brief Method RetrieveFeaturedMods, addr 0x59ff018, size 0x150, virtual false, abstract: false, final false
inline void RetrieveFeaturedMods() ;

/// [AsyncStateMachine(typeof(CustomMapsListScreen::<RetrieveInstalledMods>d__107))]
/// @brief Method RetrieveInstalledMods, addr 0x59ff210, size 0xf0, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* RetrieveInstalledMods(bool  forceRefresh) ;

/// [AsyncStateMachine(typeof(CustomMapsListScreen::<RetrieveSubscribedMods>d__105))]
/// @brief Method RetrieveSubscribedMods, addr 0x59ff3f0, size 0xd8, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* RetrieveSubscribedMods() ;

/// @brief Method SetSortType, addr 0x5a002a0, size 0x12c, virtual false, abstract: false, final false
inline void SetSortType() ;

/// @brief Method Show, addr 0x59fec04, size 0x414, virtual true, abstract: false, final false
inline void Show() ;

/// @brief Method SwapListDisplay, addr 0x5a00008, size 0x298, virtual false, abstract: false, final false
inline void SwapListDisplay(::GlobalNamespace::CustomMapsListScreen_ListScreenState  newState, bool  force) ;

/// @brief Method UpdatePageCount, addr 0x5a019b4, size 0x1d8, virtual false, abstract: false, final false
inline void UpdatePageCount(int32_t  totalMods) ;

/// [CompilerGenerated]
/// @brief Method <PressButton>b__96_0, addr 0x5a01df8, size 0xc, virtual false, abstract: false, final false
inline void _PressButton_b__96_0(bool  result) ;

/// [CompilerGenerated]
/// @brief Method <RetrieveFeaturedMods>b__101_0, addr 0x5a01e04, size 0x58, virtual false, abstract: false, final false
inline void _RetrieveFeaturedMods_b__101_0(::PlayFab::PlayFabError*  error) ;

constexpr ::UnityW<::GlobalNamespace::CustomMapsScreenButton> const& __cordl_internal_get_allMapsButton() const;

constexpr ::UnityW<::GlobalNamespace::CustomMapsScreenButton>& __cordl_internal_get_allMapsButton() ;

constexpr ::System::Collections::Generic::List_1<::Modio::Mods::Mod*>* const& __cordl_internal_get_availableMods() const;

constexpr ::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*& __cordl_internal_get_availableMods() ;

constexpr ::StringW const& __cordl_internal_get_browseModsTitle() const;

constexpr ::StringW& __cordl_internal_get_browseModsTitle() ;

constexpr ::UnityW<::GlobalNamespace::CustomMapsScreenButton> const& __cordl_internal_get_communityMapsButton() const;

constexpr ::UnityW<::GlobalNamespace::CustomMapsScreenButton>& __cordl_internal_get_communityMapsButton() ;

constexpr bool const& __cordl_internal_get_communityMapsOnly() const;

constexpr bool& __cordl_internal_get_communityMapsOnly() ;

constexpr ::StringW const& __cordl_internal_get_communityMapsTag() const;

constexpr ::StringW& __cordl_internal_get_communityMapsTag() ;

constexpr ::StringW const& __cordl_internal_get_communityModsTitle() const;

constexpr ::StringW& __cordl_internal_get_communityModsTitle() ;

constexpr int32_t const& __cordl_internal_get_currentAvailableModsRequestPage() const;

constexpr int32_t& __cordl_internal_get_currentAvailableModsRequestPage() ;

constexpr int32_t const& __cordl_internal_get_currentModPage() const;

constexpr int32_t& __cordl_internal_get_currentModPage() ;

constexpr ::GlobalNamespace::CustomMapsListScreen_ListScreenState const& __cordl_internal_get_currentState() const;

constexpr ::GlobalNamespace::CustomMapsListScreen_ListScreenState& __cordl_internal_get_currentState() ;

constexpr ::UnityW<::GlobalNamespace::CustomMapsGalleryView> const& __cordl_internal_get_customMapsGalleryView() const;

constexpr ::UnityW<::GlobalNamespace::CustomMapsGalleryView>& __cordl_internal_get_customMapsGalleryView() ;

constexpr bool const& __cordl_internal_get_displayFeaturedMods() const;

constexpr bool& __cordl_internal_get_displayFeaturedMods() ;

constexpr ::System::Collections::Generic::List_1<::Modio::Mods::Mod*>* const& __cordl_internal_get_displayedModProfiles() const;

constexpr ::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*& __cordl_internal_get_displayedModProfiles() ;

constexpr bool const& __cordl_internal_get_errorLoadingAvailableMods() const;

constexpr bool& __cordl_internal_get_errorLoadingAvailableMods() ;

constexpr bool const& __cordl_internal_get_errorLoadingFavoriteMods() const;

constexpr bool& __cordl_internal_get_errorLoadingFavoriteMods() ;

constexpr bool const& __cordl_internal_get_errorLoadingInstalledMods() const;

constexpr bool& __cordl_internal_get_errorLoadingInstalledMods() ;

constexpr bool const& __cordl_internal_get_errorLoadingSubscribedMods() const;

constexpr bool& __cordl_internal_get_errorLoadingSubscribedMods() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_errorText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_errorText() ;

constexpr ::StringW const& __cordl_internal_get_failedToRetrieveModsString() const;

constexpr ::StringW& __cordl_internal_get_failedToRetrieveModsString() ;

constexpr ::UnityW<::GlobalNamespace::CustomMapsScreenButton> const& __cordl_internal_get_favoriteMapsButton() const;

constexpr ::UnityW<::GlobalNamespace::CustomMapsScreenButton>& __cordl_internal_get_favoriteMapsButton() ;

constexpr ::System::Collections::Generic::List_1<::Modio::Mods::Mod*>* const& __cordl_internal_get_favoriteMods() const;

constexpr ::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*& __cordl_internal_get_favoriteMods() ;

constexpr ::StringW const& __cordl_internal_get_favoriteModsTitle() const;

constexpr ::StringW& __cordl_internal_get_favoriteModsTitle() ;

constexpr ::System::Collections::Generic::List_1<int64_t>* const& __cordl_internal_get_featuredModIds() const;

constexpr ::System::Collections::Generic::List_1<int64_t>*& __cordl_internal_get_featuredModIds() ;

constexpr ::System::Collections::Generic::List_1<::Modio::Mods::Mod*>* const& __cordl_internal_get_featuredMods() const;

constexpr ::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*& __cordl_internal_get_featuredMods() ;

constexpr ::StringW const& __cordl_internal_get_featuredModsPlayFabKey() const;

constexpr ::StringW& __cordl_internal_get_featuredModsPlayFabKey() ;

constexpr ::System::Collections::Generic::List_1<::Modio::Mods::Mod*>* const& __cordl_internal_get_filteredAvailableMods() const;

constexpr ::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*& __cordl_internal_get_filteredAvailableMods() ;

constexpr ::System::Collections::Generic::List_1<::Modio::Mods::Mod*>* const& __cordl_internal_get_filteredFavoriteMods() const;

constexpr ::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*& __cordl_internal_get_filteredFavoriteMods() ;

constexpr ::System::Collections::Generic::List_1<::Modio::Mods::Mod*>* const& __cordl_internal_get_filteredInstalledMods() const;

constexpr ::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*& __cordl_internal_get_filteredInstalledMods() ;

constexpr ::System::Collections::Generic::List_1<::Modio::Mods::Mod*>* const& __cordl_internal_get_filteredSubscribedMods() const;

constexpr ::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*& __cordl_internal_get_filteredSubscribedMods() ;

constexpr ::UnityW<::GlobalNamespace::CustomMapsScreenButton> const& __cordl_internal_get_installedMapsButton() const;

constexpr ::UnityW<::GlobalNamespace::CustomMapsScreenButton>& __cordl_internal_get_installedMapsButton() ;

constexpr ::ArrayW<::Modio::Mods::Mod*> const& __cordl_internal_get_installedMods() const;

constexpr ::ArrayW<::Modio::Mods::Mod*>& __cordl_internal_get_installedMods() ;

constexpr ::StringW const& __cordl_internal_get_installedModsTitle() const;

constexpr ::StringW& __cordl_internal_get_installedModsTitle() ;

constexpr bool const& __cordl_internal_get_isAscendingOrder() const;

constexpr bool& __cordl_internal_get_isAscendingOrder() ;

constexpr bool const& __cordl_internal_get_loadingAvailableMods() const;

constexpr bool& __cordl_internal_get_loadingAvailableMods() ;

constexpr bool const& __cordl_internal_get_loadingFavoriteMods() const;

constexpr bool& __cordl_internal_get_loadingFavoriteMods() ;

constexpr bool const& __cordl_internal_get_loadingFeaturedMods() const;

constexpr bool& __cordl_internal_get_loadingFeaturedMods() ;

constexpr bool const& __cordl_internal_get_loadingInstalledMods() const;

constexpr bool& __cordl_internal_get_loadingInstalledMods() ;

constexpr bool const& __cordl_internal_get_loadingSubscribedMods() const;

constexpr bool& __cordl_internal_get_loadingSubscribedMods() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_loadingText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_loadingText() ;

constexpr int32_t const& __cordl_internal_get_maxModListItemLength() const;

constexpr int32_t& __cordl_internal_get_maxModListItemLength() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_modPageText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_modPageText() ;

constexpr int32_t const& __cordl_internal_get_modsPerPage() const;

constexpr int32_t& __cordl_internal_get_modsPerPage() ;

constexpr ::StringW const& __cordl_internal_get_noFavoriteModsString() const;

constexpr ::StringW& __cordl_internal_get_noFavoriteModsString() ;

constexpr ::StringW const& __cordl_internal_get_noInstalledModsString() const;

constexpr ::StringW& __cordl_internal_get_noInstalledModsString() ;

constexpr ::StringW const& __cordl_internal_get_noModsAvailableString() const;

constexpr ::StringW& __cordl_internal_get_noModsAvailableString() ;

constexpr ::StringW const& __cordl_internal_get_noModsFoundGenericString() const;

constexpr ::StringW& __cordl_internal_get_noModsFoundGenericString() ;

constexpr ::StringW const& __cordl_internal_get_noSubscribedModsString() const;

constexpr ::StringW& __cordl_internal_get_noSubscribedModsString() ;

constexpr int32_t const& __cordl_internal_get_numModsPerRequest() const;

constexpr int32_t& __cordl_internal_get_numModsPerRequest() ;

constexpr ::UnityW<::GlobalNamespace::CustomMapsScreenButton> const& __cordl_internal_get_pageDownButton() const;

constexpr ::UnityW<::GlobalNamespace::CustomMapsScreenButton>& __cordl_internal_get_pageDownButton() ;

constexpr ::UnityW<::GlobalNamespace::CustomMapsScreenButton> const& __cordl_internal_get_pageUpButton() const;

constexpr ::UnityW<::GlobalNamespace::CustomMapsScreenButton>& __cordl_internal_get_pageUpButton() ;

constexpr bool const& __cordl_internal_get_restartCustomModListRetrieval() const;

constexpr bool& __cordl_internal_get_restartCustomModListRetrieval() ;

constexpr bool const& __cordl_internal_get_restartCustomModListRetrievalForceRefresh() const;

constexpr bool& __cordl_internal_get_restartCustomModListRetrievalForceRefresh() ;

constexpr bool const& __cordl_internal_get_restartFavoriteModsRetrieval() const;

constexpr bool& __cordl_internal_get_restartFavoriteModsRetrieval() ;

constexpr bool const& __cordl_internal_get_restartFavoriteModsRetrievalForceRefresh() const;

constexpr bool& __cordl_internal_get_restartFavoriteModsRetrievalForceRefresh() ;

constexpr bool const& __cordl_internal_get_restartInstalledModsRetrieval() const;

constexpr bool& __cordl_internal_get_restartInstalledModsRetrieval() ;

constexpr bool const& __cordl_internal_get_restartInstalledModsRetrievalForceRefresh() const;

constexpr bool& __cordl_internal_get_restartInstalledModsRetrievalForceRefresh() ;

constexpr bool const& __cordl_internal_get_restartSubscribedModsRetrieval() const;

constexpr bool& __cordl_internal_get_restartSubscribedModsRetrieval() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_searchBttnPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_searchBttnPosition() ;

constexpr ::UnityW<::GlobalNamespace::CustomMapsScreenButton> const& __cordl_internal_get_searchButton() const;

constexpr ::UnityW<::GlobalNamespace::CustomMapsScreenButton>& __cordl_internal_get_searchButton() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_searchTags() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_searchTags() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_sortByButton() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_sortByButton() ;

constexpr ::Modio::Mods::SortModsBy const& __cordl_internal_get_sortType() const;

constexpr ::Modio::Mods::SortModsBy& __cordl_internal_get_sortType() ;

constexpr int32_t const& __cordl_internal_get_sortTypeIndex() const;

constexpr int32_t& __cordl_internal_get_sortTypeIndex() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_sortTypeText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_sortTypeText() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_subscribedBttnPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_subscribedBttnPosition() ;

constexpr ::UnityW<::GlobalNamespace::CustomMapsScreenButton> const& __cordl_internal_get_subscribedMapsButton() const;

constexpr ::UnityW<::GlobalNamespace::CustomMapsScreenButton>& __cordl_internal_get_subscribedMapsButton() ;

constexpr ::ArrayW<::Modio::Mods::Mod*> const& __cordl_internal_get_subscribedMods() const;

constexpr ::ArrayW<::Modio::Mods::Mod*>& __cordl_internal_get_subscribedMods() ;

constexpr ::StringW const& __cordl_internal_get_subscribedModsTitle() const;

constexpr ::StringW& __cordl_internal_get_subscribedModsTitle() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_titleText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_titleText() ;

constexpr int32_t const& __cordl_internal_get_totalAvailableMods() const;

constexpr int32_t& __cordl_internal_get_totalAvailableMods() ;

constexpr int32_t const& __cordl_internal_get_totalFavoriteMods() const;

constexpr int32_t& __cordl_internal_get_totalFavoriteMods() ;

constexpr int32_t const& __cordl_internal_get_totalFeaturedMods() const;

constexpr int32_t& __cordl_internal_get_totalFeaturedMods() ;

constexpr int32_t const& __cordl_internal_get_totalInstalledMods() const;

constexpr int32_t& __cordl_internal_get_totalInstalledMods() ;

constexpr int32_t const& __cordl_internal_get_totalModCount() const;

constexpr int32_t& __cordl_internal_get_totalModCount() ;

constexpr int32_t const& __cordl_internal_get_totalSubscribedMods() const;

constexpr int32_t& __cordl_internal_get_totalSubscribedMods() ;

constexpr bool const& __cordl_internal_get_useMapName() const;

constexpr bool& __cordl_internal_get_useMapName() ;

constexpr void __cordl_internal_set_allMapsButton(::UnityW<::GlobalNamespace::CustomMapsScreenButton>  value) ;

constexpr void __cordl_internal_set_availableMods(::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*  value) ;

constexpr void __cordl_internal_set_browseModsTitle(::StringW  value) ;

constexpr void __cordl_internal_set_communityMapsButton(::UnityW<::GlobalNamespace::CustomMapsScreenButton>  value) ;

constexpr void __cordl_internal_set_communityMapsOnly(bool  value) ;

constexpr void __cordl_internal_set_communityMapsTag(::StringW  value) ;

constexpr void __cordl_internal_set_communityModsTitle(::StringW  value) ;

constexpr void __cordl_internal_set_currentAvailableModsRequestPage(int32_t  value) ;

constexpr void __cordl_internal_set_currentModPage(int32_t  value) ;

constexpr void __cordl_internal_set_currentState(::GlobalNamespace::CustomMapsListScreen_ListScreenState  value) ;

constexpr void __cordl_internal_set_customMapsGalleryView(::UnityW<::GlobalNamespace::CustomMapsGalleryView>  value) ;

constexpr void __cordl_internal_set_displayFeaturedMods(bool  value) ;

constexpr void __cordl_internal_set_displayedModProfiles(::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*  value) ;

constexpr void __cordl_internal_set_errorLoadingAvailableMods(bool  value) ;

constexpr void __cordl_internal_set_errorLoadingFavoriteMods(bool  value) ;

constexpr void __cordl_internal_set_errorLoadingInstalledMods(bool  value) ;

constexpr void __cordl_internal_set_errorLoadingSubscribedMods(bool  value) ;

constexpr void __cordl_internal_set_errorText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_failedToRetrieveModsString(::StringW  value) ;

constexpr void __cordl_internal_set_favoriteMapsButton(::UnityW<::GlobalNamespace::CustomMapsScreenButton>  value) ;

constexpr void __cordl_internal_set_favoriteMods(::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*  value) ;

constexpr void __cordl_internal_set_favoriteModsTitle(::StringW  value) ;

constexpr void __cordl_internal_set_featuredModIds(::System::Collections::Generic::List_1<int64_t>*  value) ;

constexpr void __cordl_internal_set_featuredMods(::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*  value) ;

constexpr void __cordl_internal_set_featuredModsPlayFabKey(::StringW  value) ;

constexpr void __cordl_internal_set_filteredAvailableMods(::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*  value) ;

constexpr void __cordl_internal_set_filteredFavoriteMods(::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*  value) ;

constexpr void __cordl_internal_set_filteredInstalledMods(::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*  value) ;

constexpr void __cordl_internal_set_filteredSubscribedMods(::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*  value) ;

constexpr void __cordl_internal_set_installedMapsButton(::UnityW<::GlobalNamespace::CustomMapsScreenButton>  value) ;

constexpr void __cordl_internal_set_installedMods(::ArrayW<::Modio::Mods::Mod*>  value) ;

constexpr void __cordl_internal_set_installedModsTitle(::StringW  value) ;

constexpr void __cordl_internal_set_isAscendingOrder(bool  value) ;

constexpr void __cordl_internal_set_loadingAvailableMods(bool  value) ;

constexpr void __cordl_internal_set_loadingFavoriteMods(bool  value) ;

constexpr void __cordl_internal_set_loadingFeaturedMods(bool  value) ;

constexpr void __cordl_internal_set_loadingInstalledMods(bool  value) ;

constexpr void __cordl_internal_set_loadingSubscribedMods(bool  value) ;

constexpr void __cordl_internal_set_loadingText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_maxModListItemLength(int32_t  value) ;

constexpr void __cordl_internal_set_modPageText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_modsPerPage(int32_t  value) ;

constexpr void __cordl_internal_set_noFavoriteModsString(::StringW  value) ;

constexpr void __cordl_internal_set_noInstalledModsString(::StringW  value) ;

constexpr void __cordl_internal_set_noModsAvailableString(::StringW  value) ;

constexpr void __cordl_internal_set_noModsFoundGenericString(::StringW  value) ;

constexpr void __cordl_internal_set_noSubscribedModsString(::StringW  value) ;

constexpr void __cordl_internal_set_numModsPerRequest(int32_t  value) ;

constexpr void __cordl_internal_set_pageDownButton(::UnityW<::GlobalNamespace::CustomMapsScreenButton>  value) ;

constexpr void __cordl_internal_set_pageUpButton(::UnityW<::GlobalNamespace::CustomMapsScreenButton>  value) ;

constexpr void __cordl_internal_set_restartCustomModListRetrieval(bool  value) ;

constexpr void __cordl_internal_set_restartCustomModListRetrievalForceRefresh(bool  value) ;

constexpr void __cordl_internal_set_restartFavoriteModsRetrieval(bool  value) ;

constexpr void __cordl_internal_set_restartFavoriteModsRetrievalForceRefresh(bool  value) ;

constexpr void __cordl_internal_set_restartInstalledModsRetrieval(bool  value) ;

constexpr void __cordl_internal_set_restartInstalledModsRetrievalForceRefresh(bool  value) ;

constexpr void __cordl_internal_set_restartSubscribedModsRetrieval(bool  value) ;

constexpr void __cordl_internal_set_searchBttnPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_searchButton(::UnityW<::GlobalNamespace::CustomMapsScreenButton>  value) ;

constexpr void __cordl_internal_set_searchTags(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_sortByButton(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_sortType(::Modio::Mods::SortModsBy  value) ;

constexpr void __cordl_internal_set_sortTypeIndex(int32_t  value) ;

constexpr void __cordl_internal_set_sortTypeText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_subscribedBttnPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_subscribedMapsButton(::UnityW<::GlobalNamespace::CustomMapsScreenButton>  value) ;

constexpr void __cordl_internal_set_subscribedMods(::ArrayW<::Modio::Mods::Mod*>  value) ;

constexpr void __cordl_internal_set_subscribedModsTitle(::StringW  value) ;

constexpr void __cordl_internal_set_titleText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_totalAvailableMods(int32_t  value) ;

constexpr void __cordl_internal_set_totalFavoriteMods(int32_t  value) ;

constexpr void __cordl_internal_set_totalFeaturedMods(int32_t  value) ;

constexpr void __cordl_internal_set_totalInstalledMods(int32_t  value) ;

constexpr void __cordl_internal_set_totalModCount(int32_t  value) ;

constexpr void __cordl_internal_set_totalSubscribedMods(int32_t  value) ;

constexpr void __cordl_internal_set_useMapName(bool  value) ;

/// @brief Method .ctor, addr 0x59f5600, size 0x430, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_CommunityMapsOnly, addr 0x59feb40, size 0x8, virtual false, abstract: false, final false
inline bool get_CommunityMapsOnly() ;

/// @brief Method get_CurrentModPage, addr 0x59feb48, size 0x8, virtual false, abstract: false, final false
inline int32_t get_CurrentModPage() ;

/// @brief Method get_ModsPerPage, addr 0x59feb50, size 0x8, virtual false, abstract: false, final false
inline int32_t get_ModsPerPage() ;

/// @brief Method get_SortType, addr 0x59feb58, size 0x8, virtual false, abstract: false, final false
inline ::Modio::Mods::SortModsBy get_SortType() ;

/// @brief Method set_SortType, addr 0x59feb60, size 0x3c, virtual false, abstract: false, final false
inline void set_SortType(::Modio::Mods::SortModsBy  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CustomMapsListScreen() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomMapsListScreen", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomMapsListScreen(CustomMapsListScreen && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomMapsListScreen", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomMapsListScreen(CustomMapsListScreen const& ) = delete;

/// @brief Field MAX_SORT_TYPES offset 0xffffffff size 0x4
static constexpr int32_t  MAX_SORT_TYPES{static_cast<int32_t>(0x6)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2753};

/// [SerializeField]
/// @brief Field loadingText, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___loadingText;

/// [SerializeField]
/// @brief Field errorText, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___errorText;

/// [SerializeField]
/// @brief Field modPageText, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___modPageText;

/// [SerializeField]
/// @brief Field titleText, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___titleText;

/// [SerializeField]
/// @brief Field sortTypeText, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___sortTypeText;

/// [SerializeField]
/// @brief Field sortByButton, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___sortByButton;

/// [SerializeField]
/// @brief Field allMapsButton, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::CustomMapsScreenButton>  ___allMapsButton;

/// [FormerlySerializedAs("officialMapsButton")]
/// [SerializeField]
/// @brief Field communityMapsButton, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::CustomMapsScreenButton>  ___communityMapsButton;

/// [SerializeField]
/// @brief Field favoriteMapsButton, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::CustomMapsScreenButton>  ___favoriteMapsButton;

/// [SerializeField]
/// @brief Field installedMapsButton, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::CustomMapsScreenButton>  ___installedMapsButton;

/// [SerializeField]
/// @brief Field subscribedMapsButton, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::CustomMapsScreenButton>  ___subscribedMapsButton;

/// [SerializeField]
/// @brief Field searchButton, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::CustomMapsScreenButton>  ___searchButton;

/// [SerializeField]
/// @brief Field pageUpButton, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::CustomMapsScreenButton>  ___pageUpButton;

/// [SerializeField]
/// @brief Field pageDownButton, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::CustomMapsScreenButton>  ___pageDownButton;

/// [SerializeField]
/// @brief Field customMapsGalleryView, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::CustomMapsGalleryView>  ___customMapsGalleryView;

/// [SerializeField]
/// @brief Field browseModsTitle, offset: 0xa8, size: 0x8, def value: None
 ::StringW  ___browseModsTitle;

/// [FormerlySerializedAs("officialModsTitle")]
/// [SerializeField]
/// @brief Field communityModsTitle, offset: 0xb0, size: 0x8, def value: None
 ::StringW  ___communityModsTitle;

/// [SerializeField]
/// @brief Field installedModsTitle, offset: 0xb8, size: 0x8, def value: None
 ::StringW  ___installedModsTitle;

/// [SerializeField]
/// @brief Field favoriteModsTitle, offset: 0xc0, size: 0x8, def value: None
 ::StringW  ___favoriteModsTitle;

/// [SerializeField]
/// @brief Field subscribedModsTitle, offset: 0xc8, size: 0x8, def value: None
 ::StringW  ___subscribedModsTitle;

/// [SerializeField]
/// @brief Field noModsAvailableString, offset: 0xd0, size: 0x8, def value: None
 ::StringW  ___noModsAvailableString;

/// [SerializeField]
/// @brief Field noModsFoundGenericString, offset: 0xd8, size: 0x8, def value: None
 ::StringW  ___noModsFoundGenericString;

/// [SerializeField]
/// @brief Field noSubscribedModsString, offset: 0xe0, size: 0x8, def value: None
 ::StringW  ___noSubscribedModsString;

/// [SerializeField]
/// @brief Field noInstalledModsString, offset: 0xe8, size: 0x8, def value: None
 ::StringW  ___noInstalledModsString;

/// [SerializeField]
/// @brief Field noFavoriteModsString, offset: 0xf0, size: 0x8, def value: None
 ::StringW  ___noFavoriteModsString;

/// [SerializeField]
/// @brief Field failedToRetrieveModsString, offset: 0xf8, size: 0x8, def value: None
 ::StringW  ___failedToRetrieveModsString;

/// [SerializeField]
/// @brief Field modsPerPage, offset: 0x100, size: 0x4, def value: None
 int32_t  ___modsPerPage;

/// [SerializeField]
/// @brief Field numModsPerRequest, offset: 0x104, size: 0x4, def value: None
 int32_t  ___numModsPerRequest;

/// [SerializeField]
/// @brief Field maxModListItemLength, offset: 0x108, size: 0x4, def value: None
 int32_t  ___maxModListItemLength;

/// [SerializeField]
/// @brief Field communityMapsTag, offset: 0x110, size: 0x8, def value: None
 ::StringW  ___communityMapsTag;

/// [SerializeField]
/// @brief Field featuredModsPlayFabKey, offset: 0x118, size: 0x8, def value: None
 ::StringW  ___featuredModsPlayFabKey;

/// @brief Field loadingFeaturedMods, offset: 0x120, size: 0x1, def value: None
 bool  ___loadingFeaturedMods;

/// @brief Field displayFeaturedMods, offset: 0x121, size: 0x1, def value: None
 bool  ___displayFeaturedMods;

/// @brief Field totalFeaturedMods, offset: 0x124, size: 0x4, def value: None
 int32_t  ___totalFeaturedMods;

/// @brief Field featuredModIds, offset: 0x128, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int64_t>*  ___featuredModIds;

/// @brief Field featuredMods, offset: 0x130, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*  ___featuredMods;

/// @brief Field currentAvailableModsRequestPage, offset: 0x138, size: 0x4, def value: None
 int32_t  ___currentAvailableModsRequestPage;

/// @brief Field loadingAvailableMods, offset: 0x13c, size: 0x1, def value: None
 bool  ___loadingAvailableMods;

/// @brief Field totalAvailableMods, offset: 0x140, size: 0x4, def value: None
 int32_t  ___totalAvailableMods;

/// @brief Field errorLoadingAvailableMods, offset: 0x144, size: 0x1, def value: None
 bool  ___errorLoadingAvailableMods;

/// @brief Field availableMods, offset: 0x148, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*  ___availableMods;

/// @brief Field filteredAvailableMods, offset: 0x150, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*  ___filteredAvailableMods;

/// @brief Field loadingInstalledMods, offset: 0x158, size: 0x1, def value: None
 bool  ___loadingInstalledMods;

/// @brief Field errorLoadingInstalledMods, offset: 0x159, size: 0x1, def value: None
 bool  ___errorLoadingInstalledMods;

/// @brief Field totalInstalledMods, offset: 0x15c, size: 0x4, def value: None
 int32_t  ___totalInstalledMods;

/// @brief Field installedMods, offset: 0x160, size: 0x8, def value: None
 ::ArrayW<::Modio::Mods::Mod*>  ___installedMods;

/// @brief Field filteredInstalledMods, offset: 0x168, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*  ___filteredInstalledMods;

/// @brief Field loadingFavoriteMods, offset: 0x170, size: 0x1, def value: None
 bool  ___loadingFavoriteMods;

/// @brief Field errorLoadingFavoriteMods, offset: 0x171, size: 0x1, def value: None
 bool  ___errorLoadingFavoriteMods;

/// @brief Field totalFavoriteMods, offset: 0x174, size: 0x4, def value: None
 int32_t  ___totalFavoriteMods;

/// @brief Field favoriteMods, offset: 0x178, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*  ___favoriteMods;

/// @brief Field filteredFavoriteMods, offset: 0x180, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*  ___filteredFavoriteMods;

/// @brief Field loadingSubscribedMods, offset: 0x188, size: 0x1, def value: None
 bool  ___loadingSubscribedMods;

/// @brief Field errorLoadingSubscribedMods, offset: 0x189, size: 0x1, def value: None
 bool  ___errorLoadingSubscribedMods;

/// @brief Field totalSubscribedMods, offset: 0x18c, size: 0x4, def value: None
 int32_t  ___totalSubscribedMods;

/// @brief Field subscribedMods, offset: 0x190, size: 0x8, def value: None
 ::ArrayW<::Modio::Mods::Mod*>  ___subscribedMods;

/// @brief Field filteredSubscribedMods, offset: 0x198, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*  ___filteredSubscribedMods;

/// @brief Field currentModPage, offset: 0x1a0, size: 0x4, def value: None
 int32_t  ___currentModPage;

/// @brief Field totalModCount, offset: 0x1a4, size: 0x4, def value: None
 int32_t  ___totalModCount;

/// @brief Field displayedModProfiles, offset: 0x1a8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*  ___displayedModProfiles;

/// @brief Field sortTypeIndex, offset: 0x1b0, size: 0x4, def value: None
 int32_t  ___sortTypeIndex;

/// @brief Field sortType, offset: 0x1b4, size: 0x4, def value: None
 ::Modio::Mods::SortModsBy  ___sortType;

/// @brief Field searchTags, offset: 0x1b8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___searchTags;

/// @brief Field isAscendingOrder, offset: 0x1c0, size: 0x1, def value: None
 bool  ___isAscendingOrder;

/// @brief Field communityMapsOnly, offset: 0x1c1, size: 0x1, def value: None
 bool  ___communityMapsOnly;

/// @brief Field useMapName, offset: 0x1c2, size: 0x1, def value: None
 bool  ___useMapName;

/// @brief Field subscribedBttnPosition, offset: 0x1c4, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___subscribedBttnPosition;

/// @brief Field searchBttnPosition, offset: 0x1d0, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___searchBttnPosition;

/// @brief Field restartCustomModListRetrieval, offset: 0x1dc, size: 0x1, def value: None
 bool  ___restartCustomModListRetrieval;

/// @brief Field restartCustomModListRetrievalForceRefresh, offset: 0x1dd, size: 0x1, def value: None
 bool  ___restartCustomModListRetrievalForceRefresh;

/// @brief Field restartInstalledModsRetrieval, offset: 0x1de, size: 0x1, def value: None
 bool  ___restartInstalledModsRetrieval;

/// @brief Field restartInstalledModsRetrievalForceRefresh, offset: 0x1df, size: 0x1, def value: None
 bool  ___restartInstalledModsRetrievalForceRefresh;

/// @brief Field restartFavoriteModsRetrieval, offset: 0x1e0, size: 0x1, def value: None
 bool  ___restartFavoriteModsRetrieval;

/// @brief Field restartFavoriteModsRetrievalForceRefresh, offset: 0x1e1, size: 0x1, def value: None
 bool  ___restartFavoriteModsRetrievalForceRefresh;

/// @brief Field restartSubscribedModsRetrieval, offset: 0x1e2, size: 0x1, def value: None
 bool  ___restartSubscribedModsRetrieval;

/// @brief Field currentState, offset: 0x1e4, size: 0x4, def value: None
 ::GlobalNamespace::CustomMapsListScreen_ListScreenState  ___currentState;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CustomMapsListScreen, ___loadingText) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsListScreen, ___errorText) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsListScreen, ___modPageText) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsListScreen, ___titleText) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsListScreen, ___sortTypeText) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsListScreen, ___sortByButton) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsListScreen, ___allMapsButton) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsListScreen, ___communityMapsButton) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsListScreen, ___favoriteMapsButton) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsListScreen, ___installedMapsButton) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsListScreen, ___subscribedMapsButton) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsListScreen, ___searchButton) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsListScreen, ___pageUpButton) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsListScreen, ___pageDownButton) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsListScreen, ___customMapsGalleryView) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsListScreen, ___browseModsTitle) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsListScreen, ___communityModsTitle) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsListScreen, ___installedModsTitle) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsListScreen, ___favoriteModsTitle) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsListScreen, ___subscribedModsTitle) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsListScreen, ___noModsAvailableString) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsListScreen, ___noModsFoundGenericString) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsListScreen, ___noSubscribedModsString) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsListScreen, ___noInstalledModsString) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsListScreen, ___noFavoriteModsString) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsListScreen, ___failedToRetrieveModsString) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsListScreen, ___modsPerPage) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsListScreen, ___numModsPerRequest) == 0x104, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsListScreen, ___maxModListItemLength) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsListScreen, ___communityMapsTag) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsListScreen, ___featuredModsPlayFabKey) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsListScreen, ___loadingFeaturedMods) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsListScreen, ___displayFeaturedMods) == 0x121, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsListScreen, ___totalFeaturedMods) == 0x124, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsListScreen, ___featuredModIds) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsListScreen, ___featuredMods) == 0x130, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsListScreen, ___currentAvailableModsRequestPage) == 0x138, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsListScreen, ___loadingAvailableMods) == 0x13c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsListScreen, ___totalAvailableMods) == 0x140, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsListScreen, ___errorLoadingAvailableMods) == 0x144, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsListScreen, ___availableMods) == 0x148, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsListScreen, ___filteredAvailableMods) == 0x150, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsListScreen, ___loadingInstalledMods) == 0x158, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsListScreen, ___errorLoadingInstalledMods) == 0x159, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsListScreen, ___totalInstalledMods) == 0x15c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsListScreen, ___installedMods) == 0x160, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsListScreen, ___filteredInstalledMods) == 0x168, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsListScreen, ___loadingFavoriteMods) == 0x170, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsListScreen, ___errorLoadingFavoriteMods) == 0x171, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsListScreen, ___totalFavoriteMods) == 0x174, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsListScreen, ___favoriteMods) == 0x178, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsListScreen, ___filteredFavoriteMods) == 0x180, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsListScreen, ___loadingSubscribedMods) == 0x188, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsListScreen, ___errorLoadingSubscribedMods) == 0x189, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsListScreen, ___totalSubscribedMods) == 0x18c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsListScreen, ___subscribedMods) == 0x190, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsListScreen, ___filteredSubscribedMods) == 0x198, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsListScreen, ___currentModPage) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsListScreen, ___totalModCount) == 0x1a4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsListScreen, ___displayedModProfiles) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsListScreen, ___sortTypeIndex) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsListScreen, ___sortType) == 0x1b4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsListScreen, ___searchTags) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsListScreen, ___isAscendingOrder) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsListScreen, ___communityMapsOnly) == 0x1c1, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsListScreen, ___useMapName) == 0x1c2, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsListScreen, ___subscribedBttnPosition) == 0x1c4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsListScreen, ___searchBttnPosition) == 0x1d0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsListScreen, ___restartCustomModListRetrieval) == 0x1dc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsListScreen, ___restartCustomModListRetrievalForceRefresh) == 0x1dd, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsListScreen, ___restartInstalledModsRetrieval) == 0x1de, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsListScreen, ___restartInstalledModsRetrievalForceRefresh) == 0x1df, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsListScreen, ___restartFavoriteModsRetrieval) == 0x1e0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsListScreen, ___restartFavoriteModsRetrievalForceRefresh) == 0x1e1, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsListScreen, ___restartSubscribedModsRetrieval) == 0x1e2, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsListScreen, ___currentState) == 0x1e4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CustomMapsListScreen) == 0x1e8, "Size mismatch!");

} // namespace end def GlobalNamespace
