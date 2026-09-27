#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/LinkAndroidDeviceIDRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(LinkAndroidDeviceIDRequest)
// Forward declare root types
namespace PlayFab::ClientModels {
class LinkAndroidDeviceIDRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::LinkAndroidDeviceIDRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::LinkAndroidDeviceIDRequest*, "PlayFab.ClientModels", "LinkAndroidDeviceIDRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon, System.Nullable`1<T>
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.LinkAndroidDeviceIDRequest
class CORDL_TYPE LinkAndroidDeviceIDRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field AndroidDevice, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_AndroidDevice, put=__cordl_internal_set_AndroidDevice)) ::StringW  AndroidDevice;

/// @brief Field AndroidDeviceId, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_AndroidDeviceId, put=__cordl_internal_set_AndroidDeviceId)) ::StringW  AndroidDeviceId;

/// @brief Field ForceLink, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_ForceLink, put=__cordl_internal_set_ForceLink)) ::System::Nullable_1<bool>  ForceLink;

/// @brief Field OS, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_OS, put=__cordl_internal_set_OS)) ::StringW  OS;

static inline ::PlayFab::ClientModels::LinkAndroidDeviceIDRequest* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_AndroidDevice() const;

constexpr ::StringW& __cordl_internal_get_AndroidDevice() ;

constexpr ::StringW const& __cordl_internal_get_AndroidDeviceId() const;

constexpr ::StringW& __cordl_internal_get_AndroidDeviceId() ;

constexpr ::System::Nullable_1<bool> const& __cordl_internal_get_ForceLink() const;

constexpr ::System::Nullable_1<bool>& __cordl_internal_get_ForceLink() ;

constexpr ::StringW const& __cordl_internal_get_OS() const;

constexpr ::StringW& __cordl_internal_get_OS() ;

constexpr void __cordl_internal_set_AndroidDevice(::StringW  value) ;

constexpr void __cordl_internal_set_AndroidDeviceId(::StringW  value) ;

constexpr void __cordl_internal_set_ForceLink(::System::Nullable_1<bool>  value) ;

constexpr void __cordl_internal_set_OS(::StringW  value) ;

/// @brief Method .ctor, addr 0xa84dee8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LinkAndroidDeviceIDRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LinkAndroidDeviceIDRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LinkAndroidDeviceIDRequest(LinkAndroidDeviceIDRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LinkAndroidDeviceIDRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LinkAndroidDeviceIDRequest(LinkAndroidDeviceIDRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20108};

/// @brief Field AndroidDevice, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___AndroidDevice;

/// @brief Field AndroidDeviceId, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___AndroidDeviceId;

/// @brief Field ForceLink, offset: 0x28, size: 0x10, def value: None
 ::System::Nullable_1<bool>  ___ForceLink;

/// @brief Field OS, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___OS;

/// @brief Size padding 0x38 - 0x40 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::LinkAndroidDeviceIDRequest, ___AndroidDevice) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::LinkAndroidDeviceIDRequest, ___AndroidDeviceId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::LinkAndroidDeviceIDRequest, ___ForceLink) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::LinkAndroidDeviceIDRequest, ___OS) == 0x38, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::LinkAndroidDeviceIDRequest) == 0x38, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
