#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/LinkIOSDeviceIDResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
CORDL_MODULE_EXPORT(LinkIOSDeviceIDResult)
// Forward declare root types
namespace PlayFab::ClientModels {
class LinkIOSDeviceIDResult;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::LinkIOSDeviceIDResult*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::LinkIOSDeviceIDResult*, "PlayFab.ClientModels", "LinkIOSDeviceIDResult");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.LinkIOSDeviceIDResult
class CORDL_TYPE LinkIOSDeviceIDResult : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
static inline ::PlayFab::ClientModels::LinkIOSDeviceIDResult* New_ctor() ;

/// @brief Method .ctor, addr 0xa84df60, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LinkIOSDeviceIDResult() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LinkIOSDeviceIDResult", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LinkIOSDeviceIDResult(LinkIOSDeviceIDResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LinkIOSDeviceIDResult", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LinkIOSDeviceIDResult(LinkIOSDeviceIDResult const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20123};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayFab::ClientModels::LinkIOSDeviceIDResult) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
