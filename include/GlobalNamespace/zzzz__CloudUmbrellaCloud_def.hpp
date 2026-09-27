#pragma once
// IWYU pragma private; include "GlobalNamespace/CloudUmbrellaCloud.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CloudUmbrellaCloud)
namespace GlobalNamespace {
class UmbrellaItem;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class Renderer;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class CloudUmbrellaCloud;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CloudUmbrellaCloud*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CloudUmbrellaCloud*, "", "CloudUmbrellaCloud");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: CloudUmbrellaCloud
class CORDL_TYPE CloudUmbrellaCloud : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field cloudRenderer, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_cloudRenderer, put=__cordl_internal_set_cloudRenderer)) ::UnityW<::UnityEngine::Renderer>  cloudRenderer;

/// @brief Field cloudRotateXform, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_cloudRotateXform, put=__cordl_internal_set_cloudRotateXform)) ::UnityW<::UnityEngine::Transform>  cloudRotateXform;

/// @brief Field cloudScaleXform, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_cloudScaleXform, put=__cordl_internal_set_cloudScaleXform)) ::UnityW<::UnityEngine::Transform>  cloudScaleXform;

/// @brief Field rendererOn, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_rendererOn, put=__cordl_internal_set_rendererOn)) bool  rendererOn;

/// @brief Field scaleCurve, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_scaleCurve, put=__cordl_internal_set_scaleCurve)) ::UnityEngine::AnimationCurve*  scaleCurve;

/// @brief Field umbrella, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_umbrella, put=__cordl_internal_set_umbrella)) ::UnityW<::GlobalNamespace::UmbrellaItem>  umbrella;

/// @brief Field umbrellaXform, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_umbrellaXform, put=__cordl_internal_set_umbrellaXform)) ::UnityW<::UnityEngine::Transform>  umbrellaXform;

/// @brief Method Awake, addr 0x5e05570, size 0x5c, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method LateUpdate, addr 0x5e055cc, size 0x164, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::GlobalNamespace::CloudUmbrellaCloud* New_ctor() ;

constexpr ::UnityW<::UnityEngine::Renderer> const& __cordl_internal_get_cloudRenderer() const;

constexpr ::UnityW<::UnityEngine::Renderer>& __cordl_internal_get_cloudRenderer() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_cloudRotateXform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_cloudRotateXform() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_cloudScaleXform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_cloudScaleXform() ;

constexpr bool const& __cordl_internal_get_rendererOn() const;

constexpr bool& __cordl_internal_get_rendererOn() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_scaleCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_scaleCurve() ;

constexpr ::UnityW<::GlobalNamespace::UmbrellaItem> const& __cordl_internal_get_umbrella() const;

constexpr ::UnityW<::GlobalNamespace::UmbrellaItem>& __cordl_internal_get_umbrella() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_umbrellaXform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_umbrellaXform() ;

constexpr void __cordl_internal_set_cloudRenderer(::UnityW<::UnityEngine::Renderer>  value) ;

constexpr void __cordl_internal_set_cloudRotateXform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_cloudScaleXform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_rendererOn(bool  value) ;

constexpr void __cordl_internal_set_scaleCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_umbrella(::UnityW<::GlobalNamespace::UmbrellaItem>  value) ;

constexpr void __cordl_internal_set_umbrellaXform(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x5e05730, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CloudUmbrellaCloud() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CloudUmbrellaCloud", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CloudUmbrellaCloud(CloudUmbrellaCloud && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CloudUmbrellaCloud", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CloudUmbrellaCloud(CloudUmbrellaCloud const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{523};

/// @brief Field kHideAtScale offset 0xffffffff size 0x4
static constexpr float_t  kHideAtScale{static_cast<float_t>(0.1f)};

/// @brief Field kHideAtScaleTolerance offset 0xffffffff size 0x4
static constexpr float_t  kHideAtScaleTolerance{static_cast<float_t>(0.01f)};

/// @brief Field umbrella, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::UmbrellaItem>  ___umbrella;

/// @brief Field cloudRotateXform, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___cloudRotateXform;

/// @brief Field cloudRenderer, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Renderer>  ___cloudRenderer;

/// @brief Field scaleCurve, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___scaleCurve;

/// @brief Field rendererOn, offset: 0x40, size: 0x1, def value: None
 bool  ___rendererOn;

/// @brief Field umbrellaXform, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___umbrellaXform;

/// @brief Field cloudScaleXform, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___cloudScaleXform;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CloudUmbrellaCloud, ___umbrella) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CloudUmbrellaCloud, ___cloudRotateXform) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CloudUmbrellaCloud, ___cloudRenderer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CloudUmbrellaCloud, ___scaleCurve) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CloudUmbrellaCloud, ___rendererOn) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CloudUmbrellaCloud, ___umbrellaXform) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CloudUmbrellaCloud, ___cloudScaleXform) == 0x50, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CloudUmbrellaCloud) == 0x58, "Size mismatch!");

} // namespace end def GlobalNamespace
