#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GetPlayFabIDsFromGenericIDsRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
CORDL_MODULE_EXPORT(GetPlayFabIDsFromGenericIDsRequest)
namespace PlayFab::ClientModels {
class GenericServiceId;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace PlayFab::ClientModels {
class GetPlayFabIDsFromGenericIDsRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::GetPlayFabIDsFromGenericIDsRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::GetPlayFabIDsFromGenericIDsRequest*, "PlayFab.ClientModels", "GetPlayFabIDsFromGenericIDsRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.GetPlayFabIDsFromGenericIDsRequest
class CORDL_TYPE GetPlayFabIDsFromGenericIDsRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field GenericIDs, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_GenericIDs, put=__cordl_internal_set_GenericIDs)) ::System::Collections::Generic::List_1<::PlayFab::ClientModels::GenericServiceId*>*  GenericIDs;

static inline ::PlayFab::ClientModels::GetPlayFabIDsFromGenericIDsRequest* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::GenericServiceId*>* const& __cordl_internal_get_GenericIDs() const;

constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::GenericServiceId*>*& __cordl_internal_get_GenericIDs() ;

constexpr void __cordl_internal_set_GenericIDs(::System::Collections::Generic::List_1<::PlayFab::ClientModels::GenericServiceId*>*  value) ;

/// @brief Method .ctor, addr 0xa84dd70, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetPlayFabIDsFromGenericIDsRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetPlayFabIDsFromGenericIDsRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetPlayFabIDsFromGenericIDsRequest(GetPlayFabIDsFromGenericIDsRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetPlayFabIDsFromGenericIDsRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetPlayFabIDsFromGenericIDsRequest(GetPlayFabIDsFromGenericIDsRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20061};

/// @brief Field GenericIDs, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::PlayFab::ClientModels::GenericServiceId*>*  ___GenericIDs;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::GetPlayFabIDsFromGenericIDsRequest, ___GenericIDs) == 0x18, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::GetPlayFabIDsFromGenericIDsRequest) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
