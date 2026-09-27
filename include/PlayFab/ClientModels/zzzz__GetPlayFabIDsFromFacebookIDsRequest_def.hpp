#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GetPlayFabIDsFromFacebookIDsRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GetPlayFabIDsFromFacebookIDsRequest)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace PlayFab::ClientModels {
class GetPlayFabIDsFromFacebookIDsRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::GetPlayFabIDsFromFacebookIDsRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::GetPlayFabIDsFromFacebookIDsRequest*, "PlayFab.ClientModels", "GetPlayFabIDsFromFacebookIDsRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.GetPlayFabIDsFromFacebookIDsRequest
class CORDL_TYPE GetPlayFabIDsFromFacebookIDsRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field FacebookIDs, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_FacebookIDs, put=__cordl_internal_set_FacebookIDs)) ::System::Collections::Generic::List_1<::StringW>*  FacebookIDs;

static inline ::PlayFab::ClientModels::GetPlayFabIDsFromFacebookIDsRequest* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_FacebookIDs() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_FacebookIDs() ;

constexpr void __cordl_internal_set_FacebookIDs(::System::Collections::Generic::List_1<::StringW>*  value) ;

/// @brief Method .ctor, addr 0xa84dd40, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetPlayFabIDsFromFacebookIDsRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetPlayFabIDsFromFacebookIDsRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetPlayFabIDsFromFacebookIDsRequest(GetPlayFabIDsFromFacebookIDsRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetPlayFabIDsFromFacebookIDsRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetPlayFabIDsFromFacebookIDsRequest(GetPlayFabIDsFromFacebookIDsRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20055};

/// @brief Field FacebookIDs, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___FacebookIDs;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::GetPlayFabIDsFromFacebookIDsRequest, ___FacebookIDs) == 0x18, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::GetPlayFabIDsFromFacebookIDsRequest) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
