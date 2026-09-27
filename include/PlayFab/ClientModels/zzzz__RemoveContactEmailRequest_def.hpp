#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/RemoveContactEmailRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
CORDL_MODULE_EXPORT(RemoveContactEmailRequest)
// Forward declare root types
namespace PlayFab::ClientModels {
class RemoveContactEmailRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::RemoveContactEmailRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::RemoveContactEmailRequest*, "PlayFab.ClientModels", "RemoveContactEmailRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.RemoveContactEmailRequest
class CORDL_TYPE RemoveContactEmailRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
static inline ::PlayFab::ClientModels::RemoveContactEmailRequest* New_ctor() ;

/// @brief Method .ctor, addr 0xa84e190, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RemoveContactEmailRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RemoveContactEmailRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RemoveContactEmailRequest(RemoveContactEmailRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RemoveContactEmailRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RemoveContactEmailRequest(RemoveContactEmailRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20197};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayFab::ClientModels::RemoveContactEmailRequest) == 0x18, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
