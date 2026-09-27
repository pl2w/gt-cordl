#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GetPlayFabIDsFromTwitchIDsRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GetPlayFabIDsFromTwitchIDsRequest)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace PlayFab::ClientModels {
class GetPlayFabIDsFromTwitchIDsRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::GetPlayFabIDsFromTwitchIDsRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::GetPlayFabIDsFromTwitchIDsRequest*, "PlayFab.ClientModels", "GetPlayFabIDsFromTwitchIDsRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.GetPlayFabIDsFromTwitchIDsRequest
class CORDL_TYPE GetPlayFabIDsFromTwitchIDsRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field TwitchIds, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_TwitchIds, put=__cordl_internal_set_TwitchIds)) ::System::Collections::Generic::List_1<::StringW>*  TwitchIds;

static inline ::PlayFab::ClientModels::GetPlayFabIDsFromTwitchIDsRequest* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_TwitchIds() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_TwitchIds() ;

constexpr void __cordl_internal_set_TwitchIds(::System::Collections::Generic::List_1<::StringW>*  value) ;

/// @brief Method .ctor, addr 0xa84ddd0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetPlayFabIDsFromTwitchIDsRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetPlayFabIDsFromTwitchIDsRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetPlayFabIDsFromTwitchIDsRequest(GetPlayFabIDsFromTwitchIDsRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetPlayFabIDsFromTwitchIDsRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetPlayFabIDsFromTwitchIDsRequest(GetPlayFabIDsFromTwitchIDsRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20073};

/// @brief Field TwitchIds, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___TwitchIds;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::GetPlayFabIDsFromTwitchIDsRequest, ___TwitchIds) == 0x18, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::GetPlayFabIDsFromTwitchIDsRequest) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
