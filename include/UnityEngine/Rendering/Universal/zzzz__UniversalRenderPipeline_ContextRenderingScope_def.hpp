#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/UniversalRenderPipeline_ContextRenderingScope.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__ScriptableRenderContext_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(UniversalRenderPipeline_ContextRenderingScope)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
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
struct UniversalRenderPipeline_ContextRenderingScope;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::UniversalRenderPipeline_ContextRenderingScope);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UniversalRenderPipeline_ContextRenderingScope, "UnityEngine.Rendering.Universal", "UniversalRenderPipeline/ContextRenderingScope");
// [IsReadOnly]
// Dependencies UnityEngine.Rendering.ScriptableRenderContext
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.UniversalRenderPipeline/ContextRenderingScope
struct CORDL_TYPE UniversalRenderPipeline_ContextRenderingScope {
public:
// Declarations
/// @brief Field beginContextRenderingSampler, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_beginContextRenderingSampler, put=setStaticF_beginContextRenderingSampler)) ::UnityEngine::Rendering::ProfilingSampler*  beginContextRenderingSampler;

/// @brief Field endContextRenderingSampler, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_endContextRenderingSampler, put=setStaticF_endContextRenderingSampler)) ::UnityEngine::Rendering::ProfilingSampler*  endContextRenderingSampler;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0xb2c6918, size 0xe4, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method .ctor, addr 0xb2bcca0, size 0x108, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Rendering::ScriptableRenderContext  context, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*  cameras) ;

static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_beginContextRenderingSampler() ;

static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_endContextRenderingSampler() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

static inline void setStaticF_beginContextRenderingSampler(::UnityEngine::Rendering::ProfilingSampler*  value) ;

static inline void setStaticF_endContextRenderingSampler(::UnityEngine::Rendering::ProfilingSampler*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr UniversalRenderPipeline_ContextRenderingScope() ;

// Ctor Parameters [CppParam { name: "m_Context", ty: "::UnityEngine::Rendering::ScriptableRenderContext", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Cameras", ty: "::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*", modifiers: "", def_value: None, comment: None }]
constexpr UniversalRenderPipeline_ContextRenderingScope(::UnityEngine::Rendering::ScriptableRenderContext  m_Context, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*  m_Cameras) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18687};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_Context, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::Rendering::ScriptableRenderContext  m_Context;

/// @brief Field m_Cameras, offset: 0x8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*  m_Cameras;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UniversalRenderPipeline_ContextRenderingScope, m_Context) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UniversalRenderPipeline_ContextRenderingScope, m_Cameras) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::UniversalRenderPipeline_ContextRenderingScope) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
