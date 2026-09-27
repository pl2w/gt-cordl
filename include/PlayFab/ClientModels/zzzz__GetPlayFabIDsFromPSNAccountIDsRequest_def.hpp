#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GetPlayFabIDsFromPSNAccountIDsRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GetPlayFabIDsFromPSNAccountIDsRequest)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace PlayFab::ClientModels {
class GetPlayFabIDsFromPSNAccountIDsRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::GetPlayFabIDsFromPSNAccountIDsRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::GetPlayFabIDsFromPSNAccountIDsRequest*, "PlayFab.ClientModels", "GetPlayFabIDsFromPSNAccountIDsRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon, System.Nullable`1<T>
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.GetPlayFabIDsFromPSNAccountIDsRequest
class CORDL_TYPE GetPlayFabIDsFromPSNAccountIDsRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field IssuerId, offset 0x18, size 0x10 
 __declspec(property(get=__cordl_internal_get_IssuerId, put=__cordl_internal_set_IssuerId)) ::System::Nullable_1<int32_t>  IssuerId;

/// @brief Field PSNAccountIDs, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_PSNAccountIDs, put=__cordl_internal_set_PSNAccountIDs)) ::System::Collections::Generic::List_1<::StringW>*  PSNAccountIDs;

static inline ::PlayFab::ClientModels::GetPlayFabIDsFromPSNAccountIDsRequest* New_ctor() ;

constexpr ::System::Nullable_1<int32_t> const& __cordl_internal_get_IssuerId() const;

constexpr ::System::Nullable_1<int32_t>& __cordl_internal_get_IssuerId() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_PSNAccountIDs() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_PSNAccountIDs() ;

constexpr void __cordl_internal_set_IssuerId(::System::Nullable_1<int32_t>  value) ;

constexpr void __cordl_internal_set_PSNAccountIDs(::System::Collections::Generic::List_1<::StringW>*  value) ;

/// @brief Method .ctor, addr 0xa84ddb0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetPlayFabIDsFromPSNAccountIDsRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetPlayFabIDsFromPSNAccountIDsRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetPlayFabIDsFromPSNAccountIDsRequest(GetPlayFabIDsFromPSNAccountIDsRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetPlayFabIDsFromPSNAccountIDsRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetPlayFabIDsFromPSNAccountIDsRequest(GetPlayFabIDsFromPSNAccountIDsRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20069};

/// @brief Field IssuerId, offset: 0x18, size: 0x10, def value: None
 ::System::Nullable_1<int32_t>  ___IssuerId;

/// @brief Field PSNAccountIDs, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___PSNAccountIDs;

/// @brief Size padding 0x28 - 0x30 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::GetPlayFabIDsFromPSNAccountIDsRequest, ___IssuerId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::GetPlayFabIDsFromPSNAccountIDsRequest, ___PSNAccountIDs) == 0x28, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::GetPlayFabIDsFromPSNAccountIDsRequest) == 0x28, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
