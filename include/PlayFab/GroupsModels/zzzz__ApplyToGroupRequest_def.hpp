#pragma once
// IWYU pragma private; include "PlayFab/GroupsModels/ApplyToGroupRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
CORDL_MODULE_EXPORT(ApplyToGroupRequest)
namespace PlayFab::GroupsModels {
class EntityKey;
}
// Forward declare root types
namespace PlayFab::GroupsModels {
class ApplyToGroupRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::GroupsModels::ApplyToGroupRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::GroupsModels::ApplyToGroupRequest*, "PlayFab.GroupsModels", "ApplyToGroupRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon, System.Nullable`1<T>
namespace PlayFab::GroupsModels {
// Is value type: false
// CS Name: PlayFab.GroupsModels.ApplyToGroupRequest
class CORDL_TYPE ApplyToGroupRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field AutoAcceptOutstandingInvite, offset 0x18, size 0x10 
 __declspec(property(get=__cordl_internal_get_AutoAcceptOutstandingInvite, put=__cordl_internal_set_AutoAcceptOutstandingInvite)) ::System::Nullable_1<bool>  AutoAcceptOutstandingInvite;

/// @brief Field Entity, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_Entity, put=__cordl_internal_set_Entity)) ::PlayFab::GroupsModels::EntityKey*  Entity;

/// @brief Field Group, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_Group, put=__cordl_internal_set_Group)) ::PlayFab::GroupsModels::EntityKey*  Group;

static inline ::PlayFab::GroupsModels::ApplyToGroupRequest* New_ctor() ;

constexpr ::System::Nullable_1<bool> const& __cordl_internal_get_AutoAcceptOutstandingInvite() const;

constexpr ::System::Nullable_1<bool>& __cordl_internal_get_AutoAcceptOutstandingInvite() ;

constexpr ::PlayFab::GroupsModels::EntityKey* const& __cordl_internal_get_Entity() const;

constexpr ::PlayFab::GroupsModels::EntityKey*& __cordl_internal_get_Entity() ;

constexpr ::PlayFab::GroupsModels::EntityKey* const& __cordl_internal_get_Group() const;

constexpr ::PlayFab::GroupsModels::EntityKey*& __cordl_internal_get_Group() ;

constexpr void __cordl_internal_set_AutoAcceptOutstandingInvite(::System::Nullable_1<bool>  value) ;

constexpr void __cordl_internal_set_Entity(::PlayFab::GroupsModels::EntityKey*  value) ;

constexpr void __cordl_internal_set_Group(::PlayFab::GroupsModels::EntityKey*  value) ;

/// @brief Method .ctor, addr 0xa840d10, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ApplyToGroupRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ApplyToGroupRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ApplyToGroupRequest(ApplyToGroupRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ApplyToGroupRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ApplyToGroupRequest(ApplyToGroupRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19768};

/// @brief Field AutoAcceptOutstandingInvite, offset: 0x18, size: 0x10, def value: None
 ::System::Nullable_1<bool>  ___AutoAcceptOutstandingInvite;

/// @brief Field Entity, offset: 0x28, size: 0x8, def value: None
 ::PlayFab::GroupsModels::EntityKey*  ___Entity;

/// @brief Field Group, offset: 0x30, size: 0x8, def value: None
 ::PlayFab::GroupsModels::EntityKey*  ___Group;

/// @brief Size padding 0x30 - 0x38 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::GroupsModels::ApplyToGroupRequest, ___AutoAcceptOutstandingInvite) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::GroupsModels::ApplyToGroupRequest, ___Entity) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayFab::GroupsModels::ApplyToGroupRequest, ___Group) == 0x30, "Offset mismatch!");

static_assert(sizeof(::PlayFab::GroupsModels::ApplyToGroupRequest) == 0x30, "Size mismatch!");

} // namespace end def PlayFab::GroupsModels
