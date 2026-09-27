#pragma once
// IWYU pragma private; include "Modio/Customizations/WssDeviceLoginResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WssDeviceLoginResponse)
// Forward declare root types
namespace Modio::Customizations {
struct WssDeviceLoginResponse;
}
// Write type traits
MARK_VAL_T(::Modio::Customizations::WssDeviceLoginResponse);
DEFINE_IL2CPP_CLASS(::Modio::Customizations::WssDeviceLoginResponse, "Modio.Customizations", "WssDeviceLoginResponse");
// Dependencies 
namespace Modio::Customizations {
// Is value type: true
// CS Name: Modio.Customizations.WssDeviceLoginResponse
struct CORDL_TYPE WssDeviceLoginResponse {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr WssDeviceLoginResponse() ;

// Ctor Parameters [CppParam { name: "code", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "date_expires", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "display_url", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "login_url", ty: "::StringW", modifiers: "", def_value: None, comment: None }]
constexpr WssDeviceLoginResponse(::StringW  code, int64_t  date_expires, ::StringW  display_url, ::StringW  login_url) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17742};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field code, offset: 0x0, size: 0x8, def value: None
 ::StringW  code;

/// @brief Field date_expires, offset: 0x8, size: 0x8, def value: None
 int64_t  date_expires;

/// @brief Field display_url, offset: 0x10, size: 0x8, def value: None
 ::StringW  display_url;

/// @brief Field login_url, offset: 0x18, size: 0x8, def value: None
 ::StringW  login_url;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Modio::Customizations::WssDeviceLoginResponse, code) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Modio::Customizations::WssDeviceLoginResponse, date_expires) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Modio::Customizations::WssDeviceLoginResponse, display_url) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::Customizations::WssDeviceLoginResponse, login_url) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Modio::Customizations::WssDeviceLoginResponse) == 0x20, "Size mismatch!");

} // namespace end def Modio::Customizations
