#pragma once
// IWYU pragma private; include "Pathfinding/Examples/LightweightRVO_RVOExampleType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LightweightRVO_RVOExampleType)
// Forward declare root types
namespace GlobalNamespace {
struct LightweightRVO_RVOExampleType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LightweightRVO_RVOExampleType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LightweightRVO_RVOExampleType, "Pathfinding.Examples", "LightweightRVO/RVOExampleType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Pathfinding.Examples.LightweightRVO/RVOExampleType
struct CORDL_TYPE LightweightRVO_RVOExampleType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __LightweightRVO_RVOExampleType_Unwrapped
enum struct __LightweightRVO_RVOExampleType_Unwrapped : int32_t {
__E_Circle = static_cast<int32_t>(0x0),
__E_Line = static_cast<int32_t>(0x1),
__E_Point = static_cast<int32_t>(0x2),
__E_RandomStreams = static_cast<int32_t>(0x3),
__E_Crossing = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __LightweightRVO_RVOExampleType_Unwrapped () const noexcept {
return static_cast<__LightweightRVO_RVOExampleType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr LightweightRVO_RVOExampleType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr LightweightRVO_RVOExampleType(int32_t  value__) noexcept;

/// @brief Field Circle value: I32(0)
static ::GlobalNamespace::LightweightRVO_RVOExampleType const Circle;

/// @brief Field Crossing value: I32(4)
static ::GlobalNamespace::LightweightRVO_RVOExampleType const Crossing;

/// @brief Field Line value: I32(1)
static ::GlobalNamespace::LightweightRVO_RVOExampleType const Line;

/// @brief Field Point value: I32(2)
static ::GlobalNamespace::LightweightRVO_RVOExampleType const Point;

/// @brief Field RandomStreams value: I32(3)
static ::GlobalNamespace::LightweightRVO_RVOExampleType const RandomStreams;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21516};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LightweightRVO_RVOExampleType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LightweightRVO_RVOExampleType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
