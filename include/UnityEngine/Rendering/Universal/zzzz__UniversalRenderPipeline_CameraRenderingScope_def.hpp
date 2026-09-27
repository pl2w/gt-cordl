#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/UniversalRenderPipeline_CameraRenderingScope.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__ScriptableRenderContext_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(UniversalRenderPipeline_CameraRenderingScope)
namespace System {
class IDisposable;
}
namespace UnityEngine::Rendering {
class ProfilingSampler;
}
namespace UnityEngine::Rendering {
struct ScriptableRenderContext;
}
namespace UnityEngine {
class Camera;
}
// Forward declare root types
namespace GlobalNamespace {
struct UniversalRenderPipeline_CameraRenderingScope;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::UniversalRenderPipeline_CameraRenderingScope);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UniversalRenderPipeline_CameraRenderingScope, "UnityEngine.Rendering.Universal", "UniversalRenderPipeline/CameraRenderingScope");
// [IsReadOnly]
// Dependencies UnityEngine.Rendering.ScriptableRenderContext
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.UniversalRenderPipeline/CameraRenderingScope
struct CORDL_TYPE UniversalRenderPipeline_CameraRenderingScope {
public:
// Declarations
/// @brief Field beginCameraRenderingSampler, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_beginCameraRenderingSampler, put=setStaticF_beginCameraRenderingSampler)) ::UnityEngine::Rendering::ProfilingSampler*  beginCameraRenderingSampler;

/// @brief Field endCameraRenderingSampler, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_endCameraRenderingSampler, put=setStaticF_endCameraRenderingSampler)) ::UnityEngine::Rendering::ProfilingSampler*  endCameraRenderingSampler;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0xb2c6758, size 0xe4, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method .ctor, addr 0xb2be980, size 0x110, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Rendering::ScriptableRenderContext  context, ::UnityEngine::Camera*  camera) ;

static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_beginCameraRenderingSampler() ;

static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_endCameraRenderingSampler() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

static inline void setStaticF_beginCameraRenderingSampler(::UnityEngine::Rendering::ProfilingSampler*  value) ;

static inline void setStaticF_endCameraRenderingSampler(::UnityEngine::Rendering::ProfilingSampler*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr UniversalRenderPipeline_CameraRenderingScope() ;

// Ctor Parameters [CppParam { name: "m_Context", ty: "::UnityEngine::Rendering::ScriptableRenderContext", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Camera", ty: "::UnityW<::UnityEngine::Camera>", modifiers: "", def_value: None, comment: None }]
constexpr UniversalRenderPipeline_CameraRenderingScope(::UnityEngine::Rendering::ScriptableRenderContext  m_Context, ::UnityW<::UnityEngine::Camera>  m_Camera) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18686};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_Context, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::Rendering::ScriptableRenderContext  m_Context;

/// @brief Field m_Camera, offset: 0x8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Camera>  m_Camera;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UniversalRenderPipeline_CameraRenderingScope, m_Context) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UniversalRenderPipeline_CameraRenderingScope, m_Camera) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::UniversalRenderPipeline_CameraRenderingScope) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
