#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GetPlayFabIDsFromGameCenterIDsRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GetPlayFabIDsFromGameCenterIDsRequest)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace PlayFab::ClientModels {
class GetPlayFabIDsFromGameCenterIDsRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::GetPlayFabIDsFromGameCenterIDsRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::GetPlayFabIDsFromGameCenterIDsRequest*, "PlayFab.ClientModels", "GetPlayFabIDsFromGameCenterIDsRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.GetPlayFabIDsFromGameCenterIDsRequest
class CORDL_TYPE GetPlayFabIDsFromGameCenterIDsRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field GameCenterIDs, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_GameCenterIDs, put=__cordl_internal_set_GameCenterIDs)) ::System::Collections::Generic::List_1<::StringW>*  GameCenterIDs;

static inline ::PlayFab::ClientModels::GetPlayFabIDsFromGameCenterIDsRequest* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_GameCenterIDs() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_GameCenterIDs() ;

constexpr void __cordl_internal_set_GameCenterIDs(::System::Collections::Generic::List_1<::StringW>*  value) ;

/// @brief Method .ctor, addr 0xa84dd60, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetPlayFabIDsFromGameCenterIDsRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetPlayFabIDsFromGameCenterIDsRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetPlayFabIDsFromGameCenterIDsRequest(GetPlayFabIDsFromGameCenterIDsRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetPlayFabIDsFromGameCenterIDsRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetPlayFabIDsFromGameCenterIDsRequest(GetPlayFabIDsFromGameCenterIDsRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20059};

/// @brief Field GameCenterIDs, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___GameCenterIDs;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::GetPlayFabIDsFromGameCenterIDsRequest, ___GameCenterIDs) == 0x18, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::GetPlayFabIDsFromGameCenterIDsRequest) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
