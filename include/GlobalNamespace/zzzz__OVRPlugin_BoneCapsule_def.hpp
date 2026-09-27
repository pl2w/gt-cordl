#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_BoneCapsule.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRPlugin_Vector3f_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPlugin_BoneCapsule)
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_BoneCapsule;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_BoneCapsule);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_BoneCapsule, "", "OVRPlugin/BoneCapsule");
// Dependencies OVRPlugin::Vector3f
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/BoneCapsule
struct CORDL_TYPE OVRPlugin_BoneCapsule {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_BoneCapsule() ;

// Ctor Parameters [CppParam { name: "BoneIndex", ty: "int16_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "StartPoint", ty: "::GlobalNamespace::OVRPlugin_Vector3f", modifiers: "", def_value: None, comment: None }, CppParam { name: "EndPoint", ty: "::GlobalNamespace::OVRPlugin_Vector3f", modifiers: "", def_value: None, comment: None }, CppParam { name: "Radius", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_BoneCapsule(int16_t  BoneIndex, ::GlobalNamespace::OVRPlugin_Vector3f  StartPoint, ::GlobalNamespace::OVRPlugin_Vector3f  EndPoint, float_t  Radius) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12141};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field BoneIndex, offset: 0x0, size: 0x2, def value: None
 int16_t  BoneIndex;

/// @brief Field StartPoint, offset: 0x4, size: 0xc, def value: None
 ::GlobalNamespace::OVRPlugin_Vector3f  StartPoint;

/// @brief Field EndPoint, offset: 0x10, size: 0xc, def value: None
 ::GlobalNamespace::OVRPlugin_Vector3f  EndPoint;

/// @brief Field Radius, offset: 0x1c, size: 0x4, def value: None
 float_t  Radius;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_BoneCapsule, BoneIndex) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_BoneCapsule, StartPoint) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_BoneCapsule, EndPoint) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_BoneCapsule, Radius) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_BoneCapsule) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
