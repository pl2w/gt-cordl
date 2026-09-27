#pragma once
// IWYU pragma private; include "PlayFab/ProfilesModels/EntityProfileBody.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EntityProfileBody)
namespace PlayFab::ProfilesModels {
class EntityDataObject;
}
namespace PlayFab::ProfilesModels {
class EntityKey;
}
namespace PlayFab::ProfilesModels {
class EntityLineage;
}
namespace PlayFab::ProfilesModels {
class EntityPermissionStatement;
}
namespace PlayFab::ProfilesModels {
class EntityProfileFileMetadata;
}
namespace PlayFab::ProfilesModels {
class EntityStatisticValue;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace PlayFab::ProfilesModels {
class EntityProfileBody;
}
// Write type traits
MARK_REF_T(::PlayFab::ProfilesModels::EntityProfileBody*);
DEFINE_IL2CPP_CLASS(::PlayFab::ProfilesModels::EntityProfileBody*, "PlayFab.ProfilesModels", "EntityProfileBody");
// Dependencies PlayFab.SharedModels.PlayFabBaseModel, System.DateTime
namespace PlayFab::ProfilesModels {
// Is value type: false
// CS Name: PlayFab.ProfilesModels.EntityProfileBody
class CORDL_TYPE EntityProfileBody : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field AvatarUrl, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_AvatarUrl, put=__cordl_internal_set_AvatarUrl)) ::StringW  AvatarUrl;

/// @brief Field Created, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Created, put=__cordl_internal_set_Created)) ::System::DateTime  Created;

/// @brief Field DisplayName, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_DisplayName, put=__cordl_internal_set_DisplayName)) ::StringW  DisplayName;

/// @brief Field Entity, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_Entity, put=__cordl_internal_set_Entity)) ::PlayFab::ProfilesModels::EntityKey*  Entity;

/// @brief Field EntityChain, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_EntityChain, put=__cordl_internal_set_EntityChain)) ::StringW  EntityChain;

/// @brief Field ExperimentVariants, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_ExperimentVariants, put=__cordl_internal_set_ExperimentVariants)) ::System::Collections::Generic::List_1<::StringW>*  ExperimentVariants;

/// @brief Field Files, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_Files, put=__cordl_internal_set_Files)) ::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::ProfilesModels::EntityProfileFileMetadata*>*  Files;

/// @brief Field Language, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_Language, put=__cordl_internal_set_Language)) ::StringW  Language;

/// @brief Field LeaderboardMetadata, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_LeaderboardMetadata, put=__cordl_internal_set_LeaderboardMetadata)) ::StringW  LeaderboardMetadata;

/// @brief Field Lineage, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_Lineage, put=__cordl_internal_set_Lineage)) ::PlayFab::ProfilesModels::EntityLineage*  Lineage;

/// @brief Field Objects, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_Objects, put=__cordl_internal_set_Objects)) ::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::ProfilesModels::EntityDataObject*>*  Objects;

/// @brief Field Permissions, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_Permissions, put=__cordl_internal_set_Permissions)) ::System::Collections::Generic::List_1<::PlayFab::ProfilesModels::EntityPermissionStatement*>*  Permissions;

/// @brief Field Statistics, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_Statistics, put=__cordl_internal_set_Statistics)) ::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::ProfilesModels::EntityStatisticValue*>*  Statistics;

/// @brief Field VersionNumber, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_VersionNumber, put=__cordl_internal_set_VersionNumber)) int32_t  VersionNumber;

static inline ::PlayFab::ProfilesModels::EntityProfileBody* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_AvatarUrl() const;

constexpr ::StringW& __cordl_internal_get_AvatarUrl() ;

constexpr ::System::DateTime const& __cordl_internal_get_Created() const;

constexpr ::System::DateTime& __cordl_internal_get_Created() ;

constexpr ::StringW const& __cordl_internal_get_DisplayName() const;

constexpr ::StringW& __cordl_internal_get_DisplayName() ;

constexpr ::PlayFab::ProfilesModels::EntityKey* const& __cordl_internal_get_Entity() const;

constexpr ::PlayFab::ProfilesModels::EntityKey*& __cordl_internal_get_Entity() ;

constexpr ::StringW const& __cordl_internal_get_EntityChain() const;

constexpr ::StringW& __cordl_internal_get_EntityChain() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_ExperimentVariants() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_ExperimentVariants() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::ProfilesModels::EntityProfileFileMetadata*>* const& __cordl_internal_get_Files() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::ProfilesModels::EntityProfileFileMetadata*>*& __cordl_internal_get_Files() ;

constexpr ::StringW const& __cordl_internal_get_Language() const;

constexpr ::StringW& __cordl_internal_get_Language() ;

constexpr ::StringW const& __cordl_internal_get_LeaderboardMetadata() const;

constexpr ::StringW& __cordl_internal_get_LeaderboardMetadata() ;

constexpr ::PlayFab::ProfilesModels::EntityLineage* const& __cordl_internal_get_Lineage() const;

constexpr ::PlayFab::ProfilesModels::EntityLineage*& __cordl_internal_get_Lineage() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::ProfilesModels::EntityDataObject*>* const& __cordl_internal_get_Objects() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::ProfilesModels::EntityDataObject*>*& __cordl_internal_get_Objects() ;

constexpr ::System::Collections::Generic::List_1<::PlayFab::ProfilesModels::EntityPermissionStatement*>* const& __cordl_internal_get_Permissions() const;

constexpr ::System::Collections::Generic::List_1<::PlayFab::ProfilesModels::EntityPermissionStatement*>*& __cordl_internal_get_Permissions() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::ProfilesModels::EntityStatisticValue*>* const& __cordl_internal_get_Statistics() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::ProfilesModels::EntityStatisticValue*>*& __cordl_internal_get_Statistics() ;

constexpr int32_t const& __cordl_internal_get_VersionNumber() const;

constexpr int32_t& __cordl_internal_get_VersionNumber() ;

constexpr void __cordl_internal_set_AvatarUrl(::StringW  value) ;

constexpr void __cordl_internal_set_Created(::System::DateTime  value) ;

constexpr void __cordl_internal_set_DisplayName(::StringW  value) ;

constexpr void __cordl_internal_set_Entity(::PlayFab::ProfilesModels::EntityKey*  value) ;

constexpr void __cordl_internal_set_EntityChain(::StringW  value) ;

constexpr void __cordl_internal_set_ExperimentVariants(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_Files(::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::ProfilesModels::EntityProfileFileMetadata*>*  value) ;

constexpr void __cordl_internal_set_Language(::StringW  value) ;

constexpr void __cordl_internal_set_LeaderboardMetadata(::StringW  value) ;

constexpr void __cordl_internal_set_Lineage(::PlayFab::ProfilesModels::EntityLineage*  value) ;

constexpr void __cordl_internal_set_Objects(::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::ProfilesModels::EntityDataObject*>*  value) ;

constexpr void __cordl_internal_set_Permissions(::System::Collections::Generic::List_1<::PlayFab::ProfilesModels::EntityPermissionStatement*>*  value) ;

constexpr void __cordl_internal_set_Statistics(::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::ProfilesModels::EntityStatisticValue*>*  value) ;

constexpr void __cordl_internal_set_VersionNumber(int32_t  value) ;

/// @brief Method .ctor, addr 0xa840708, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EntityProfileBody() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EntityProfileBody", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EntityProfileBody(EntityProfileBody && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EntityProfileBody", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EntityProfileBody(EntityProfileBody const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19562};

/// @brief Field AvatarUrl, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___AvatarUrl;

/// @brief Field Created, offset: 0x18, size: 0x8, def value: None
 ::System::DateTime  ___Created;

/// @brief Field DisplayName, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___DisplayName;

/// @brief Field Entity, offset: 0x28, size: 0x8, def value: None
 ::PlayFab::ProfilesModels::EntityKey*  ___Entity;

/// @brief Field EntityChain, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___EntityChain;

/// @brief Field ExperimentVariants, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___ExperimentVariants;

/// @brief Field Files, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::ProfilesModels::EntityProfileFileMetadata*>*  ___Files;

/// @brief Field Language, offset: 0x48, size: 0x8, def value: None
 ::StringW  ___Language;

/// @brief Field LeaderboardMetadata, offset: 0x50, size: 0x8, def value: None
 ::StringW  ___LeaderboardMetadata;

/// @brief Field Lineage, offset: 0x58, size: 0x8, def value: None
 ::PlayFab::ProfilesModels::EntityLineage*  ___Lineage;

/// @brief Field Objects, offset: 0x60, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::ProfilesModels::EntityDataObject*>*  ___Objects;

/// @brief Field Permissions, offset: 0x68, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::PlayFab::ProfilesModels::EntityPermissionStatement*>*  ___Permissions;

/// @brief Field Statistics, offset: 0x70, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::ProfilesModels::EntityStatisticValue*>*  ___Statistics;

/// @brief Field VersionNumber, offset: 0x78, size: 0x4, def value: None
 int32_t  ___VersionNumber;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ProfilesModels::EntityProfileBody, ___AvatarUrl) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ProfilesModels::EntityProfileBody, ___Created) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ProfilesModels::EntityProfileBody, ___DisplayName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ProfilesModels::EntityProfileBody, ___Entity) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ProfilesModels::EntityProfileBody, ___EntityChain) == 0x30, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ProfilesModels::EntityProfileBody, ___ExperimentVariants) == 0x38, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ProfilesModels::EntityProfileBody, ___Files) == 0x40, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ProfilesModels::EntityProfileBody, ___Language) == 0x48, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ProfilesModels::EntityProfileBody, ___LeaderboardMetadata) == 0x50, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ProfilesModels::EntityProfileBody, ___Lineage) == 0x58, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ProfilesModels::EntityProfileBody, ___Objects) == 0x60, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ProfilesModels::EntityProfileBody, ___Permissions) == 0x68, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ProfilesModels::EntityProfileBody, ___Statistics) == 0x70, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ProfilesModels::EntityProfileBody, ___VersionNumber) == 0x78, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ProfilesModels::EntityProfileBody) == 0x80, "Size mismatch!");

} // namespace end def PlayFab::ProfilesModels
