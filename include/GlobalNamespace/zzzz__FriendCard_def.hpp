#pragma once
// IWYU pragma private; include "GlobalNamespace/FriendCard.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__FriendDisplay_ButtonState_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(FriendCard)
namespace GlobalNamespace {
class FriendBackendController_Friend;
}
namespace GlobalNamespace {
struct FriendDisplay_ButtonState;
}
namespace GlobalNamespace {
class FriendDisplay;
}
namespace GlobalNamespace {
class GorillaPressableButton;
}
namespace GlobalNamespace {
class GorillaPressableDelayButton;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class FriendCard;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::FriendCard*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FriendCard*, "", "FriendCard");
// Dependencies FriendDisplay::ButtonState, UnityEngine.Material, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: FriendCard
class CORDL_TYPE FriendCard : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_Height, put=set_Height)) float_t  Height;

 __declspec(property(get=get_NameText)) ::UnityW<::TMPro::TextMeshProUGUI>  NameText;

 __declspec(property(get=get_RoomText)) ::UnityW<::TMPro::TextMeshProUGUI>  RoomText;

 __declspec(property(get=get_Width)) float_t  Width;

 __declspec(property(get=get_ZoneText)) ::UnityW<::TMPro::TextMeshProUGUI>  ZoneText;

/// @brief Field <Height>k__BackingField, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get__Height_k__BackingField, put=__cordl_internal_set__Height_k__BackingField)) float_t  _Height_k__BackingField;

/// @brief Field _button, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__button, put=__cordl_internal_set__button)) ::UnityW<::GlobalNamespace::GorillaPressableDelayButton>  _button;

/// @brief Field _buttonActiveMaterials, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get__buttonActiveMaterials, put=__cordl_internal_set__buttonActiveMaterials)) ::ArrayW<::UnityW<::UnityEngine::Material>>  _buttonActiveMaterials;

/// @brief Field _buttonAlertMaterials, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get__buttonAlertMaterials, put=__cordl_internal_set__buttonAlertMaterials)) ::ArrayW<::UnityW<::UnityEngine::Material>>  _buttonAlertMaterials;

/// @brief Field _buttonDefaultMaterials, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get__buttonDefaultMaterials, put=__cordl_internal_set__buttonDefaultMaterials)) ::ArrayW<::UnityW<::UnityEngine::Material>>  _buttonDefaultMaterials;

/// @brief Field _buttonState, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get__buttonState, put=__cordl_internal_set__buttonState)) ::GlobalNamespace::FriendDisplay_ButtonState  _buttonState;

/// @brief Field _buttonText, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__buttonText, put=__cordl_internal_set__buttonText)) ::UnityW<::TMPro::TextMeshProUGUI>  _buttonText;

/// @brief Field _friendName, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__friendName, put=__cordl_internal_set__friendName)) ::StringW  _friendName;

/// @brief Field _friendRoom, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__friendRoom, put=__cordl_internal_set__friendRoom)) ::StringW  _friendRoom;

/// @brief Field _friendZone, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__friendZone, put=__cordl_internal_set__friendZone)) ::StringW  _friendZone;

/// @brief Field _isVimSlot, offset 0x5a, size 0x1 
 __declspec(property(get=__cordl_internal_get__isVimSlot, put=__cordl_internal_set__isVimSlot)) bool  _isVimSlot;

/// @brief Field canRemove, offset 0x59, size 0x1 
 __declspec(property(get=__cordl_internal_get_canRemove, put=__cordl_internal_set_canRemove)) bool  canRemove;

/// @brief Field currentFriend, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentFriend, put=__cordl_internal_set_currentFriend)) ::GlobalNamespace::FriendBackendController_Friend*  currentFriend;

/// @brief Field emptyString, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_emptyString, put=__cordl_internal_set_emptyString)) ::StringW  emptyString;

/// @brief Field friendDisplay, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_friendDisplay, put=__cordl_internal_set_friendDisplay)) ::UnityW<::GlobalNamespace::FriendDisplay>  friendDisplay;

/// @brief Field joinable, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get_joinable, put=__cordl_internal_set_joinable)) bool  joinable;

/// @brief Field nameText, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_nameText, put=__cordl_internal_set_nameText)) ::UnityW<::TMPro::TextMeshProUGUI>  nameText;

/// @brief Field privateString, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_privateString, put=__cordl_internal_set_privateString)) ::StringW  privateString;

/// @brief Field randomNames, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_randomNames, put=__cordl_internal_set_randomNames)) ::ArrayW<::StringW>  randomNames;

/// @brief Field removeProgressBar, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_removeProgressBar, put=__cordl_internal_set_removeProgressBar)) ::UnityW<::UnityEngine::Transform>  removeProgressBar;

/// @brief Field roomText, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_roomText, put=__cordl_internal_set_roomText)) ::UnityW<::TMPro::TextMeshProUGUI>  roomText;

/// @brief Field width, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_width, put=__cordl_internal_set_width)) float_t  width;

/// @brief Field zoneText, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_zoneText, put=__cordl_internal_set_zoneText)) ::UnityW<::TMPro::TextMeshProUGUI>  zoneText;

/// @brief Method Awake, addr 0x5aa203c, size 0x90, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method HasKIDPermissionToJoinPrivateRooms, addr 0x5aa2920, size 0xa8, virtual false, abstract: false, final false
inline bool HasKIDPermissionToJoinPrivateRooms() ;

/// @brief Method Init, addr 0x5aa2198, size 0x8, virtual false, abstract: false, final false
inline void Init(::GlobalNamespace::FriendDisplay*  owner) ;

/// @brief Method JoinButtonPressed, addr 0x5aa2d78, size 0x110, virtual false, abstract: false, final false
inline void JoinButtonPressed() ;

static inline ::GlobalNamespace::FriendCard* New_ctor() ;

/// @brief Method OnButtonPressAbort, addr 0x5aa364c, size 0x14, virtual false, abstract: false, final false
inline void OnButtonPressAbort() ;

/// @brief Method OnButtonPressBegin, addr 0x5aa3638, size 0x14, virtual false, abstract: false, final false
inline void OnButtonPressBegin() ;

/// @brief Method OnButtonPressed, addr 0x5aa3660, size 0xb4, virtual false, abstract: false, final false
inline void OnButtonPressed(::GlobalNamespace::GorillaPressableButton*  button, bool  isLeftHand) ;

/// @brief Method OnDestroy, addr 0x5aa20cc, size 0xcc, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDrawGizmosSelected, addr 0x5aa3050, size 0x310, virtual false, abstract: false, final false
inline void OnDrawGizmosSelected() ;

/// @brief Method OnRemoveFriendBegin, addr 0x5aa352c, size 0xa8, virtual false, abstract: false, final false
inline void OnRemoveFriendBegin() ;

/// @brief Method OnRemoveFriendEnd, addr 0x5aa35d4, size 0x64, virtual false, abstract: false, final false
inline void OnRemoveFriendEnd() ;

/// @brief Method Populate, addr 0x5aa23b4, size 0x8, virtual false, abstract: false, final false
inline void Populate(::GlobalNamespace::FriendBackendController_Friend*  _cordl_friend) ;

/// @brief Method Populate, addr 0x5aa23bc, size 0x484, virtual false, abstract: false, final false
inline void Populate(::GlobalNamespace::FriendBackendController_Friend*  _cordl_friend, bool  isVimSlot) ;

/// @brief Method Randomize, addr 0x5aa2a48, size 0x320, virtual false, abstract: false, final false
inline void Randomize() ;

/// @brief Method RemoveFriendButtonPressed, addr 0x5aa2e88, size 0x8c, virtual false, abstract: false, final false
inline void RemoveFriendButtonPressed() ;

/// @brief Method RestoreAfterResubscribeMessage, addr 0x5aa37e0, size 0x64, virtual false, abstract: false, final false
inline void RestoreAfterResubscribeMessage() ;

/// @brief Method SetButton, addr 0x5aa3360, size 0x1cc, virtual false, abstract: false, final false
inline void SetButton(::GlobalNamespace::GorillaPressableDelayButton*  friendCardButton, ::ArrayW<::UnityEngine::Material*>  normalMaterials, ::ArrayW<::UnityEngine::Material*>  activeMaterials, ::ArrayW<::UnityEngine::Material*>  alertMaterials, ::TMPro::TextMeshProUGUI*  buttonText) ;

/// @brief Method SetButtonState, addr 0x5aa2294, size 0x120, virtual false, abstract: false, final false
inline void SetButtonState(::GlobalNamespace::FriendDisplay_ButtonState  newState) ;

/// @brief Method SetEmpty, addr 0x5aa2d68, size 0x8, virtual false, abstract: false, final false
inline void SetEmpty() ;

/// @brief Method SetEmpty, addr 0x5aa2840, size 0xa0, virtual false, abstract: false, final false
inline void SetEmpty(bool  isVimSlot) ;

/// @brief Method SetName, addr 0x5aa28e0, size 0x40, virtual false, abstract: false, final false
inline void SetName(::StringW  friendName) ;

/// @brief Method SetRemoveEnabled, addr 0x5aa2d70, size 0x8, virtual false, abstract: false, final false
inline void SetRemoveEnabled(bool  enabled) ;

/// @brief Method SetRoom, addr 0x5aa29c8, size 0x40, virtual false, abstract: false, final false
inline void SetRoom(::StringW  friendRoom) ;

/// @brief Method SetZone, addr 0x5aa2a08, size 0x40, virtual false, abstract: false, final false
inline void SetZone(::StringW  friendZone) ;

/// @brief Method ShowResubscribeMessage, addr 0x5aa3714, size 0xcc, virtual false, abstract: false, final false
inline void ShowResubscribeMessage() ;

/// @brief Method UpdateComponentStates, addr 0x5aa21a0, size 0xf4, virtual false, abstract: false, final false
inline void UpdateComponentStates() ;

constexpr float_t const& __cordl_internal_get__Height_k__BackingField() const;

constexpr float_t& __cordl_internal_get__Height_k__BackingField() ;

constexpr ::UnityW<::GlobalNamespace::GorillaPressableDelayButton> const& __cordl_internal_get__button() const;

constexpr ::UnityW<::GlobalNamespace::GorillaPressableDelayButton>& __cordl_internal_get__button() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Material>> const& __cordl_internal_get__buttonActiveMaterials() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Material>>& __cordl_internal_get__buttonActiveMaterials() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Material>> const& __cordl_internal_get__buttonAlertMaterials() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Material>>& __cordl_internal_get__buttonAlertMaterials() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Material>> const& __cordl_internal_get__buttonDefaultMaterials() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Material>>& __cordl_internal_get__buttonDefaultMaterials() ;

constexpr ::GlobalNamespace::FriendDisplay_ButtonState const& __cordl_internal_get__buttonState() const;

constexpr ::GlobalNamespace::FriendDisplay_ButtonState& __cordl_internal_get__buttonState() ;

constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__buttonText() const;

constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__buttonText() ;

constexpr ::StringW const& __cordl_internal_get__friendName() const;

constexpr ::StringW& __cordl_internal_get__friendName() ;

constexpr ::StringW const& __cordl_internal_get__friendRoom() const;

constexpr ::StringW& __cordl_internal_get__friendRoom() ;

constexpr ::StringW const& __cordl_internal_get__friendZone() const;

constexpr ::StringW& __cordl_internal_get__friendZone() ;

constexpr bool const& __cordl_internal_get__isVimSlot() const;

constexpr bool& __cordl_internal_get__isVimSlot() ;

constexpr bool const& __cordl_internal_get_canRemove() const;

constexpr bool& __cordl_internal_get_canRemove() ;

constexpr ::GlobalNamespace::FriendBackendController_Friend* const& __cordl_internal_get_currentFriend() const;

constexpr ::GlobalNamespace::FriendBackendController_Friend*& __cordl_internal_get_currentFriend() ;

constexpr ::StringW const& __cordl_internal_get_emptyString() const;

constexpr ::StringW& __cordl_internal_get_emptyString() ;

constexpr ::UnityW<::GlobalNamespace::FriendDisplay> const& __cordl_internal_get_friendDisplay() const;

constexpr ::UnityW<::GlobalNamespace::FriendDisplay>& __cordl_internal_get_friendDisplay() ;

constexpr bool const& __cordl_internal_get_joinable() const;

constexpr bool& __cordl_internal_get_joinable() ;

constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get_nameText() const;

constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get_nameText() ;

constexpr ::StringW const& __cordl_internal_get_privateString() const;

constexpr ::StringW& __cordl_internal_get_privateString() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get_randomNames() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get_randomNames() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_removeProgressBar() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_removeProgressBar() ;

constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get_roomText() const;

constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get_roomText() ;

constexpr float_t const& __cordl_internal_get_width() const;

constexpr float_t& __cordl_internal_get_width() ;

constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get_zoneText() const;

constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get_zoneText() ;

constexpr void __cordl_internal_set__Height_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__button(::UnityW<::GlobalNamespace::GorillaPressableDelayButton>  value) ;

constexpr void __cordl_internal_set__buttonActiveMaterials(::ArrayW<::UnityW<::UnityEngine::Material>>  value) ;

constexpr void __cordl_internal_set__buttonAlertMaterials(::ArrayW<::UnityW<::UnityEngine::Material>>  value) ;

constexpr void __cordl_internal_set__buttonDefaultMaterials(::ArrayW<::UnityW<::UnityEngine::Material>>  value) ;

constexpr void __cordl_internal_set__buttonState(::GlobalNamespace::FriendDisplay_ButtonState  value) ;

constexpr void __cordl_internal_set__buttonText(::UnityW<::TMPro::TextMeshProUGUI>  value) ;

constexpr void __cordl_internal_set__friendName(::StringW  value) ;

constexpr void __cordl_internal_set__friendRoom(::StringW  value) ;

constexpr void __cordl_internal_set__friendZone(::StringW  value) ;

constexpr void __cordl_internal_set__isVimSlot(bool  value) ;

constexpr void __cordl_internal_set_canRemove(bool  value) ;

constexpr void __cordl_internal_set_currentFriend(::GlobalNamespace::FriendBackendController_Friend*  value) ;

constexpr void __cordl_internal_set_emptyString(::StringW  value) ;

constexpr void __cordl_internal_set_friendDisplay(::UnityW<::GlobalNamespace::FriendDisplay>  value) ;

constexpr void __cordl_internal_set_joinable(bool  value) ;

constexpr void __cordl_internal_set_nameText(::UnityW<::TMPro::TextMeshProUGUI>  value) ;

constexpr void __cordl_internal_set_privateString(::StringW  value) ;

constexpr void __cordl_internal_set_randomNames(::ArrayW<::StringW>  value) ;

constexpr void __cordl_internal_set_removeProgressBar(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_roomText(::UnityW<::TMPro::TextMeshProUGUI>  value) ;

constexpr void __cordl_internal_set_width(float_t  value) ;

constexpr void __cordl_internal_set_zoneText(::UnityW<::TMPro::TextMeshProUGUI>  value) ;

/// @brief Method .ctor, addr 0x5aa3844, size 0xa10, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_Height, addr 0x5aa202c, size 0x8, virtual false, abstract: false, final false
inline float_t get_Height() ;

/// @brief Method get_NameText, addr 0x5aa200c, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::TMPro::TextMeshProUGUI> get_NameText() ;

/// @brief Method get_RoomText, addr 0x5aa2014, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::TMPro::TextMeshProUGUI> get_RoomText() ;

/// @brief Method get_Width, addr 0x5aa2024, size 0x8, virtual false, abstract: false, final false
inline float_t get_Width() ;

/// @brief Method get_ZoneText, addr 0x5aa201c, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::TMPro::TextMeshProUGUI> get_ZoneText() ;

/// [CompilerGenerated]
/// @brief Method set_Height, addr 0x5aa2034, size 0x8, virtual false, abstract: false, final false
inline void set_Height(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FriendCard() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FriendCard", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FriendCard(FriendCard && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FriendCard", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FriendCard(FriendCard const& ) = delete;

/// @brief Field ResubscribeMessage offset 0xffffffff size 0x8
static constexpr ::ConstString  ResubscribeMessage{u"RESUBSCRIBE TO UNLOCK!"};

/// @brief Field ResubscribeMessageDuration offset 0xffffffff size 0x4
static constexpr float_t  ResubscribeMessageDuration{static_cast<float_t>(2.5f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3261};

/// [SerializeField]
/// @brief Field nameText, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshProUGUI>  ___nameText;

/// [SerializeField]
/// @brief Field roomText, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshProUGUI>  ___roomText;

/// [SerializeField]
/// @brief Field zoneText, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshProUGUI>  ___zoneText;

/// [SerializeField]
/// @brief Field removeProgressBar, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___removeProgressBar;

/// [SerializeField]
/// @brief Field width, offset: 0x40, size: 0x4, def value: None
 float_t  ___width;

/// [CompilerGenerated]
/// [SerializeField]
/// @brief Field <Height>k__BackingField, offset: 0x44, size: 0x4, def value: None
 float_t  ____Height_k__BackingField;

/// @brief Field emptyString, offset: 0x48, size: 0x8, def value: None
 ::StringW  ___emptyString;

/// @brief Field privateString, offset: 0x50, size: 0x8, def value: None
 ::StringW  ___privateString;

/// @brief Field joinable, offset: 0x58, size: 0x1, def value: None
 bool  ___joinable;

/// @brief Field canRemove, offset: 0x59, size: 0x1, def value: None
 bool  ___canRemove;

/// @brief Field _isVimSlot, offset: 0x5a, size: 0x1, def value: None
 bool  ____isVimSlot;

/// @brief Field _button, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaPressableDelayButton>  ____button;

/// @brief Field _buttonText, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshProUGUI>  ____buttonText;

/// @brief Field _friendName, offset: 0x70, size: 0x8, def value: None
 ::StringW  ____friendName;

/// @brief Field _friendRoom, offset: 0x78, size: 0x8, def value: None
 ::StringW  ____friendRoom;

/// @brief Field _friendZone, offset: 0x80, size: 0x8, def value: None
 ::StringW  ____friendZone;

/// @brief Field currentFriend, offset: 0x88, size: 0x8, def value: None
 ::GlobalNamespace::FriendBackendController_Friend*  ___currentFriend;

/// @brief Field friendDisplay, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::FriendDisplay>  ___friendDisplay;

/// @brief Field randomNames, offset: 0x98, size: 0x8, def value: None
 ::ArrayW<::StringW>  ___randomNames;

/// @brief Field _buttonState, offset: 0xa0, size: 0x4, def value: None
 ::GlobalNamespace::FriendDisplay_ButtonState  ____buttonState;

/// @brief Field _buttonDefaultMaterials, offset: 0xa8, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Material>>  ____buttonDefaultMaterials;

/// @brief Field _buttonActiveMaterials, offset: 0xb0, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Material>>  ____buttonActiveMaterials;

/// @brief Field _buttonAlertMaterials, offset: 0xb8, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Material>>  ____buttonAlertMaterials;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FriendCard, ___nameText) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendCard, ___roomText) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendCard, ___zoneText) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendCard, ___removeProgressBar) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendCard, ___width) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendCard, ____Height_k__BackingField) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendCard, ___emptyString) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendCard, ___privateString) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendCard, ___joinable) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendCard, ___canRemove) == 0x59, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendCard, ____isVimSlot) == 0x5a, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendCard, ____button) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendCard, ____buttonText) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendCard, ____friendName) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendCard, ____friendRoom) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendCard, ____friendZone) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendCard, ___currentFriend) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendCard, ___friendDisplay) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendCard, ___randomNames) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendCard, ____buttonState) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendCard, ____buttonDefaultMaterials) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendCard, ____buttonActiveMaterials) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendCard, ____buttonAlertMaterials) == 0xb8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FriendCard) == 0xc0, "Size mismatch!");

} // namespace end def GlobalNamespace
