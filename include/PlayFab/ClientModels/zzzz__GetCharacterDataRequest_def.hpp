#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GetCharacterDataRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GetCharacterDataRequest)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace PlayFab::ClientModels {
class GetCharacterDataRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::GetCharacterDataRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::GetCharacterDataRequest*, "PlayFab.ClientModels", "GetCharacterDataRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon, System.Nullable`1<T>
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.GetCharacterDataRequest
class CORDL_TYPE GetCharacterDataRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field CharacterId, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_CharacterId, put=__cordl_internal_set_CharacterId)) ::StringW  CharacterId;

/// @brief Field IfChangedFromDataVersion, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get_IfChangedFromDataVersion, put=__cordl_internal_set_IfChangedFromDataVersion)) ::System::Nullable_1<uint32_t>  IfChangedFromDataVersion;

/// @brief Field Keys, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_Keys, put=__cordl_internal_set_Keys)) ::System::Collections::Generic::List_1<::StringW>*  Keys;

/// @brief Field PlayFabId, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_PlayFabId, put=__cordl_internal_set_PlayFabId)) ::StringW  PlayFabId;

static inline ::PlayFab::ClientModels::GetCharacterDataRequest* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_CharacterId() const;

constexpr ::StringW& __cordl_internal_get_CharacterId() ;

constexpr ::System::Nullable_1<uint32_t> const& __cordl_internal_get_IfChangedFromDataVersion() const;

constexpr ::System::Nullable_1<uint32_t>& __cordl_internal_get_IfChangedFromDataVersion() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_Keys() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_Keys() ;

constexpr ::StringW const& __cordl_internal_get_PlayFabId() const;

constexpr ::StringW& __cordl_internal_get_PlayFabId() ;

constexpr void __cordl_internal_set_CharacterId(::StringW  value) ;

constexpr void __cordl_internal_set_IfChangedFromDataVersion(::System::Nullable_1<uint32_t>  value) ;

constexpr void __cordl_internal_set_Keys(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_PlayFabId(::StringW  value) ;

/// @brief Method .ctor, addr 0xa84dbe8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetCharacterDataRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetCharacterDataRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetCharacterDataRequest(GetCharacterDataRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetCharacterDataRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetCharacterDataRequest(GetCharacterDataRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20012};

/// @brief Field CharacterId, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___CharacterId;

/// @brief Field IfChangedFromDataVersion, offset: 0x20, size: 0x10, def value: None
 ::System::Nullable_1<uint32_t>  ___IfChangedFromDataVersion;

/// @brief Field Keys, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___Keys;

/// @brief Field PlayFabId, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___PlayFabId;

/// @brief Size padding 0x38 - 0x40 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::GetCharacterDataRequest, ___CharacterId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::GetCharacterDataRequest, ___IfChangedFromDataVersion) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::GetCharacterDataRequest, ___Keys) == 0x30, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::GetCharacterDataRequest, ___PlayFabId) == 0x38, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::GetCharacterDataRequest) == 0x38, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
