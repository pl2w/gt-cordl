#pragma once
// IWYU pragma private; include "GlobalNamespace/JoinTriggerUITemplate.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__JoinTriggerUITemplate_FormattedString_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(JoinTriggerUITemplate)
namespace GlobalNamespace {
struct JoinTriggerUITemplate_FormattedString;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace GlobalNamespace {
class JoinTriggerUITemplate;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::JoinTriggerUITemplate*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::JoinTriggerUITemplate*, "", "JoinTriggerUITemplate");
// [CreateAssetMenu(fileName = "JoinTriggerUITemplate", menuName = "ScriptableObjects/JoinTriggerUITemplate")]
// Dependencies JoinTriggerUITemplate::FormattedString, UnityEngine.ScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: JoinTriggerUITemplate
class CORDL_TYPE JoinTriggerUITemplate : public ::UnityEngine::ScriptableObject {
public:
// Declarations
using FormattedString = ::GlobalNamespace::JoinTriggerUITemplate_FormattedString;

/// @brief Field Milestone_AbandonPartyAndSoloJoin, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_Milestone_AbandonPartyAndSoloJoin, put=__cordl_internal_set_Milestone_AbandonPartyAndSoloJoin)) ::UnityW<::UnityEngine::Material>  Milestone_AbandonPartyAndSoloJoin;

/// @brief Field Milestone_AlreadyInRoom, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Milestone_AlreadyInRoom, put=__cordl_internal_set_Milestone_AlreadyInRoom)) ::UnityW<::UnityEngine::Material>  Milestone_AlreadyInRoom;

/// @brief Field Milestone_ChangingGameModeSoloJoin, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_Milestone_ChangingGameModeSoloJoin, put=__cordl_internal_set_Milestone_ChangingGameModeSoloJoin)) ::UnityW<::UnityEngine::Material>  Milestone_ChangingGameModeSoloJoin;

/// @brief Field Milestone_Error, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Milestone_Error, put=__cordl_internal_set_Milestone_Error)) ::UnityW<::UnityEngine::Material>  Milestone_Error;

/// @brief Field Milestone_InPrivateRoom, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_Milestone_InPrivateRoom, put=__cordl_internal_set_Milestone_InPrivateRoom)) ::UnityW<::UnityEngine::Material>  Milestone_InPrivateRoom;

/// @brief Field Milestone_LeaveRoomAndGroupJoin, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_Milestone_LeaveRoomAndGroupJoin, put=__cordl_internal_set_Milestone_LeaveRoomAndGroupJoin)) ::UnityW<::UnityEngine::Material>  Milestone_LeaveRoomAndGroupJoin;

/// @brief Field Milestone_LeaveRoomAndSoloJoin, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_Milestone_LeaveRoomAndSoloJoin, put=__cordl_internal_set_Milestone_LeaveRoomAndSoloJoin)) ::UnityW<::UnityEngine::Material>  Milestone_LeaveRoomAndSoloJoin;

/// @brief Field Milestone_NotConnectedSoloJoin, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_Milestone_NotConnectedSoloJoin, put=__cordl_internal_set_Milestone_NotConnectedSoloJoin)) ::UnityW<::UnityEngine::Material>  Milestone_NotConnectedSoloJoin;

/// @brief Field ScreenBG_AbandonPartyAndSoloJoin, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_ScreenBG_AbandonPartyAndSoloJoin, put=__cordl_internal_set_ScreenBG_AbandonPartyAndSoloJoin)) ::UnityW<::UnityEngine::Material>  ScreenBG_AbandonPartyAndSoloJoin;

/// @brief Field ScreenBG_AlreadyInRoom, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_ScreenBG_AlreadyInRoom, put=__cordl_internal_set_ScreenBG_AlreadyInRoom)) ::UnityW<::UnityEngine::Material>  ScreenBG_AlreadyInRoom;

/// @brief Field ScreenBG_ChangingGameModeSoloJoin, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_ScreenBG_ChangingGameModeSoloJoin, put=__cordl_internal_set_ScreenBG_ChangingGameModeSoloJoin)) ::UnityW<::UnityEngine::Material>  ScreenBG_ChangingGameModeSoloJoin;

/// @brief Field ScreenBG_Error, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_ScreenBG_Error, put=__cordl_internal_set_ScreenBG_Error)) ::UnityW<::UnityEngine::Material>  ScreenBG_Error;

/// @brief Field ScreenBG_InPrivateRoom, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_ScreenBG_InPrivateRoom, put=__cordl_internal_set_ScreenBG_InPrivateRoom)) ::UnityW<::UnityEngine::Material>  ScreenBG_InPrivateRoom;

/// @brief Field ScreenBG_LeaveRoomAndGroupJoin, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_ScreenBG_LeaveRoomAndGroupJoin, put=__cordl_internal_set_ScreenBG_LeaveRoomAndGroupJoin)) ::UnityW<::UnityEngine::Material>  ScreenBG_LeaveRoomAndGroupJoin;

/// @brief Field ScreenBG_LeaveRoomAndSoloJoin, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_ScreenBG_LeaveRoomAndSoloJoin, put=__cordl_internal_set_ScreenBG_LeaveRoomAndSoloJoin)) ::UnityW<::UnityEngine::Material>  ScreenBG_LeaveRoomAndSoloJoin;

/// @brief Field ScreenBG_NotConnectedSoloJoin, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_ScreenBG_NotConnectedSoloJoin, put=__cordl_internal_set_ScreenBG_NotConnectedSoloJoin)) ::UnityW<::UnityEngine::Material>  ScreenBG_NotConnectedSoloJoin;

/// @brief Field ScreenText_AbandonPartyAndSoloJoin, offset 0xf8, size 0x10 
 __declspec(property(get=__cordl_internal_get_ScreenText_AbandonPartyAndSoloJoin, put=__cordl_internal_set_ScreenText_AbandonPartyAndSoloJoin)) ::GlobalNamespace::JoinTriggerUITemplate_FormattedString  ScreenText_AbandonPartyAndSoloJoin;

/// @brief Field ScreenText_AlreadyInRoom, offset 0xa8, size 0x10 
 __declspec(property(get=__cordl_internal_get_ScreenText_AlreadyInRoom, put=__cordl_internal_set_ScreenText_AlreadyInRoom)) ::GlobalNamespace::JoinTriggerUITemplate_FormattedString  ScreenText_AlreadyInRoom;

/// @brief Field ScreenText_ChangingGameModeSoloJoin, offset 0x108, size 0x10 
 __declspec(property(get=__cordl_internal_get_ScreenText_ChangingGameModeSoloJoin, put=__cordl_internal_set_ScreenText_ChangingGameModeSoloJoin)) ::GlobalNamespace::JoinTriggerUITemplate_FormattedString  ScreenText_ChangingGameModeSoloJoin;

/// @brief Field ScreenText_Error, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_ScreenText_Error, put=__cordl_internal_set_ScreenText_Error)) ::StringW  ScreenText_Error;

/// @brief Field ScreenText_InPrivateRoom, offset 0xb8, size 0x10 
 __declspec(property(get=__cordl_internal_get_ScreenText_InPrivateRoom, put=__cordl_internal_set_ScreenText_InPrivateRoom)) ::GlobalNamespace::JoinTriggerUITemplate_FormattedString  ScreenText_InPrivateRoom;

/// @brief Field ScreenText_LeaveRoomAndGroupJoin, offset 0xe8, size 0x10 
 __declspec(property(get=__cordl_internal_get_ScreenText_LeaveRoomAndGroupJoin, put=__cordl_internal_set_ScreenText_LeaveRoomAndGroupJoin)) ::GlobalNamespace::JoinTriggerUITemplate_FormattedString  ScreenText_LeaveRoomAndGroupJoin;

/// @brief Field ScreenText_LeaveRoomAndSoloJoin, offset 0xd8, size 0x10 
 __declspec(property(get=__cordl_internal_get_ScreenText_LeaveRoomAndSoloJoin, put=__cordl_internal_set_ScreenText_LeaveRoomAndSoloJoin)) ::GlobalNamespace::JoinTriggerUITemplate_FormattedString  ScreenText_LeaveRoomAndSoloJoin;

/// @brief Field ScreenText_NotConnectedSoloJoin, offset 0xc8, size 0x10 
 __declspec(property(get=__cordl_internal_get_ScreenText_NotConnectedSoloJoin, put=__cordl_internal_set_ScreenText_NotConnectedSoloJoin)) ::GlobalNamespace::JoinTriggerUITemplate_FormattedString  ScreenText_NotConnectedSoloJoin;

/// @brief Field showFullErrorMessages, offset 0xa0, size 0x1 
 __declspec(property(get=__cordl_internal_get_showFullErrorMessages, put=__cordl_internal_set_showFullErrorMessages)) bool  showFullErrorMessages;

static inline ::GlobalNamespace::JoinTriggerUITemplate* New_ctor() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_Milestone_AbandonPartyAndSoloJoin() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_Milestone_AbandonPartyAndSoloJoin() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_Milestone_AlreadyInRoom() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_Milestone_AlreadyInRoom() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_Milestone_ChangingGameModeSoloJoin() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_Milestone_ChangingGameModeSoloJoin() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_Milestone_Error() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_Milestone_Error() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_Milestone_InPrivateRoom() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_Milestone_InPrivateRoom() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_Milestone_LeaveRoomAndGroupJoin() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_Milestone_LeaveRoomAndGroupJoin() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_Milestone_LeaveRoomAndSoloJoin() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_Milestone_LeaveRoomAndSoloJoin() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_Milestone_NotConnectedSoloJoin() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_Milestone_NotConnectedSoloJoin() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_ScreenBG_AbandonPartyAndSoloJoin() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_ScreenBG_AbandonPartyAndSoloJoin() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_ScreenBG_AlreadyInRoom() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_ScreenBG_AlreadyInRoom() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_ScreenBG_ChangingGameModeSoloJoin() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_ScreenBG_ChangingGameModeSoloJoin() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_ScreenBG_Error() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_ScreenBG_Error() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_ScreenBG_InPrivateRoom() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_ScreenBG_InPrivateRoom() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_ScreenBG_LeaveRoomAndGroupJoin() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_ScreenBG_LeaveRoomAndGroupJoin() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_ScreenBG_LeaveRoomAndSoloJoin() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_ScreenBG_LeaveRoomAndSoloJoin() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_ScreenBG_NotConnectedSoloJoin() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_ScreenBG_NotConnectedSoloJoin() ;

constexpr ::GlobalNamespace::JoinTriggerUITemplate_FormattedString const& __cordl_internal_get_ScreenText_AbandonPartyAndSoloJoin() const;

constexpr ::GlobalNamespace::JoinTriggerUITemplate_FormattedString& __cordl_internal_get_ScreenText_AbandonPartyAndSoloJoin() ;

constexpr ::GlobalNamespace::JoinTriggerUITemplate_FormattedString const& __cordl_internal_get_ScreenText_AlreadyInRoom() const;

constexpr ::GlobalNamespace::JoinTriggerUITemplate_FormattedString& __cordl_internal_get_ScreenText_AlreadyInRoom() ;

constexpr ::GlobalNamespace::JoinTriggerUITemplate_FormattedString const& __cordl_internal_get_ScreenText_ChangingGameModeSoloJoin() const;

constexpr ::GlobalNamespace::JoinTriggerUITemplate_FormattedString& __cordl_internal_get_ScreenText_ChangingGameModeSoloJoin() ;

constexpr ::StringW const& __cordl_internal_get_ScreenText_Error() const;

constexpr ::StringW& __cordl_internal_get_ScreenText_Error() ;

constexpr ::GlobalNamespace::JoinTriggerUITemplate_FormattedString const& __cordl_internal_get_ScreenText_InPrivateRoom() const;

constexpr ::GlobalNamespace::JoinTriggerUITemplate_FormattedString& __cordl_internal_get_ScreenText_InPrivateRoom() ;

constexpr ::GlobalNamespace::JoinTriggerUITemplate_FormattedString const& __cordl_internal_get_ScreenText_LeaveRoomAndGroupJoin() const;

constexpr ::GlobalNamespace::JoinTriggerUITemplate_FormattedString& __cordl_internal_get_ScreenText_LeaveRoomAndGroupJoin() ;

constexpr ::GlobalNamespace::JoinTriggerUITemplate_FormattedString const& __cordl_internal_get_ScreenText_LeaveRoomAndSoloJoin() const;

constexpr ::GlobalNamespace::JoinTriggerUITemplate_FormattedString& __cordl_internal_get_ScreenText_LeaveRoomAndSoloJoin() ;

constexpr ::GlobalNamespace::JoinTriggerUITemplate_FormattedString const& __cordl_internal_get_ScreenText_NotConnectedSoloJoin() const;

constexpr ::GlobalNamespace::JoinTriggerUITemplate_FormattedString& __cordl_internal_get_ScreenText_NotConnectedSoloJoin() ;

constexpr bool const& __cordl_internal_get_showFullErrorMessages() const;

constexpr bool& __cordl_internal_get_showFullErrorMessages() ;

constexpr void __cordl_internal_set_Milestone_AbandonPartyAndSoloJoin(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_Milestone_AlreadyInRoom(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_Milestone_ChangingGameModeSoloJoin(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_Milestone_Error(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_Milestone_InPrivateRoom(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_Milestone_LeaveRoomAndGroupJoin(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_Milestone_LeaveRoomAndSoloJoin(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_Milestone_NotConnectedSoloJoin(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_ScreenBG_AbandonPartyAndSoloJoin(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_ScreenBG_AlreadyInRoom(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_ScreenBG_ChangingGameModeSoloJoin(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_ScreenBG_Error(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_ScreenBG_InPrivateRoom(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_ScreenBG_LeaveRoomAndGroupJoin(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_ScreenBG_LeaveRoomAndSoloJoin(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_ScreenBG_NotConnectedSoloJoin(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_ScreenText_AbandonPartyAndSoloJoin(::GlobalNamespace::JoinTriggerUITemplate_FormattedString  value) ;

constexpr void __cordl_internal_set_ScreenText_AlreadyInRoom(::GlobalNamespace::JoinTriggerUITemplate_FormattedString  value) ;

constexpr void __cordl_internal_set_ScreenText_ChangingGameModeSoloJoin(::GlobalNamespace::JoinTriggerUITemplate_FormattedString  value) ;

constexpr void __cordl_internal_set_ScreenText_Error(::StringW  value) ;

constexpr void __cordl_internal_set_ScreenText_InPrivateRoom(::GlobalNamespace::JoinTriggerUITemplate_FormattedString  value) ;

constexpr void __cordl_internal_set_ScreenText_LeaveRoomAndGroupJoin(::GlobalNamespace::JoinTriggerUITemplate_FormattedString  value) ;

constexpr void __cordl_internal_set_ScreenText_LeaveRoomAndSoloJoin(::GlobalNamespace::JoinTriggerUITemplate_FormattedString  value) ;

constexpr void __cordl_internal_set_ScreenText_NotConnectedSoloJoin(::GlobalNamespace::JoinTriggerUITemplate_FormattedString  value) ;

constexpr void __cordl_internal_set_showFullErrorMessages(bool  value) ;

/// @brief Method .ctor, addr 0x567b9d0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JoinTriggerUITemplate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JoinTriggerUITemplate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
JoinTriggerUITemplate(JoinTriggerUITemplate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JoinTriggerUITemplate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
JoinTriggerUITemplate(JoinTriggerUITemplate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{860};

/// @brief Field Milestone_Error, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___Milestone_Error;

/// @brief Field Milestone_AlreadyInRoom, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___Milestone_AlreadyInRoom;

/// @brief Field Milestone_InPrivateRoom, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___Milestone_InPrivateRoom;

/// @brief Field Milestone_NotConnectedSoloJoin, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___Milestone_NotConnectedSoloJoin;

/// @brief Field Milestone_LeaveRoomAndSoloJoin, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___Milestone_LeaveRoomAndSoloJoin;

/// @brief Field Milestone_LeaveRoomAndGroupJoin, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___Milestone_LeaveRoomAndGroupJoin;

/// @brief Field Milestone_AbandonPartyAndSoloJoin, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___Milestone_AbandonPartyAndSoloJoin;

/// @brief Field Milestone_ChangingGameModeSoloJoin, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___Milestone_ChangingGameModeSoloJoin;

/// @brief Field ScreenBG_Error, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___ScreenBG_Error;

/// @brief Field ScreenBG_AlreadyInRoom, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___ScreenBG_AlreadyInRoom;

/// @brief Field ScreenBG_InPrivateRoom, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___ScreenBG_InPrivateRoom;

/// @brief Field ScreenBG_NotConnectedSoloJoin, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___ScreenBG_NotConnectedSoloJoin;

/// @brief Field ScreenBG_LeaveRoomAndSoloJoin, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___ScreenBG_LeaveRoomAndSoloJoin;

/// @brief Field ScreenBG_LeaveRoomAndGroupJoin, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___ScreenBG_LeaveRoomAndGroupJoin;

/// @brief Field ScreenBG_AbandonPartyAndSoloJoin, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___ScreenBG_AbandonPartyAndSoloJoin;

/// @brief Field ScreenBG_ChangingGameModeSoloJoin, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___ScreenBG_ChangingGameModeSoloJoin;

/// @brief Field ScreenText_Error, offset: 0x98, size: 0x8, def value: None
 ::StringW  ___ScreenText_Error;

/// @brief Field showFullErrorMessages, offset: 0xa0, size: 0x1, def value: None
 bool  ___showFullErrorMessages;

/// @brief Field ScreenText_AlreadyInRoom, offset: 0xa8, size: 0x10, def value: None
 ::GlobalNamespace::JoinTriggerUITemplate_FormattedString  ___ScreenText_AlreadyInRoom;

/// @brief Field ScreenText_InPrivateRoom, offset: 0xb8, size: 0x10, def value: None
 ::GlobalNamespace::JoinTriggerUITemplate_FormattedString  ___ScreenText_InPrivateRoom;

/// @brief Field ScreenText_NotConnectedSoloJoin, offset: 0xc8, size: 0x10, def value: None
 ::GlobalNamespace::JoinTriggerUITemplate_FormattedString  ___ScreenText_NotConnectedSoloJoin;

/// @brief Field ScreenText_LeaveRoomAndSoloJoin, offset: 0xd8, size: 0x10, def value: None
 ::GlobalNamespace::JoinTriggerUITemplate_FormattedString  ___ScreenText_LeaveRoomAndSoloJoin;

/// @brief Field ScreenText_LeaveRoomAndGroupJoin, offset: 0xe8, size: 0x10, def value: None
 ::GlobalNamespace::JoinTriggerUITemplate_FormattedString  ___ScreenText_LeaveRoomAndGroupJoin;

/// @brief Field ScreenText_AbandonPartyAndSoloJoin, offset: 0xf8, size: 0x10, def value: None
 ::GlobalNamespace::JoinTriggerUITemplate_FormattedString  ___ScreenText_AbandonPartyAndSoloJoin;

/// @brief Field ScreenText_ChangingGameModeSoloJoin, offset: 0x108, size: 0x10, def value: None
 ::GlobalNamespace::JoinTriggerUITemplate_FormattedString  ___ScreenText_ChangingGameModeSoloJoin;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::JoinTriggerUITemplate, ___Milestone_Error) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JoinTriggerUITemplate, ___Milestone_AlreadyInRoom) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JoinTriggerUITemplate, ___Milestone_InPrivateRoom) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JoinTriggerUITemplate, ___Milestone_NotConnectedSoloJoin) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JoinTriggerUITemplate, ___Milestone_LeaveRoomAndSoloJoin) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JoinTriggerUITemplate, ___Milestone_LeaveRoomAndGroupJoin) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JoinTriggerUITemplate, ___Milestone_AbandonPartyAndSoloJoin) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JoinTriggerUITemplate, ___Milestone_ChangingGameModeSoloJoin) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JoinTriggerUITemplate, ___ScreenBG_Error) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JoinTriggerUITemplate, ___ScreenBG_AlreadyInRoom) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JoinTriggerUITemplate, ___ScreenBG_InPrivateRoom) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JoinTriggerUITemplate, ___ScreenBG_NotConnectedSoloJoin) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JoinTriggerUITemplate, ___ScreenBG_LeaveRoomAndSoloJoin) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JoinTriggerUITemplate, ___ScreenBG_LeaveRoomAndGroupJoin) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JoinTriggerUITemplate, ___ScreenBG_AbandonPartyAndSoloJoin) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JoinTriggerUITemplate, ___ScreenBG_ChangingGameModeSoloJoin) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JoinTriggerUITemplate, ___ScreenText_Error) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JoinTriggerUITemplate, ___showFullErrorMessages) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JoinTriggerUITemplate, ___ScreenText_AlreadyInRoom) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JoinTriggerUITemplate, ___ScreenText_InPrivateRoom) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JoinTriggerUITemplate, ___ScreenText_NotConnectedSoloJoin) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JoinTriggerUITemplate, ___ScreenText_LeaveRoomAndSoloJoin) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JoinTriggerUITemplate, ___ScreenText_LeaveRoomAndGroupJoin) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JoinTriggerUITemplate, ___ScreenText_AbandonPartyAndSoloJoin) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JoinTriggerUITemplate, ___ScreenText_ChangingGameModeSoloJoin) == 0x108, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::JoinTriggerUITemplate) == 0x118, "Size mismatch!");

} // namespace end def GlobalNamespace
