#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/UnlinkAndroidDeviceIDResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
CORDL_MODULE_EXPORT(UnlinkAndroidDeviceIDResult)
// Forward declare root types
namespace PlayFab::ClientModels {
class UnlinkAndroidDeviceIDResult;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::UnlinkAndroidDeviceIDResult*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::UnlinkAndroidDeviceIDResult*, "PlayFab.ClientModels", "UnlinkAndroidDeviceIDResult");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.UnlinkAndroidDeviceIDResult
class CORDL_TYPE UnlinkAndroidDeviceIDResult : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
static inline ::PlayFab::ClientModels::UnlinkAndroidDeviceIDResult* New_ctor() ;

/// @brief Method .ctor, addr 0xa84e2e8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnlinkAndroidDeviceIDResult() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnlinkAndroidDeviceIDResult", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnlinkAndroidDeviceIDResult(UnlinkAndroidDeviceIDResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnlinkAndroidDeviceIDResult", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnlinkAndroidDeviceIDResult(UnlinkAndroidDeviceIDResult const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20245};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayFab::ClientModels::UnlinkAndroidDeviceIDResult) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
