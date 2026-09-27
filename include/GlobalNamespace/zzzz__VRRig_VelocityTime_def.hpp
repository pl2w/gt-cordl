#pragma once
// IWYU pragma private; include "GlobalNamespace/VRRig_VelocityTime.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(VRRig_VelocityTime)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
struct VRRig_VelocityTime;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::VRRig_VelocityTime);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VRRig_VelocityTime, "", "VRRig/VelocityTime");
// Dependencies UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: VRRig/VelocityTime
struct CORDL_TYPE VRRig_VelocityTime {
public:
// Declarations
/// @brief Method .ctor, addr 0x5745fc4, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Vector3  velocity, double_t  velTime) ;

// Ctor Parameters []
// @brief default ctor
constexpr VRRig_VelocityTime() ;

// Ctor Parameters [CppParam { name: "vel", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "time", ty: "double_t", modifiers: "", def_value: None, comment: None }]
constexpr VRRig_VelocityTime(::UnityEngine::Vector3  vel, double_t  time) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1271};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field vel, offset: 0x0, size: 0xc, def value: None
 ::UnityEngine::Vector3  vel;

/// @brief Field time, offset: 0x10, size: 0x8, def value: None
 double_t  time;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VRRig_VelocityTime, vel) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig_VelocityTime, time) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VRRig_VelocityTime) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
