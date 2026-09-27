#pragma once
// IWYU pragma private; include "PlayFab/AuthenticationModels/ValidateEntityTokenRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ValidateEntityTokenRequest)
// Forward declare root types
namespace PlayFab::AuthenticationModels {
class ValidateEntityTokenRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::AuthenticationModels::ValidateEntityTokenRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::AuthenticationModels::ValidateEntityTokenRequest*, "PlayFab.AuthenticationModels", "ValidateEntityTokenRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::AuthenticationModels {
// Is value type: false
// CS Name: PlayFab.AuthenticationModels.ValidateEntityTokenRequest
class CORDL_TYPE ValidateEntityTokenRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field EntityToken, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_EntityToken, put=__cordl_internal_set_EntityToken)) ::StringW  EntityToken;

static inline ::PlayFab::AuthenticationModels::ValidateEntityTokenRequest* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_EntityToken() const;

constexpr ::StringW& __cordl_internal_get_EntityToken() ;

constexpr void __cordl_internal_set_EntityToken(::StringW  value) ;

/// @brief Method .ctor, addr 0xa84e6fc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ValidateEntityTokenRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ValidateEntityTokenRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ValidateEntityTokenRequest(ValidateEntityTokenRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ValidateEntityTokenRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ValidateEntityTokenRequest(ValidateEntityTokenRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20340};

/// @brief Field EntityToken, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___EntityToken;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::AuthenticationModels::ValidateEntityTokenRequest, ___EntityToken) == 0x18, "Offset mismatch!");

static_assert(sizeof(::PlayFab::AuthenticationModels::ValidateEntityTokenRequest) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::AuthenticationModels
