#pragma once
// IWYU pragma private; include "GlobalNamespace/OVROverlayMeshGenerator_CubeFace.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVROverlayMeshGenerator_CubeFace)
// Forward declare root types
namespace GlobalNamespace {
struct OVROverlayMeshGenerator_CubeFace;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVROverlayMeshGenerator_CubeFace);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVROverlayMeshGenerator_CubeFace, "", "OVROverlayMeshGenerator/CubeFace");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVROverlayMeshGenerator/CubeFace
struct CORDL_TYPE OVROverlayMeshGenerator_CubeFace {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OVROverlayMeshGenerator_CubeFace_Unwrapped
enum struct __OVROverlayMeshGenerator_CubeFace_Unwrapped : int32_t {
__E_Bottom = static_cast<int32_t>(0x0),
__E_Front = static_cast<int32_t>(0x1),
__E_Back = static_cast<int32_t>(0x2),
__E_Right = static_cast<int32_t>(0x3),
__E_Left = static_cast<int32_t>(0x4),
__E_Top = static_cast<int32_t>(0x5),
__E_COUNT = static_cast<int32_t>(0x6),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OVROverlayMeshGenerator_CubeFace_Unwrapped () const noexcept {
return static_cast<__OVROverlayMeshGenerator_CubeFace_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OVROverlayMeshGenerator_CubeFace() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVROverlayMeshGenerator_CubeFace(int32_t  value__) noexcept;

/// @brief Field Back value: I32(2)
static ::GlobalNamespace::OVROverlayMeshGenerator_CubeFace const Back;

/// @brief Field Bottom value: I32(0)
static ::GlobalNamespace::OVROverlayMeshGenerator_CubeFace const Bottom;

/// @brief Field COUNT value: I32(6)
static ::GlobalNamespace::OVROverlayMeshGenerator_CubeFace const COUNT;

/// @brief Field Front value: I32(1)
static ::GlobalNamespace::OVROverlayMeshGenerator_CubeFace const Front;

/// @brief Field Left value: I32(4)
static ::GlobalNamespace::OVROverlayMeshGenerator_CubeFace const Left;

/// @brief Field Right value: I32(3)
static ::GlobalNamespace::OVROverlayMeshGenerator_CubeFace const Right;

/// @brief Field Top value: I32(5)
static ::GlobalNamespace::OVROverlayMeshGenerator_CubeFace const Top;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12018};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVROverlayMeshGenerator_CubeFace, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVROverlayMeshGenerator_CubeFace) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
