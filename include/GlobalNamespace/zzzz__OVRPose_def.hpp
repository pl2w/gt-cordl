#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPose.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPose)
namespace GlobalNamespace {
struct OVRPlugin_Posef;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRPose;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPose);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPose, "", "OVRPose");
// Dependencies UnityEngine.Quaternion, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPose
struct CORDL_TYPE OVRPose {
public:
// Declarations
/// @brief Method Equals, addr 0xa58301c, size 0xec, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode, addr 0xa583188, size 0xa8, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method Inverse, addr 0xa575a10, size 0x84, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPose Inverse() ;

/// @brief Method Rotate180AlongX, addr 0xa583324, size 0x10c, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPose Rotate180AlongX() ;

/// @brief Method ToPosef, addr 0xa5832f8, size 0x2c, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Posef ToPosef() ;

/// @brief Method ToPosef_Legacy, addr 0xa5832dc, size 0x1c, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Posef ToPosef_Legacy() ;

/// @brief Method flipZ, addr 0xa5832b0, size 0x2c, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPose flipZ() ;

/// @brief Method get_identity, addr 0xa575488, size 0x98, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPose get_identity() ;

/// @brief Method op_Equality, addr 0xa583108, size 0x80, virtual false, abstract: false, final false
static inline bool op_Equality(::GlobalNamespace::OVRPose  x, ::GlobalNamespace::OVRPose  y) ;

/// @brief Method op_Inequality, addr 0xa583230, size 0x80, virtual false, abstract: false, final false
static inline bool op_Inequality(::GlobalNamespace::OVRPose  x, ::GlobalNamespace::OVRPose  y) ;

/// @brief Method op_Multiply, addr 0xa57da28, size 0xec, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPose op_Multiply(::GlobalNamespace::OVRPose  lhs, ::GlobalNamespace::OVRPose  rhs) ;

// Ctor Parameters []
// @brief default ctor
constexpr OVRPose() ;

// Ctor Parameters [CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "orientation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None, comment: None }]
constexpr OVRPose(::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  orientation) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11878};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1c};

/// @brief Field position, offset: 0x0, size: 0xc, def value: None
 ::UnityEngine::Vector3  position;

/// @brief Field orientation, offset: 0xc, size: 0x10, def value: None
 ::UnityEngine::Quaternion  orientation;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPose, position) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPose, orientation) == 0xc, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPose) == 0x1c, "Size mismatch!");

} // namespace end def GlobalNamespace
