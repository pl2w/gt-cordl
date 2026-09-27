#pragma once
// IWYU pragma private; include "PlayFab/AuthenticationModels/GetEntityTokenRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
CORDL_MODULE_EXPORT(GetEntityTokenRequest)
namespace PlayFab::AuthenticationModels {
class EntityKey;
}
// Forward declare root types
namespace PlayFab::AuthenticationModels {
class GetEntityTokenRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::AuthenticationModels::GetEntityTokenRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::AuthenticationModels::GetEntityTokenRequest*, "PlayFab.AuthenticationModels", "GetEntityTokenRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::AuthenticationModels {
// Is value type: false
// CS Name: PlayFab.AuthenticationModels.GetEntityTokenRequest
class CORDL_TYPE GetEntityTokenRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field Entity, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Entity, put=__cordl_internal_set_Entity)) ::PlayFab::AuthenticationModels::EntityKey*  Entity;

static inline ::PlayFab::AuthenticationModels::GetEntityTokenRequest* New_ctor() ;

constexpr ::PlayFab::AuthenticationModels::EntityKey* const& __cordl_internal_get_Entity() const;

constexpr ::PlayFab::AuthenticationModels::EntityKey*& __cordl_internal_get_Entity() ;

constexpr void __cordl_internal_set_Entity(::PlayFab::AuthenticationModels::EntityKey*  value) ;

/// @brief Method .ctor, addr 0xa84e6ec, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetEntityTokenRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetEntityTokenRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetEntityTokenRequest(GetEntityTokenRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetEntityTokenRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetEntityTokenRequest(GetEntityTokenRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20337};

/// @brief Field Entity, offset: 0x18, size: 0x8, def value: None
 ::PlayFab::AuthenticationModels::EntityKey*  ___Entity;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::AuthenticationModels::GetEntityTokenRequest, ___Entity) == 0x18, "Offset mismatch!");

static_assert(sizeof(::PlayFab::AuthenticationModels::GetEntityTokenRequest) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::AuthenticationModels
