#pragma once
// IWYU pragma private; include "PlayFab/AuthenticationModels/GetEntityTokenResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GetEntityTokenResponse)
namespace PlayFab::AuthenticationModels {
class EntityKey;
}
// Forward declare root types
namespace PlayFab::AuthenticationModels {
class GetEntityTokenResponse;
}
// Write type traits
MARK_REF_T(::PlayFab::AuthenticationModels::GetEntityTokenResponse*);
DEFINE_IL2CPP_CLASS(::PlayFab::AuthenticationModels::GetEntityTokenResponse*, "PlayFab.AuthenticationModels", "GetEntityTokenResponse");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon, System.DateTime, System.Nullable`1<T>
namespace PlayFab::AuthenticationModels {
// Is value type: false
// CS Name: PlayFab.AuthenticationModels.GetEntityTokenResponse
class CORDL_TYPE GetEntityTokenResponse : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
/// @brief Field Entity, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Entity, put=__cordl_internal_set_Entity)) ::PlayFab::AuthenticationModels::EntityKey*  Entity;

/// @brief Field EntityToken, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_EntityToken, put=__cordl_internal_set_EntityToken)) ::StringW  EntityToken;

/// @brief Field TokenExpiration, offset 0x30, size 0x10 
 __declspec(property(get=__cordl_internal_get_TokenExpiration, put=__cordl_internal_set_TokenExpiration)) ::System::Nullable_1<::System::DateTime>  TokenExpiration;

static inline ::PlayFab::AuthenticationModels::GetEntityTokenResponse* New_ctor() ;

constexpr ::PlayFab::AuthenticationModels::EntityKey* const& __cordl_internal_get_Entity() const;

constexpr ::PlayFab::AuthenticationModels::EntityKey*& __cordl_internal_get_Entity() ;

constexpr ::StringW const& __cordl_internal_get_EntityToken() const;

constexpr ::StringW& __cordl_internal_get_EntityToken() ;

constexpr ::System::Nullable_1<::System::DateTime> const& __cordl_internal_get_TokenExpiration() const;

constexpr ::System::Nullable_1<::System::DateTime>& __cordl_internal_get_TokenExpiration() ;

constexpr void __cordl_internal_set_Entity(::PlayFab::AuthenticationModels::EntityKey*  value) ;

constexpr void __cordl_internal_set_EntityToken(::StringW  value) ;

constexpr void __cordl_internal_set_TokenExpiration(::System::Nullable_1<::System::DateTime>  value) ;

/// @brief Method .ctor, addr 0xa84e6f4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetEntityTokenResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetEntityTokenResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetEntityTokenResponse(GetEntityTokenResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetEntityTokenResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetEntityTokenResponse(GetEntityTokenResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20338};

/// @brief Field Entity, offset: 0x20, size: 0x8, def value: None
 ::PlayFab::AuthenticationModels::EntityKey*  ___Entity;

/// @brief Field EntityToken, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___EntityToken;

/// @brief Field TokenExpiration, offset: 0x30, size: 0x10, def value: None
 ::System::Nullable_1<::System::DateTime>  ___TokenExpiration;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::AuthenticationModels::GetEntityTokenResponse, ___Entity) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::AuthenticationModels::GetEntityTokenResponse, ___EntityToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayFab::AuthenticationModels::GetEntityTokenResponse, ___TokenExpiration) == 0x30, "Offset mismatch!");

static_assert(sizeof(::PlayFab::AuthenticationModels::GetEntityTokenResponse) == 0x40, "Size mismatch!");

} // namespace end def PlayFab::AuthenticationModels
