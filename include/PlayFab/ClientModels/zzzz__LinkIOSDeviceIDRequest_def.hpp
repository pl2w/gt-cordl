#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/LinkIOSDeviceIDRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(LinkIOSDeviceIDRequest)
// Forward declare root types
namespace PlayFab::ClientModels {
class LinkIOSDeviceIDRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::LinkIOSDeviceIDRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::LinkIOSDeviceIDRequest*, "PlayFab.ClientModels", "LinkIOSDeviceIDRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon, System.Nullable`1<T>
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.LinkIOSDeviceIDRequest
class CORDL_TYPE LinkIOSDeviceIDRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field DeviceId, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_DeviceId, put=__cordl_internal_set_DeviceId)) ::StringW  DeviceId;

/// @brief Field DeviceModel, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_DeviceModel, put=__cordl_internal_set_DeviceModel)) ::StringW  DeviceModel;

/// @brief Field ForceLink, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_ForceLink, put=__cordl_internal_set_ForceLink)) ::System::Nullable_1<bool>  ForceLink;

/// @brief Field OS, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_OS, put=__cordl_internal_set_OS)) ::StringW  OS;

static inline ::PlayFab::ClientModels::LinkIOSDeviceIDRequest* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_DeviceId() const;

constexpr ::StringW& __cordl_internal_get_DeviceId() ;

constexpr ::StringW const& __cordl_internal_get_DeviceModel() const;

constexpr ::StringW& __cordl_internal_get_DeviceModel() ;

constexpr ::System::Nullable_1<bool> const& __cordl_internal_get_ForceLink() const;

constexpr ::System::Nullable_1<bool>& __cordl_internal_get_ForceLink() ;

constexpr ::StringW const& __cordl_internal_get_OS() const;

constexpr ::StringW& __cordl_internal_get_OS() ;

constexpr void __cordl_internal_set_DeviceId(::StringW  value) ;

constexpr void __cordl_internal_set_DeviceModel(::StringW  value) ;

constexpr void __cordl_internal_set_ForceLink(::System::Nullable_1<bool>  value) ;

constexpr void __cordl_internal_set_OS(::StringW  value) ;

/// @brief Method .ctor, addr 0xa84df58, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LinkIOSDeviceIDRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LinkIOSDeviceIDRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LinkIOSDeviceIDRequest(LinkIOSDeviceIDRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LinkIOSDeviceIDRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LinkIOSDeviceIDRequest(LinkIOSDeviceIDRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20122};

/// @brief Field DeviceId, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___DeviceId;

/// @brief Field DeviceModel, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___DeviceModel;

/// @brief Field ForceLink, offset: 0x28, size: 0x10, def value: None
 ::System::Nullable_1<bool>  ___ForceLink;

/// @brief Field OS, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___OS;

/// @brief Size padding 0x38 - 0x40 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::LinkIOSDeviceIDRequest, ___DeviceId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::LinkIOSDeviceIDRequest, ___DeviceModel) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::LinkIOSDeviceIDRequest, ___ForceLink) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::LinkIOSDeviceIDRequest, ___OS) == 0x38, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::LinkIOSDeviceIDRequest) == 0x38, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
