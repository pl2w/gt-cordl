#pragma once
// IWYU pragma private; include "GlobalNamespace/LckCameraEvents.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(LckCameraEvents)
namespace UnityEngine::Events {
class UnityEvent;
}
namespace UnityEngine::Rendering {
struct ScriptableRenderContext;
}
namespace UnityEngine {
class Camera;
}
// Forward declare root types
namespace GlobalNamespace {
class LckCameraEvents;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::LckCameraEvents*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LckCameraEvents*, "", "LckCameraEvents");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: LckCameraEvents
class CORDL_TYPE LckCameraEvents : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _camera, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__camera, put=__cordl_internal_set__camera)) ::UnityW<::UnityEngine::Camera>  _camera;

/// @brief Field onPostRender, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_onPostRender, put=__cordl_internal_set_onPostRender)) ::UnityEngine::Events::UnityEvent*  onPostRender;

/// @brief Field onPreRender, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_onPreRender, put=__cordl_internal_set_onPreRender)) ::UnityEngine::Events::UnityEvent*  onPreRender;

static inline ::GlobalNamespace::LckCameraEvents* New_ctor() ;

/// @brief Method OnDisable, addr 0x56c56c0, size 0xbc, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x56c5604, size 0xbc, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method RenderPipelineManagerOnbeginCameraRendering, addr 0x56c577c, size 0x90, virtual false, abstract: false, final false
inline void RenderPipelineManagerOnbeginCameraRendering(::UnityEngine::Rendering::ScriptableRenderContext  scriptableRenderContext, ::UnityEngine::Camera*  camera) ;

/// @brief Method RenderPipelineManagerOnendCameraRendering, addr 0x56c580c, size 0x90, virtual false, abstract: false, final false
inline void RenderPipelineManagerOnendCameraRendering(::UnityEngine::Rendering::ScriptableRenderContext  scriptableRenderContext, ::UnityEngine::Camera*  camera) ;

constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get__camera() const;

constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get__camera() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_onPostRender() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_onPostRender() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_onPreRender() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_onPreRender() ;

constexpr void __cordl_internal_set__camera(::UnityW<::UnityEngine::Camera>  value) ;

constexpr void __cordl_internal_set_onPostRender(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_onPreRender(::UnityEngine::Events::UnityEvent*  value) ;

/// @brief Method .ctor, addr 0x56c589c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckCameraEvents() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckCameraEvents", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckCameraEvents(LckCameraEvents && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckCameraEvents", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckCameraEvents(LckCameraEvents const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1015};

/// [SerializeField]
/// @brief Field _camera, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Camera>  ____camera;

/// @brief Field onPreRender, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___onPreRender;

/// @brief Field onPostRender, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___onPostRender;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LckCameraEvents, ____camera) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckCameraEvents, ___onPreRender) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckCameraEvents, ___onPostRender) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LckCameraEvents) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
