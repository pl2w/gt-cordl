#pragma once
// IWYU pragma private; include "Liv/Lck/Rendering/LckCompositionRenderFeature.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/Universal/zzzz__RenderPassEvent_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRendererFeature_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LckCompositionRenderFeature)
namespace Liv::Lck::Rendering {
class LckCompositionProfile;
}
namespace Liv::Lck::Rendering {
class LckCompositionRenderPass;
}
namespace UnityEngine::Rendering::Universal {
struct RenderingData;
}
namespace UnityEngine::Rendering::Universal {
class ScriptableRenderer;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace Liv::Lck::Rendering {
class LckCompositionRenderFeature;
}
// Write type traits
MARK_REF_T(::Liv::Lck::Rendering::LckCompositionRenderFeature*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::Rendering::LckCompositionRenderFeature*, "Liv.Lck.Rendering", "LckCompositionRenderFeature");
// Dependencies UnityEngine.Rendering.Universal.RenderPassEvent, UnityEngine.Rendering.Universal.ScriptableRendererFeature
namespace Liv::Lck::Rendering {
// Is value type: false
// CS Name: Liv.Lck.Rendering.LckCompositionRenderFeature
class CORDL_TYPE LckCompositionRenderFeature : public ::UnityEngine::Rendering::Universal::ScriptableRendererFeature {
public:
// Declarations
/// @brief Field OverlayTexID, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_OverlayTexID, put=setStaticF_OverlayTexID)) int32_t  OverlayTexID;

/// @brief Field _compositionProfile, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__compositionProfile, put=__cordl_internal_set__compositionProfile)) ::UnityW<::Liv::Lck::Rendering::LckCompositionProfile>  _compositionProfile;

/// @brief Field _material, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__material, put=__cordl_internal_set__material)) ::UnityW<::UnityEngine::Material>  _material;

/// @brief Field _previewInGameWindow, offset 0x34, size 0x1 
 __declspec(property(get=__cordl_internal_get__previewInGameWindow, put=__cordl_internal_set__previewInGameWindow)) bool  _previewInGameWindow;

/// @brief Field _renderPassEvent, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__renderPassEvent, put=__cordl_internal_set__renderPassEvent)) ::UnityEngine::Rendering::Universal::RenderPassEvent  _renderPassEvent;

/// @brief Field m_Pass, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Pass, put=__cordl_internal_set_m_Pass)) ::Liv::Lck::Rendering::LckCompositionRenderPass*  m_Pass;

/// @brief Method AddRenderPasses, addr 0x9d3f8d4, size 0x234, virtual true, abstract: false, final false
inline void AddRenderPasses(::UnityEngine::Rendering::Universal::ScriptableRenderer*  renderer, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData>  renderingData) ;

/// @brief Method Create, addr 0x9d3f804, size 0x78, virtual true, abstract: false, final false
inline void Create() ;

static inline ::Liv::Lck::Rendering::LckCompositionRenderFeature* New_ctor() ;

constexpr ::UnityW<::Liv::Lck::Rendering::LckCompositionProfile> const& __cordl_internal_get__compositionProfile() const;

constexpr ::UnityW<::Liv::Lck::Rendering::LckCompositionProfile>& __cordl_internal_get__compositionProfile() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__material() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__material() ;

constexpr bool const& __cordl_internal_get__previewInGameWindow() const;

constexpr bool& __cordl_internal_get__previewInGameWindow() ;

constexpr ::UnityEngine::Rendering::Universal::RenderPassEvent const& __cordl_internal_get__renderPassEvent() const;

constexpr ::UnityEngine::Rendering::Universal::RenderPassEvent& __cordl_internal_get__renderPassEvent() ;

constexpr ::Liv::Lck::Rendering::LckCompositionRenderPass* const& __cordl_internal_get_m_Pass() const;

constexpr ::Liv::Lck::Rendering::LckCompositionRenderPass*& __cordl_internal_get_m_Pass() ;

constexpr void __cordl_internal_set__compositionProfile(::UnityW<::Liv::Lck::Rendering::LckCompositionProfile>  value) ;

constexpr void __cordl_internal_set__material(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set__previewInGameWindow(bool  value) ;

constexpr void __cordl_internal_set__renderPassEvent(::UnityEngine::Rendering::Universal::RenderPassEvent  value) ;

constexpr void __cordl_internal_set_m_Pass(::Liv::Lck::Rendering::LckCompositionRenderPass*  value) ;

/// @brief Method .ctor, addr 0x9d3fb44, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline int32_t getStaticF_OverlayTexID() ;

static inline void setStaticF_OverlayTexID(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckCompositionRenderFeature() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckCompositionRenderFeature", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckCompositionRenderFeature(LckCompositionRenderFeature && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckCompositionRenderFeature", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckCompositionRenderFeature(LckCompositionRenderFeature const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24857};

/// [Tooltip("The LCK Composition Profile to source layers from.")]
/// [SerializeField]
/// @brief Field _compositionProfile, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::Rendering::LckCompositionProfile>  ____compositionProfile;

/// [Tooltip("The material used when making the blit operation.")]
/// [SerializeField]
/// @brief Field _material, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ____material;

/// [Tooltip("The event where to inject the pass.")]
/// [SerializeField]
/// @brief Field _renderPassEvent, offset: 0x30, size: 0x4, def value: None
 ::UnityEngine::Rendering::Universal::RenderPassEvent  ____renderPassEvent;

/// [Tooltip("Display the pass on the Game preview windows in editor.")]
/// [SerializeField]
/// @brief Field _previewInGameWindow, offset: 0x34, size: 0x1, def value: None
 bool  ____previewInGameWindow;

/// @brief Field m_Pass, offset: 0x38, size: 0x8, def value: None
 ::Liv::Lck::Rendering::LckCompositionRenderPass*  ___m_Pass;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::Rendering::LckCompositionRenderFeature, ____compositionProfile) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Rendering::LckCompositionRenderFeature, ____material) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Rendering::LckCompositionRenderFeature, ____renderPassEvent) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Rendering::LckCompositionRenderFeature, ____previewInGameWindow) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Rendering::LckCompositionRenderFeature, ___m_Pass) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::Rendering::LckCompositionRenderFeature) == 0x40, "Size mismatch!");

} // namespace end def Liv::Lck::Rendering
