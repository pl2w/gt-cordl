#pragma once
// IWYU pragma private; include "GlobalNamespace/FriendDisplay.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__FriendCard_def.hpp"
#include "GlobalNamespace/zzzz__GorillaPressableDelayButton_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FriendDisplay)
namespace GlobalNamespace {
class FriendBackendController_Friend;
}
namespace GlobalNamespace {
class FriendCard;
}
namespace GlobalNamespace {
struct FriendDisplay_ButtonState;
}
namespace GlobalNamespace {
class TriggerEventNotifier;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class MeshRenderer;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class FriendDisplay;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::FriendDisplay*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FriendDisplay*, "", "FriendDisplay");
// Dependencies FriendCard, GorillaPressableDelayButton, TMPro.TextMeshProUGUI, UnityEngine.Material, UnityEngine.MeshRenderer, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: FriendDisplay
class CORDL_TYPE FriendDisplay : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using ButtonState = ::GlobalNamespace::FriendDisplay_ButtonState;

 __declspec(property(get=get_FreeExtraTotalCapacity)) int32_t  FreeExtraTotalCapacity;

 __declspec(property(get=get_InRemoveMode)) bool  InRemoveMode;

/// @brief Field PageButtons, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_PageButtons, put=__cordl_internal_set_PageButtons)) ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>  PageButtons;

 __declspec(property(get=get_TotalCapacity)) int32_t  TotalCapacity;

 __declspec(property(get=get_VIMTotalCapacity)) int32_t  VIMTotalCapacity;

 __declspec(property(get=get_VimPageCount)) int32_t  VimPageCount;

/// @brief Field <ConfiguredFreeExtraPageCount>k__BackingField, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ConfiguredFreeExtraPageCount_k__BackingField, put=setStaticF__ConfiguredFreeExtraPageCount_k__BackingField)) int32_t  _ConfiguredFreeExtraPageCount_k__BackingField;

/// @brief Field <ConfiguredVimPageCount>k__BackingField, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ConfiguredVimPageCount_k__BackingField, put=setStaticF__ConfiguredVimPageCount_k__BackingField)) int32_t  _ConfiguredVimPageCount_k__BackingField;

/// @brief Field _buttonActiveMaterials, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__buttonActiveMaterials, put=__cordl_internal_set__buttonActiveMaterials)) ::ArrayW<::UnityW<::UnityEngine::Material>>  _buttonActiveMaterials;

/// @brief Field _buttonAlertMaterials, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__buttonAlertMaterials, put=__cordl_internal_set__buttonAlertMaterials)) ::ArrayW<::UnityW<::UnityEngine::Material>>  _buttonAlertMaterials;

/// @brief Field _buttonDefaultMaterials, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__buttonDefaultMaterials, put=__cordl_internal_set__buttonDefaultMaterials)) ::ArrayW<::UnityW<::UnityEngine::Material>>  _buttonDefaultMaterials;

/// @brief Field _currentPage, offset 0xdc, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentPage, put=__cordl_internal_set__currentPage)) int32_t  _currentPage;

/// @brief Field _friendCardButtonText, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__friendCardButtonText, put=__cordl_internal_set__friendCardButtonText)) ::ArrayW<::UnityW<::TMPro::TextMeshProUGUI>>  _friendCardButtonText;

/// @brief Field _friendCardButtons, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__friendCardButtons, put=__cordl_internal_set__friendCardButtons)) ::ArrayW<::UnityW<::GlobalNamespace::GorillaPressableDelayButton>>  _friendCardButtons;

/// @brief Field _joinButtonRenderers, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get__joinButtonRenderers, put=__cordl_internal_set__joinButtonRenderers)) ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>  _joinButtonRenderers;

/// @brief Field _localPlayerCard, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__localPlayerCard, put=__cordl_internal_set__localPlayerCard)) ::UnityW<::GlobalNamespace::FriendCard>  _localPlayerCard;

/// @brief Field _localPlayerFullyHiddenButton, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__localPlayerFullyHiddenButton, put=__cordl_internal_set__localPlayerFullyHiddenButton)) ::UnityW<::UnityEngine::MeshRenderer>  _localPlayerFullyHiddenButton;

/// @brief Field _localPlayerFullyVisibleButton, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__localPlayerFullyVisibleButton, put=__cordl_internal_set__localPlayerFullyVisibleButton)) ::UnityW<::UnityEngine::MeshRenderer>  _localPlayerFullyVisibleButton;

/// @brief Field _localPlayerPublicOnlyButton, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__localPlayerPublicOnlyButton, put=__cordl_internal_set__localPlayerPublicOnlyButton)) ::UnityW<::UnityEngine::MeshRenderer>  _localPlayerPublicOnlyButton;

/// @brief Field _pageButtonActiveMaterials, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get__pageButtonActiveMaterials, put=__cordl_internal_set__pageButtonActiveMaterials)) ::ArrayW<::UnityW<::UnityEngine::Material>>  _pageButtonActiveMaterials;

/// @brief Field _pageButtonAlerttMaterials, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get__pageButtonAlerttMaterials, put=__cordl_internal_set__pageButtonAlerttMaterials)) ::ArrayW<::UnityW<::UnityEngine::Material>>  _pageButtonAlerttMaterials;

/// @brief Field _pageButtonDefaultMaterials, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__pageButtonDefaultMaterials, put=__cordl_internal_set__pageButtonDefaultMaterials)) ::ArrayW<::UnityW<::UnityEngine::Material>>  _pageButtonDefaultMaterials;

/// @brief Field _removeFriendButton, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__removeFriendButton, put=__cordl_internal_set__removeFriendButton)) ::UnityW<::UnityEngine::MeshRenderer>  _removeFriendButton;

/// @brief Field cardsPerPage, offset 0xc0, size 0x4 
 __declspec(property(get=__cordl_internal_get_cardsPerPage, put=__cordl_internal_set_cardsPerPage)) int32_t  cardsPerPage;

/// @brief Field freeExtraPageCount, offset 0xb8, size 0x4 
 __declspec(property(get=__cordl_internal_get_freeExtraPageCount, put=__cordl_internal_set_freeExtraPageCount)) int32_t  freeExtraPageCount;

/// @brief Field friendCards, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_friendCards, put=__cordl_internal_set_friendCards)) ::ArrayW<::UnityW<::GlobalNamespace::FriendCard>>  friendCards;

/// @brief Field gridDimension, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_gridDimension, put=__cordl_internal_set_gridDimension)) int32_t  gridDimension;

/// @brief Field gridHeight, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_gridHeight, put=__cordl_internal_set_gridHeight)) float_t  gridHeight;

/// @brief Field gridRoot, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_gridRoot, put=__cordl_internal_set_gridRoot)) ::UnityW<::UnityEngine::Transform>  gridRoot;

/// @brief Field gridWidth, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_gridWidth, put=__cordl_internal_set_gridWidth)) float_t  gridWidth;

/// @brief Field inRemoveMode, offset 0xd8, size 0x1 
 __declspec(property(get=__cordl_internal_get_inRemoveMode, put=__cordl_internal_set_inRemoveMode)) bool  inRemoveMode;

/// @brief Field localPlayerAtDisplay, offset 0xd9, size 0x1 
 __declspec(property(get=__cordl_internal_get_localPlayerAtDisplay, put=__cordl_internal_set_localPlayerAtDisplay)) bool  localPlayerAtDisplay;

/// @brief Field pageButtonActiveZPos, offset 0xc8, size 0x4 
 __declspec(property(get=__cordl_internal_get_pageButtonActiveZPos, put=__cordl_internal_set_pageButtonActiveZPos)) float_t  pageButtonActiveZPos;

/// @brief Field pageButtonInactiveZPos, offset 0xc4, size 0x4 
 __declspec(property(get=__cordl_internal_get_pageButtonInactiveZPos, put=__cordl_internal_set_pageButtonInactiveZPos)) float_t  pageButtonInactiveZPos;

 __declspec(property(get=get_totalPages)) int32_t  totalPages;

/// @brief Field triggerNotifier, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_triggerNotifier, put=__cordl_internal_set_triggerNotifier)) ::UnityW<::GlobalNamespace::TriggerEventNotifier>  triggerNotifier;

/// @brief Field vimPageCount, offset 0xbc, size 0x4 
 __declspec(property(get=__cordl_internal_get_vimPageCount, put=__cordl_internal_set_vimPageCount)) int32_t  vimPageCount;

/// @brief Method Awake, addr 0x5aa4408, size 0xd4, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method ClearFriendCards, addr 0x5aa59fc, size 0x60, virtual false, abstract: false, final false
inline void ClearFriendCards() ;

/// @brief Method ClearLocalPlayerCard, addr 0x5aa5a5c, size 0x18, virtual false, abstract: false, final false
inline void ClearLocalPlayerCard() ;

/// @brief Method ClearPageButtons, addr 0x5aa5a74, size 0x5c, virtual false, abstract: false, final false
inline void ClearPageButtons() ;

/// @brief Method GoToFriendPage, addr 0x5aa4df8, size 0x1c8, virtual false, abstract: false, final false
inline void GoToFriendPage(int32_t  currentPage) ;

/// @brief Method HidePageButton, addr 0x5aa6060, size 0xd8, virtual false, abstract: false, final false
inline void HidePageButton(::UnityEngine::MeshRenderer*  buttonRenderer) ;

/// @brief Method InitFriendCards, addr 0x5aa4748, size 0x310, virtual false, abstract: false, final false
inline void InitFriendCards() ;

/// @brief Method InitLocalPlayerCard, addr 0x5aa4a58, size 0x2c, virtual false, abstract: false, final false
inline void InitLocalPlayerCard() ;

/// @brief Method LocalPlayerFullyHiddenPress, addr 0x5aa5ca4, size 0x70, virtual false, abstract: false, final false
inline void LocalPlayerFullyHiddenPress() ;

/// @brief Method LocalPlayerFullyVisiblePress, addr 0x5aa5b48, size 0x70, virtual false, abstract: false, final false
inline void LocalPlayerFullyVisiblePress() ;

/// @brief Method LocalPlayerPublicOnlyPress, addr 0x5aa5c34, size 0x70, virtual false, abstract: false, final false
inline void LocalPlayerPublicOnlyPress() ;

static inline ::GlobalNamespace::FriendDisplay* New_ctor() ;

/// @brief Method OnDestroy, addr 0x5aa4b18, size 0x2cc, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDrawGizmosSelected, addr 0x5aa6278, size 0x308, virtual false, abstract: false, final false
inline void OnDrawGizmosSelected() ;

/// @brief Method OnGetFriendsReceived, addr 0x5aa6254, size 0x24, virtual false, abstract: false, final false
inline void OnGetFriendsReceived(::System::Collections::Generic::List_1<::GlobalNamespace::FriendBackendController_Friend*>*  friendsList) ;

/// @brief Method OnJoinedRoom, addr 0x5aa5ad0, size 0x4, virtual false, abstract: false, final false
inline void OnJoinedRoom() ;

/// @brief Method OnLocalSubscriptionChanged, addr 0x5aa4de4, size 0x14, virtual false, abstract: false, final false
inline void OnLocalSubscriptionChanged() ;

/// @brief Method PopulateLocalPlayerCard, addr 0x5aa527c, size 0x4b8, virtual false, abstract: false, final false
inline void PopulateLocalPlayerCard() ;

/// @brief Method RandomizeFriendCards, addr 0x5aa61f8, size 0x5c, virtual false, abstract: false, final false
inline void RandomizeFriendCards() ;

/// @brief Method Refresh, addr 0x5aa5ad4, size 0x74, virtual false, abstract: false, final false
inline void Refresh() ;

/// @brief Method SetButtonAppearance, addr 0x5aa5d14, size 0x14, virtual false, abstract: false, final false
inline void SetButtonAppearance(::UnityEngine::MeshRenderer*  buttonRenderer, bool  active) ;

/// @brief Method SetButtonAppearance, addr 0x5aa6138, size 0xc0, virtual false, abstract: false, final false
inline void SetButtonAppearance(::UnityEngine::MeshRenderer*  buttonRenderer, ::GlobalNamespace::FriendDisplay_ButtonState  state) ;

/// @brief Method SetPageButtonAppearance, addr 0x5aa5ef0, size 0x170, virtual false, abstract: false, final false
inline void SetPageButtonAppearance(::UnityEngine::MeshRenderer*  buttonRenderer, ::GlobalNamespace::FriendDisplay_ButtonState  state) ;

/// @brief Method Start, addr 0x5aa44dc, size 0x26c, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method ToggleRemoveFriendMode, addr 0x5aa5734, size 0x8c, virtual false, abstract: false, final false
inline void ToggleRemoveFriendMode() ;

/// @brief Method TriggerEntered, addr 0x5aa4fc0, size 0x198, virtual false, abstract: false, final false
inline void TriggerEntered(::GlobalNamespace::TriggerEventNotifier*  notifier, ::UnityEngine::Collider*  other) ;

/// @brief Method TriggerExited, addr 0x5aa57c0, size 0x18c, virtual false, abstract: false, final false
inline void TriggerExited(::GlobalNamespace::TriggerEventNotifier*  notifier, ::UnityEngine::Collider*  other) ;

/// @brief Method UpdateLocalPlayerPrivacyButtons, addr 0x5aa4a84, size 0x94, virtual false, abstract: false, final false
inline void UpdateLocalPlayerPrivacyButtons() ;

/// @brief Method UpdatePageButtons, addr 0x5aa5d28, size 0x1c8, virtual false, abstract: false, final false
inline void UpdatePageButtons(int32_t  selectedPage) ;

constexpr ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>> const& __cordl_internal_get_PageButtons() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>& __cordl_internal_get_PageButtons() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Material>> const& __cordl_internal_get__buttonActiveMaterials() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Material>>& __cordl_internal_get__buttonActiveMaterials() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Material>> const& __cordl_internal_get__buttonAlertMaterials() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Material>>& __cordl_internal_get__buttonAlertMaterials() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Material>> const& __cordl_internal_get__buttonDefaultMaterials() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Material>>& __cordl_internal_get__buttonDefaultMaterials() ;

constexpr int32_t const& __cordl_internal_get__currentPage() const;

constexpr int32_t& __cordl_internal_get__currentPage() ;

constexpr ::ArrayW<::UnityW<::TMPro::TextMeshProUGUI>> const& __cordl_internal_get__friendCardButtonText() const;

constexpr ::ArrayW<::UnityW<::TMPro::TextMeshProUGUI>>& __cordl_internal_get__friendCardButtonText() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::GorillaPressableDelayButton>> const& __cordl_internal_get__friendCardButtons() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::GorillaPressableDelayButton>>& __cordl_internal_get__friendCardButtons() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>> const& __cordl_internal_get__joinButtonRenderers() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>& __cordl_internal_get__joinButtonRenderers() ;

constexpr ::UnityW<::GlobalNamespace::FriendCard> const& __cordl_internal_get__localPlayerCard() const;

constexpr ::UnityW<::GlobalNamespace::FriendCard>& __cordl_internal_get__localPlayerCard() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get__localPlayerFullyHiddenButton() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get__localPlayerFullyHiddenButton() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get__localPlayerFullyVisibleButton() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get__localPlayerFullyVisibleButton() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get__localPlayerPublicOnlyButton() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get__localPlayerPublicOnlyButton() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Material>> const& __cordl_internal_get__pageButtonActiveMaterials() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Material>>& __cordl_internal_get__pageButtonActiveMaterials() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Material>> const& __cordl_internal_get__pageButtonAlerttMaterials() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Material>>& __cordl_internal_get__pageButtonAlerttMaterials() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Material>> const& __cordl_internal_get__pageButtonDefaultMaterials() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Material>>& __cordl_internal_get__pageButtonDefaultMaterials() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get__removeFriendButton() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get__removeFriendButton() ;

constexpr int32_t const& __cordl_internal_get_cardsPerPage() const;

constexpr int32_t& __cordl_internal_get_cardsPerPage() ;

constexpr int32_t const& __cordl_internal_get_freeExtraPageCount() const;

constexpr int32_t& __cordl_internal_get_freeExtraPageCount() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::FriendCard>> const& __cordl_internal_get_friendCards() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::FriendCard>>& __cordl_internal_get_friendCards() ;

constexpr int32_t const& __cordl_internal_get_gridDimension() const;

constexpr int32_t& __cordl_internal_get_gridDimension() ;

constexpr float_t const& __cordl_internal_get_gridHeight() const;

constexpr float_t& __cordl_internal_get_gridHeight() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_gridRoot() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_gridRoot() ;

constexpr float_t const& __cordl_internal_get_gridWidth() const;

constexpr float_t& __cordl_internal_get_gridWidth() ;

constexpr bool const& __cordl_internal_get_inRemoveMode() const;

constexpr bool& __cordl_internal_get_inRemoveMode() ;

constexpr bool const& __cordl_internal_get_localPlayerAtDisplay() const;

constexpr bool& __cordl_internal_get_localPlayerAtDisplay() ;

constexpr float_t const& __cordl_internal_get_pageButtonActiveZPos() const;

constexpr float_t& __cordl_internal_get_pageButtonActiveZPos() ;

constexpr float_t const& __cordl_internal_get_pageButtonInactiveZPos() const;

constexpr float_t& __cordl_internal_get_pageButtonInactiveZPos() ;

constexpr ::UnityW<::GlobalNamespace::TriggerEventNotifier> const& __cordl_internal_get_triggerNotifier() const;

constexpr ::UnityW<::GlobalNamespace::TriggerEventNotifier>& __cordl_internal_get_triggerNotifier() ;

constexpr int32_t const& __cordl_internal_get_vimPageCount() const;

constexpr int32_t& __cordl_internal_get_vimPageCount() ;

constexpr void __cordl_internal_set_PageButtons(::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>  value) ;

constexpr void __cordl_internal_set__buttonActiveMaterials(::ArrayW<::UnityW<::UnityEngine::Material>>  value) ;

constexpr void __cordl_internal_set__buttonAlertMaterials(::ArrayW<::UnityW<::UnityEngine::Material>>  value) ;

constexpr void __cordl_internal_set__buttonDefaultMaterials(::ArrayW<::UnityW<::UnityEngine::Material>>  value) ;

constexpr void __cordl_internal_set__currentPage(int32_t  value) ;

constexpr void __cordl_internal_set__friendCardButtonText(::ArrayW<::UnityW<::TMPro::TextMeshProUGUI>>  value) ;

constexpr void __cordl_internal_set__friendCardButtons(::ArrayW<::UnityW<::GlobalNamespace::GorillaPressableDelayButton>>  value) ;

constexpr void __cordl_internal_set__joinButtonRenderers(::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>  value) ;

constexpr void __cordl_internal_set__localPlayerCard(::UnityW<::GlobalNamespace::FriendCard>  value) ;

constexpr void __cordl_internal_set__localPlayerFullyHiddenButton(::UnityW<::UnityEngine::MeshRenderer>  value) ;

constexpr void __cordl_internal_set__localPlayerFullyVisibleButton(::UnityW<::UnityEngine::MeshRenderer>  value) ;

constexpr void __cordl_internal_set__localPlayerPublicOnlyButton(::UnityW<::UnityEngine::MeshRenderer>  value) ;

constexpr void __cordl_internal_set__pageButtonActiveMaterials(::ArrayW<::UnityW<::UnityEngine::Material>>  value) ;

constexpr void __cordl_internal_set__pageButtonAlerttMaterials(::ArrayW<::UnityW<::UnityEngine::Material>>  value) ;

constexpr void __cordl_internal_set__pageButtonDefaultMaterials(::ArrayW<::UnityW<::UnityEngine::Material>>  value) ;

constexpr void __cordl_internal_set__removeFriendButton(::UnityW<::UnityEngine::MeshRenderer>  value) ;

constexpr void __cordl_internal_set_cardsPerPage(int32_t  value) ;

constexpr void __cordl_internal_set_freeExtraPageCount(int32_t  value) ;

constexpr void __cordl_internal_set_friendCards(::ArrayW<::UnityW<::GlobalNamespace::FriendCard>>  value) ;

constexpr void __cordl_internal_set_gridDimension(int32_t  value) ;

constexpr void __cordl_internal_set_gridHeight(float_t  value) ;

constexpr void __cordl_internal_set_gridRoot(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_gridWidth(float_t  value) ;

constexpr void __cordl_internal_set_inRemoveMode(bool  value) ;

constexpr void __cordl_internal_set_localPlayerAtDisplay(bool  value) ;

constexpr void __cordl_internal_set_pageButtonActiveZPos(float_t  value) ;

constexpr void __cordl_internal_set_pageButtonInactiveZPos(float_t  value) ;

constexpr void __cordl_internal_set_triggerNotifier(::UnityW<::GlobalNamespace::TriggerEventNotifier>  value) ;

constexpr void __cordl_internal_set_vimPageCount(int32_t  value) ;

/// @brief Method .ctor, addr 0x5aa6580, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

static inline int32_t getStaticF__ConfiguredFreeExtraPageCount_k__BackingField() ;

static inline int32_t getStaticF__ConfiguredVimPageCount_k__BackingField() ;

/// [CompilerGenerated]
/// @brief Method get_ConfiguredFreeExtraPageCount, addr 0x5aa4308, size 0x58, virtual false, abstract: false, final false
static inline int32_t get_ConfiguredFreeExtraPageCount() ;

/// [CompilerGenerated]
/// @brief Method get_ConfiguredVimPageCount, addr 0x5aa4254, size 0x58, virtual false, abstract: false, final false
static inline int32_t get_ConfiguredVimPageCount() ;

/// @brief Method get_FreeExtraTotalCapacity, addr 0x5aa43ec, size 0xc, virtual false, abstract: false, final false
inline int32_t get_FreeExtraTotalCapacity() ;

/// @brief Method get_InRemoveMode, addr 0x5aa4400, size 0x8, virtual false, abstract: false, final false
inline bool get_InRemoveMode() ;

/// @brief Method get_TotalCapacity, addr 0x5aa43cc, size 0x14, virtual false, abstract: false, final false
inline int32_t get_TotalCapacity() ;

/// @brief Method get_VIMTotalCapacity, addr 0x5aa43e0, size 0xc, virtual false, abstract: false, final false
inline int32_t get_VIMTotalCapacity() ;

/// @brief Method get_VimPageCount, addr 0x5aa43f8, size 0x8, virtual false, abstract: false, final false
inline int32_t get_VimPageCount() ;

/// @brief Method get_totalPages, addr 0x5aa43bc, size 0x10, virtual false, abstract: false, final false
inline int32_t get_totalPages() ;

static inline void setStaticF__ConfiguredFreeExtraPageCount_k__BackingField(int32_t  value) ;

static inline void setStaticF__ConfiguredVimPageCount_k__BackingField(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_ConfiguredFreeExtraPageCount, addr 0x5aa4360, size 0x5c, virtual false, abstract: false, final false
static inline void set_ConfiguredFreeExtraPageCount(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_ConfiguredVimPageCount, addr 0x5aa42ac, size 0x5c, virtual false, abstract: false, final false
static inline void set_ConfiguredVimPageCount(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FriendDisplay() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FriendDisplay", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FriendDisplay(FriendDisplay && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FriendDisplay", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FriendDisplay(FriendDisplay const& ) = delete;

/// @brief Field PageCapacity offset 0xffffffff size 0x4
static constexpr int32_t  PageCapacity{static_cast<int32_t>(0x9)};

/// @brief Field VIMPageCapacity offset 0xffffffff size 0x4
static constexpr int32_t  VIMPageCapacity{static_cast<int32_t>(0x9)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3263};

/// [FormerlySerializedAs("gridCenter")]
/// [SerializeField]
/// @brief Field friendCards, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::FriendCard>>  ___friendCards;

/// [SerializeField]
/// @brief Field gridRoot, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___gridRoot;

/// [SerializeField]
/// @brief Field gridWidth, offset: 0x30, size: 0x4, def value: None
 float_t  ___gridWidth;

/// [SerializeField]
/// @brief Field gridHeight, offset: 0x34, size: 0x4, def value: None
 float_t  ___gridHeight;

/// [SerializeField]
/// @brief Field gridDimension, offset: 0x38, size: 0x4, def value: None
 int32_t  ___gridDimension;

/// [SerializeField]
/// @brief Field triggerNotifier, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::TriggerEventNotifier>  ___triggerNotifier;

/// [FormerlySerializedAs("_joinButtons")]
/// [Header("Buttons")]
/// [SerializeField]
/// @brief Field _friendCardButtons, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::GorillaPressableDelayButton>>  ____friendCardButtons;

/// [SerializeField]
/// @brief Field _friendCardButtonText, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<::UnityW<::TMPro::TextMeshProUGUI>>  ____friendCardButtonText;

/// [SerializeField]
/// @brief Field _localPlayerFullyVisibleButton, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ____localPlayerFullyVisibleButton;

/// [SerializeField]
/// @brief Field _localPlayerPublicOnlyButton, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ____localPlayerPublicOnlyButton;

/// [SerializeField]
/// @brief Field _localPlayerFullyHiddenButton, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ____localPlayerFullyHiddenButton;

/// [SerializeField]
/// @brief Field _removeFriendButton, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ____removeFriendButton;

/// [SerializeField]
/// @brief Field _localPlayerCard, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::FriendCard>  ____localPlayerCard;

/// [SerializeField]
/// @brief Field PageButtons, offset: 0x80, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>  ___PageButtons;

/// [SerializeField]
/// @brief Field _buttonDefaultMaterials, offset: 0x88, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Material>>  ____buttonDefaultMaterials;

/// [SerializeField]
/// @brief Field _buttonActiveMaterials, offset: 0x90, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Material>>  ____buttonActiveMaterials;

/// [SerializeField]
/// @brief Field _buttonAlertMaterials, offset: 0x98, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Material>>  ____buttonAlertMaterials;

/// [SerializeField]
/// @brief Field _pageButtonDefaultMaterials, offset: 0xa0, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Material>>  ____pageButtonDefaultMaterials;

/// [SerializeField]
/// @brief Field _pageButtonActiveMaterials, offset: 0xa8, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Material>>  ____pageButtonActiveMaterials;

/// [SerializeField]
/// @brief Field _pageButtonAlerttMaterials, offset: 0xb0, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Material>>  ____pageButtonAlerttMaterials;

/// [SerializeField]
/// @brief Field freeExtraPageCount, offset: 0xb8, size: 0x4, def value: None
 int32_t  ___freeExtraPageCount;

/// [SerializeField]
/// @brief Field vimPageCount, offset: 0xbc, size: 0x4, def value: None
 int32_t  ___vimPageCount;

/// @brief Field cardsPerPage, offset: 0xc0, size: 0x4, def value: None
 int32_t  ___cardsPerPage;

/// [SerializeField]
/// @brief Field pageButtonInactiveZPos, offset: 0xc4, size: 0x4, def value: None
 float_t  ___pageButtonInactiveZPos;

/// [SerializeField]
/// @brief Field pageButtonActiveZPos, offset: 0xc8, size: 0x4, def value: None
 float_t  ___pageButtonActiveZPos;

/// @brief Field _joinButtonRenderers, offset: 0xd0, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>  ____joinButtonRenderers;

/// @brief Field inRemoveMode, offset: 0xd8, size: 0x1, def value: None
 bool  ___inRemoveMode;

/// @brief Field localPlayerAtDisplay, offset: 0xd9, size: 0x1, def value: None
 bool  ___localPlayerAtDisplay;

/// @brief Field _currentPage, offset: 0xdc, size: 0x4, def value: None
 int32_t  ____currentPage;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FriendDisplay, ___friendCards) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendDisplay, ___gridRoot) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendDisplay, ___gridWidth) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendDisplay, ___gridHeight) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendDisplay, ___gridDimension) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendDisplay, ___triggerNotifier) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendDisplay, ____friendCardButtons) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendDisplay, ____friendCardButtonText) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendDisplay, ____localPlayerFullyVisibleButton) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendDisplay, ____localPlayerPublicOnlyButton) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendDisplay, ____localPlayerFullyHiddenButton) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendDisplay, ____removeFriendButton) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendDisplay, ____localPlayerCard) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendDisplay, ___PageButtons) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendDisplay, ____buttonDefaultMaterials) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendDisplay, ____buttonActiveMaterials) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendDisplay, ____buttonAlertMaterials) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendDisplay, ____pageButtonDefaultMaterials) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendDisplay, ____pageButtonActiveMaterials) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendDisplay, ____pageButtonAlerttMaterials) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendDisplay, ___freeExtraPageCount) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendDisplay, ___vimPageCount) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendDisplay, ___cardsPerPage) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendDisplay, ___pageButtonInactiveZPos) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendDisplay, ___pageButtonActiveZPos) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendDisplay, ____joinButtonRenderers) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendDisplay, ___inRemoveMode) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendDisplay, ___localPlayerAtDisplay) == 0xd9, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendDisplay, ____currentPage) == 0xdc, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FriendDisplay) == 0xe0, "Size mismatch!");

} // namespace end def GlobalNamespace
