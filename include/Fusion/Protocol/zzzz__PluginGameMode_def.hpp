#pragma once
// IWYU pragma private; include "Fusion/Protocol/PluginGameMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PluginGameMode)
// Forward declare root types
namespace Fusion::Protocol {
struct PluginGameMode;
}
// Write type traits
MARK_VAL_T(::Fusion::Protocol::PluginGameMode);
DEFINE_IL2CPP_CLASS(::Fusion::Protocol::PluginGameMode, "Fusion.Protocol", "PluginGameMode");
// Dependencies 
namespace Fusion::Protocol {
// Is value type: true
// CS Name: Fusion.Protocol.PluginGameMode
struct CORDL_TYPE PluginGameMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint8_t;

/// @brief Nested struct __PluginGameMode_Unwrapped
enum struct __PluginGameMode_Unwrapped : uint8_t {
__E_Invalid = static_cast<uint8_t>(0x0u),
__E_ClientServer = static_cast<uint8_t>(0x1u),
__E_Shared = static_cast<uint8_t>(0x2u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PluginGameMode_Unwrapped () const noexcept {
return static_cast<__PluginGameMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint8_t () const noexcept {
return static_cast<uint8_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PluginGameMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None, comment: None }]
constexpr PluginGameMode(uint8_t  value__) noexcept;

/// @brief Field ClientServer value: U8(1)
static ::Fusion::Protocol::PluginGameMode const ClientServer;

/// @brief Field Invalid value: U8(0)
static ::Fusion::Protocol::PluginGameMode const Invalid;

/// @brief Field Shared value: U8(2)
static ::Fusion::Protocol::PluginGameMode const Shared;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29332};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field value__, offset: 0x0, size: 0x1, def value: None
 uint8_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Protocol::PluginGameMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Fusion::Protocol::PluginGameMode) == 0x1, "Size mismatch!");

} // namespace end def Fusion::Protocol
