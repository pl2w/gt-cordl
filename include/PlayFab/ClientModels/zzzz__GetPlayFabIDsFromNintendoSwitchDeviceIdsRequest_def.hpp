#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace PlayFab::ClientModels {
class GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest*, "PlayFab.ClientModels", "GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest
class CORDL_TYPE GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field NintendoSwitchDeviceIds, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_NintendoSwitchDeviceIds, put=__cordl_internal_set_NintendoSwitchDeviceIds)) ::System::Collections::Generic::List_1<::StringW>*  NintendoSwitchDeviceIds;

static inline ::PlayFab::ClientModels::GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_NintendoSwitchDeviceIds() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_NintendoSwitchDeviceIds() ;

constexpr void __cordl_internal_set_NintendoSwitchDeviceIds(::System::Collections::Generic::List_1<::StringW>*  value) ;

/// @brief Method .ctor, addr 0xa84dda0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest(GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest(GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20067};

/// @brief Field NintendoSwitchDeviceIds, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___NintendoSwitchDeviceIds;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest, ___NintendoSwitchDeviceIds) == 0x18, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
