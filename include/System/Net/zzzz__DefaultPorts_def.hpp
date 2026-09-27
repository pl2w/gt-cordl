#pragma once
// IWYU pragma private; include "System/Net/DefaultPorts.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DefaultPorts)
// Forward declare root types
namespace System::Net {
struct DefaultPorts;
}
// Write type traits
MARK_VAL_T(::System::Net::DefaultPorts);
DEFINE_IL2CPP_CLASS(::System::Net::DefaultPorts, "System.Net", "DefaultPorts");
// Dependencies 
namespace System::Net {
// Is value type: true
// CS Name: System.Net.DefaultPorts
struct CORDL_TYPE DefaultPorts {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __DefaultPorts_Unwrapped
enum struct __DefaultPorts_Unwrapped : int32_t {
__E_DEFAULT_FTP_PORT = static_cast<int32_t>(0x15),
__E_DEFAULT_GOPHER_PORT = static_cast<int32_t>(0x46),
__E_DEFAULT_HTTP_PORT = static_cast<int32_t>(0x50),
__E_DEFAULT_HTTPS_PORT = static_cast<int32_t>(0x1bb),
__E_DEFAULT_NNTP_PORT = static_cast<int32_t>(0x77),
__E_DEFAULT_SMTP_PORT = static_cast<int32_t>(0x19),
__E_DEFAULT_TELNET_PORT = static_cast<int32_t>(0x17),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __DefaultPorts_Unwrapped () const noexcept {
return static_cast<__DefaultPorts_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr DefaultPorts() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr DefaultPorts(int32_t  value__) noexcept;

/// @brief Field DEFAULT_FTP_PORT value: I32(21)
static ::System::Net::DefaultPorts const DEFAULT_FTP_PORT;

/// @brief Field DEFAULT_GOPHER_PORT value: I32(70)
static ::System::Net::DefaultPorts const DEFAULT_GOPHER_PORT;

/// @brief Field DEFAULT_HTTPS_PORT value: I32(443)
static ::System::Net::DefaultPorts const DEFAULT_HTTPS_PORT;

/// @brief Field DEFAULT_HTTP_PORT value: I32(80)
static ::System::Net::DefaultPorts const DEFAULT_HTTP_PORT;

/// @brief Field DEFAULT_NNTP_PORT value: I32(119)
static ::System::Net::DefaultPorts const DEFAULT_NNTP_PORT;

/// @brief Field DEFAULT_SMTP_PORT value: I32(25)
static ::System::Net::DefaultPorts const DEFAULT_SMTP_PORT;

/// @brief Field DEFAULT_TELNET_PORT value: I32(23)
static ::System::Net::DefaultPorts const DEFAULT_TELNET_PORT;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10539};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Net::DefaultPorts, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::System::Net::DefaultPorts) == 0x4, "Size mismatch!");

} // namespace end def System::Net
