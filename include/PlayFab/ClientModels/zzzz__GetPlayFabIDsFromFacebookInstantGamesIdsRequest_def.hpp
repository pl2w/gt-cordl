#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GetPlayFabIDsFromFacebookInstantGamesIdsRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GetPlayFabIDsFromFacebookInstantGamesIdsRequest)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace PlayFab::ClientModels {
class GetPlayFabIDsFromFacebookInstantGamesIdsRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::GetPlayFabIDsFromFacebookInstantGamesIdsRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::GetPlayFabIDsFromFacebookInstantGamesIdsRequest*, "PlayFab.ClientModels", "GetPlayFabIDsFromFacebookInstantGamesIdsRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.GetPlayFabIDsFromFacebookInstantGamesIdsRequest
class CORDL_TYPE GetPlayFabIDsFromFacebookInstantGamesIdsRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field FacebookInstantGamesIds, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_FacebookInstantGamesIds, put=__cordl_internal_set_FacebookInstantGamesIds)) ::System::Collections::Generic::List_1<::StringW>*  FacebookInstantGamesIds;

static inline ::PlayFab::ClientModels::GetPlayFabIDsFromFacebookInstantGamesIdsRequest* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_FacebookInstantGamesIds() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_FacebookInstantGamesIds() ;

constexpr void __cordl_internal_set_FacebookInstantGamesIds(::System::Collections::Generic::List_1<::StringW>*  value) ;

/// @brief Method .ctor, addr 0xa84dd50, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetPlayFabIDsFromFacebookInstantGamesIdsRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetPlayFabIDsFromFacebookInstantGamesIdsRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetPlayFabIDsFromFacebookInstantGamesIdsRequest(GetPlayFabIDsFromFacebookInstantGamesIdsRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetPlayFabIDsFromFacebookInstantGamesIdsRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetPlayFabIDsFromFacebookInstantGamesIdsRequest(GetPlayFabIDsFromFacebookInstantGamesIdsRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20057};

/// @brief Field FacebookInstantGamesIds, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___FacebookInstantGamesIds;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::GetPlayFabIDsFromFacebookInstantGamesIdsRequest, ___FacebookInstantGamesIds) == 0x18, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::GetPlayFabIDsFromFacebookInstantGamesIdsRequest) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
