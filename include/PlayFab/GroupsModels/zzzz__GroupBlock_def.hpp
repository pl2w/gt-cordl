#pragma once
// IWYU pragma private; include "PlayFab/GroupsModels/GroupBlock.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
CORDL_MODULE_EXPORT(GroupBlock)
namespace PlayFab::GroupsModels {
class EntityKey;
}
namespace PlayFab::GroupsModels {
class EntityWithLineage;
}
// Forward declare root types
namespace PlayFab::GroupsModels {
class GroupBlock;
}
// Write type traits
MARK_REF_T(::PlayFab::GroupsModels::GroupBlock*);
DEFINE_IL2CPP_CLASS(::PlayFab::GroupsModels::GroupBlock*, "PlayFab.GroupsModels", "GroupBlock");
// Dependencies PlayFab.SharedModels.PlayFabBaseModel
namespace PlayFab::GroupsModels {
// Is value type: false
// CS Name: PlayFab.GroupsModels.GroupBlock
class CORDL_TYPE GroupBlock : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field Entity, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Entity, put=__cordl_internal_set_Entity)) ::PlayFab::GroupsModels::EntityWithLineage*  Entity;

/// @brief Field Group, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Group, put=__cordl_internal_set_Group)) ::PlayFab::GroupsModels::EntityKey*  Group;

static inline ::PlayFab::GroupsModels::GroupBlock* New_ctor() ;

constexpr ::PlayFab::GroupsModels::EntityWithLineage* const& __cordl_internal_get_Entity() const;

constexpr ::PlayFab::GroupsModels::EntityWithLineage*& __cordl_internal_get_Entity() ;

constexpr ::PlayFab::GroupsModels::EntityKey* const& __cordl_internal_get_Group() const;

constexpr ::PlayFab::GroupsModels::EntityKey*& __cordl_internal_get_Group() ;

constexpr void __cordl_internal_set_Entity(::PlayFab::GroupsModels::EntityWithLineage*  value) ;

constexpr void __cordl_internal_set_Group(::PlayFab::GroupsModels::EntityKey*  value) ;

/// @brief Method .ctor, addr 0xa840d98, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GroupBlock() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GroupBlock", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GroupBlock(GroupBlock && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GroupBlock", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GroupBlock(GroupBlock const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19785};

/// @brief Field Entity, offset: 0x10, size: 0x8, def value: None
 ::PlayFab::GroupsModels::EntityWithLineage*  ___Entity;

/// @brief Field Group, offset: 0x18, size: 0x8, def value: None
 ::PlayFab::GroupsModels::EntityKey*  ___Group;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::GroupsModels::GroupBlock, ___Entity) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::GroupsModels::GroupBlock, ___Group) == 0x18, "Offset mismatch!");

static_assert(sizeof(::PlayFab::GroupsModels::GroupBlock) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::GroupsModels
