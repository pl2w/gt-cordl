#pragma once
// IWYU pragma private; include "Fusion/RuntimeFlagsBuildFlags.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RuntimeFlagsBuildFlags)
// Forward declare root types
namespace Fusion {
struct RuntimeFlagsBuildFlags;
}
// Write type traits
MARK_VAL_T(::Fusion::RuntimeFlagsBuildFlags);
DEFINE_IL2CPP_CLASS(::Fusion::RuntimeFlagsBuildFlags, "Fusion", "RuntimeFlagsBuildFlags");
// [Flags]
// Dependencies 
namespace Fusion {
// Is value type: true
// CS Name: Fusion.RuntimeFlagsBuildFlags
struct CORDL_TYPE RuntimeFlagsBuildFlags {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __RuntimeFlagsBuildFlags_Unwrapped
enum struct __RuntimeFlagsBuildFlags_Unwrapped : int32_t {
__E_NONE = static_cast<int32_t>(0x0),
__E_UNITY_WEBGL = static_cast<int32_t>(0x2),
__E_UNITY_XBOXONE = static_cast<int32_t>(0x4),
__E_UNITY_GAMECORE = static_cast<int32_t>(0x8),
__E_UNITY_EDITOR = static_cast<int32_t>(0x10),
__E_UNITY_SWITCH = static_cast<int32_t>(0x20),
__E_UNITY_2019_4_OR_NEWER = static_cast<int32_t>(0x40),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __RuntimeFlagsBuildFlags_Unwrapped () const noexcept {
return static_cast<__RuntimeFlagsBuildFlags_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr RuntimeFlagsBuildFlags() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr RuntimeFlagsBuildFlags(int32_t  value__) noexcept;

/// @brief Field NONE value: I32(0)
static ::Fusion::RuntimeFlagsBuildFlags const NONE;

/// @brief Field UNITY_2019_4_OR_NEWER value: I32(64)
static ::Fusion::RuntimeFlagsBuildFlags const UNITY_2019_4_OR_NEWER;

/// @brief Field UNITY_EDITOR value: I32(16)
static ::Fusion::RuntimeFlagsBuildFlags const UNITY_EDITOR;

/// @brief Field UNITY_GAMECORE value: I32(8)
static ::Fusion::RuntimeFlagsBuildFlags const UNITY_GAMECORE;

/// @brief Field UNITY_SWITCH value: I32(32)
static ::Fusion::RuntimeFlagsBuildFlags const UNITY_SWITCH;

/// @brief Field UNITY_WEBGL value: I32(2)
static ::Fusion::RuntimeFlagsBuildFlags const UNITY_WEBGL;

/// @brief Field UNITY_XBOXONE value: I32(4)
static ::Fusion::RuntimeFlagsBuildFlags const UNITY_XBOXONE;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31310};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::RuntimeFlagsBuildFlags, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Fusion::RuntimeFlagsBuildFlags) == 0x4, "Size mismatch!");

} // namespace end def Fusion
