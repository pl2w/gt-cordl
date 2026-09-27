#pragma once
// IWYU pragma private; include "GlobalNamespace/OVROverlayCanvasSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRRuntimeAssetsBase_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OVROverlayCanvasSettings)
namespace GlobalNamespace {
struct OVROverlayCanvas_DrawMode;
}
namespace UnityEngine {
class Shader;
}
// Forward declare root types
namespace GlobalNamespace {
class OVROverlayCanvasSettings;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::OVROverlayCanvasSettings*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVROverlayCanvasSettings*, "", "OVROverlayCanvasSettings");
// Dependencies OVRRuntimeAssetsBase
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVROverlayCanvasSettings
class CORDL_TYPE OVROverlayCanvasSettings : public ::GlobalNamespace::OVRRuntimeAssetsBase {
public:
// Declarations
/// @brief Field CanvasLayer, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_CanvasLayer, put=__cordl_internal_set_CanvasLayer)) int32_t  CanvasLayer;

/// @brief Field CanvasRenderLayer, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_CanvasRenderLayer, put=__cordl_internal_set_CanvasRenderLayer)) int32_t  CanvasRenderLayer;

/// @brief Field MaxSimultaneousCanvases, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_MaxSimultaneousCanvases, put=__cordl_internal_set_MaxSimultaneousCanvases)) int32_t  MaxSimultaneousCanvases;

/// @brief Field _instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__instance, put=setStaticF__instance)) ::UnityW<::GlobalNamespace::OVROverlayCanvasSettings>  _instance;

/// @brief Field _opaqueImposterShader, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__opaqueImposterShader, put=__cordl_internal_set__opaqueImposterShader)) ::UnityW<::UnityEngine::Shader>  _opaqueImposterShader;

/// @brief Field _transparentImposterShader, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__transparentImposterShader, put=__cordl_internal_set__transparentImposterShader)) ::UnityW<::UnityEngine::Shader>  _transparentImposterShader;

/// @brief Method ApplyGlobalSettings, addr 0xa601794, size 0x4, virtual false, abstract: false, final false
inline void ApplyGlobalSettings() ;

/// @brief Method EnsureInitialized, addr 0xa604d1c, size 0xc8, virtual false, abstract: false, final false
inline void EnsureInitialized() ;

/// @brief Method EnsureShaderInitialized, addr 0xa604e70, size 0x170, virtual false, abstract: false, final false
static inline void EnsureShaderInitialized(::by_ref<::UnityEngine::Shader*>  shader, ::StringW  shaderName, ::StringW  replaceShaderName) ;

/// @brief Method GetOverlayCanvasSettings, addr 0xa604bf4, size 0x128, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::OVROverlayCanvasSettings> GetOverlayCanvasSettings() ;

/// @brief Method GetShader, addr 0xa6016f4, size 0x30, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Shader> GetShader(::GlobalNamespace::OVROverlayCanvas_DrawMode  drawMode) ;

static inline ::GlobalNamespace::OVROverlayCanvasSettings* New_ctor() ;

/// @brief Method OnValidate, addr 0xa604fe0, size 0x4, virtual false, abstract: false, final false
inline void OnValidate() ;

/// @brief Method UsingBuiltInRenderPipeline, addr 0xa604de4, size 0x8c, virtual false, abstract: false, final false
static inline bool UsingBuiltInRenderPipeline() ;

constexpr int32_t const& __cordl_internal_get_CanvasLayer() const;

constexpr int32_t& __cordl_internal_get_CanvasLayer() ;

constexpr int32_t const& __cordl_internal_get_CanvasRenderLayer() const;

constexpr int32_t& __cordl_internal_get_CanvasRenderLayer() ;

constexpr int32_t const& __cordl_internal_get_MaxSimultaneousCanvases() const;

constexpr int32_t& __cordl_internal_get_MaxSimultaneousCanvases() ;

constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get__opaqueImposterShader() const;

constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get__opaqueImposterShader() ;

constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get__transparentImposterShader() const;

constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get__transparentImposterShader() ;

constexpr void __cordl_internal_set_CanvasLayer(int32_t  value) ;

constexpr void __cordl_internal_set_CanvasRenderLayer(int32_t  value) ;

constexpr void __cordl_internal_set_MaxSimultaneousCanvases(int32_t  value) ;

constexpr void __cordl_internal_set__opaqueImposterShader(::UnityW<::UnityEngine::Shader>  value) ;

constexpr void __cordl_internal_set__transparentImposterShader(::UnityW<::UnityEngine::Shader>  value) ;

/// @brief Method .ctor, addr 0xa604fe4, size 0x1c, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::GlobalNamespace::OVROverlayCanvasSettings> getStaticF__instance() ;

/// @brief Method get_Instance, addr 0xa60007c, size 0xac, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::OVROverlayCanvasSettings> get_Instance() ;

static inline void setStaticF__instance(::UnityW<::GlobalNamespace::OVROverlayCanvasSettings>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVROverlayCanvasSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVROverlayCanvasSettings", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVROverlayCanvasSettings(OVROverlayCanvasSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVROverlayCanvasSettings", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVROverlayCanvasSettings(OVROverlayCanvasSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12016};

/// @brief Field kAssetName offset 0xffffffff size 0x8
static constexpr ::ConstString  kAssetName{u"OVROverlayCanvasSettings"};

/// @brief Field kBuiltInOpaqueShaderName offset 0xffffffff size 0x8
static constexpr ::ConstString  kBuiltInOpaqueShaderName{u"UI/Prerendered Opaque"};

/// @brief Field kBuiltInTransparentShaderName offset 0xffffffff size 0x8
static constexpr ::ConstString  kBuiltInTransparentShaderName{u"UI/Prerendered"};

/// @brief Field kUrpOpaqueShaderName offset 0xffffffff size 0x8
static constexpr ::ConstString  kUrpOpaqueShaderName{u"URP/UI/Prerendered Opaque"};

/// @brief Field kUrpTransparentShaderName offset 0xffffffff size 0x8
static constexpr ::ConstString  kUrpTransparentShaderName{u"URP/UI/Prerendered"};

/// [SerializeField]
/// @brief Field _transparentImposterShader, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Shader>  ____transparentImposterShader;

/// [SerializeField]
/// @brief Field _opaqueImposterShader, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Shader>  ____opaqueImposterShader;

/// @brief Field MaxSimultaneousCanvases, offset: 0x28, size: 0x4, def value: None
 int32_t  ___MaxSimultaneousCanvases;

/// @brief Field CanvasRenderLayer, offset: 0x2c, size: 0x4, def value: None
 int32_t  ___CanvasRenderLayer;

/// @brief Field CanvasLayer, offset: 0x30, size: 0x4, def value: None
 int32_t  ___CanvasLayer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVROverlayCanvasSettings, ____transparentImposterShader) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlayCanvasSettings, ____opaqueImposterShader) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlayCanvasSettings, ___MaxSimultaneousCanvases) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlayCanvasSettings, ___CanvasRenderLayer) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlayCanvasSettings, ___CanvasLayer) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVROverlayCanvasSettings) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
