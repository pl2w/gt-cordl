#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GetPlayFabIDsFromKongregateIDsRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GetPlayFabIDsFromKongregateIDsRequest)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace PlayFab::ClientModels {
class GetPlayFabIDsFromKongregateIDsRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::GetPlayFabIDsFromKongregateIDsRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::GetPlayFabIDsFromKongregateIDsRequest*, "PlayFab.ClientModels", "GetPlayFabIDsFromKongregateIDsRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.GetPlayFabIDsFromKongregateIDsRequest
class CORDL_TYPE GetPlayFabIDsFromKongregateIDsRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field KongregateIDs, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_KongregateIDs, put=__cordl_internal_set_KongregateIDs)) ::System::Collections::Generic::List_1<::StringW>*  KongregateIDs;

static inline ::PlayFab::ClientModels::GetPlayFabIDsFromKongregateIDsRequest* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_KongregateIDs() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_KongregateIDs() ;

constexpr void __cordl_internal_set_KongregateIDs(::System::Collections::Generic::List_1<::StringW>*  value) ;

/// @brief Method .ctor, addr 0xa84dd90, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetPlayFabIDsFromKongregateIDsRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetPlayFabIDsFromKongregateIDsRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetPlayFabIDsFromKongregateIDsRequest(GetPlayFabIDsFromKongregateIDsRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetPlayFabIDsFromKongregateIDsRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetPlayFabIDsFromKongregateIDsRequest(GetPlayFabIDsFromKongregateIDsRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20065};

/// @brief Field KongregateIDs, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___KongregateIDs;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::GetPlayFabIDsFromKongregateIDsRequest, ___KongregateIDs) == 0x18, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::GetPlayFabIDsFromKongregateIDsRequest) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
