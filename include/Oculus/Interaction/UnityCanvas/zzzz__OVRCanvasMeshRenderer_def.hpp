#pragma once
// IWYU pragma private; include "Oculus/Interaction/UnityCanvas/OVRCanvasMeshRenderer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/UnityCanvas/zzzz__CanvasMeshRenderer_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(OVRCanvasMeshRenderer)
namespace GlobalNamespace {
struct OVROverlay_OverlayShape;
}
namespace GlobalNamespace {
class OVROverlay;
}
namespace Oculus::Interaction::UnityCanvas {
class CanvasMesh;
}
namespace Oculus::Interaction::UnityCanvas {
class CanvasRenderTexture;
}
namespace Oculus::Interaction::UnityCanvas {
class OVRCanvasMeshRenderer_Properties;
}
namespace Oculus::Interaction::UnityCanvas {
struct OVRRenderingMode;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class MeshRenderer;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Oculus::Interaction::UnityCanvas {
class OVRCanvasMeshRenderer;
}
namespace Oculus::Interaction::UnityCanvas {
class OVRCanvasMeshRenderer_Properties;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer*);
MARK_REF_T(::Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer_Properties*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer*, "Oculus.Interaction.UnityCanvas", "OVRCanvasMeshRenderer");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer_Properties*, "Oculus.Interaction.UnityCanvas", "OVRCanvasMeshRenderer/Properties");
// [Feature((Meta.XR.Util.Feature)6)]
// Dependencies Oculus.Interaction.UnityCanvas.CanvasMeshRenderer, UnityEngine.Vector3
namespace Oculus::Interaction::UnityCanvas {
// Is value type: false
// CS Name: Oculus.Interaction.UnityCanvas.OVRCanvasMeshRenderer
class CORDL_TYPE OVRCanvasMeshRenderer : public ::Oculus::Interaction::UnityCanvas::CanvasMeshRenderer {
public:
// Declarations
using Properties = ::Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer_Properties;

 __declspec(property(get=get_RenderingMode)) ::Oculus::Interaction::UnityCanvas::OVRRenderingMode  RenderingMode;

 __declspec(property(get=get_ShouldUseOVROverlay)) bool  ShouldUseOVROverlay;

/// @brief Field _canvasMesh, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__canvasMesh, put=__cordl_internal_set__canvasMesh)) ::UnityW<::Oculus::Interaction::UnityCanvas::CanvasMesh>  _canvasMesh;

/// @brief Field _doUnderlayAntiAliasing, offset 0x65, size 0x1 
 __declspec(property(get=__cordl_internal_get__doUnderlayAntiAliasing, put=__cordl_internal_set__doUnderlayAntiAliasing)) bool  _doUnderlayAntiAliasing;

/// @brief Field _emulateWhileInEditor, offset 0x66, size 0x1 
 __declspec(property(get=__cordl_internal_get__emulateWhileInEditor, put=__cordl_internal_set__emulateWhileInEditor)) bool  _emulateWhileInEditor;

/// @brief Field _enableSuperSampling, offset 0x64, size 0x1 
 __declspec(property(get=__cordl_internal_get__enableSuperSampling, put=__cordl_internal_set__enableSuperSampling)) bool  _enableSuperSampling;

/// @brief Field _overlay, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__overlay, put=__cordl_internal_set__overlay)) ::UnityW<::GlobalNamespace::OVROverlay>  _overlay;

/// @brief Field _runtimeOffset, offset 0x58, size 0xc 
 __declspec(property(get=__cordl_internal_get__runtimeOffset, put=__cordl_internal_set__runtimeOffset)) ::UnityEngine::Vector3  _runtimeOffset;

/// @brief Method CreateChildObject, addr 0xa41ac78, size 0x1a0, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> CreateChildObject(::StringW  name) ;

/// @brief Method GetAlphaCutoutThreshold, addr 0xa41a584, size 0x44, virtual true, abstract: false, final false
inline float_t GetAlphaCutoutThreshold() ;

/// @brief Method GetOverlayParameters, addr 0xa41a968, size 0x278, virtual false, abstract: false, final false
inline bool GetOverlayParameters(::by_ref<::GlobalNamespace::OVROverlay_OverlayShape>  shape, ::by_ref<::UnityEngine::Vector3>  position, ::by_ref<::UnityEngine::Vector3>  scale) ;

/// @brief Method GetShaderName, addr 0xa41a4d4, size 0xb0, virtual true, abstract: false, final false
inline ::StringW GetShaderName() ;

/// @brief Method HandleUpdateRenderTexture, addr 0xa41a5c8, size 0x2c, virtual true, abstract: false, final false
inline void HandleUpdateRenderTexture(::UnityEngine::Texture*  texture) ;

/// @brief Method InjectAllOVRCanvasMeshRenderer, addr 0xa41ae18, size 0x30, virtual false, abstract: false, final false
inline void InjectAllOVRCanvasMeshRenderer(::Oculus::Interaction::UnityCanvas::CanvasRenderTexture*  canvasRenderTexture, ::UnityEngine::MeshRenderer*  meshRenderer, ::Oculus::Interaction::UnityCanvas::CanvasMesh*  canvasMesh) ;

/// @brief Method InjectCanvasMesh, addr 0xa41ae48, size 0x8, virtual false, abstract: false, final false
inline void InjectCanvasMesh(::Oculus::Interaction::UnityCanvas::CanvasMesh*  canvasMesh) ;

/// @brief Method InjectOptionalDoUnderlayAntiAliasing, addr 0xa41ae58, size 0x8, virtual false, abstract: false, final false
inline void InjectOptionalDoUnderlayAntiAliasing(bool  doUnderlayAntiAliasing) ;

/// @brief Method InjectOptionalEnableSuperSampling, addr 0xa41ae60, size 0x8, virtual false, abstract: false, final false
inline void InjectOptionalEnableSuperSampling(bool  enableSuperSampling) ;

/// @brief Method InjectOptionalRenderingMode, addr 0xa41ae50, size 0x8, virtual false, abstract: false, final false
inline void InjectOptionalRenderingMode(::Oculus::Interaction::UnityCanvas::OVRRenderingMode  ovrRenderingMode) ;

static inline ::Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer* New_ctor() ;

/// @brief Method Start, addr 0xa41abe0, size 0x98, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method UpdateOverlay, addr 0xa41a5f4, size 0x374, virtual false, abstract: false, final false
inline void UpdateOverlay(::UnityEngine::Texture*  texture) ;

/// @brief Method UseEditorEmulation, addr 0xa41a464, size 0x70, virtual false, abstract: false, final false
inline bool UseEditorEmulation() ;

/// [CompilerGenerated]
/// @brief Method <Start>b__15_0, addr 0xa41aed4, size 0x8, virtual false, abstract: false, final false
inline void _Start_b__15_0() ;

constexpr ::UnityW<::Oculus::Interaction::UnityCanvas::CanvasMesh> const& __cordl_internal_get__canvasMesh() const;

constexpr ::UnityW<::Oculus::Interaction::UnityCanvas::CanvasMesh>& __cordl_internal_get__canvasMesh() ;

constexpr bool const& __cordl_internal_get__doUnderlayAntiAliasing() const;

constexpr bool& __cordl_internal_get__doUnderlayAntiAliasing() ;

constexpr bool const& __cordl_internal_get__emulateWhileInEditor() const;

constexpr bool& __cordl_internal_get__emulateWhileInEditor() ;

constexpr bool const& __cordl_internal_get__enableSuperSampling() const;

constexpr bool& __cordl_internal_get__enableSuperSampling() ;

constexpr ::UnityW<::GlobalNamespace::OVROverlay> const& __cordl_internal_get__overlay() const;

constexpr ::UnityW<::GlobalNamespace::OVROverlay>& __cordl_internal_get__overlay() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__runtimeOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__runtimeOffset() ;

constexpr void __cordl_internal_set__canvasMesh(::UnityW<::Oculus::Interaction::UnityCanvas::CanvasMesh>  value) ;

constexpr void __cordl_internal_set__doUnderlayAntiAliasing(bool  value) ;

constexpr void __cordl_internal_set__emulateWhileInEditor(bool  value) ;

constexpr void __cordl_internal_set__enableSuperSampling(bool  value) ;

constexpr void __cordl_internal_set__overlay(::UnityW<::GlobalNamespace::OVROverlay>  value) ;

constexpr void __cordl_internal_set__runtimeOffset(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0xa41ae68, size 0x6c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_RenderingMode, addr 0xa41a42c, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::UnityCanvas::OVRRenderingMode get_RenderingMode() ;

/// @brief Method get_ShouldUseOVROverlay, addr 0xa41a434, size 0x30, virtual false, abstract: false, final false
inline bool get_ShouldUseOVROverlay() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRCanvasMeshRenderer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRCanvasMeshRenderer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRCanvasMeshRenderer(OVRCanvasMeshRenderer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRCanvasMeshRenderer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRCanvasMeshRenderer(OVRCanvasMeshRenderer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31125};

/// [SerializeField]
/// @brief Field _canvasMesh, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::UnityCanvas::CanvasMesh>  ____canvasMesh;

/// [Tooltip("If non-zero it will cause the position of the overlay to be offset by this amount at runtime, while the renderer will remain where it was at edit time. This can be used to prevent the two representations from overlapping.")]
/// [SerializeField]
/// @brief Field _runtimeOffset, offset: 0x58, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____runtimeOffset;

/// [Tooltip("Uses a more expensive image sampling technique for improved quality at the cost of performance.")]
/// [SerializeField]
/// @brief Field _enableSuperSampling, offset: 0x64, size: 0x1, def value: None
 bool  ____enableSuperSampling;

/// [Tooltip("Attempts to anti-alias the edges of the underlay by using alpha blending.  Can cause borders of darkness around partially transparent objects.")]
/// [SerializeField]
/// @brief Field _doUnderlayAntiAliasing, offset: 0x65, size: 0x1, def value: None
 bool  ____doUnderlayAntiAliasing;

/// [Tooltip("OVR Layers can provide a buggy or less ideal workflow while in the editor.  This option allows you emulate the layer rendering while in the editor, while still using the OVR Layer rendering in a build.")]
/// [SerializeField]
/// @brief Field _emulateWhileInEditor, offset: 0x66, size: 0x1, def value: None
 bool  ____emulateWhileInEditor;

/// @brief Field _overlay, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::OVROverlay>  ____overlay;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer, ____canvasMesh) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer, ____runtimeOffset) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer, ____enableSuperSampling) == 0x64, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer, ____doUnderlayAntiAliasing) == 0x65, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer, ____emulateWhileInEditor) == 0x66, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer, ____overlay) == 0x68, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer) == 0x70, "Size mismatch!");

} // namespace end def Oculus::Interaction::UnityCanvas
// Dependencies System.Object
namespace Oculus::Interaction::UnityCanvas {
// Is value type: false
// CS Name: Oculus.Interaction.UnityCanvas.OVRCanvasMeshRenderer/Properties
class CORDL_TYPE OVRCanvasMeshRenderer_Properties : public ::System::Object {
public:
// Declarations
/// @brief Field CanvasMesh, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_CanvasMesh, put=setStaticF_CanvasMesh)) ::StringW  CanvasMesh;

/// @brief Field CanvasRenderTexture, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_CanvasRenderTexture, put=setStaticF_CanvasRenderTexture)) ::StringW  CanvasRenderTexture;

/// @brief Field DoUnderlayAntiAliasing, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_DoUnderlayAntiAliasing, put=setStaticF_DoUnderlayAntiAliasing)) ::StringW  DoUnderlayAntiAliasing;

/// @brief Field EmulateWhileInEditor, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_EmulateWhileInEditor, put=setStaticF_EmulateWhileInEditor)) ::StringW  EmulateWhileInEditor;

/// @brief Field EnableSuperSampling, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_EnableSuperSampling, put=setStaticF_EnableSuperSampling)) ::StringW  EnableSuperSampling;

/// @brief Field RuntimeOffset, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_RuntimeOffset, put=setStaticF_RuntimeOffset)) ::StringW  RuntimeOffset;

static inline ::StringW getStaticF_CanvasMesh() ;

static inline ::StringW getStaticF_CanvasRenderTexture() ;

static inline ::StringW getStaticF_DoUnderlayAntiAliasing() ;

static inline ::StringW getStaticF_EmulateWhileInEditor() ;

static inline ::StringW getStaticF_EnableSuperSampling() ;

static inline ::StringW getStaticF_RuntimeOffset() ;

static inline void setStaticF_CanvasMesh(::StringW  value) ;

static inline void setStaticF_CanvasRenderTexture(::StringW  value) ;

static inline void setStaticF_DoUnderlayAntiAliasing(::StringW  value) ;

static inline void setStaticF_EmulateWhileInEditor(::StringW  value) ;

static inline void setStaticF_EnableSuperSampling(::StringW  value) ;

static inline void setStaticF_RuntimeOffset(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRCanvasMeshRenderer_Properties() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRCanvasMeshRenderer_Properties", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRCanvasMeshRenderer_Properties(OVRCanvasMeshRenderer_Properties && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRCanvasMeshRenderer_Properties", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRCanvasMeshRenderer_Properties(OVRCanvasMeshRenderer_Properties const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31124};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer_Properties) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction::UnityCanvas
