#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GetPlayFabIDsFromSteamIDsRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GetPlayFabIDsFromSteamIDsRequest)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace PlayFab::ClientModels {
class GetPlayFabIDsFromSteamIDsRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::GetPlayFabIDsFromSteamIDsRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::GetPlayFabIDsFromSteamIDsRequest*, "PlayFab.ClientModels", "GetPlayFabIDsFromSteamIDsRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.GetPlayFabIDsFromSteamIDsRequest
class CORDL_TYPE GetPlayFabIDsFromSteamIDsRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field SteamStringIDs, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_SteamStringIDs, put=__cordl_internal_set_SteamStringIDs)) ::System::Collections::Generic::List_1<::StringW>*  SteamStringIDs;

static inline ::PlayFab::ClientModels::GetPlayFabIDsFromSteamIDsRequest* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_SteamStringIDs() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_SteamStringIDs() ;

constexpr void __cordl_internal_set_SteamStringIDs(::System::Collections::Generic::List_1<::StringW>*  value) ;

/// @brief Method .ctor, addr 0xa84ddc0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetPlayFabIDsFromSteamIDsRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetPlayFabIDsFromSteamIDsRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetPlayFabIDsFromSteamIDsRequest(GetPlayFabIDsFromSteamIDsRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetPlayFabIDsFromSteamIDsRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetPlayFabIDsFromSteamIDsRequest(GetPlayFabIDsFromSteamIDsRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20071};

/// @brief Field SteamStringIDs, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___SteamStringIDs;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::GetPlayFabIDsFromSteamIDsRequest, ___SteamStringIDs) == 0x18, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::GetPlayFabIDsFromSteamIDsRequest) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
