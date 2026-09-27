#pragma once
// IWYU pragma private; include "PlayFab/ProfilesModels/EntityLineage.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(EntityLineage)
// Forward declare root types
namespace PlayFab::ProfilesModels {
class EntityLineage;
}
// Write type traits
MARK_REF_T(::PlayFab::ProfilesModels::EntityLineage*);
DEFINE_IL2CPP_CLASS(::PlayFab::ProfilesModels::EntityLineage*, "PlayFab.ProfilesModels", "EntityLineage");
// Dependencies PlayFab.SharedModels.PlayFabBaseModel
namespace PlayFab::ProfilesModels {
// Is value type: false
// CS Name: PlayFab.ProfilesModels.EntityLineage
class CORDL_TYPE EntityLineage : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field CharacterId, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_CharacterId, put=__cordl_internal_set_CharacterId)) ::StringW  CharacterId;

/// @brief Field GroupId, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_GroupId, put=__cordl_internal_set_GroupId)) ::StringW  GroupId;

/// @brief Field MasterPlayerAccountId, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_MasterPlayerAccountId, put=__cordl_internal_set_MasterPlayerAccountId)) ::StringW  MasterPlayerAccountId;

/// @brief Field NamespaceId, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_NamespaceId, put=__cordl_internal_set_NamespaceId)) ::StringW  NamespaceId;

/// @brief Field TitleId, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_TitleId, put=__cordl_internal_set_TitleId)) ::StringW  TitleId;

/// @brief Field TitlePlayerAccountId, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_TitlePlayerAccountId, put=__cordl_internal_set_TitlePlayerAccountId)) ::StringW  TitlePlayerAccountId;

static inline ::PlayFab::ProfilesModels::EntityLineage* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_CharacterId() const;

constexpr ::StringW& __cordl_internal_get_CharacterId() ;

constexpr ::StringW const& __cordl_internal_get_GroupId() const;

constexpr ::StringW& __cordl_internal_get_GroupId() ;

constexpr ::StringW const& __cordl_internal_get_MasterPlayerAccountId() const;

constexpr ::StringW& __cordl_internal_get_MasterPlayerAccountId() ;

constexpr ::StringW const& __cordl_internal_get_NamespaceId() const;

constexpr ::StringW& __cordl_internal_get_NamespaceId() ;

constexpr ::StringW const& __cordl_internal_get_TitleId() const;

constexpr ::StringW& __cordl_internal_get_TitleId() ;

constexpr ::StringW const& __cordl_internal_get_TitlePlayerAccountId() const;

constexpr ::StringW& __cordl_internal_get_TitlePlayerAccountId() ;

constexpr void __cordl_internal_set_CharacterId(::StringW  value) ;

constexpr void __cordl_internal_set_GroupId(::StringW  value) ;

constexpr void __cordl_internal_set_MasterPlayerAccountId(::StringW  value) ;

constexpr void __cordl_internal_set_NamespaceId(::StringW  value) ;

constexpr void __cordl_internal_set_TitleId(::StringW  value) ;

constexpr void __cordl_internal_set_TitlePlayerAccountId(::StringW  value) ;

/// @brief Method .ctor, addr 0xa8406f8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EntityLineage() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EntityLineage", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EntityLineage(EntityLineage && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EntityLineage", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EntityLineage(EntityLineage const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19560};

/// @brief Field CharacterId, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___CharacterId;

/// @brief Field GroupId, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___GroupId;

/// @brief Field MasterPlayerAccountId, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___MasterPlayerAccountId;

/// @brief Field NamespaceId, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___NamespaceId;

/// @brief Field TitleId, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___TitleId;

/// @brief Field TitlePlayerAccountId, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___TitlePlayerAccountId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ProfilesModels::EntityLineage, ___CharacterId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ProfilesModels::EntityLineage, ___GroupId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ProfilesModels::EntityLineage, ___MasterPlayerAccountId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ProfilesModels::EntityLineage, ___NamespaceId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ProfilesModels::EntityLineage, ___TitleId) == 0x30, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ProfilesModels::EntityLineage, ___TitlePlayerAccountId) == 0x38, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ProfilesModels::EntityLineage) == 0x40, "Size mismatch!");

} // namespace end def PlayFab::ProfilesModels
