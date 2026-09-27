#pragma once
// IWYU pragma private; include "Pathfinding/MultiTargetPath_HeuristicMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MultiTargetPath_HeuristicMode)
// Forward declare root types
namespace GlobalNamespace {
struct MultiTargetPath_HeuristicMode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MultiTargetPath_HeuristicMode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MultiTargetPath_HeuristicMode, "Pathfinding", "MultiTargetPath/HeuristicMode");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Pathfinding.MultiTargetPath/HeuristicMode
struct CORDL_TYPE MultiTargetPath_HeuristicMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __MultiTargetPath_HeuristicMode_Unwrapped
enum struct __MultiTargetPath_HeuristicMode_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Average = static_cast<int32_t>(0x1),
__E_MovingAverage = static_cast<int32_t>(0x2),
__E_Midpoint = static_cast<int32_t>(0x3),
__E_MovingMidpoint = static_cast<int32_t>(0x4),
__E_Sequential = static_cast<int32_t>(0x5),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MultiTargetPath_HeuristicMode_Unwrapped () const noexcept {
return static_cast<__MultiTargetPath_HeuristicMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr MultiTargetPath_HeuristicMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr MultiTargetPath_HeuristicMode(int32_t  value__) noexcept;

/// @brief Field Average value: I32(1)
static ::GlobalNamespace::MultiTargetPath_HeuristicMode const Average;

/// @brief Field Midpoint value: I32(3)
static ::GlobalNamespace::MultiTargetPath_HeuristicMode const Midpoint;

/// @brief Field MovingAverage value: I32(2)
static ::GlobalNamespace::MultiTargetPath_HeuristicMode const MovingAverage;

/// @brief Field MovingMidpoint value: I32(4)
static ::GlobalNamespace::MultiTargetPath_HeuristicMode const MovingMidpoint;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::MultiTargetPath_HeuristicMode const None;

/// @brief Field Sequential value: I32(5)
static ::GlobalNamespace::MultiTargetPath_HeuristicMode const Sequential;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21396};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MultiTargetPath_HeuristicMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MultiTargetPath_HeuristicMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
