#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/UnlinkWindowsHelloAccountResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
CORDL_MODULE_EXPORT(UnlinkWindowsHelloAccountResponse)
// Forward declare root types
namespace PlayFab::ClientModels {
class UnlinkWindowsHelloAccountResponse;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::UnlinkWindowsHelloAccountResponse*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::UnlinkWindowsHelloAccountResponse*, "PlayFab.ClientModels", "UnlinkWindowsHelloAccountResponse");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.UnlinkWindowsHelloAccountResponse
class CORDL_TYPE UnlinkWindowsHelloAccountResponse : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
static inline ::PlayFab::ClientModels::UnlinkWindowsHelloAccountResponse* New_ctor() ;

/// @brief Method .ctor, addr 0xa84e3c0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnlinkWindowsHelloAccountResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnlinkWindowsHelloAccountResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnlinkWindowsHelloAccountResponse(UnlinkWindowsHelloAccountResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnlinkWindowsHelloAccountResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnlinkWindowsHelloAccountResponse(UnlinkWindowsHelloAccountResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20272};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayFab::ClientModels::UnlinkWindowsHelloAccountResponse) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
