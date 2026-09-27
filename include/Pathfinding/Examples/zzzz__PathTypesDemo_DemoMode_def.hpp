#pragma once
// IWYU pragma private; include "Pathfinding/Examples/PathTypesDemo_DemoMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PathTypesDemo_DemoMode)
// Forward declare root types
namespace GlobalNamespace {
struct PathTypesDemo_DemoMode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PathTypesDemo_DemoMode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PathTypesDemo_DemoMode, "Pathfinding.Examples", "PathTypesDemo/DemoMode");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Pathfinding.Examples.PathTypesDemo/DemoMode
struct CORDL_TYPE PathTypesDemo_DemoMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PathTypesDemo_DemoMode_Unwrapped
enum struct __PathTypesDemo_DemoMode_Unwrapped : int32_t {
__E_ABPath = static_cast<int32_t>(0x0),
__E_MultiTargetPath = static_cast<int32_t>(0x1),
__E_RandomPath = static_cast<int32_t>(0x2),
__E_FleePath = static_cast<int32_t>(0x3),
__E_ConstantPath = static_cast<int32_t>(0x4),
__E_FloodPath = static_cast<int32_t>(0x5),
__E_FloodPathTracer = static_cast<int32_t>(0x6),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PathTypesDemo_DemoMode_Unwrapped () const noexcept {
return static_cast<__PathTypesDemo_DemoMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PathTypesDemo_DemoMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr PathTypesDemo_DemoMode(int32_t  value__) noexcept;

/// @brief Field ABPath value: I32(0)
static ::GlobalNamespace::PathTypesDemo_DemoMode const ABPath;

/// @brief Field ConstantPath value: I32(4)
static ::GlobalNamespace::PathTypesDemo_DemoMode const ConstantPath;

/// @brief Field FleePath value: I32(3)
static ::GlobalNamespace::PathTypesDemo_DemoMode const FleePath;

/// @brief Field FloodPath value: I32(5)
static ::GlobalNamespace::PathTypesDemo_DemoMode const FloodPath;

/// @brief Field FloodPathTracer value: I32(6)
static ::GlobalNamespace::PathTypesDemo_DemoMode const FloodPathTracer;

/// @brief Field MultiTargetPath value: I32(1)
static ::GlobalNamespace::PathTypesDemo_DemoMode const MultiTargetPath;

/// @brief Field RandomPath value: I32(2)
static ::GlobalNamespace::PathTypesDemo_DemoMode const RandomPath;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21540};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PathTypesDemo_DemoMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PathTypesDemo_DemoMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
