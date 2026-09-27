#pragma once
// IWYU pragma private; include "Oculus/Interaction/PoseDetection/Debug/TransformFeatureVectorDebugVisual.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/PoseDetection/zzzz__TransformFeature_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TransformFeatureVectorDebugVisual)
namespace Oculus::Interaction::Input {
class IHand;
}
namespace Oculus::Interaction::PoseDetection::Debug {
class TransformFeatureVectorDebugParentVisual;
}
namespace Oculus::Interaction::PoseDetection {
struct TransformFeature;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class LineRenderer;
}
// Forward declare root types
namespace Oculus::Interaction::PoseDetection::Debug {
class TransformFeatureVectorDebugVisual;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::PoseDetection::Debug::TransformFeatureVectorDebugVisual*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::PoseDetection::Debug::TransformFeatureVectorDebugVisual*, "Oculus.Interaction.PoseDetection.Debug", "TransformFeatureVectorDebugVisual");
// Dependencies Oculus.Interaction.PoseDetection.TransformFeature, UnityEngine.MonoBehaviour
namespace Oculus::Interaction::PoseDetection::Debug {
// Is value type: false
// CS Name: Oculus.Interaction.PoseDetection.Debug.TransformFeatureVectorDebugVisual
class CORDL_TYPE TransformFeatureVectorDebugVisual : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_Hand, put=set_Hand)) ::Oculus::Interaction::Input::IHand*  Hand;

/// @brief Field <Hand>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__Hand_k__BackingField, put=__cordl_internal_set__Hand_k__BackingField)) ::Oculus::Interaction::Input::IHand*  _Hand_k__BackingField;

/// @brief Field _feature, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get__feature, put=__cordl_internal_set__feature)) ::Oculus::Interaction::PoseDetection::TransformFeature  _feature;

/// @brief Field _isInitialized, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get__isInitialized, put=__cordl_internal_set__isInitialized)) bool  _isInitialized;

/// @brief Field _lineRenderer, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__lineRenderer, put=__cordl_internal_set__lineRenderer)) ::UnityW<::UnityEngine::LineRenderer>  _lineRenderer;

/// @brief Field _lineScale, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__lineScale, put=__cordl_internal_set__lineScale)) float_t  _lineScale;

/// @brief Field _lineWidth, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__lineWidth, put=__cordl_internal_set__lineWidth)) float_t  _lineWidth;

/// @brief Field _parent, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__parent, put=__cordl_internal_set__parent)) ::UnityW<::Oculus::Interaction::PoseDetection::Debug::TransformFeatureVectorDebugParentVisual>  _parent;

/// @brief Field _trackingHandVector, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get__trackingHandVector, put=__cordl_internal_set__trackingHandVector)) bool  _trackingHandVector;

/// @brief Method Awake, addr 0xa4b11c8, size 0x1c, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method Initialize, addr 0xa4b10d8, size 0xd8, virtual false, abstract: false, final false
inline void Initialize(::Oculus::Interaction::PoseDetection::TransformFeature  feature, bool  trackingHandVector, ::Oculus::Interaction::PoseDetection::Debug::TransformFeatureVectorDebugParentVisual*  parent, ::UnityEngine::Color  lineColor) ;

static inline ::Oculus::Interaction::PoseDetection::Debug::TransformFeatureVectorDebugVisual* New_ctor() ;

/// @brief Method Update, addr 0xa4b11e4, size 0x1f0, virtual true, abstract: false, final false
inline void Update() ;

constexpr ::Oculus::Interaction::Input::IHand* const& __cordl_internal_get__Hand_k__BackingField() const;

constexpr ::Oculus::Interaction::Input::IHand*& __cordl_internal_get__Hand_k__BackingField() ;

constexpr ::Oculus::Interaction::PoseDetection::TransformFeature const& __cordl_internal_get__feature() const;

constexpr ::Oculus::Interaction::PoseDetection::TransformFeature& __cordl_internal_get__feature() ;

constexpr bool const& __cordl_internal_get__isInitialized() const;

constexpr bool& __cordl_internal_get__isInitialized() ;

constexpr ::UnityW<::UnityEngine::LineRenderer> const& __cordl_internal_get__lineRenderer() const;

constexpr ::UnityW<::UnityEngine::LineRenderer>& __cordl_internal_get__lineRenderer() ;

constexpr float_t const& __cordl_internal_get__lineScale() const;

constexpr float_t& __cordl_internal_get__lineScale() ;

constexpr float_t const& __cordl_internal_get__lineWidth() const;

constexpr float_t& __cordl_internal_get__lineWidth() ;

constexpr ::UnityW<::Oculus::Interaction::PoseDetection::Debug::TransformFeatureVectorDebugParentVisual> const& __cordl_internal_get__parent() const;

constexpr ::UnityW<::Oculus::Interaction::PoseDetection::Debug::TransformFeatureVectorDebugParentVisual>& __cordl_internal_get__parent() ;

constexpr bool const& __cordl_internal_get__trackingHandVector() const;

constexpr bool& __cordl_internal_get__trackingHandVector() ;

constexpr void __cordl_internal_set__Hand_k__BackingField(::Oculus::Interaction::Input::IHand*  value) ;

constexpr void __cordl_internal_set__feature(::Oculus::Interaction::PoseDetection::TransformFeature  value) ;

constexpr void __cordl_internal_set__isInitialized(bool  value) ;

constexpr void __cordl_internal_set__lineRenderer(::UnityW<::UnityEngine::LineRenderer>  value) ;

constexpr void __cordl_internal_set__lineScale(float_t  value) ;

constexpr void __cordl_internal_set__lineWidth(float_t  value) ;

constexpr void __cordl_internal_set__parent(::UnityW<::Oculus::Interaction::PoseDetection::Debug::TransformFeatureVectorDebugParentVisual>  value) ;

constexpr void __cordl_internal_set__trackingHandVector(bool  value) ;

/// @brief Method .ctor, addr 0xa4b13d4, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_Hand, addr 0xa4b11b8, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Input::IHand* get_Hand() ;

/// [CompilerGenerated]
/// @brief Method set_Hand, addr 0xa4b11c0, size 0x8, virtual false, abstract: false, final false
inline void set_Hand(::Oculus::Interaction::Input::IHand*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TransformFeatureVectorDebugVisual() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TransformFeatureVectorDebugVisual", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TransformFeatureVectorDebugVisual(TransformFeatureVectorDebugVisual && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TransformFeatureVectorDebugVisual", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TransformFeatureVectorDebugVisual(TransformFeatureVectorDebugVisual const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16198};

/// [CompilerGenerated]
/// @brief Field <Hand>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::Oculus::Interaction::Input::IHand*  ____Hand_k__BackingField;

/// [SerializeField]
/// @brief Field _lineRenderer, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::LineRenderer>  ____lineRenderer;

/// [SerializeField]
/// @brief Field _lineWidth, offset: 0x30, size: 0x4, def value: None
 float_t  ____lineWidth;

/// [SerializeField]
/// @brief Field _lineScale, offset: 0x34, size: 0x4, def value: None
 float_t  ____lineScale;

/// @brief Field _isInitialized, offset: 0x38, size: 0x1, def value: None
 bool  ____isInitialized;

/// @brief Field _feature, offset: 0x3c, size: 0x4, def value: None
 ::Oculus::Interaction::PoseDetection::TransformFeature  ____feature;

/// @brief Field _parent, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::PoseDetection::Debug::TransformFeatureVectorDebugParentVisual>  ____parent;

/// @brief Field _trackingHandVector, offset: 0x48, size: 0x1, def value: None
 bool  ____trackingHandVector;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::PoseDetection::Debug::TransformFeatureVectorDebugVisual, ____Hand_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::Debug::TransformFeatureVectorDebugVisual, ____lineRenderer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::Debug::TransformFeatureVectorDebugVisual, ____lineWidth) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::Debug::TransformFeatureVectorDebugVisual, ____lineScale) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::Debug::TransformFeatureVectorDebugVisual, ____isInitialized) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::Debug::TransformFeatureVectorDebugVisual, ____feature) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::Debug::TransformFeatureVectorDebugVisual, ____parent) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::Debug::TransformFeatureVectorDebugVisual, ____trackingHandVector) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::PoseDetection::Debug::TransformFeatureVectorDebugVisual) == 0x50, "Size mismatch!");

} // namespace end def Oculus::Interaction::PoseDetection::Debug
