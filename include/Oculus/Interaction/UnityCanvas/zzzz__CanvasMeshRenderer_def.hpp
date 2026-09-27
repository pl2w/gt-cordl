#pragma once
// IWYU pragma private; include "Oculus/Interaction/UnityCanvas/CanvasMeshRenderer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CanvasMeshRenderer)
namespace Oculus::Interaction::UnityCanvas {
class CanvasMeshRenderer_Properties;
}
namespace Oculus::Interaction::UnityCanvas {
class CanvasRenderTexture;
}
namespace Oculus::Interaction::UnityCanvas {
struct RenderingMode;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class MeshRenderer;
}
namespace UnityEngine {
class Texture;
}
// Forward declare root types
namespace Oculus::Interaction::UnityCanvas {
class CanvasMeshRenderer;
}
namespace Oculus::Interaction::UnityCanvas {
class CanvasMeshRenderer_Properties;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::UnityCanvas::CanvasMeshRenderer*);
MARK_REF_T(::Oculus::Interaction::UnityCanvas::CanvasMeshRenderer_Properties*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::UnityCanvas::CanvasMeshRenderer*, "Oculus.Interaction.UnityCanvas", "CanvasMeshRenderer");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::UnityCanvas::CanvasMeshRenderer_Properties*, "Oculus.Interaction.UnityCanvas", "CanvasMeshRenderer/Properties");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction::UnityCanvas {
// Is value type: false
// CS Name: Oculus.Interaction.UnityCanvas.CanvasMeshRenderer
class CORDL_TYPE CanvasMeshRenderer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using Properties = ::Oculus::Interaction::UnityCanvas::CanvasMeshRenderer_Properties;

/// @brief Field MainTexShaderID, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_MainTexShaderID, put=setStaticF_MainTexShaderID)) int32_t  MainTexShaderID;

 __declspec(property(get=get_RenderingMode)) ::Oculus::Interaction::UnityCanvas::RenderingMode  RenderingMode;

/// @brief Field _alphaCutoutThreshold, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__alphaCutoutThreshold, put=__cordl_internal_set__alphaCutoutThreshold)) float_t  _alphaCutoutThreshold;

/// @brief Field _canvasRenderTexture, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__canvasRenderTexture, put=__cordl_internal_set__canvasRenderTexture)) ::UnityW<::Oculus::Interaction::UnityCanvas::CanvasRenderTexture>  _canvasRenderTexture;

/// @brief Field _material, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__material, put=__cordl_internal_set__material)) ::UnityW<::UnityEngine::Material>  _material;

/// @brief Field _meshRenderer, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__meshRenderer, put=__cordl_internal_set__meshRenderer)) ::UnityW<::UnityEngine::MeshRenderer>  _meshRenderer;

/// @brief Field _renderingMode, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__renderingMode, put=__cordl_internal_set__renderingMode)) int32_t  _renderingMode;

/// @brief Field _started, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

/// @brief Field _useAlphaToMask, offset 0x34, size 0x1 
 __declspec(property(get=__cordl_internal_get__useAlphaToMask, put=__cordl_internal_set__useAlphaToMask)) bool  _useAlphaToMask;

/// @brief Method GetAlphaCutoutThreshold, addr 0xa490308, size 0x24, virtual true, abstract: false, final false
inline float_t GetAlphaCutoutThreshold() ;

/// @brief Method GetShaderName, addr 0xa4901fc, size 0xa4, virtual true, abstract: false, final false
inline ::StringW GetShaderName() ;

/// @brief Method HandleUpdateRenderTexture, addr 0xa49032c, size 0xf4, virtual true, abstract: false, final false
inline void HandleUpdateRenderTexture(::UnityEngine::Texture*  texture) ;

/// @brief Method InjectAllCanvasMeshRenderer, addr 0xa490788, size 0x30, virtual false, abstract: false, final false
inline void InjectAllCanvasMeshRenderer(::Oculus::Interaction::UnityCanvas::CanvasRenderTexture*  canvasRenderTexture, ::UnityEngine::MeshRenderer*  meshRenderer) ;

/// @brief Method InjectCanvasRenderTexture, addr 0xa4907b8, size 0x8, virtual false, abstract: false, final false
inline void InjectCanvasRenderTexture(::Oculus::Interaction::UnityCanvas::CanvasRenderTexture*  canvasRenderTexture) ;

/// @brief Method InjectMeshRenderer, addr 0xa4907c0, size 0x8, virtual false, abstract: false, final false
inline void InjectMeshRenderer(::UnityEngine::MeshRenderer*  meshRenderer) ;

/// @brief Method InjectOptionalAlphaCutoutThreshold, addr 0xa4907d0, size 0x8, virtual false, abstract: false, final false
inline void InjectOptionalAlphaCutoutThreshold(float_t  alphaCutoutThreshold) ;

/// @brief Method InjectOptionalRenderingMode, addr 0xa4907c8, size 0x8, virtual false, abstract: false, final false
inline void InjectOptionalRenderingMode(::Oculus::Interaction::UnityCanvas::RenderingMode  renderingMode) ;

/// @brief Method InjectOptionalUseAlphaToMask, addr 0xa4907d8, size 0x8, virtual false, abstract: false, final false
inline void InjectOptionalUseAlphaToMask(bool  useAlphaToMask) ;

static inline ::Oculus::Interaction::UnityCanvas::CanvasMeshRenderer* New_ctor() ;

/// @brief Method OnDisable, addr 0xa49062c, size 0x15c, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa49044c, size 0x1e0, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method SetAdditionalProperties, addr 0xa4902a0, size 0x68, virtual true, abstract: false, final false
inline void SetAdditionalProperties(::UnityEngine::MaterialPropertyBlock*  block) ;

/// @brief Method Start, addr 0xa490420, size 0x2c, virtual true, abstract: false, final false
inline void Start() ;

constexpr float_t const& __cordl_internal_get__alphaCutoutThreshold() const;

constexpr float_t& __cordl_internal_get__alphaCutoutThreshold() ;

constexpr ::UnityW<::Oculus::Interaction::UnityCanvas::CanvasRenderTexture> const& __cordl_internal_get__canvasRenderTexture() const;

constexpr ::UnityW<::Oculus::Interaction::UnityCanvas::CanvasRenderTexture>& __cordl_internal_get__canvasRenderTexture() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__material() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__material() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get__meshRenderer() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get__meshRenderer() ;

constexpr int32_t const& __cordl_internal_get__renderingMode() const;

constexpr int32_t& __cordl_internal_get__renderingMode() ;

constexpr bool const& __cordl_internal_get__started() const;

constexpr bool& __cordl_internal_get__started() ;

constexpr bool const& __cordl_internal_get__useAlphaToMask() const;

constexpr bool& __cordl_internal_get__useAlphaToMask() ;

constexpr void __cordl_internal_set__alphaCutoutThreshold(float_t  value) ;

constexpr void __cordl_internal_set__canvasRenderTexture(::UnityW<::Oculus::Interaction::UnityCanvas::CanvasRenderTexture>  value) ;

constexpr void __cordl_internal_set__material(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set__meshRenderer(::UnityW<::UnityEngine::MeshRenderer>  value) ;

constexpr void __cordl_internal_set__renderingMode(int32_t  value) ;

constexpr void __cordl_internal_set__started(bool  value) ;

constexpr void __cordl_internal_set__useAlphaToMask(bool  value) ;

/// @brief Method .ctor, addr 0xa4907e0, size 0x1c, virtual false, abstract: false, final false
inline void _ctor() ;

static inline int32_t getStaticF_MainTexShaderID() ;

/// @brief Method get_RenderingMode, addr 0xa4901f4, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::UnityCanvas::RenderingMode get_RenderingMode() ;

static inline void setStaticF_MainTexShaderID(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CanvasMeshRenderer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CanvasMeshRenderer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CanvasMeshRenderer(CanvasMeshRenderer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CanvasMeshRenderer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CanvasMeshRenderer(CanvasMeshRenderer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16053};

/// [Tooltip("The canvas texture that will be rendered.")]
/// [SerializeField]
/// @brief Field _canvasRenderTexture, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::UnityCanvas::CanvasRenderTexture>  ____canvasRenderTexture;

/// [Tooltip("The mesh renderer that will be driven.")]
/// [SerializeField]
/// @brief Field _meshRenderer, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ____meshRenderer;

/// [Tooltip("Determines the shader used for rendering. For details on these rendering modes, see the Curved Canvas topic in the documentation.")]
/// [SerializeField]
/// @brief Field _renderingMode, offset: 0x30, size: 0x4, def value: None
 int32_t  ____renderingMode;

/// [Tooltip("Requires MSAA. Provides limited transparency useful for anti-aliasing soft edges of UI elements.")]
/// [SerializeField]
/// @brief Field _useAlphaToMask, offset: 0x34, size: 0x1, def value: None
 bool  ____useAlphaToMask;

/// [Tooltip("Select the alpha cutoff used for the cutout rendering.")]
/// [Range(0, 1)]
/// [SerializeField]
/// @brief Field _alphaCutoutThreshold, offset: 0x38, size: 0x4, def value: None
 float_t  ____alphaCutoutThreshold;

/// @brief Field _material, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ____material;

/// @brief Field _started, offset: 0x48, size: 0x1, def value: None
 bool  ____started;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::UnityCanvas::CanvasMeshRenderer, ____canvasRenderTexture) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::UnityCanvas::CanvasMeshRenderer, ____meshRenderer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::UnityCanvas::CanvasMeshRenderer, ____renderingMode) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::UnityCanvas::CanvasMeshRenderer, ____useAlphaToMask) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::UnityCanvas::CanvasMeshRenderer, ____alphaCutoutThreshold) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::UnityCanvas::CanvasMeshRenderer, ____material) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::UnityCanvas::CanvasMeshRenderer, ____started) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::UnityCanvas::CanvasMeshRenderer) == 0x50, "Size mismatch!");

} // namespace end def Oculus::Interaction::UnityCanvas
// Dependencies System.Object
namespace Oculus::Interaction::UnityCanvas {
// Is value type: false
// CS Name: Oculus.Interaction.UnityCanvas.CanvasMeshRenderer/Properties
class CORDL_TYPE CanvasMeshRenderer_Properties : public ::System::Object {
public:
// Declarations
/// @brief Field AlphaCutoutThreshold, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_AlphaCutoutThreshold, put=setStaticF_AlphaCutoutThreshold)) ::StringW  AlphaCutoutThreshold;

/// @brief Field RenderingMode, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_RenderingMode, put=setStaticF_RenderingMode)) ::StringW  RenderingMode;

/// @brief Field UseAlphaToMask, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_UseAlphaToMask, put=setStaticF_UseAlphaToMask)) ::StringW  UseAlphaToMask;

static inline ::StringW getStaticF_AlphaCutoutThreshold() ;

static inline ::StringW getStaticF_RenderingMode() ;

static inline ::StringW getStaticF_UseAlphaToMask() ;

static inline void setStaticF_AlphaCutoutThreshold(::StringW  value) ;

static inline void setStaticF_RenderingMode(::StringW  value) ;

static inline void setStaticF_UseAlphaToMask(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CanvasMeshRenderer_Properties() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CanvasMeshRenderer_Properties", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CanvasMeshRenderer_Properties(CanvasMeshRenderer_Properties && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CanvasMeshRenderer_Properties", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CanvasMeshRenderer_Properties(CanvasMeshRenderer_Properties const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16052};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::UnityCanvas::CanvasMeshRenderer_Properties) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction::UnityCanvas
