#pragma once
// IWYU pragma private; include "Oculus/Interaction/OneGrabSphereTransformer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(OneGrabSphereTransformer)
namespace Oculus::Interaction {
class IGrabbable;
}
namespace Oculus::Interaction {
class ITransformer;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Oculus::Interaction {
class OneGrabSphereTransformer;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::OneGrabSphereTransformer*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::OneGrabSphereTransformer*, "Oculus.Interaction", "OneGrabSphereTransformer");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Pose, UnityEngine.Vector3
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.OneGrabSphereTransformer
class CORDL_TYPE OneGrabSphereTransformer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_MaxAngle, put=set_MaxAngle)) float_t  MaxAngle;

 __declspec(property(get=get_MinAngle, put=set_MinAngle)) float_t  MinAngle;

 __declspec(property(get=get_RadiusToScaleRatio, put=set_RadiusToScaleRatio)) ::UnityEngine::Vector3  RadiusToScaleRatio;

 __declspec(property(get=get_ScaleWithRadius, put=set_ScaleWithRadius)) bool  ScaleWithRadius;

/// @brief Field _grabbable, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__grabbable, put=__cordl_internal_set__grabbable)) ::Oculus::Interaction::IGrabbable*  _grabbable;

/// @brief Field _localToTransform, offset 0x48, size 0x1c 
 __declspec(property(get=__cordl_internal_get__localToTransform, put=__cordl_internal_set__localToTransform)) ::UnityEngine::Pose  _localToTransform;

/// @brief Field _maxAngle, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxAngle, put=__cordl_internal_set__maxAngle)) float_t  _maxAngle;

/// @brief Field _minAngle, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__minAngle, put=__cordl_internal_set__minAngle)) float_t  _minAngle;

/// @brief Field _radiusToScaleRatio, offset 0x34, size 0xc 
 __declspec(property(get=__cordl_internal_get__radiusToScaleRatio, put=__cordl_internal_set__radiusToScaleRatio)) ::UnityEngine::Vector3  _radiusToScaleRatio;

/// @brief Field _scaleWithRadius, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get__scaleWithRadius, put=__cordl_internal_set__scaleWithRadius)) bool  _scaleWithRadius;

/// @brief Field _sphereCenter, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__sphereCenter, put=__cordl_internal_set__sphereCenter)) ::UnityW<::UnityEngine::Transform>  _sphereCenter;

/// @brief Convert operator to "::Oculus::Interaction::ITransformer"
constexpr operator  ::Oculus::Interaction::ITransformer*() noexcept;

/// @brief Method BeginTransform, addr 0xa44bb3c, size 0x248, virtual true, abstract: false, final true
inline void BeginTransform() ;

/// @brief Method ClampMinMax, addr 0xa44ba40, size 0x3c, virtual false, abstract: false, final false
inline void ClampMinMax() ;

/// @brief Method EndTransform, addr 0xa44c4a0, size 0x4, virtual true, abstract: false, final true
inline void EndTransform() ;

/// @brief Method Initialize, addr 0xa44bae8, size 0x54, virtual true, abstract: false, final true
inline void Initialize(::Oculus::Interaction::IGrabbable*  grabbable) ;

static inline ::Oculus::Interaction::OneGrabSphereTransformer* New_ctor() ;

/// @brief Method UpdateTransform, addr 0xa44bd84, size 0x71c, virtual true, abstract: false, final true
inline void UpdateTransform() ;

constexpr ::Oculus::Interaction::IGrabbable* const& __cordl_internal_get__grabbable() const;

constexpr ::Oculus::Interaction::IGrabbable*& __cordl_internal_get__grabbable() ;

constexpr ::UnityEngine::Pose const& __cordl_internal_get__localToTransform() const;

constexpr ::UnityEngine::Pose& __cordl_internal_get__localToTransform() ;

constexpr float_t const& __cordl_internal_get__maxAngle() const;

constexpr float_t& __cordl_internal_get__maxAngle() ;

constexpr float_t const& __cordl_internal_get__minAngle() const;

constexpr float_t& __cordl_internal_get__minAngle() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__radiusToScaleRatio() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__radiusToScaleRatio() ;

constexpr bool const& __cordl_internal_get__scaleWithRadius() const;

constexpr bool& __cordl_internal_get__scaleWithRadius() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__sphereCenter() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__sphereCenter() ;

constexpr void __cordl_internal_set__grabbable(::Oculus::Interaction::IGrabbable*  value) ;

constexpr void __cordl_internal_set__localToTransform(::UnityEngine::Pose  value) ;

constexpr void __cordl_internal_set__maxAngle(float_t  value) ;

constexpr void __cordl_internal_set__minAngle(float_t  value) ;

constexpr void __cordl_internal_set__radiusToScaleRatio(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__scaleWithRadius(bool  value) ;

constexpr void __cordl_internal_set__sphereCenter(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0xa44c4a4, size 0x24, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_MaxAngle, addr 0xa44ba7c, size 0x8, virtual false, abstract: false, final false
inline float_t get_MaxAngle() ;

/// @brief Method get_MinAngle, addr 0xa44b9fc, size 0x8, virtual false, abstract: false, final false
inline float_t get_MinAngle() ;

/// @brief Method get_RadiusToScaleRatio, addr 0xa44bad0, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_RadiusToScaleRatio() ;

/// @brief Method get_ScaleWithRadius, addr 0xa44bac0, size 0x8, virtual false, abstract: false, final false
inline bool get_ScaleWithRadius() ;

/// @brief Convert to "::Oculus::Interaction::ITransformer"
constexpr ::Oculus::Interaction::ITransformer* i___Oculus__Interaction__ITransformer() noexcept;

/// @brief Method set_MaxAngle, addr 0xa44ba84, size 0x3c, virtual false, abstract: false, final false
inline void set_MaxAngle(float_t  value) ;

/// @brief Method set_MinAngle, addr 0xa44ba04, size 0x3c, virtual false, abstract: false, final false
inline void set_MinAngle(float_t  value) ;

/// @brief Method set_RadiusToScaleRatio, addr 0xa44badc, size 0xc, virtual false, abstract: false, final false
inline void set_RadiusToScaleRatio(::UnityEngine::Vector3  value) ;

/// @brief Method set_ScaleWithRadius, addr 0xa44bac8, size 0x8, virtual false, abstract: false, final false
inline void set_ScaleWithRadius(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OneGrabSphereTransformer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OneGrabSphereTransformer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OneGrabSphereTransformer(OneGrabSphereTransformer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OneGrabSphereTransformer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OneGrabSphereTransformer(OneGrabSphereTransformer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15824};

/// [SerializeField]
/// @brief Field _sphereCenter, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____sphereCenter;

/// [SerializeField]
/// [Range(-90, 90)]
/// @brief Field _minAngle, offset: 0x28, size: 0x4, def value: None
 float_t  ____minAngle;

/// [SerializeField]
/// [Range(-90, 90)]
/// @brief Field _maxAngle, offset: 0x2c, size: 0x4, def value: None
 float_t  ____maxAngle;

/// [SerializeField]
/// @brief Field _scaleWithRadius, offset: 0x30, size: 0x1, def value: None
 bool  ____scaleWithRadius;

/// [SerializeField]
/// @brief Field _radiusToScaleRatio, offset: 0x34, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____radiusToScaleRatio;

/// @brief Field _grabbable, offset: 0x40, size: 0x8, def value: None
 ::Oculus::Interaction::IGrabbable*  ____grabbable;

/// @brief Field _localToTransform, offset: 0x48, size: 0x1c, def value: None
 ::UnityEngine::Pose  ____localToTransform;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::OneGrabSphereTransformer, ____sphereCenter) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::OneGrabSphereTransformer, ____minAngle) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::OneGrabSphereTransformer, ____maxAngle) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::OneGrabSphereTransformer, ____scaleWithRadius) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::OneGrabSphereTransformer, ____radiusToScaleRatio) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::OneGrabSphereTransformer, ____grabbable) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::OneGrabSphereTransformer, ____localToTransform) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::OneGrabSphereTransformer) == 0x68, "Size mismatch!");

} // namespace end def Oculus::Interaction
