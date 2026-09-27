#pragma once
// IWYU pragma private; include "PlayFab/GroupsModels/ApplyToGroupResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
CORDL_MODULE_EXPORT(ApplyToGroupResponse)
namespace PlayFab::GroupsModels {
class EntityKey;
}
namespace PlayFab::GroupsModels {
class EntityWithLineage;
}
// Forward declare root types
namespace PlayFab::GroupsModels {
class ApplyToGroupResponse;
}
// Write type traits
MARK_REF_T(::PlayFab::GroupsModels::ApplyToGroupResponse*);
DEFINE_IL2CPP_CLASS(::PlayFab::GroupsModels::ApplyToGroupResponse*, "PlayFab.GroupsModels", "ApplyToGroupResponse");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon, System.DateTime
namespace PlayFab::GroupsModels {
// Is value type: false
// CS Name: PlayFab.GroupsModels.ApplyToGroupResponse
class CORDL_TYPE ApplyToGroupResponse : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
/// @brief Field Entity, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Entity, put=__cordl_internal_set_Entity)) ::PlayFab::GroupsModels::EntityWithLineage*  Entity;

/// @brief Field Expires, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_Expires, put=__cordl_internal_set_Expires)) ::System::DateTime  Expires;

/// @brief Field Group, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_Group, put=__cordl_internal_set_Group)) ::PlayFab::GroupsModels::EntityKey*  Group;

static inline ::PlayFab::GroupsModels::ApplyToGroupResponse* New_ctor() ;

constexpr ::PlayFab::GroupsModels::EntityWithLineage* const& __cordl_internal_get_Entity() const;

constexpr ::PlayFab::GroupsModels::EntityWithLineage*& __cordl_internal_get_Entity() ;

constexpr ::System::DateTime const& __cordl_internal_get_Expires() const;

constexpr ::System::DateTime& __cordl_internal_get_Expires() ;

constexpr ::PlayFab::GroupsModels::EntityKey* const& __cordl_internal_get_Group() const;

constexpr ::PlayFab::GroupsModels::EntityKey*& __cordl_internal_get_Group() ;

constexpr void __cordl_internal_set_Entity(::PlayFab::GroupsModels::EntityWithLineage*  value) ;

constexpr void __cordl_internal_set_Expires(::System::DateTime  value) ;

constexpr void __cordl_internal_set_Group(::PlayFab::GroupsModels::EntityKey*  value) ;

/// @brief Method .ctor, addr 0xa840d18, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ApplyToGroupResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ApplyToGroupResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ApplyToGroupResponse(ApplyToGroupResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ApplyToGroupResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ApplyToGroupResponse(ApplyToGroupResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19769};

/// @brief Field Entity, offset: 0x20, size: 0x8, def value: None
 ::PlayFab::GroupsModels::EntityWithLineage*  ___Entity;

/// @brief Field Expires, offset: 0x28, size: 0x8, def value: None
 ::System::DateTime  ___Expires;

/// @brief Field Group, offset: 0x30, size: 0x8, def value: None
 ::PlayFab::GroupsModels::EntityKey*  ___Group;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::GroupsModels::ApplyToGroupResponse, ___Entity) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::GroupsModels::ApplyToGroupResponse, ___Expires) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayFab::GroupsModels::ApplyToGroupResponse, ___Group) == 0x30, "Offset mismatch!");

static_assert(sizeof(::PlayFab::GroupsModels::ApplyToGroupResponse) == 0x38, "Size mismatch!");

} // namespace end def PlayFab::GroupsModels
