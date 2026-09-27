#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineFreeLook_Orbit.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(CinemachineFreeLook_Orbit)
// Forward declare root types
namespace GlobalNamespace {
struct CinemachineFreeLook_Orbit;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CinemachineFreeLook_Orbit);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CinemachineFreeLook_Orbit, "Unity.Cinemachine", "CinemachineFreeLook/Orbit");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Cinemachine.CinemachineFreeLook/Orbit
struct CORDL_TYPE CinemachineFreeLook_Orbit {
public:
// Declarations
/// @brief Method .ctor, addr 0xaed239c, size 0x8, virtual false, abstract: false, final false
inline void _ctor(float_t  h, float_t  r) ;

// Ctor Parameters []
// @brief default ctor
constexpr CinemachineFreeLook_Orbit() ;

// Ctor Parameters [CppParam { name: "m_Height", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Radius", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr CinemachineFreeLook_Orbit(float_t  m_Height, float_t  m_Radius) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22405};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field m_Height, offset: 0x0, size: 0x4, def value: None
 float_t  m_Height;

/// @brief Field m_Radius, offset: 0x4, size: 0x4, def value: None
 float_t  m_Radius;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CinemachineFreeLook_Orbit, m_Height) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CinemachineFreeLook_Orbit, m_Radius) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CinemachineFreeLook_Orbit) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
