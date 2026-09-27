#pragma once
// IWYU pragma private; include "Oculus/Interaction/Samples/AnchoredWorldSpaceDistanceScaler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/Samples/zzzz__AnchoredWorldSpaceDistanceScaler_ScalingMode_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(AnchoredWorldSpaceDistanceScaler)
namespace GlobalNamespace {
struct AnchoredWorldSpaceDistanceScaler_ScalingMode;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Oculus::Interaction::Samples {
class AnchoredWorldSpaceDistanceScaler;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Samples::AnchoredWorldSpaceDistanceScaler*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Samples::AnchoredWorldSpaceDistanceScaler*, "Oculus.Interaction.Samples", "AnchoredWorldSpaceDistanceScaler");
// Dependencies Oculus.Interaction.Samples.AnchoredWorldSpaceDistanceScaler::ScalingMode, UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace Oculus::Interaction::Samples {
// Is value type: false
// CS Name: Oculus.Interaction.Samples.AnchoredWorldSpaceDistanceScaler
class CORDL_TYPE AnchoredWorldSpaceDistanceScaler : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using ScalingMode = ::GlobalNamespace::AnchoredWorldSpaceDistanceScaler_ScalingMode;

/// @brief Field _localAnchor, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__localAnchor, put=__cordl_internal_set__localAnchor)) ::UnityW<::UnityEngine::Transform>  _localAnchor;

/// @brief Field _originalCombinedScale, offset 0x58, size 0xc 
 __declspec(property(get=__cordl_internal_get__originalCombinedScale, put=__cordl_internal_set__originalCombinedScale)) ::UnityEngine::Vector3  _originalCombinedScale;

/// @brief Field _originalLocalScale, offset 0x40, size 0xc 
 __declspec(property(get=__cordl_internal_get__originalLocalScale, put=__cordl_internal_set__originalLocalScale)) ::UnityEngine::Vector3  _originalLocalScale;

/// @brief Field _originalParentLocalScale, offset 0x4c, size 0xc 
 __declspec(property(get=__cordl_internal_get__originalParentLocalScale, put=__cordl_internal_set__originalParentLocalScale)) ::UnityEngine::Vector3  _originalParentLocalScale;

/// @brief Field _parentAnchor, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__parentAnchor, put=__cordl_internal_set__parentAnchor)) ::UnityW<::UnityEngine::Transform>  _parentAnchor;

/// @brief Field _parentAnchorOffset, offset 0x34, size 0xc 
 __declspec(property(get=__cordl_internal_get__parentAnchorOffset, put=__cordl_internal_set__parentAnchorOffset)) ::UnityEngine::Vector3  _parentAnchorOffset;

/// @brief Field _scalingMode, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__scalingMode, put=__cordl_internal_set__scalingMode)) ::GlobalNamespace::AnchoredWorldSpaceDistanceScaler_ScalingMode  _scalingMode;

/// @brief Method LateUpdate, addr 0xa43a308, size 0x2f0, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::Oculus::Interaction::Samples::AnchoredWorldSpaceDistanceScaler* New_ctor() ;

/// @brief Method Start, addr 0xa43a258, size 0xb0, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__localAnchor() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__localAnchor() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__originalCombinedScale() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__originalCombinedScale() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__originalLocalScale() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__originalLocalScale() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__originalParentLocalScale() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__originalParentLocalScale() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__parentAnchor() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__parentAnchor() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__parentAnchorOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__parentAnchorOffset() ;

constexpr ::GlobalNamespace::AnchoredWorldSpaceDistanceScaler_ScalingMode const& __cordl_internal_get__scalingMode() const;

constexpr ::GlobalNamespace::AnchoredWorldSpaceDistanceScaler_ScalingMode& __cordl_internal_get__scalingMode() ;

constexpr void __cordl_internal_set__localAnchor(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__originalCombinedScale(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__originalLocalScale(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__originalParentLocalScale(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__parentAnchor(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__parentAnchorOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__scalingMode(::GlobalNamespace::AnchoredWorldSpaceDistanceScaler_ScalingMode  value) ;

/// @brief Method .ctor, addr 0xa43a5f8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AnchoredWorldSpaceDistanceScaler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AnchoredWorldSpaceDistanceScaler", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AnchoredWorldSpaceDistanceScaler(AnchoredWorldSpaceDistanceScaler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AnchoredWorldSpaceDistanceScaler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AnchoredWorldSpaceDistanceScaler(AnchoredWorldSpaceDistanceScaler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28311};

/// [SerializeField]
/// @brief Field _parentAnchor, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____parentAnchor;

/// [SerializeField]
/// @brief Field _localAnchor, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____localAnchor;

/// [SerializeField]
/// [Tooltip("Choose whether content should be scaled as two- or three-dimensional")]
/// @brief Field _scalingMode, offset: 0x30, size: 0x4, def value: None
 ::GlobalNamespace::AnchoredWorldSpaceDistanceScaler_ScalingMode  ____scalingMode;

/// @brief Field _parentAnchorOffset, offset: 0x34, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____parentAnchorOffset;

/// @brief Field _originalLocalScale, offset: 0x40, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____originalLocalScale;

/// @brief Field _originalParentLocalScale, offset: 0x4c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____originalParentLocalScale;

/// @brief Field _originalCombinedScale, offset: 0x58, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____originalCombinedScale;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Samples::AnchoredWorldSpaceDistanceScaler, ____parentAnchor) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::AnchoredWorldSpaceDistanceScaler, ____localAnchor) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::AnchoredWorldSpaceDistanceScaler, ____scalingMode) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::AnchoredWorldSpaceDistanceScaler, ____parentAnchorOffset) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::AnchoredWorldSpaceDistanceScaler, ____originalLocalScale) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::AnchoredWorldSpaceDistanceScaler, ____originalParentLocalScale) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::AnchoredWorldSpaceDistanceScaler, ____originalCombinedScale) == 0x58, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Samples::AnchoredWorldSpaceDistanceScaler) == 0x68, "Size mismatch!");

} // namespace end def Oculus::Interaction::Samples
