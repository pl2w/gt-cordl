#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/GraphicsSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__IRenderPipelineGraphicsSettings_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderPipeline_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GraphicsSettings)
namespace System {
struct IntPtr;
}
namespace System {
template<typename T>
class Lazy_1;
}
namespace System {
class Type;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine::Rendering {
struct BuiltinShaderDefine;
}
namespace UnityEngine::Rendering {
struct DefaultMaterialType;
}
namespace UnityEngine::Rendering {
struct DefaultShaderType;
}
namespace UnityEngine::Rendering {
class GraphicsSettings___c;
}
namespace UnityEngine::Rendering {
struct GraphicsTier;
}
namespace UnityEngine::Rendering {
class RenderPipelineAsset;
}
namespace UnityEngine::Rendering {
class RenderPipelineGlobalSettings;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
class ScriptableObject;
}
namespace UnityEngine {
class Shader;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class GraphicsSettings;
}
namespace UnityEngine::Rendering {
class GraphicsSettings___c;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::GraphicsSettings*);
MARK_REF_T(::UnityEngine::Rendering::GraphicsSettings___c*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::GraphicsSettings*, "UnityEngine.Rendering", "GraphicsSettings");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::GraphicsSettings___c*, "UnityEngine.Rendering", "GraphicsSettings/<>c");
// [NativeHeader("Runtime/Camera/GraphicsSettings.h")]
// [StaticAccessor("GetGraphicsSettings()", (UnityEngine.Bindings.StaticAccessorType)0)]
// Dependencies UnityEngine.Object, UnityEngine.Rendering.IRenderPipelineGraphicsSettings, UnityEngine.Rendering.RenderPipeline
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.GraphicsSettings
class CORDL_TYPE GraphicsSettings : public ::UnityEngine::Object {
public:
// Declarations
using __c = ::UnityEngine::Rendering::GraphicsSettings___c;

/// @brief Field s_CurrentRenderPipelineGlobalSettings, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_CurrentRenderPipelineGlobalSettings, put=setStaticF_s_CurrentRenderPipelineGlobalSettings)) ::System::Lazy_1<::UnityW<::UnityEngine::Rendering::RenderPipelineGlobalSettings>>*  s_CurrentRenderPipelineGlobalSettings;

/// [VisibleToOtherModules]
/// [RequiredByNativeCode]
/// @brief Method GetDefaultMaterial, addr 0xb6079e8, size 0x244, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Material> GetDefaultMaterial(::UnityEngine::Rendering::DefaultMaterialType  type) ;

/// [RequiredByNativeCode]
/// [VisibleToOtherModules]
/// @brief Method GetDefaultShader, addr 0xb607788, size 0x260, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Shader> GetDefaultShader(::UnityEngine::Rendering::DefaultShaderType  type) ;

/// @brief Method GetRenderPipelineSettings, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*> && ::cordl_internals::reference_type_constraint<T>)
static inline T GetRenderPipelineSettings() ;

/// @brief Method GetSettingsForRenderPipeline, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Rendering::RenderPipeline*>)
static inline ::UnityW<::UnityEngine::Rendering::RenderPipelineGlobalSettings> GetSettingsForRenderPipeline() ;

/// @brief Method HasShaderDefine, addr 0xb6072ac, size 0xac, virtual false, abstract: false, final false
static inline bool HasShaderDefine(::UnityEngine::Rendering::BuiltinShaderDefine  defineHash) ;

/// @brief Method HasShaderDefine, addr 0xb607268, size 0x44, virtual false, abstract: false, final false
static inline bool HasShaderDefine(::UnityEngine::Rendering::GraphicsTier  tier, ::UnityEngine::Rendering::BuiltinShaderDefine  defineHash) ;

/// @brief Method Internal_GetCurrentRenderPipelineGlobalSettings, addr 0xb606f20, size 0x10c, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Rendering::RenderPipelineGlobalSettings> Internal_GetCurrentRenderPipelineGlobalSettings() ;

/// [NativeName("GetSettingsForRenderPipeline")]
/// @brief Method Internal_GetSettingsForRenderPipeline, addr 0xb606cc0, size 0x224, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Object> Internal_GetSettingsForRenderPipeline(::StringW  renderpipelineName) ;

/// @brief Method Internal_GetSettingsForRenderPipeline_Injected, addr 0xb606ee4, size 0x3c, virtual false, abstract: false, final false
static inline ::System::IntPtr Internal_GetSettingsForRenderPipeline_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  renderpipelineName) ;

/// @brief Method TryGetCurrentRenderPipelineGlobalSettings, addr 0xb6070c8, size 0xc4, virtual false, abstract: false, final false
static inline bool TryGetCurrentRenderPipelineGlobalSettings(::by_ref<::UnityEngine::Rendering::RenderPipelineGlobalSettings*>  asset) ;

/// @brief Method TryGetRenderPipelineSettings, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*> && ::cordl_internals::reference_type_constraint<T>)
static inline bool TryGetRenderPipelineSettings(::by_ref<T>  settings) ;

static inline ::System::Lazy_1<::UnityW<::UnityEngine::Rendering::RenderPipelineGlobalSettings>>* getStaticF_s_CurrentRenderPipelineGlobalSettings() ;

/// @brief Method get_INTERNAL_currentRenderPipeline, addr 0xb607358, size 0x84, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::ScriptableObject> get_INTERNAL_currentRenderPipeline() ;

/// @brief Method get_INTERNAL_currentRenderPipeline_Injected, addr 0xb6073dc, size 0x28, virtual false, abstract: false, final false
static inline ::System::IntPtr get_INTERNAL_currentRenderPipeline_Injected() ;

/// @brief Method get_INTERNAL_defaultRenderPipeline, addr 0xb607510, size 0x84, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::ScriptableObject> get_INTERNAL_defaultRenderPipeline() ;

/// @brief Method get_INTERNAL_defaultRenderPipeline_Injected, addr 0xb607594, size 0x28, virtual false, abstract: false, final false
static inline ::System::IntPtr get_INTERNAL_defaultRenderPipeline_Injected() ;

/// @brief Method get_currentRenderPipeline, addr 0xb60702c, size 0x9c, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Rendering::RenderPipelineAsset> get_currentRenderPipeline() ;

/// @brief Method get_currentRenderPipelineAssetType, addr 0xb60748c, size 0x84, virtual false, abstract: false, final false
static inline ::System::Type* get_currentRenderPipelineAssetType() ;

/// @brief Method get_defaultRenderPipeline, addr 0xb607698, size 0x9c, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Rendering::RenderPipelineAsset> get_defaultRenderPipeline() ;

/// @brief Method get_isScriptableRenderPipelineEnabled, addr 0xb607404, size 0x88, virtual false, abstract: false, final false
static inline bool get_isScriptableRenderPipelineEnabled() ;

/// @brief Method get_lightsUseLinearIntensity, addr 0xb60718c, size 0x28, virtual false, abstract: false, final false
static inline bool get_lightsUseLinearIntensity() ;

static inline void setStaticF_s_CurrentRenderPipelineGlobalSettings(::System::Lazy_1<::UnityW<::UnityEngine::Rendering::RenderPipelineGlobalSettings>>*  value) ;

/// @brief Method set_INTERNAL_defaultRenderPipeline, addr 0xb6075bc, size 0xa0, virtual false, abstract: false, final false
static inline void set_INTERNAL_defaultRenderPipeline(::UnityEngine::ScriptableObject*  value) ;

/// @brief Method set_INTERNAL_defaultRenderPipeline_Injected, addr 0xb60765c, size 0x3c, virtual false, abstract: false, final false
static inline void set_INTERNAL_defaultRenderPipeline_Injected(::System::IntPtr  value) ;

/// @brief Method set_defaultRenderPipeline, addr 0xb607734, size 0x54, virtual false, abstract: false, final false
static inline void set_defaultRenderPipeline(::UnityEngine::Rendering::RenderPipelineAsset*  value) ;

/// @brief Method set_lightsUseColorTemperature, addr 0xb6071f0, size 0x3c, virtual false, abstract: false, final false
static inline void set_lightsUseColorTemperature(bool  value) ;

/// @brief Method set_lightsUseLinearIntensity, addr 0xb6071b4, size 0x3c, virtual false, abstract: false, final false
static inline void set_lightsUseLinearIntensity(bool  value) ;

/// @brief Method set_useScriptableRenderPipelineBatching, addr 0xb60722c, size 0x3c, virtual false, abstract: false, final false
static inline void set_useScriptableRenderPipelineBatching(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GraphicsSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GraphicsSettings", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GraphicsSettings(GraphicsSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GraphicsSettings", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GraphicsSettings(GraphicsSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15495};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::GraphicsSettings) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.GraphicsSettings/<>c
class CORDL_TYPE GraphicsSettings___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::UnityEngine::Rendering::GraphicsSettings___c*  __9;

static inline ::UnityEngine::Rendering::GraphicsSettings___c* New_ctor() ;

/// @brief Method <.cctor>b__93_0, addr 0xb607db4, size 0x4c, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Rendering::RenderPipelineGlobalSettings> __cctor_b__93_0() ;

/// @brief Method .ctor, addr 0xb607dac, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::Rendering::GraphicsSettings___c* getStaticF___9() ;

static inline void setStaticF___9(::UnityEngine::Rendering::GraphicsSettings___c*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GraphicsSettings___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GraphicsSettings___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GraphicsSettings___c(GraphicsSettings___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GraphicsSettings___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GraphicsSettings___c(GraphicsSettings___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15494};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::GraphicsSettings___c) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
