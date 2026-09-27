#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_PoseStatef.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRPlugin_Posef_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Vector3f_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(OVRPlugin_PoseStatef)
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_PoseStatef;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_PoseStatef);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_PoseStatef, "", "OVRPlugin/PoseStatef");
// Dependencies OVRPlugin::Posef, OVRPlugin::Vector3f
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/PoseStatef
struct CORDL_TYPE OVRPlugin_PoseStatef {
public:
// Declarations
/// @brief Field identity, offset 0xffffffff, size 0x58 
 __declspec(property(get=getStaticF_identity, put=setStaticF_identity)) ::GlobalNamespace::OVRPlugin_PoseStatef  identity;

static inline ::GlobalNamespace::OVRPlugin_PoseStatef getStaticF_identity() ;

static inline void setStaticF_identity(::GlobalNamespace::OVRPlugin_PoseStatef  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_PoseStatef() ;

// Ctor Parameters [CppParam { name: "Pose", ty: "::GlobalNamespace::OVRPlugin_Posef", modifiers: "", def_value: None, comment: None }, CppParam { name: "Velocity", ty: "::GlobalNamespace::OVRPlugin_Vector3f", modifiers: "", def_value: None, comment: None }, CppParam { name: "Acceleration", ty: "::GlobalNamespace::OVRPlugin_Vector3f", modifiers: "", def_value: None, comment: None }, CppParam { name: "AngularVelocity", ty: "::GlobalNamespace::OVRPlugin_Vector3f", modifiers: "", def_value: None, comment: None }, CppParam { name: "AngularAcceleration", ty: "::GlobalNamespace::OVRPlugin_Vector3f", modifiers: "", def_value: None, comment: None }, CppParam { name: "Time", ty: "double_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_PoseStatef(::GlobalNamespace::OVRPlugin_Posef  Pose, ::GlobalNamespace::OVRPlugin_Vector3f  Velocity, ::GlobalNamespace::OVRPlugin_Vector3f  Acceleration, ::GlobalNamespace::OVRPlugin_Vector3f  AngularVelocity, ::GlobalNamespace::OVRPlugin_Vector3f  AngularAcceleration, double_t  Time) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12090};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x58};

/// @brief Field Pose, offset: 0x0, size: 0x1c, def value: None
 ::GlobalNamespace::OVRPlugin_Posef  Pose;

/// @brief Field Velocity, offset: 0x1c, size: 0xc, def value: None
 ::GlobalNamespace::OVRPlugin_Vector3f  Velocity;

/// [Obsolete("Deprecated. Acceleration is not supported in OpenXR", false)]
/// @brief Field Acceleration, offset: 0x28, size: 0xc, def value: None
 ::GlobalNamespace::OVRPlugin_Vector3f  Acceleration;

/// @brief Field AngularVelocity, offset: 0x34, size: 0xc, def value: None
 ::GlobalNamespace::OVRPlugin_Vector3f  AngularVelocity;

/// [Obsolete("Deprecated. Acceleration is not supported in OpenXR", false)]
/// @brief Field AngularAcceleration, offset: 0x40, size: 0xc, def value: None
 ::GlobalNamespace::OVRPlugin_Vector3f  AngularAcceleration;

/// @brief Field Time, offset: 0x50, size: 0x8, def value: None
 double_t  Time;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_PoseStatef, Pose) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_PoseStatef, Velocity) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_PoseStatef, Acceleration) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_PoseStatef, AngularVelocity) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_PoseStatef, AngularAcceleration) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_PoseStatef, Time) == 0x50, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_PoseStatef) == 0x58, "Size mismatch!");

} // namespace end def GlobalNamespace
