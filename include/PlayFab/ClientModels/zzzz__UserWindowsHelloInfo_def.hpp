#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/UserWindowsHelloInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(UserWindowsHelloInfo)
// Forward declare root types
namespace PlayFab::ClientModels {
class UserWindowsHelloInfo;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::UserWindowsHelloInfo*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::UserWindowsHelloInfo*, "PlayFab.ClientModels", "UserWindowsHelloInfo");
// Dependencies PlayFab.SharedModels.PlayFabBaseModel
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.UserWindowsHelloInfo
class CORDL_TYPE UserWindowsHelloInfo : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field WindowsHelloDeviceName, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_WindowsHelloDeviceName, put=__cordl_internal_set_WindowsHelloDeviceName)) ::StringW  WindowsHelloDeviceName;

/// @brief Field WindowsHelloPublicKeyHash, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_WindowsHelloPublicKeyHash, put=__cordl_internal_set_WindowsHelloPublicKeyHash)) ::StringW  WindowsHelloPublicKeyHash;

static inline ::PlayFab::ClientModels::UserWindowsHelloInfo* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_WindowsHelloDeviceName() const;

constexpr ::StringW& __cordl_internal_get_WindowsHelloDeviceName() ;

constexpr ::StringW const& __cordl_internal_get_WindowsHelloPublicKeyHash() const;

constexpr ::StringW& __cordl_internal_get_WindowsHelloPublicKeyHash() ;

constexpr void __cordl_internal_set_WindowsHelloDeviceName(::StringW  value) ;

constexpr void __cordl_internal_set_WindowsHelloPublicKeyHash(::StringW  value) ;

/// @brief Method .ctor, addr 0xa84e4f8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UserWindowsHelloInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UserWindowsHelloInfo", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UserWindowsHelloInfo(UserWindowsHelloInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UserWindowsHelloInfo", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UserWindowsHelloInfo(UserWindowsHelloInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20313};

/// @brief Field WindowsHelloDeviceName, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___WindowsHelloDeviceName;

/// @brief Field WindowsHelloPublicKeyHash, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___WindowsHelloPublicKeyHash;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::UserWindowsHelloInfo, ___WindowsHelloDeviceName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::UserWindowsHelloInfo, ___WindowsHelloPublicKeyHash) == 0x18, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::UserWindowsHelloInfo) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
