#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GetContentDownloadUrlRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GetContentDownloadUrlRequest)
// Forward declare root types
namespace PlayFab::ClientModels {
class GetContentDownloadUrlRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::GetContentDownloadUrlRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::GetContentDownloadUrlRequest*, "PlayFab.ClientModels", "GetContentDownloadUrlRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon, System.Nullable`1<T>
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.GetContentDownloadUrlRequest
class CORDL_TYPE GetContentDownloadUrlRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field HttpMethod, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_HttpMethod, put=__cordl_internal_set_HttpMethod)) ::StringW  HttpMethod;

/// @brief Field Key, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Key, put=__cordl_internal_set_Key)) ::StringW  Key;

/// @brief Field ThruCDN, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_ThruCDN, put=__cordl_internal_set_ThruCDN)) ::System::Nullable_1<bool>  ThruCDN;

static inline ::PlayFab::ClientModels::GetContentDownloadUrlRequest* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_HttpMethod() const;

constexpr ::StringW& __cordl_internal_get_HttpMethod() ;

constexpr ::StringW const& __cordl_internal_get_Key() const;

constexpr ::StringW& __cordl_internal_get_Key() ;

constexpr ::System::Nullable_1<bool> const& __cordl_internal_get_ThruCDN() const;

constexpr ::System::Nullable_1<bool>& __cordl_internal_get_ThruCDN() ;

constexpr void __cordl_internal_set_HttpMethod(::StringW  value) ;

constexpr void __cordl_internal_set_Key(::StringW  value) ;

constexpr void __cordl_internal_set_ThruCDN(::System::Nullable_1<bool>  value) ;

/// @brief Method .ctor, addr 0xa84dc28, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetContentDownloadUrlRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetContentDownloadUrlRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetContentDownloadUrlRequest(GetContentDownloadUrlRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetContentDownloadUrlRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetContentDownloadUrlRequest(GetContentDownloadUrlRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20020};

/// @brief Field HttpMethod, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___HttpMethod;

/// @brief Field Key, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___Key;

/// @brief Field ThruCDN, offset: 0x28, size: 0x10, def value: None
 ::System::Nullable_1<bool>  ___ThruCDN;

/// @brief Size padding 0x30 - 0x38 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::GetContentDownloadUrlRequest, ___HttpMethod) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::GetContentDownloadUrlRequest, ___Key) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::GetContentDownloadUrlRequest, ___ThruCDN) == 0x28, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::GetContentDownloadUrlRequest) == 0x30, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
