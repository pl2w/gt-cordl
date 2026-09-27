#pragma once
// IWYU pragma private; include "Pathfinding/RVO/RVOLayer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RVOLayer)
// Forward declare root types
namespace Pathfinding::RVO {
struct RVOLayer;
}
// Write type traits
MARK_VAL_T(::Pathfinding::RVO::RVOLayer);
DEFINE_IL2CPP_CLASS(::Pathfinding::RVO::RVOLayer, "Pathfinding.RVO", "RVOLayer");
// [Flags]
// Dependencies 
namespace Pathfinding::RVO {
// Is value type: true
// CS Name: Pathfinding.RVO.RVOLayer
struct CORDL_TYPE RVOLayer {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __RVOLayer_Unwrapped
enum struct __RVOLayer_Unwrapped : int32_t {
__E_DefaultAgent = static_cast<int32_t>(0x1),
__E_DefaultObstacle = static_cast<int32_t>(0x2),
__E_Layer2 = static_cast<int32_t>(0x4),
__E_Layer3 = static_cast<int32_t>(0x8),
__E_Layer4 = static_cast<int32_t>(0x10),
__E_Layer5 = static_cast<int32_t>(0x20),
__E_Layer6 = static_cast<int32_t>(0x40),
__E_Layer7 = static_cast<int32_t>(0x80),
__E_Layer8 = static_cast<int32_t>(0x100),
__E_Layer9 = static_cast<int32_t>(0x200),
__E_Layer10 = static_cast<int32_t>(0x400),
__E_Layer11 = static_cast<int32_t>(0x800),
__E_Layer12 = static_cast<int32_t>(0x1000),
__E_Layer13 = static_cast<int32_t>(0x2000),
__E_Layer14 = static_cast<int32_t>(0x4000),
__E_Layer15 = static_cast<int32_t>(0x8000),
__E_Layer16 = static_cast<int32_t>(0x10000),
__E_Layer17 = static_cast<int32_t>(0x20000),
__E_Layer18 = static_cast<int32_t>(0x40000),
__E_Layer19 = static_cast<int32_t>(0x80000),
__E_Layer20 = static_cast<int32_t>(0x100000),
__E_Layer21 = static_cast<int32_t>(0x200000),
__E_Layer22 = static_cast<int32_t>(0x400000),
__E_Layer23 = static_cast<int32_t>(0x800000),
__E_Layer24 = static_cast<int32_t>(0x1000000),
__E_Layer25 = static_cast<int32_t>(0x2000000),
__E_Layer26 = static_cast<int32_t>(0x4000000),
__E_Layer27 = static_cast<int32_t>(0x8000000),
__E_Layer28 = static_cast<int32_t>(0x10000000),
__E_Layer29 = static_cast<int32_t>(0x20000000),
__E_Layer30 = static_cast<int32_t>(0x40000000),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __RVOLayer_Unwrapped () const noexcept {
return static_cast<__RVOLayer_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr RVOLayer() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr RVOLayer(int32_t  value__) noexcept;

/// @brief Field DefaultAgent value: I32(1)
static ::Pathfinding::RVO::RVOLayer const DefaultAgent;

/// @brief Field DefaultObstacle value: I32(2)
static ::Pathfinding::RVO::RVOLayer const DefaultObstacle;

/// @brief Field Layer10 value: I32(1024)
static ::Pathfinding::RVO::RVOLayer const Layer10;

/// @brief Field Layer11 value: I32(2048)
static ::Pathfinding::RVO::RVOLayer const Layer11;

/// @brief Field Layer12 value: I32(4096)
static ::Pathfinding::RVO::RVOLayer const Layer12;

/// @brief Field Layer13 value: I32(8192)
static ::Pathfinding::RVO::RVOLayer const Layer13;

/// @brief Field Layer14 value: I32(16384)
static ::Pathfinding::RVO::RVOLayer const Layer14;

/// @brief Field Layer15 value: I32(32768)
static ::Pathfinding::RVO::RVOLayer const Layer15;

/// @brief Field Layer16 value: I32(65536)
static ::Pathfinding::RVO::RVOLayer const Layer16;

/// @brief Field Layer17 value: I32(131072)
static ::Pathfinding::RVO::RVOLayer const Layer17;

/// @brief Field Layer18 value: I32(262144)
static ::Pathfinding::RVO::RVOLayer const Layer18;

/// @brief Field Layer19 value: I32(524288)
static ::Pathfinding::RVO::RVOLayer const Layer19;

/// @brief Field Layer2 value: I32(4)
static ::Pathfinding::RVO::RVOLayer const Layer2;

/// @brief Field Layer20 value: I32(1048576)
static ::Pathfinding::RVO::RVOLayer const Layer20;

/// @brief Field Layer21 value: I32(2097152)
static ::Pathfinding::RVO::RVOLayer const Layer21;

/// @brief Field Layer22 value: I32(4194304)
static ::Pathfinding::RVO::RVOLayer const Layer22;

/// @brief Field Layer23 value: I32(8388608)
static ::Pathfinding::RVO::RVOLayer const Layer23;

/// @brief Field Layer24 value: I32(16777216)
static ::Pathfinding::RVO::RVOLayer const Layer24;

/// @brief Field Layer25 value: I32(33554432)
static ::Pathfinding::RVO::RVOLayer const Layer25;

/// @brief Field Layer26 value: I32(67108864)
static ::Pathfinding::RVO::RVOLayer const Layer26;

/// @brief Field Layer27 value: I32(134217728)
static ::Pathfinding::RVO::RVOLayer const Layer27;

/// @brief Field Layer28 value: I32(268435456)
static ::Pathfinding::RVO::RVOLayer const Layer28;

/// @brief Field Layer29 value: I32(536870912)
static ::Pathfinding::RVO::RVOLayer const Layer29;

/// @brief Field Layer3 value: I32(8)
static ::Pathfinding::RVO::RVOLayer const Layer3;

/// @brief Field Layer30 value: I32(1073741824)
static ::Pathfinding::RVO::RVOLayer const Layer30;

/// @brief Field Layer4 value: I32(16)
static ::Pathfinding::RVO::RVOLayer const Layer4;

/// @brief Field Layer5 value: I32(32)
static ::Pathfinding::RVO::RVOLayer const Layer5;

/// @brief Field Layer6 value: I32(64)
static ::Pathfinding::RVO::RVOLayer const Layer6;

/// @brief Field Layer7 value: I32(128)
static ::Pathfinding::RVO::RVOLayer const Layer7;

/// @brief Field Layer8 value: I32(256)
static ::Pathfinding::RVO::RVOLayer const Layer8;

/// @brief Field Layer9 value: I32(512)
static ::Pathfinding::RVO::RVOLayer const Layer9;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21495};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::RVO::RVOLayer, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::RVO::RVOLayer) == 0x4, "Size mismatch!");

} // namespace end def Pathfinding::RVO
