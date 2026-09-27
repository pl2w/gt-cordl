#pragma once
// IWYU pragma private; include "PlayFab/GroupsModels/IsMemberRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(IsMemberRequest)
namespace PlayFab::GroupsModels {
class EntityKey;
}
// Forward declare root types
namespace PlayFab::GroupsModels {
class IsMemberRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::GroupsModels::IsMemberRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::GroupsModels::IsMemberRequest*, "PlayFab.GroupsModels", "IsMemberRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::GroupsModels {
// Is value type: false
// CS Name: PlayFab.GroupsModels.IsMemberRequest
class CORDL_TYPE IsMemberRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field Entity, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Entity, put=__cordl_internal_set_Entity)) ::PlayFab::GroupsModels::EntityKey*  Entity;

/// @brief Field Group, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Group, put=__cordl_internal_set_Group)) ::PlayFab::GroupsModels::EntityKey*  Group;

/// @brief Field RoleId, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_RoleId, put=__cordl_internal_set_RoleId)) ::StringW  RoleId;

static inline ::PlayFab::GroupsModels::IsMemberRequest* New_ctor() ;

constexpr ::PlayFab::GroupsModels::EntityKey* const& __cordl_internal_get_Entity() const;

constexpr ::PlayFab::GroupsModels::EntityKey*& __cordl_internal_get_Entity() ;

constexpr ::PlayFab::GroupsModels::EntityKey* const& __cordl_internal_get_Group() const;

constexpr ::PlayFab::GroupsModels::EntityKey*& __cordl_internal_get_Group() ;

constexpr ::StringW const& __cordl_internal_get_RoleId() const;

constexpr ::StringW& __cordl_internal_get_RoleId() ;

constexpr void __cordl_internal_set_Entity(::PlayFab::GroupsModels::EntityKey*  value) ;

constexpr void __cordl_internal_set_Group(::PlayFab::GroupsModels::EntityKey*  value) ;

constexpr void __cordl_internal_set_RoleId(::StringW  value) ;

/// @brief Method .ctor, addr 0xa840dc8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr IsMemberRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "IsMemberRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
IsMemberRequest(IsMemberRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IsMemberRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IsMemberRequest(IsMemberRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19791};

/// @brief Field Entity, offset: 0x18, size: 0x8, def value: None
 ::PlayFab::GroupsModels::EntityKey*  ___Entity;

/// @brief Field Group, offset: 0x20, size: 0x8, def value: None
 ::PlayFab::GroupsModels::EntityKey*  ___Group;

/// @brief Field RoleId, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___RoleId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::GroupsModels::IsMemberRequest, ___Entity) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::GroupsModels::IsMemberRequest, ___Group) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::GroupsModels::IsMemberRequest, ___RoleId) == 0x28, "Offset mismatch!");

static_assert(sizeof(::PlayFab::GroupsModels::IsMemberRequest) == 0x30, "Size mismatch!");

} // namespace end def PlayFab::GroupsModels
