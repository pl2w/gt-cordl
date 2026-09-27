#pragma once
// IWYU pragma private; include "PlayFab/GroupsModels/EntityWithLineage.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(EntityWithLineage)
namespace PlayFab::GroupsModels {
class EntityKey;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace PlayFab::GroupsModels {
class EntityWithLineage;
}
// Write type traits
MARK_REF_T(::PlayFab::GroupsModels::EntityWithLineage*);
DEFINE_IL2CPP_CLASS(::PlayFab::GroupsModels::EntityWithLineage*, "PlayFab.GroupsModels", "EntityWithLineage");
// Dependencies PlayFab.SharedModels.PlayFabBaseModel
namespace PlayFab::GroupsModels {
// Is value type: false
// CS Name: PlayFab.GroupsModels.EntityWithLineage
class CORDL_TYPE EntityWithLineage : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field Key, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Key, put=__cordl_internal_set_Key)) ::PlayFab::GroupsModels::EntityKey*  Key;

/// @brief Field Lineage, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Lineage, put=__cordl_internal_set_Lineage)) ::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::GroupsModels::EntityKey*>*  Lineage;

static inline ::PlayFab::GroupsModels::EntityWithLineage* New_ctor() ;

constexpr ::PlayFab::GroupsModels::EntityKey* const& __cordl_internal_get_Key() const;

constexpr ::PlayFab::GroupsModels::EntityKey*& __cordl_internal_get_Key() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::GroupsModels::EntityKey*>* const& __cordl_internal_get_Lineage() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::GroupsModels::EntityKey*>*& __cordl_internal_get_Lineage() ;

constexpr void __cordl_internal_set_Key(::PlayFab::GroupsModels::EntityKey*  value) ;

constexpr void __cordl_internal_set_Lineage(::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::GroupsModels::EntityKey*>*  value) ;

/// @brief Method .ctor, addr 0xa840d78, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EntityWithLineage() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EntityWithLineage", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EntityWithLineage(EntityWithLineage && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EntityWithLineage", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EntityWithLineage(EntityWithLineage const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19781};

/// @brief Field Key, offset: 0x10, size: 0x8, def value: None
 ::PlayFab::GroupsModels::EntityKey*  ___Key;

/// @brief Field Lineage, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::GroupsModels::EntityKey*>*  ___Lineage;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::GroupsModels::EntityWithLineage, ___Key) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::GroupsModels::EntityWithLineage, ___Lineage) == 0x18, "Offset mismatch!");

static_assert(sizeof(::PlayFab::GroupsModels::EntityWithLineage) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::GroupsModels
