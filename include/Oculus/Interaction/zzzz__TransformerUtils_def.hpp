#pragma once
// IWYU pragma private; include "Oculus/Interaction/TransformerUtils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/zzzz__TransformerUtils_ConstrainedAxis_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TransformerUtils)
namespace GlobalNamespace {
struct TransformerUtils_ConstrainedAxis;
}
namespace GlobalNamespace {
struct TransformerUtils_FloatRange;
}
namespace Oculus::Interaction {
class FloatConstraint;
}
namespace Oculus::Interaction {
class TransformerUtils_PositionConstraints;
}
namespace Oculus::Interaction {
class TransformerUtils_RotationConstraints;
}
namespace Oculus::Interaction {
class TransformerUtils_ScaleConstraints;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Oculus::Interaction {
class TransformerUtils;
}
namespace Oculus::Interaction {
class TransformerUtils_PositionConstraints;
}
namespace Oculus::Interaction {
class TransformerUtils_RotationConstraints;
}
namespace Oculus::Interaction {
class TransformerUtils_ScaleConstraints;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::TransformerUtils*);
MARK_REF_T(::Oculus::Interaction::TransformerUtils_PositionConstraints*);
MARK_REF_T(::Oculus::Interaction::TransformerUtils_RotationConstraints*);
MARK_REF_T(::Oculus::Interaction::TransformerUtils_ScaleConstraints*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::TransformerUtils*, "Oculus.Interaction", "TransformerUtils");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::TransformerUtils_PositionConstraints*, "Oculus.Interaction", "TransformerUtils/PositionConstraints");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::TransformerUtils_RotationConstraints*, "Oculus.Interaction", "TransformerUtils/RotationConstraints");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::TransformerUtils_ScaleConstraints*, "Oculus.Interaction", "TransformerUtils/ScaleConstraints");
// Dependencies System.Object
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.TransformerUtils
class CORDL_TYPE TransformerUtils : public ::System::Object {
public:
// Declarations
using ConstrainedAxis = ::GlobalNamespace::TransformerUtils_ConstrainedAxis;

using FloatRange = ::GlobalNamespace::TransformerUtils_FloatRange;

using PositionConstraints = ::Oculus::Interaction::TransformerUtils_PositionConstraints;

using RotationConstraints = ::Oculus::Interaction::TransformerUtils_RotationConstraints;

using ScaleConstraints = ::Oculus::Interaction::TransformerUtils_ScaleConstraints;

/// @brief Method AlignLocalToWorldPose, addr 0xa48e0d4, size 0x270, virtual false, abstract: false, final false
static inline ::UnityEngine::Pose AlignLocalToWorldPose(::UnityEngine::Matrix4x4  localToWorld, ::UnityEngine::Pose  local, ::UnityEngine::Pose  world) ;

/// @brief Method ConstrainAlongDirection, addr 0xa48e4f4, size 0x98, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 ConstrainAlongDirection(::UnityEngine::Vector3  position, ::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, ::Oculus::Interaction::FloatConstraint*  min, ::Oculus::Interaction::FloatConstraint*  max) ;

/// @brief Method GenerateParentConstraints, addr 0xa48d83c, size 0x100, virtual false, abstract: false, final false
static inline ::Oculus::Interaction::TransformerUtils_PositionConstraints* GenerateParentConstraints(::Oculus::Interaction::TransformerUtils_PositionConstraints*  constraints, ::UnityEngine::Vector3  initialPosition) ;

/// @brief Method GenerateParentConstraints, addr 0xa48d944, size 0xf4, virtual false, abstract: false, final false
static inline ::Oculus::Interaction::TransformerUtils_ScaleConstraints* GenerateParentConstraints(::Oculus::Interaction::TransformerUtils_ScaleConstraints*  constraints, ::UnityEngine::Vector3  initialScale) ;

/// @brief Method GetConstrainedTransformPosition, addr 0xa48da40, size 0x168, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 GetConstrainedTransformPosition(::UnityEngine::Vector3  unconstrainedPosition, ::Oculus::Interaction::TransformerUtils_PositionConstraints*  positionConstraints, ::UnityEngine::Transform*  relativeTransform) ;

/// @brief Method GetConstrainedTransformRotation, addr 0xa48dba8, size 0x320, virtual false, abstract: false, final false
static inline ::UnityEngine::Quaternion GetConstrainedTransformRotation(::UnityEngine::Quaternion  unconstrainedRotation, ::Oculus::Interaction::TransformerUtils_RotationConstraints*  rotationConstraints, ::UnityEngine::Transform*  relativeTransform) ;

/// @brief Method GetConstrainedTransformScale, addr 0xa48df70, size 0x64, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 GetConstrainedTransformScale(::UnityEngine::Vector3  unconstrainedScale, ::Oculus::Interaction::TransformerUtils_ScaleConstraints*  scaleConstraints) ;

/// @brief Method LocalToWorldMagnitude, addr 0xa48e41c, size 0xd8, virtual false, abstract: false, final false
static inline float_t LocalToWorldMagnitude(float_t  magnitude, ::UnityEngine::Matrix4x4  localToWorld) ;

static inline ::Oculus::Interaction::TransformerUtils* New_ctor() ;

/// @brief Method WorldToLocalMagnitude, addr 0xa48e344, size 0xd8, virtual false, abstract: false, final false
static inline float_t WorldToLocalMagnitude(float_t  magnitude, ::UnityEngine::Matrix4x4  worldToLocal) ;

/// @brief Method WorldToLocalPose, addr 0xa48dfd4, size 0x100, virtual false, abstract: false, final false
static inline ::UnityEngine::Pose WorldToLocalPose(::UnityEngine::Pose  worldPose, ::UnityEngine::Matrix4x4  worldToLocal) ;

/// [CompilerGenerated]
/// @brief Method <GetConstrainedTransformRotation>g__ClampAngle|8_0, addr 0xa48dec8, size 0xa8, virtual false, abstract: false, final false
static inline float_t _GetConstrainedTransformRotation_g__ClampAngle_8_0(float_t  angle, float_t  min, float_t  max) ;

/// @brief Method .ctor, addr 0xa48e58c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TransformerUtils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TransformerUtils", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TransformerUtils(TransformerUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TransformerUtils", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TransformerUtils(TransformerUtils const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16045};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::TransformerUtils) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction
// Dependencies Oculus.Interaction.TransformerUtils::ConstrainedAxis, System.Object
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.TransformerUtils/ScaleConstraints
class CORDL_TYPE TransformerUtils_ScaleConstraints : public ::System::Object {
public:
// Declarations
/// @brief Field ConstraintsAreRelative, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_ConstraintsAreRelative, put=__cordl_internal_set_ConstraintsAreRelative)) bool  ConstraintsAreRelative;

/// @brief Field XAxis, offset 0x14, size 0xc 
 __declspec(property(get=__cordl_internal_get_XAxis, put=__cordl_internal_set_XAxis)) ::GlobalNamespace::TransformerUtils_ConstrainedAxis  XAxis;

/// @brief Field YAxis, offset 0x20, size 0xc 
 __declspec(property(get=__cordl_internal_get_YAxis, put=__cordl_internal_set_YAxis)) ::GlobalNamespace::TransformerUtils_ConstrainedAxis  YAxis;

/// @brief Field ZAxis, offset 0x2c, size 0xc 
 __declspec(property(get=__cordl_internal_get_ZAxis, put=__cordl_internal_set_ZAxis)) ::GlobalNamespace::TransformerUtils_ConstrainedAxis  ZAxis;

static inline ::Oculus::Interaction::TransformerUtils_ScaleConstraints* New_ctor() ;

constexpr bool const& __cordl_internal_get_ConstraintsAreRelative() const;

constexpr bool& __cordl_internal_get_ConstraintsAreRelative() ;

constexpr ::GlobalNamespace::TransformerUtils_ConstrainedAxis const& __cordl_internal_get_XAxis() const;

constexpr ::GlobalNamespace::TransformerUtils_ConstrainedAxis& __cordl_internal_get_XAxis() ;

constexpr ::GlobalNamespace::TransformerUtils_ConstrainedAxis const& __cordl_internal_get_YAxis() const;

constexpr ::GlobalNamespace::TransformerUtils_ConstrainedAxis& __cordl_internal_get_YAxis() ;

constexpr ::GlobalNamespace::TransformerUtils_ConstrainedAxis const& __cordl_internal_get_ZAxis() const;

constexpr ::GlobalNamespace::TransformerUtils_ConstrainedAxis& __cordl_internal_get_ZAxis() ;

constexpr void __cordl_internal_set_ConstraintsAreRelative(bool  value) ;

constexpr void __cordl_internal_set_XAxis(::GlobalNamespace::TransformerUtils_ConstrainedAxis  value) ;

constexpr void __cordl_internal_set_YAxis(::GlobalNamespace::TransformerUtils_ConstrainedAxis  value) ;

constexpr void __cordl_internal_set_ZAxis(::GlobalNamespace::TransformerUtils_ConstrainedAxis  value) ;

/// @brief Method .ctor, addr 0xa48da38, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TransformerUtils_ScaleConstraints() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TransformerUtils_ScaleConstraints", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TransformerUtils_ScaleConstraints(TransformerUtils_ScaleConstraints && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TransformerUtils_ScaleConstraints", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TransformerUtils_ScaleConstraints(TransformerUtils_ScaleConstraints const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16044};

/// @brief Field ConstraintsAreRelative, offset: 0x10, size: 0x1, def value: None
 bool  ___ConstraintsAreRelative;

/// @brief Field XAxis, offset: 0x14, size: 0xc, def value: None
 ::GlobalNamespace::TransformerUtils_ConstrainedAxis  ___XAxis;

/// @brief Field YAxis, offset: 0x20, size: 0xc, def value: None
 ::GlobalNamespace::TransformerUtils_ConstrainedAxis  ___YAxis;

/// @brief Field ZAxis, offset: 0x2c, size: 0xc, def value: None
 ::GlobalNamespace::TransformerUtils_ConstrainedAxis  ___ZAxis;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::TransformerUtils_ScaleConstraints, ___ConstraintsAreRelative) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::TransformerUtils_ScaleConstraints, ___XAxis) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::TransformerUtils_ScaleConstraints, ___YAxis) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::TransformerUtils_ScaleConstraints, ___ZAxis) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::TransformerUtils_ScaleConstraints) == 0x38, "Size mismatch!");

} // namespace end def Oculus::Interaction
// Dependencies Oculus.Interaction.TransformerUtils::ConstrainedAxis, System.Object
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.TransformerUtils/RotationConstraints
class CORDL_TYPE TransformerUtils_RotationConstraints : public ::System::Object {
public:
// Declarations
/// @brief Field XAxis, offset 0x10, size 0xc 
 __declspec(property(get=__cordl_internal_get_XAxis, put=__cordl_internal_set_XAxis)) ::GlobalNamespace::TransformerUtils_ConstrainedAxis  XAxis;

/// @brief Field YAxis, offset 0x1c, size 0xc 
 __declspec(property(get=__cordl_internal_get_YAxis, put=__cordl_internal_set_YAxis)) ::GlobalNamespace::TransformerUtils_ConstrainedAxis  YAxis;

/// @brief Field ZAxis, offset 0x28, size 0xc 
 __declspec(property(get=__cordl_internal_get_ZAxis, put=__cordl_internal_set_ZAxis)) ::GlobalNamespace::TransformerUtils_ConstrainedAxis  ZAxis;

static inline ::Oculus::Interaction::TransformerUtils_RotationConstraints* New_ctor() ;

constexpr ::GlobalNamespace::TransformerUtils_ConstrainedAxis const& __cordl_internal_get_XAxis() const;

constexpr ::GlobalNamespace::TransformerUtils_ConstrainedAxis& __cordl_internal_get_XAxis() ;

constexpr ::GlobalNamespace::TransformerUtils_ConstrainedAxis const& __cordl_internal_get_YAxis() const;

constexpr ::GlobalNamespace::TransformerUtils_ConstrainedAxis& __cordl_internal_get_YAxis() ;

constexpr ::GlobalNamespace::TransformerUtils_ConstrainedAxis const& __cordl_internal_get_ZAxis() const;

constexpr ::GlobalNamespace::TransformerUtils_ConstrainedAxis& __cordl_internal_get_ZAxis() ;

constexpr void __cordl_internal_set_XAxis(::GlobalNamespace::TransformerUtils_ConstrainedAxis  value) ;

constexpr void __cordl_internal_set_YAxis(::GlobalNamespace::TransformerUtils_ConstrainedAxis  value) ;

constexpr void __cordl_internal_set_ZAxis(::GlobalNamespace::TransformerUtils_ConstrainedAxis  value) ;

/// @brief Method .ctor, addr 0xa48e5a0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TransformerUtils_RotationConstraints() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TransformerUtils_RotationConstraints", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TransformerUtils_RotationConstraints(TransformerUtils_RotationConstraints && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TransformerUtils_RotationConstraints", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TransformerUtils_RotationConstraints(TransformerUtils_RotationConstraints const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16043};

/// @brief Field XAxis, offset: 0x10, size: 0xc, def value: None
 ::GlobalNamespace::TransformerUtils_ConstrainedAxis  ___XAxis;

/// @brief Field YAxis, offset: 0x1c, size: 0xc, def value: None
 ::GlobalNamespace::TransformerUtils_ConstrainedAxis  ___YAxis;

/// @brief Field ZAxis, offset: 0x28, size: 0xc, def value: None
 ::GlobalNamespace::TransformerUtils_ConstrainedAxis  ___ZAxis;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::TransformerUtils_RotationConstraints, ___XAxis) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::TransformerUtils_RotationConstraints, ___YAxis) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::TransformerUtils_RotationConstraints, ___ZAxis) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::TransformerUtils_RotationConstraints) == 0x38, "Size mismatch!");

} // namespace end def Oculus::Interaction
// Dependencies Oculus.Interaction.TransformerUtils::ConstrainedAxis, System.Object
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.TransformerUtils/PositionConstraints
class CORDL_TYPE TransformerUtils_PositionConstraints : public ::System::Object {
public:
// Declarations
/// @brief Field ConstraintsAreRelative, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_ConstraintsAreRelative, put=__cordl_internal_set_ConstraintsAreRelative)) bool  ConstraintsAreRelative;

/// @brief Field XAxis, offset 0x14, size 0xc 
 __declspec(property(get=__cordl_internal_get_XAxis, put=__cordl_internal_set_XAxis)) ::GlobalNamespace::TransformerUtils_ConstrainedAxis  XAxis;

/// @brief Field YAxis, offset 0x20, size 0xc 
 __declspec(property(get=__cordl_internal_get_YAxis, put=__cordl_internal_set_YAxis)) ::GlobalNamespace::TransformerUtils_ConstrainedAxis  YAxis;

/// @brief Field ZAxis, offset 0x2c, size 0xc 
 __declspec(property(get=__cordl_internal_get_ZAxis, put=__cordl_internal_set_ZAxis)) ::GlobalNamespace::TransformerUtils_ConstrainedAxis  ZAxis;

static inline ::Oculus::Interaction::TransformerUtils_PositionConstraints* New_ctor() ;

constexpr bool const& __cordl_internal_get_ConstraintsAreRelative() const;

constexpr bool& __cordl_internal_get_ConstraintsAreRelative() ;

constexpr ::GlobalNamespace::TransformerUtils_ConstrainedAxis const& __cordl_internal_get_XAxis() const;

constexpr ::GlobalNamespace::TransformerUtils_ConstrainedAxis& __cordl_internal_get_XAxis() ;

constexpr ::GlobalNamespace::TransformerUtils_ConstrainedAxis const& __cordl_internal_get_YAxis() const;

constexpr ::GlobalNamespace::TransformerUtils_ConstrainedAxis& __cordl_internal_get_YAxis() ;

constexpr ::GlobalNamespace::TransformerUtils_ConstrainedAxis const& __cordl_internal_get_ZAxis() const;

constexpr ::GlobalNamespace::TransformerUtils_ConstrainedAxis& __cordl_internal_get_ZAxis() ;

constexpr void __cordl_internal_set_ConstraintsAreRelative(bool  value) ;

constexpr void __cordl_internal_set_XAxis(::GlobalNamespace::TransformerUtils_ConstrainedAxis  value) ;

constexpr void __cordl_internal_set_YAxis(::GlobalNamespace::TransformerUtils_ConstrainedAxis  value) ;

constexpr void __cordl_internal_set_ZAxis(::GlobalNamespace::TransformerUtils_ConstrainedAxis  value) ;

/// @brief Method .ctor, addr 0xa48d93c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TransformerUtils_PositionConstraints() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TransformerUtils_PositionConstraints", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TransformerUtils_PositionConstraints(TransformerUtils_PositionConstraints && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TransformerUtils_PositionConstraints", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TransformerUtils_PositionConstraints(TransformerUtils_PositionConstraints const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16042};

/// @brief Field ConstraintsAreRelative, offset: 0x10, size: 0x1, def value: None
 bool  ___ConstraintsAreRelative;

/// @brief Field XAxis, offset: 0x14, size: 0xc, def value: None
 ::GlobalNamespace::TransformerUtils_ConstrainedAxis  ___XAxis;

/// @brief Field YAxis, offset: 0x20, size: 0xc, def value: None
 ::GlobalNamespace::TransformerUtils_ConstrainedAxis  ___YAxis;

/// @brief Field ZAxis, offset: 0x2c, size: 0xc, def value: None
 ::GlobalNamespace::TransformerUtils_ConstrainedAxis  ___ZAxis;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::TransformerUtils_PositionConstraints, ___ConstraintsAreRelative) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::TransformerUtils_PositionConstraints, ___XAxis) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::TransformerUtils_PositionConstraints, ___YAxis) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::TransformerUtils_PositionConstraints, ___ZAxis) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::TransformerUtils_PositionConstraints) == 0x38, "Size mismatch!");

} // namespace end def Oculus::Interaction
