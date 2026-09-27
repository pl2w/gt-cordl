#pragma once
// IWYU pragma private; include "PlayFab/ProfilesModels/EntityKey.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(EntityKey)
// Forward declare root types
namespace PlayFab::ProfilesModels {
class EntityKey;
}
// Write type traits
MARK_REF_T(::PlayFab::ProfilesModels::EntityKey*);
DEFINE_IL2CPP_CLASS(::PlayFab::ProfilesModels::EntityKey*, "PlayFab.ProfilesModels", "EntityKey");
// Dependencies PlayFab.SharedModels.PlayFabBaseModel
namespace PlayFab::ProfilesModels {
// Is value type: false
// CS Name: PlayFab.ProfilesModels.EntityKey
class CORDL_TYPE EntityKey : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field Id, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Id, put=__cordl_internal_set_Id)) ::StringW  Id;

/// @brief Field Type, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Type, put=__cordl_internal_set_Type)) ::StringW  Type;

static inline ::PlayFab::ProfilesModels::EntityKey* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_Id() const;

constexpr ::StringW& __cordl_internal_get_Id() ;

constexpr ::StringW const& __cordl_internal_get_Type() const;

constexpr ::StringW& __cordl_internal_get_Type() ;

constexpr void __cordl_internal_set_Id(::StringW  value) ;

constexpr void __cordl_internal_set_Type(::StringW  value) ;

/// @brief Method .ctor, addr 0xa8406f0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EntityKey() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EntityKey", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EntityKey(EntityKey && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EntityKey", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EntityKey(EntityKey const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19559};

/// @brief Field Id, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___Id;

/// @brief Field Type, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___Type;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ProfilesModels::EntityKey, ___Id) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ProfilesModels::EntityKey, ___Type) == 0x18, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ProfilesModels::EntityKey) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::ProfilesModels
