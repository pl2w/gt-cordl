#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineOrbitalFollow_OrbitStyles.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CinemachineOrbitalFollow_OrbitStyles)
// Forward declare root types
namespace GlobalNamespace {
struct CinemachineOrbitalFollow_OrbitStyles;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CinemachineOrbitalFollow_OrbitStyles);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CinemachineOrbitalFollow_OrbitStyles, "Unity.Cinemachine", "CinemachineOrbitalFollow/OrbitStyles");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Cinemachine.CinemachineOrbitalFollow/OrbitStyles
struct CORDL_TYPE CinemachineOrbitalFollow_OrbitStyles {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CinemachineOrbitalFollow_OrbitStyles_Unwrapped
enum struct __CinemachineOrbitalFollow_OrbitStyles_Unwrapped : int32_t {
__E_Sphere = static_cast<int32_t>(0x0),
__E_ThreeRing = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CinemachineOrbitalFollow_OrbitStyles_Unwrapped () const noexcept {
return static_cast<__CinemachineOrbitalFollow_OrbitStyles_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CinemachineOrbitalFollow_OrbitStyles() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr CinemachineOrbitalFollow_OrbitStyles(int32_t  value__) noexcept;

/// @brief Field Sphere value: I32(0)
static ::GlobalNamespace::CinemachineOrbitalFollow_OrbitStyles const Sphere;

/// @brief Field ThreeRing value: I32(1)
static ::GlobalNamespace::CinemachineOrbitalFollow_OrbitStyles const ThreeRing;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22225};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CinemachineOrbitalFollow_OrbitStyles, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CinemachineOrbitalFollow_OrbitStyles) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
