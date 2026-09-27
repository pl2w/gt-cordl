#pragma once
// IWYU pragma private; include "Oculus/Interaction/Samples/OpacityFromAnimatedTransformController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(OpacityFromAnimatedTransformController)
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class Renderer;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Oculus::Interaction::Samples {
class OpacityFromAnimatedTransformController;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Samples::OpacityFromAnimatedTransformController*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Samples::OpacityFromAnimatedTransformController*, "Oculus.Interaction.Samples", "OpacityFromAnimatedTransformController");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction::Samples {
// Is value type: false
// CS Name: Oculus.Interaction.Samples.OpacityFromAnimatedTransformController
class CORDL_TYPE OpacityFromAnimatedTransformController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _isSkinnedMeshRenderer, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get__isSkinnedMeshRenderer, put=__cordl_internal_set__isSkinnedMeshRenderer)) bool  _isSkinnedMeshRenderer;

/// @brief Field _materialProperties, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__materialProperties, put=__cordl_internal_set__materialProperties)) ::UnityEngine::MaterialPropertyBlock*  _materialProperties;

/// @brief Field _opacityTransform, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__opacityTransform, put=__cordl_internal_set__opacityTransform)) ::UnityW<::UnityEngine::Transform>  _opacityTransform;

/// @brief Field _renderer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__renderer, put=__cordl_internal_set__renderer)) ::UnityW<::UnityEngine::Renderer>  _renderer;

static inline ::Oculus::Interaction::Samples::OpacityFromAnimatedTransformController* New_ctor() ;

/// @brief Method Start, addr 0xa43bb40, size 0xc0, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0xa43bc00, size 0xc0, virtual false, abstract: false, final false
inline void Update() ;

constexpr bool const& __cordl_internal_get__isSkinnedMeshRenderer() const;

constexpr bool& __cordl_internal_get__isSkinnedMeshRenderer() ;

constexpr ::UnityEngine::MaterialPropertyBlock* const& __cordl_internal_get__materialProperties() const;

constexpr ::UnityEngine::MaterialPropertyBlock*& __cordl_internal_get__materialProperties() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__opacityTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__opacityTransform() ;

constexpr ::UnityW<::UnityEngine::Renderer> const& __cordl_internal_get__renderer() const;

constexpr ::UnityW<::UnityEngine::Renderer>& __cordl_internal_get__renderer() ;

constexpr void __cordl_internal_set__isSkinnedMeshRenderer(bool  value) ;

constexpr void __cordl_internal_set__materialProperties(::UnityEngine::MaterialPropertyBlock*  value) ;

constexpr void __cordl_internal_set__opacityTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__renderer(::UnityW<::UnityEngine::Renderer>  value) ;

/// @brief Method .ctor, addr 0xa43bcc0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OpacityFromAnimatedTransformController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OpacityFromAnimatedTransformController", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OpacityFromAnimatedTransformController(OpacityFromAnimatedTransformController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OpacityFromAnimatedTransformController", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OpacityFromAnimatedTransformController(OpacityFromAnimatedTransformController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28316};

/// [SerializeField]
/// [Tooltip("The renderer to which the opacity should be applied")]
/// @brief Field _renderer, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Renderer>  ____renderer;

/// [SerializeField]
/// [Tooltip("The animation-controlled transform whose X magnitude will be applied to the renderer as `_Opacity`")]
/// @brief Field _opacityTransform, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____opacityTransform;

/// @brief Field _materialProperties, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::MaterialPropertyBlock*  ____materialProperties;

/// @brief Field _isSkinnedMeshRenderer, offset: 0x38, size: 0x1, def value: None
 bool  ____isSkinnedMeshRenderer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Samples::OpacityFromAnimatedTransformController, ____renderer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::OpacityFromAnimatedTransformController, ____opacityTransform) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::OpacityFromAnimatedTransformController, ____materialProperties) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::OpacityFromAnimatedTransformController, ____isSkinnedMeshRenderer) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Samples::OpacityFromAnimatedTransformController) == 0x40, "Size mismatch!");

} // namespace end def Oculus::Interaction::Samples
