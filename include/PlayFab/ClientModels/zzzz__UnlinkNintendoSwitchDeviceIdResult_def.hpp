#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/UnlinkNintendoSwitchDeviceIdResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
CORDL_MODULE_EXPORT(UnlinkNintendoSwitchDeviceIdResult)
// Forward declare root types
namespace PlayFab::ClientModels {
class UnlinkNintendoSwitchDeviceIdResult;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::UnlinkNintendoSwitchDeviceIdResult*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::UnlinkNintendoSwitchDeviceIdResult*, "PlayFab.ClientModels", "UnlinkNintendoSwitchDeviceIdResult");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.UnlinkNintendoSwitchDeviceIdResult
class CORDL_TYPE UnlinkNintendoSwitchDeviceIdResult : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
static inline ::PlayFab::ClientModels::UnlinkNintendoSwitchDeviceIdResult* New_ctor() ;

/// @brief Method .ctor, addr 0xa84e378, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnlinkNintendoSwitchDeviceIdResult() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnlinkNintendoSwitchDeviceIdResult", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnlinkNintendoSwitchDeviceIdResult(UnlinkNintendoSwitchDeviceIdResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnlinkNintendoSwitchDeviceIdResult", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnlinkNintendoSwitchDeviceIdResult(UnlinkNintendoSwitchDeviceIdResult const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20263};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayFab::ClientModels::UnlinkNintendoSwitchDeviceIdResult) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
