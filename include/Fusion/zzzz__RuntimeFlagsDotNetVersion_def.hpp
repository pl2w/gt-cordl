#pragma once
// IWYU pragma private; include "Fusion/RuntimeFlagsDotNetVersion.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RuntimeFlagsDotNetVersion)
// Forward declare root types
namespace Fusion {
struct RuntimeFlagsDotNetVersion;
}
// Write type traits
MARK_VAL_T(::Fusion::RuntimeFlagsDotNetVersion);
DEFINE_IL2CPP_CLASS(::Fusion::RuntimeFlagsDotNetVersion, "Fusion", "RuntimeFlagsDotNetVersion");
// [Flags]
// Dependencies 
namespace Fusion {
// Is value type: true
// CS Name: Fusion.RuntimeFlagsDotNetVersion
struct CORDL_TYPE RuntimeFlagsDotNetVersion {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __RuntimeFlagsDotNetVersion_Unwrapped
enum struct __RuntimeFlagsDotNetVersion_Unwrapped : int32_t {
__E_NONE = static_cast<int32_t>(0x0),
__E_NET_4_6 = static_cast<int32_t>(0x2),
__E_NETFX_CORE = static_cast<int32_t>(0x4),
__E_NET_STANDARD_2_0 = static_cast<int32_t>(0x8),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __RuntimeFlagsDotNetVersion_Unwrapped () const noexcept {
return static_cast<__RuntimeFlagsDotNetVersion_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr RuntimeFlagsDotNetVersion() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr RuntimeFlagsDotNetVersion(int32_t  value__) noexcept;

/// @brief Field NETFX_CORE value: I32(4)
static ::Fusion::RuntimeFlagsDotNetVersion const NETFX_CORE;

/// @brief Field NET_4_6 value: I32(2)
static ::Fusion::RuntimeFlagsDotNetVersion const NET_4_6;

/// @brief Field NET_STANDARD_2_0 value: I32(8)
static ::Fusion::RuntimeFlagsDotNetVersion const NET_STANDARD_2_0;

/// @brief Field NONE value: I32(0)
static ::Fusion::RuntimeFlagsDotNetVersion const NONE;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31312};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::RuntimeFlagsDotNetVersion, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Fusion::RuntimeFlagsDotNetVersion) == 0x4, "Size mismatch!");

} // namespace end def Fusion
