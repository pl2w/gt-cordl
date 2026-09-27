#pragma once
// IWYU pragma private; include "Oculus/Interaction/SkeletonDebugGizmos.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/zzzz__SkeletonDebugGizmos_VisibilityFlags_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SkeletonDebugGizmos)
namespace GlobalNamespace {
struct SkeletonDebugGizmos_VisibilityFlags;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Pose;
}
// Forward declare root types
namespace Oculus::Interaction {
class SkeletonDebugGizmos;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::SkeletonDebugGizmos*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::SkeletonDebugGizmos*, "Oculus.Interaction", "SkeletonDebugGizmos");
// Dependencies Oculus.Interaction.SkeletonDebugGizmos::VisibilityFlags, UnityEngine.Color, UnityEngine.MonoBehaviour
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.SkeletonDebugGizmos
class CORDL_TYPE SkeletonDebugGizmos : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using VisibilityFlags = ::GlobalNamespace::SkeletonDebugGizmos_VisibilityFlags;

 __declspec(property(get=get_BoneColor, put=set_BoneColor)) ::UnityEngine::Color  BoneColor;

 __declspec(property(get=get_HasNegativeScale)) bool  HasNegativeScale;

 __declspec(property(get=get_JointColor, put=set_JointColor)) ::UnityEngine::Color  JointColor;

 __declspec(property(get=get_LineWidth)) float_t  LineWidth;

 __declspec(property(get=get_Radius, put=set_Radius)) float_t  Radius;

 __declspec(property(get=get_Visibility, put=set_Visibility)) ::GlobalNamespace::SkeletonDebugGizmos_VisibilityFlags  Visibility;

/// @brief Field _boneColor, offset 0x34, size 0x10 
 __declspec(property(get=__cordl_internal_get__boneColor, put=__cordl_internal_set__boneColor)) ::UnityEngine::Color  _boneColor;

/// @brief Field _jointColor, offset 0x24, size 0x10 
 __declspec(property(get=__cordl_internal_get__jointColor, put=__cordl_internal_set__jointColor)) ::UnityEngine::Color  _jointColor;

/// @brief Field _radius, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get__radius, put=__cordl_internal_set__radius)) float_t  _radius;

/// @brief Field _visibility, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__visibility, put=__cordl_internal_set__visibility)) ::GlobalNamespace::SkeletonDebugGizmos_VisibilityFlags  _visibility;

/// @brief Method Draw, addr 0xa3fff0c, size 0x1d8, virtual false, abstract: false, final false
inline void Draw(int32_t  joint, ::GlobalNamespace::SkeletonDebugGizmos_VisibilityFlags  visibility) ;

static inline ::Oculus::Interaction::SkeletonDebugGizmos* New_ctor() ;

/// @brief Method TryGetJointPose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool TryGetJointPose(int32_t  jointId, ::by_ref<::UnityEngine::Pose>  pose) ;

/// @brief Method TryGetParentJointId, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool TryGetParentJointId(int32_t  jointId, ::by_ref<int32_t>  parent) ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__boneColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__boneColor() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__jointColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__jointColor() ;

constexpr float_t const& __cordl_internal_get__radius() const;

constexpr float_t& __cordl_internal_get__radius() ;

constexpr ::GlobalNamespace::SkeletonDebugGizmos_VisibilityFlags const& __cordl_internal_get__visibility() const;

constexpr ::GlobalNamespace::SkeletonDebugGizmos_VisibilityFlags& __cordl_internal_get__visibility() ;

constexpr void __cordl_internal_set__boneColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__jointColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__radius(float_t  value) ;

constexpr void __cordl_internal_set__visibility(::GlobalNamespace::SkeletonDebugGizmos_VisibilityFlags  value) ;

/// @brief Method .ctor, addr 0xa4000e4, size 0x44, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_BoneColor, addr 0xa3ffe6c, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_BoneColor() ;

/// @brief Method get_HasNegativeScale, addr 0xa3ffe94, size 0x78, virtual false, abstract: false, final false
inline bool get_HasNegativeScale() ;

/// @brief Method get_JointColor, addr 0xa3ffe54, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_JointColor() ;

/// @brief Method get_LineWidth, addr 0xa3ffe84, size 0x10, virtual false, abstract: false, final false
inline float_t get_LineWidth() ;

/// @brief Method get_Radius, addr 0xa3ffe34, size 0x8, virtual false, abstract: false, final false
inline float_t get_Radius() ;

/// @brief Method get_Visibility, addr 0xa3ffe44, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::SkeletonDebugGizmos_VisibilityFlags get_Visibility() ;

/// @brief Method set_BoneColor, addr 0xa3ffe78, size 0xc, virtual false, abstract: false, final false
inline void set_BoneColor(::UnityEngine::Color  value) ;

/// @brief Method set_JointColor, addr 0xa3ffe60, size 0xc, virtual false, abstract: false, final false
inline void set_JointColor(::UnityEngine::Color  value) ;

/// @brief Method set_Radius, addr 0xa3ffe3c, size 0x8, virtual false, abstract: false, final false
inline void set_Radius(float_t  value) ;

/// @brief Method set_Visibility, addr 0xa3ffe4c, size 0x8, virtual false, abstract: false, final false
inline void set_Visibility(::GlobalNamespace::SkeletonDebugGizmos_VisibilityFlags  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SkeletonDebugGizmos() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SkeletonDebugGizmos", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SkeletonDebugGizmos(SkeletonDebugGizmos && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SkeletonDebugGizmos", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SkeletonDebugGizmos(SkeletonDebugGizmos const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15693};

/// [Tooltip("Which components of the skeleton will be visualized.")]
/// [SerializeField]
/// @brief Field _visibility, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::SkeletonDebugGizmos_VisibilityFlags  ____visibility;

/// [Tooltip("The joint debug spheres will be drawn with this color.")]
/// [SerializeField]
/// @brief Field _jointColor, offset: 0x24, size: 0x10, def value: None
 ::UnityEngine::Color  ____jointColor;

/// [Tooltip("The bone connecting lines will be drawn with this color.")]
/// [SerializeField]
/// @brief Field _boneColor, offset: 0x34, size: 0x10, def value: None
 ::UnityEngine::Color  ____boneColor;

/// [Tooltip("The radius of the joint spheres and the thickness of the bone and axis lines.")]
/// [SerializeField]
/// @brief Field _radius, offset: 0x44, size: 0x4, def value: None
 float_t  ____radius;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::SkeletonDebugGizmos, ____visibility) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::SkeletonDebugGizmos, ____jointColor) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::SkeletonDebugGizmos, ____boneColor) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::SkeletonDebugGizmos, ____radius) == 0x44, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::SkeletonDebugGizmos) == 0x48, "Size mismatch!");

} // namespace end def Oculus::Interaction
