#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/EntityTokenResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(EntityTokenResponse)
namespace PlayFab::ClientModels {
class EntityKey;
}
// Forward declare root types
namespace PlayFab::ClientModels {
class EntityTokenResponse;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::EntityTokenResponse*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::EntityTokenResponse*, "PlayFab.ClientModels", "EntityTokenResponse");
// Dependencies PlayFab.SharedModels.PlayFabBaseModel, System.DateTime, System.Nullable`1<T>
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.EntityTokenResponse
class CORDL_TYPE EntityTokenResponse : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field Entity, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Entity, put=__cordl_internal_set_Entity)) ::PlayFab::ClientModels::EntityKey*  Entity;

/// @brief Field EntityToken, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_EntityToken, put=__cordl_internal_set_EntityToken)) ::StringW  EntityToken;

/// @brief Field TokenExpiration, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get_TokenExpiration, put=__cordl_internal_set_TokenExpiration)) ::System::Nullable_1<::System::DateTime>  TokenExpiration;

static inline ::PlayFab::ClientModels::EntityTokenResponse* New_ctor() ;

constexpr ::PlayFab::ClientModels::EntityKey* const& __cordl_internal_get_Entity() const;

constexpr ::PlayFab::ClientModels::EntityKey*& __cordl_internal_get_Entity() ;

constexpr ::StringW const& __cordl_internal_get_EntityToken() const;

constexpr ::StringW& __cordl_internal_get_EntityToken() ;

constexpr ::System::Nullable_1<::System::DateTime> const& __cordl_internal_get_TokenExpiration() const;

constexpr ::System::Nullable_1<::System::DateTime>& __cordl_internal_get_TokenExpiration() ;

constexpr void __cordl_internal_set_Entity(::PlayFab::ClientModels::EntityKey*  value) ;

constexpr void __cordl_internal_set_EntityToken(::StringW  value) ;

constexpr void __cordl_internal_set_TokenExpiration(::System::Nullable_1<::System::DateTime>  value) ;

/// @brief Method .ctor, addr 0xa84db58, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EntityTokenResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EntityTokenResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EntityTokenResponse(EntityTokenResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EntityTokenResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EntityTokenResponse(EntityTokenResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19993};

/// @brief Field Entity, offset: 0x10, size: 0x8, def value: None
 ::PlayFab::ClientModels::EntityKey*  ___Entity;

/// @brief Field EntityToken, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___EntityToken;

/// @brief Field TokenExpiration, offset: 0x20, size: 0x10, def value: None
 ::System::Nullable_1<::System::DateTime>  ___TokenExpiration;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::EntityTokenResponse, ___Entity) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::EntityTokenResponse, ___EntityToken) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::EntityTokenResponse, ___TokenExpiration) == 0x20, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::EntityTokenResponse) == 0x30, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
