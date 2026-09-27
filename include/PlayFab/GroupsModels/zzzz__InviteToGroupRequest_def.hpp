#pragma once
// IWYU pragma private; include "PlayFab/GroupsModels/InviteToGroupRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(InviteToGroupRequest)
namespace PlayFab::GroupsModels {
class EntityKey;
}
// Forward declare root types
namespace PlayFab::GroupsModels {
class InviteToGroupRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::GroupsModels::InviteToGroupRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::GroupsModels::InviteToGroupRequest*, "PlayFab.GroupsModels", "InviteToGroupRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon, System.Nullable`1<T>
namespace PlayFab::GroupsModels {
// Is value type: false
// CS Name: PlayFab.GroupsModels.InviteToGroupRequest
class CORDL_TYPE InviteToGroupRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field AutoAcceptOutstandingApplication, offset 0x18, size 0x10 
 __declspec(property(get=__cordl_internal_get_AutoAcceptOutstandingApplication, put=__cordl_internal_set_AutoAcceptOutstandingApplication)) ::System::Nullable_1<bool>  AutoAcceptOutstandingApplication;

/// @brief Field Entity, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_Entity, put=__cordl_internal_set_Entity)) ::PlayFab::GroupsModels::EntityKey*  Entity;

/// @brief Field Group, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_Group, put=__cordl_internal_set_Group)) ::PlayFab::GroupsModels::EntityKey*  Group;

/// @brief Field RoleId, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_RoleId, put=__cordl_internal_set_RoleId)) ::StringW  RoleId;

static inline ::PlayFab::GroupsModels::InviteToGroupRequest* New_ctor() ;

constexpr ::System::Nullable_1<bool> const& __cordl_internal_get_AutoAcceptOutstandingApplication() const;

constexpr ::System::Nullable_1<bool>& __cordl_internal_get_AutoAcceptOutstandingApplication() ;

constexpr ::PlayFab::GroupsModels::EntityKey* const& __cordl_internal_get_Entity() const;

constexpr ::PlayFab::GroupsModels::EntityKey*& __cordl_internal_get_Entity() ;

constexpr ::PlayFab::GroupsModels::EntityKey* const& __cordl_internal_get_Group() const;

constexpr ::PlayFab::GroupsModels::EntityKey*& __cordl_internal_get_Group() ;

constexpr ::StringW const& __cordl_internal_get_RoleId() const;

constexpr ::StringW& __cordl_internal_get_RoleId() ;

constexpr void __cordl_internal_set_AutoAcceptOutstandingApplication(::System::Nullable_1<bool>  value) ;

constexpr void __cordl_internal_set_Entity(::PlayFab::GroupsModels::EntityKey*  value) ;

constexpr void __cordl_internal_set_Group(::PlayFab::GroupsModels::EntityKey*  value) ;

constexpr void __cordl_internal_set_RoleId(::StringW  value) ;

/// @brief Method .ctor, addr 0xa840db8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InviteToGroupRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InviteToGroupRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InviteToGroupRequest(InviteToGroupRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InviteToGroupRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InviteToGroupRequest(InviteToGroupRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19789};

/// @brief Field AutoAcceptOutstandingApplication, offset: 0x18, size: 0x10, def value: None
 ::System::Nullable_1<bool>  ___AutoAcceptOutstandingApplication;

/// @brief Field Entity, offset: 0x28, size: 0x8, def value: None
 ::PlayFab::GroupsModels::EntityKey*  ___Entity;

/// @brief Field Group, offset: 0x30, size: 0x8, def value: None
 ::PlayFab::GroupsModels::EntityKey*  ___Group;

/// @brief Field RoleId, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___RoleId;

/// @brief Size padding 0x38 - 0x40 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::GroupsModels::InviteToGroupRequest, ___AutoAcceptOutstandingApplication) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::GroupsModels::InviteToGroupRequest, ___Entity) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayFab::GroupsModels::InviteToGroupRequest, ___Group) == 0x30, "Offset mismatch!");

static_assert(offsetof(::PlayFab::GroupsModels::InviteToGroupRequest, ___RoleId) == 0x38, "Offset mismatch!");

static_assert(sizeof(::PlayFab::GroupsModels::InviteToGroupRequest) == 0x38, "Size mismatch!");

} // namespace end def PlayFab::GroupsModels
