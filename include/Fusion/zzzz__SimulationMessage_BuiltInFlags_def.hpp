#pragma once
// IWYU pragma private; include "Fusion/SimulationMessage_BuiltInFlags.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SimulationMessage_BuiltInFlags)
// Forward declare root types
namespace GlobalNamespace {
struct SimulationMessage_BuiltInFlags;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SimulationMessage_BuiltInFlags);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SimulationMessage_BuiltInFlags, "Fusion", "SimulationMessage/BuiltInFlags");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Fusion.SimulationMessage/BuiltInFlags
struct CORDL_TYPE SimulationMessage_BuiltInFlags {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SimulationMessage_BuiltInFlags_Unwrapped
enum struct __SimulationMessage_BuiltInFlags_Unwrapped : int32_t {
__E_USER_MESSAGE = static_cast<int32_t>(0x1),
__E_REMOTE = static_cast<int32_t>(0x2),
__E_STATIC = static_cast<int32_t>(0x4),
__E_UNRELIABLE = static_cast<int32_t>(0x8),
__E_TARGET_PLAYER = static_cast<int32_t>(0x10),
__E_TARGET_SERVER = static_cast<int32_t>(0x20),
__E_INTERNAL = static_cast<int32_t>(0x40),
__E_NOT_TICK_ALIGNED = static_cast<int32_t>(0x80),
__E_DUMMY = static_cast<int32_t>(0x100),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SimulationMessage_BuiltInFlags_Unwrapped () const noexcept {
return static_cast<__SimulationMessage_BuiltInFlags_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SimulationMessage_BuiltInFlags() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr SimulationMessage_BuiltInFlags(int32_t  value__) noexcept;

/// @brief Field DUMMY value: I32(256)
static ::GlobalNamespace::SimulationMessage_BuiltInFlags const DUMMY;

/// @brief Field INTERNAL value: I32(64)
static ::GlobalNamespace::SimulationMessage_BuiltInFlags const INTERNAL;

/// @brief Field NOT_TICK_ALIGNED value: I32(128)
static ::GlobalNamespace::SimulationMessage_BuiltInFlags const NOT_TICK_ALIGNED;

/// @brief Field REMOTE value: I32(2)
static ::GlobalNamespace::SimulationMessage_BuiltInFlags const REMOTE;

/// @brief Field STATIC value: I32(4)
static ::GlobalNamespace::SimulationMessage_BuiltInFlags const STATIC;

/// @brief Field TARGET_PLAYER value: I32(16)
static ::GlobalNamespace::SimulationMessage_BuiltInFlags const TARGET_PLAYER;

/// @brief Field TARGET_SERVER value: I32(32)
static ::GlobalNamespace::SimulationMessage_BuiltInFlags const TARGET_SERVER;

/// @brief Field UNRELIABLE value: I32(8)
static ::GlobalNamespace::SimulationMessage_BuiltInFlags const UNRELIABLE;

/// @brief Field USER_MESSAGE value: I32(1)
static ::GlobalNamespace::SimulationMessage_BuiltInFlags const USER_MESSAGE;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19345};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SimulationMessage_BuiltInFlags, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SimulationMessage_BuiltInFlags) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
