#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineImpulseDefinition_ImpulseShapes.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CinemachineImpulseDefinition_ImpulseShapes)
// Forward declare root types
namespace GlobalNamespace {
struct CinemachineImpulseDefinition_ImpulseShapes;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CinemachineImpulseDefinition_ImpulseShapes);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CinemachineImpulseDefinition_ImpulseShapes, "Unity.Cinemachine", "CinemachineImpulseDefinition/ImpulseShapes");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Cinemachine.CinemachineImpulseDefinition/ImpulseShapes
struct CORDL_TYPE CinemachineImpulseDefinition_ImpulseShapes {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CinemachineImpulseDefinition_ImpulseShapes_Unwrapped
enum struct __CinemachineImpulseDefinition_ImpulseShapes_Unwrapped : int32_t {
__E_Custom = static_cast<int32_t>(0x0),
__E_Recoil = static_cast<int32_t>(0x1),
__E_Bump = static_cast<int32_t>(0x2),
__E_Explosion = static_cast<int32_t>(0x3),
__E_Rumble = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CinemachineImpulseDefinition_ImpulseShapes_Unwrapped () const noexcept {
return static_cast<__CinemachineImpulseDefinition_ImpulseShapes_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CinemachineImpulseDefinition_ImpulseShapes() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr CinemachineImpulseDefinition_ImpulseShapes(int32_t  value__) noexcept;

/// @brief Field Bump value: I32(2)
static ::GlobalNamespace::CinemachineImpulseDefinition_ImpulseShapes const Bump;

/// @brief Field Custom value: I32(0)
static ::GlobalNamespace::CinemachineImpulseDefinition_ImpulseShapes const Custom;

/// @brief Field Explosion value: I32(3)
static ::GlobalNamespace::CinemachineImpulseDefinition_ImpulseShapes const Explosion;

/// @brief Field Recoil value: I32(1)
static ::GlobalNamespace::CinemachineImpulseDefinition_ImpulseShapes const Recoil;

/// @brief Field Rumble value: I32(4)
static ::GlobalNamespace::CinemachineImpulseDefinition_ImpulseShapes const Rumble;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22469};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CinemachineImpulseDefinition_ImpulseShapes, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CinemachineImpulseDefinition_ImpulseShapes) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
