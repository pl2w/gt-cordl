#pragma once
// IWYU pragma private; include "GlobalNamespace/GizmoRenderer_GizmoType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GizmoRenderer_GizmoType)
// Forward declare root types
namespace GlobalNamespace {
struct GizmoRenderer_GizmoType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GizmoRenderer_GizmoType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GizmoRenderer_GizmoType, "", "GizmoRenderer/GizmoType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GizmoRenderer/GizmoType
struct CORDL_TYPE GizmoRenderer_GizmoType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint32_t;

/// @brief Nested struct __GizmoRenderer_GizmoType_Unwrapped
enum struct __GizmoRenderer_GizmoType_Unwrapped : uint32_t {
__E_BoxWire = static_cast<uint32_t>(0x0u),
__E_BoxSolid = static_cast<uint32_t>(0x1u),
__E_SphereWire = static_cast<uint32_t>(0x2u),
__E_SphereSolid = static_cast<uint32_t>(0x3u),
__E_Label3D = static_cast<uint32_t>(0x4u),
__E_Label2D = static_cast<uint32_t>(0x5u),
__E_GridWire = static_cast<uint32_t>(0x6u),
__E_PlaneSolid = static_cast<uint32_t>(0x7u),
__E_PlaneWire = static_cast<uint32_t>(0x8u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GizmoRenderer_GizmoType_Unwrapped () const noexcept {
return static_cast<__GizmoRenderer_GizmoType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint32_t () const noexcept {
return static_cast<uint32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GizmoRenderer_GizmoType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
constexpr GizmoRenderer_GizmoType(uint32_t  value__) noexcept;

/// @brief Field BoxSolid value: U32(1)
static ::GlobalNamespace::GizmoRenderer_GizmoType const BoxSolid;

/// @brief Field BoxWire value: U32(0)
static ::GlobalNamespace::GizmoRenderer_GizmoType const BoxWire;

/// @brief Field GridWire value: U32(6)
static ::GlobalNamespace::GizmoRenderer_GizmoType const GridWire;

/// @brief Field Label2D value: U32(5)
static ::GlobalNamespace::GizmoRenderer_GizmoType const Label2D;

/// @brief Field Label3D value: U32(4)
static ::GlobalNamespace::GizmoRenderer_GizmoType const Label3D;

/// @brief Field PlaneSolid value: U32(7)
static ::GlobalNamespace::GizmoRenderer_GizmoType const PlaneSolid;

/// @brief Field PlaneWire value: U32(8)
static ::GlobalNamespace::GizmoRenderer_GizmoType const PlaneWire;

/// @brief Field SphereSolid value: U32(3)
static ::GlobalNamespace::GizmoRenderer_GizmoType const SphereSolid;

/// @brief Field SphereWire value: U32(2)
static ::GlobalNamespace::GizmoRenderer_GizmoType const SphereWire;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2807};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 uint32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GizmoRenderer_GizmoType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GizmoRenderer_GizmoType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
