#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/UnlinkIOSDeviceIDResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
CORDL_MODULE_EXPORT(UnlinkIOSDeviceIDResult)
// Forward declare root types
namespace PlayFab::ClientModels {
class UnlinkIOSDeviceIDResult;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::UnlinkIOSDeviceIDResult*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::UnlinkIOSDeviceIDResult*, "PlayFab.ClientModels", "UnlinkIOSDeviceIDResult");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.UnlinkIOSDeviceIDResult
class CORDL_TYPE UnlinkIOSDeviceIDResult : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
static inline ::PlayFab::ClientModels::UnlinkIOSDeviceIDResult* New_ctor() ;

/// @brief Method .ctor, addr 0xa84e350, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnlinkIOSDeviceIDResult() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnlinkIOSDeviceIDResult", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnlinkIOSDeviceIDResult(UnlinkIOSDeviceIDResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnlinkIOSDeviceIDResult", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnlinkIOSDeviceIDResult(UnlinkIOSDeviceIDResult const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20258};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayFab::ClientModels::UnlinkIOSDeviceIDResult) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
