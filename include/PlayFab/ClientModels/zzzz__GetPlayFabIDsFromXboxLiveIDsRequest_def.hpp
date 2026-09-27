#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GetPlayFabIDsFromXboxLiveIDsRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GetPlayFabIDsFromXboxLiveIDsRequest)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace PlayFab::ClientModels {
class GetPlayFabIDsFromXboxLiveIDsRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::GetPlayFabIDsFromXboxLiveIDsRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::GetPlayFabIDsFromXboxLiveIDsRequest*, "PlayFab.ClientModels", "GetPlayFabIDsFromXboxLiveIDsRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.GetPlayFabIDsFromXboxLiveIDsRequest
class CORDL_TYPE GetPlayFabIDsFromXboxLiveIDsRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field Sandbox, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Sandbox, put=__cordl_internal_set_Sandbox)) ::StringW  Sandbox;

/// @brief Field XboxLiveAccountIDs, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_XboxLiveAccountIDs, put=__cordl_internal_set_XboxLiveAccountIDs)) ::System::Collections::Generic::List_1<::StringW>*  XboxLiveAccountIDs;

static inline ::PlayFab::ClientModels::GetPlayFabIDsFromXboxLiveIDsRequest* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_Sandbox() const;

constexpr ::StringW& __cordl_internal_get_Sandbox() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_XboxLiveAccountIDs() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_XboxLiveAccountIDs() ;

constexpr void __cordl_internal_set_Sandbox(::StringW  value) ;

constexpr void __cordl_internal_set_XboxLiveAccountIDs(::System::Collections::Generic::List_1<::StringW>*  value) ;

/// @brief Method .ctor, addr 0xa84dde0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetPlayFabIDsFromXboxLiveIDsRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetPlayFabIDsFromXboxLiveIDsRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetPlayFabIDsFromXboxLiveIDsRequest(GetPlayFabIDsFromXboxLiveIDsRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetPlayFabIDsFromXboxLiveIDsRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetPlayFabIDsFromXboxLiveIDsRequest(GetPlayFabIDsFromXboxLiveIDsRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20075};

/// @brief Field Sandbox, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___Sandbox;

/// @brief Field XboxLiveAccountIDs, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___XboxLiveAccountIDs;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::GetPlayFabIDsFromXboxLiveIDsRequest, ___Sandbox) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::GetPlayFabIDsFromXboxLiveIDsRequest, ___XboxLiveAccountIDs) == 0x20, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::GetPlayFabIDsFromXboxLiveIDsRequest) == 0x28, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
