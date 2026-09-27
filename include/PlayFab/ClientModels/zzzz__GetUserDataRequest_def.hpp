#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GetUserDataRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GetUserDataRequest)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace PlayFab::ClientModels {
class GetUserDataRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::GetUserDataRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::GetUserDataRequest*, "PlayFab.ClientModels", "GetUserDataRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon, System.Nullable`1<T>
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.GetUserDataRequest
class CORDL_TYPE GetUserDataRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field IfChangedFromDataVersion, offset 0x18, size 0x10 
 __declspec(property(get=__cordl_internal_get_IfChangedFromDataVersion, put=__cordl_internal_set_IfChangedFromDataVersion)) ::System::Nullable_1<uint32_t>  IfChangedFromDataVersion;

/// @brief Field Keys, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_Keys, put=__cordl_internal_set_Keys)) ::System::Collections::Generic::List_1<::StringW>*  Keys;

/// @brief Field PlayFabId, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_PlayFabId, put=__cordl_internal_set_PlayFabId)) ::StringW  PlayFabId;

static inline ::PlayFab::ClientModels::GetUserDataRequest* New_ctor() ;

constexpr ::System::Nullable_1<uint32_t> const& __cordl_internal_get_IfChangedFromDataVersion() const;

constexpr ::System::Nullable_1<uint32_t>& __cordl_internal_get_IfChangedFromDataVersion() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_Keys() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_Keys() ;

constexpr ::StringW const& __cordl_internal_get_PlayFabId() const;

constexpr ::StringW& __cordl_internal_get_PlayFabId() ;

constexpr void __cordl_internal_set_IfChangedFromDataVersion(::System::Nullable_1<uint32_t>  value) ;

constexpr void __cordl_internal_set_Keys(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_PlayFabId(::StringW  value) ;

/// @brief Method .ctor, addr 0xa84de88, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetUserDataRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetUserDataRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetUserDataRequest(GetUserDataRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetUserDataRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetUserDataRequest(GetUserDataRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20096};

/// @brief Field IfChangedFromDataVersion, offset: 0x18, size: 0x10, def value: None
 ::System::Nullable_1<uint32_t>  ___IfChangedFromDataVersion;

/// @brief Field Keys, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___Keys;

/// @brief Field PlayFabId, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___PlayFabId;

/// @brief Size padding 0x30 - 0x38 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::GetUserDataRequest, ___IfChangedFromDataVersion) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::GetUserDataRequest, ___Keys) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::GetUserDataRequest, ___PlayFabId) == 0x30, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::GetUserDataRequest) == 0x30, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
