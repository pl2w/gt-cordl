#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/UnlinkNintendoSwitchDeviceIdRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(UnlinkNintendoSwitchDeviceIdRequest)
// Forward declare root types
namespace PlayFab::ClientModels {
class UnlinkNintendoSwitchDeviceIdRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::UnlinkNintendoSwitchDeviceIdRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::UnlinkNintendoSwitchDeviceIdRequest*, "PlayFab.ClientModels", "UnlinkNintendoSwitchDeviceIdRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.UnlinkNintendoSwitchDeviceIdRequest
class CORDL_TYPE UnlinkNintendoSwitchDeviceIdRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field NintendoSwitchDeviceId, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_NintendoSwitchDeviceId, put=__cordl_internal_set_NintendoSwitchDeviceId)) ::StringW  NintendoSwitchDeviceId;

static inline ::PlayFab::ClientModels::UnlinkNintendoSwitchDeviceIdRequest* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_NintendoSwitchDeviceId() const;

constexpr ::StringW& __cordl_internal_get_NintendoSwitchDeviceId() ;

constexpr void __cordl_internal_set_NintendoSwitchDeviceId(::StringW  value) ;

/// @brief Method .ctor, addr 0xa84e370, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnlinkNintendoSwitchDeviceIdRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnlinkNintendoSwitchDeviceIdRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnlinkNintendoSwitchDeviceIdRequest(UnlinkNintendoSwitchDeviceIdRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnlinkNintendoSwitchDeviceIdRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnlinkNintendoSwitchDeviceIdRequest(UnlinkNintendoSwitchDeviceIdRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20262};

/// @brief Field NintendoSwitchDeviceId, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___NintendoSwitchDeviceId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::UnlinkNintendoSwitchDeviceIdRequest, ___NintendoSwitchDeviceId) == 0x18, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::UnlinkNintendoSwitchDeviceIdRequest) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
