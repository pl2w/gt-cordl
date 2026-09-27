#pragma once
// IWYU pragma private; include "PlayFab/AuthenticationModels/ValidateEntityTokenResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/AuthenticationModels/zzzz__LoginIdentityProvider_def.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
CORDL_MODULE_EXPORT(ValidateEntityTokenResponse)
namespace PlayFab::AuthenticationModels {
class EntityKey;
}
namespace PlayFab::AuthenticationModels {
class EntityLineage;
}
// Forward declare root types
namespace PlayFab::AuthenticationModels {
class ValidateEntityTokenResponse;
}
// Write type traits
MARK_REF_T(::PlayFab::AuthenticationModels::ValidateEntityTokenResponse*);
DEFINE_IL2CPP_CLASS(::PlayFab::AuthenticationModels::ValidateEntityTokenResponse*, "PlayFab.AuthenticationModels", "ValidateEntityTokenResponse");
// Dependencies PlayFab.AuthenticationModels.LoginIdentityProvider, PlayFab.SharedModels.PlayFabResultCommon, System.Nullable`1<T>
namespace PlayFab::AuthenticationModels {
// Is value type: false
// CS Name: PlayFab.AuthenticationModels.ValidateEntityTokenResponse
class CORDL_TYPE ValidateEntityTokenResponse : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
/// @brief Field Entity, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Entity, put=__cordl_internal_set_Entity)) ::PlayFab::AuthenticationModels::EntityKey*  Entity;

/// @brief Field IdentityProvider, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_IdentityProvider, put=__cordl_internal_set_IdentityProvider)) ::System::Nullable_1<::PlayFab::AuthenticationModels::LoginIdentityProvider>  IdentityProvider;

/// @brief Field Lineage, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_Lineage, put=__cordl_internal_set_Lineage)) ::PlayFab::AuthenticationModels::EntityLineage*  Lineage;

static inline ::PlayFab::AuthenticationModels::ValidateEntityTokenResponse* New_ctor() ;

constexpr ::PlayFab::AuthenticationModels::EntityKey* const& __cordl_internal_get_Entity() const;

constexpr ::PlayFab::AuthenticationModels::EntityKey*& __cordl_internal_get_Entity() ;

constexpr ::System::Nullable_1<::PlayFab::AuthenticationModels::LoginIdentityProvider> const& __cordl_internal_get_IdentityProvider() const;

constexpr ::System::Nullable_1<::PlayFab::AuthenticationModels::LoginIdentityProvider>& __cordl_internal_get_IdentityProvider() ;

constexpr ::PlayFab::AuthenticationModels::EntityLineage* const& __cordl_internal_get_Lineage() const;

constexpr ::PlayFab::AuthenticationModels::EntityLineage*& __cordl_internal_get_Lineage() ;

constexpr void __cordl_internal_set_Entity(::PlayFab::AuthenticationModels::EntityKey*  value) ;

constexpr void __cordl_internal_set_IdentityProvider(::System::Nullable_1<::PlayFab::AuthenticationModels::LoginIdentityProvider>  value) ;

constexpr void __cordl_internal_set_Lineage(::PlayFab::AuthenticationModels::EntityLineage*  value) ;

/// @brief Method .ctor, addr 0xa84e704, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ValidateEntityTokenResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ValidateEntityTokenResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ValidateEntityTokenResponse(ValidateEntityTokenResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ValidateEntityTokenResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ValidateEntityTokenResponse(ValidateEntityTokenResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20341};

/// @brief Field Entity, offset: 0x20, size: 0x8, def value: None
 ::PlayFab::AuthenticationModels::EntityKey*  ___Entity;

/// @brief Field IdentityProvider, offset: 0x28, size: 0x10, def value: None
 ::System::Nullable_1<::PlayFab::AuthenticationModels::LoginIdentityProvider>  ___IdentityProvider;

/// @brief Field Lineage, offset: 0x38, size: 0x8, def value: None
 ::PlayFab::AuthenticationModels::EntityLineage*  ___Lineage;

/// @brief Size padding 0x38 - 0x40 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::AuthenticationModels::ValidateEntityTokenResponse, ___Entity) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::AuthenticationModels::ValidateEntityTokenResponse, ___IdentityProvider) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayFab::AuthenticationModels::ValidateEntityTokenResponse, ___Lineage) == 0x38, "Offset mismatch!");

static_assert(sizeof(::PlayFab::AuthenticationModels::ValidateEntityTokenResponse) == 0x38, "Size mismatch!");

} // namespace end def PlayFab::AuthenticationModels
