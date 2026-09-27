#pragma once
// IWYU pragma private; include "GlobalNamespace/ModIOMothershipAssociation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ModIOMothershipAssociation)
// Forward declare root types
namespace GlobalNamespace {
class ModIOMothershipAssociation;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ModIOMothershipAssociation*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ModIOMothershipAssociation*, "", "ModIOMothershipAssociation");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ModIOMothershipAssociation
class CORDL_TYPE ModIOMothershipAssociation : public ::System::Object {
public:
// Declarations
/// @brief Field AssociationId, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_AssociationId, put=__cordl_internal_set_AssociationId)) ::StringW  AssociationId;

/// @brief Field EnvId, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_EnvId, put=__cordl_internal_set_EnvId)) ::StringW  EnvId;

/// @brief Field ExternalServiceName, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_ExternalServiceName, put=__cordl_internal_set_ExternalServiceName)) ::StringW  ExternalServiceName;

/// @brief Field ExternalServiceOrgScopedId, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_ExternalServiceOrgScopedId, put=__cordl_internal_set_ExternalServiceOrgScopedId)) ::StringW  ExternalServiceOrgScopedId;

/// @brief Field ExternalServiceUserId, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_ExternalServiceUserId, put=__cordl_internal_set_ExternalServiceUserId)) ::StringW  ExternalServiceUserId;

/// @brief Field ExternalServiceUserName, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_ExternalServiceUserName, put=__cordl_internal_set_ExternalServiceUserName)) ::StringW  ExternalServiceUserName;

/// @brief Field MothershipPlayerId, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_MothershipPlayerId, put=__cordl_internal_set_MothershipPlayerId)) ::StringW  MothershipPlayerId;

/// @brief Field TitleId, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_TitleId, put=__cordl_internal_set_TitleId)) ::StringW  TitleId;

static inline ::GlobalNamespace::ModIOMothershipAssociation* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_AssociationId() const;

constexpr ::StringW& __cordl_internal_get_AssociationId() ;

constexpr ::StringW const& __cordl_internal_get_EnvId() const;

constexpr ::StringW& __cordl_internal_get_EnvId() ;

constexpr ::StringW const& __cordl_internal_get_ExternalServiceName() const;

constexpr ::StringW& __cordl_internal_get_ExternalServiceName() ;

constexpr ::StringW const& __cordl_internal_get_ExternalServiceOrgScopedId() const;

constexpr ::StringW& __cordl_internal_get_ExternalServiceOrgScopedId() ;

constexpr ::StringW const& __cordl_internal_get_ExternalServiceUserId() const;

constexpr ::StringW& __cordl_internal_get_ExternalServiceUserId() ;

constexpr ::StringW const& __cordl_internal_get_ExternalServiceUserName() const;

constexpr ::StringW& __cordl_internal_get_ExternalServiceUserName() ;

constexpr ::StringW const& __cordl_internal_get_MothershipPlayerId() const;

constexpr ::StringW& __cordl_internal_get_MothershipPlayerId() ;

constexpr ::StringW const& __cordl_internal_get_TitleId() const;

constexpr ::StringW& __cordl_internal_get_TitleId() ;

constexpr void __cordl_internal_set_AssociationId(::StringW  value) ;

constexpr void __cordl_internal_set_EnvId(::StringW  value) ;

constexpr void __cordl_internal_set_ExternalServiceName(::StringW  value) ;

constexpr void __cordl_internal_set_ExternalServiceOrgScopedId(::StringW  value) ;

constexpr void __cordl_internal_set_ExternalServiceUserId(::StringW  value) ;

constexpr void __cordl_internal_set_ExternalServiceUserName(::StringW  value) ;

constexpr void __cordl_internal_set_MothershipPlayerId(::StringW  value) ;

constexpr void __cordl_internal_set_TitleId(::StringW  value) ;

/// @brief Method .ctor, addr 0x59f1860, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModIOMothershipAssociation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModIOMothershipAssociation", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModIOMothershipAssociation(ModIOMothershipAssociation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModIOMothershipAssociation", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModIOMothershipAssociation(ModIOMothershipAssociation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2723};

/// @brief Field MothershipPlayerId, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___MothershipPlayerId;

/// @brief Field AssociationId, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___AssociationId;

/// @brief Field ExternalServiceName, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___ExternalServiceName;

/// @brief Field ExternalServiceUserId, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___ExternalServiceUserId;

/// @brief Field ExternalServiceOrgScopedId, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___ExternalServiceOrgScopedId;

/// @brief Field ExternalServiceUserName, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___ExternalServiceUserName;

/// @brief Field TitleId, offset: 0x40, size: 0x8, def value: None
 ::StringW  ___TitleId;

/// @brief Field EnvId, offset: 0x48, size: 0x8, def value: None
 ::StringW  ___EnvId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ModIOMothershipAssociation, ___MothershipPlayerId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModIOMothershipAssociation, ___AssociationId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModIOMothershipAssociation, ___ExternalServiceName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModIOMothershipAssociation, ___ExternalServiceUserId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModIOMothershipAssociation, ___ExternalServiceOrgScopedId) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModIOMothershipAssociation, ___ExternalServiceUserName) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModIOMothershipAssociation, ___TitleId) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModIOMothershipAssociation, ___EnvId) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ModIOMothershipAssociation) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
