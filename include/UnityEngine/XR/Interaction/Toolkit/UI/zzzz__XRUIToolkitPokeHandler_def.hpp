#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/UI/XRUIToolkitPokeHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(XRUIToolkitPokeHandler)
namespace UnityEngine::UIElements {
class UIDocument;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
class IXRPokeFilter;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
class IXRInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class XRPokeInteractor;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::UI {
class XRUIToolkitPokeHandler;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitPokeHandler*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitPokeHandler*, "UnityEngine.XR.Interaction.Toolkit.UI", "XRUIToolkitPokeHandler");
// Dependencies System.Object
namespace UnityEngine::XR::Interaction::Toolkit::UI {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.UI.XRUIToolkitPokeHandler
class CORDL_TYPE XRUIToolkitPokeHandler : public ::System::Object {
public:
// Declarations
/// @brief Field m_ClosestPointVisualizer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ClosestPointVisualizer, put=__cordl_internal_set_m_ClosestPointVisualizer)) ::UnityW<::UnityEngine::Transform>  m_ClosestPointVisualizer;

/// @brief Field m_Interactor, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Interactor, put=__cordl_internal_set_m_Interactor)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor>  m_Interactor;

/// @brief Field m_NormalVisualizer, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_NormalVisualizer, put=__cordl_internal_set_m_NormalVisualizer)) ::UnityW<::UnityEngine::Transform>  m_NormalVisualizer;

/// @brief Field m_PokePointVisualizer, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_PokePointVisualizer, put=__cordl_internal_set_m_PokePointVisualizer)) ::UnityW<::UnityEngine::Transform>  m_PokePointVisualizer;

/// @brief Field m_RayOriginVisualizer, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_RayOriginVisualizer, put=__cordl_internal_set_m_RayOriginVisualizer)) ::UnityW<::UnityEngine::Transform>  m_RayOriginVisualizer;

/// @brief Field m_UpdateDepth, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_UpdateDepth, put=__cordl_internal_set_m_UpdateDepth)) bool  m_UpdateDepth;

/// @brief Field m_VisualizersCreated, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_VisualizersCreated, put=__cordl_internal_set_m_VisualizersCreated)) bool  m_VisualizersCreated;

/// @brief Field m_VisualizersRoot, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_VisualizersRoot, put=__cordl_internal_set_m_VisualizersRoot)) ::UnityW<::UnityEngine::GameObject>  m_VisualizersRoot;

 __declspec(property(get=get_updateDepth, put=set_updateDepth)) bool  updateDepth;

/// @brief Method CreateVisualizers, addr 0xb4442e4, size 0x578, virtual false, abstract: false, final false
inline void CreateVisualizers() ;

/// @brief Method DestroyVisualizers, addr 0xb443250, size 0xd4, virtual false, abstract: false, final false
inline void DestroyVisualizers() ;

/// @brief Method Dispose, addr 0xb44324c, size 0x4, virtual false, abstract: false, final false
inline void Dispose() ;

static inline ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitPokeHandler* New_ctor(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*  interactor) ;

/// @brief Method PerformMultiPick, addr 0xb443e7c, size 0x428, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::VisualElement* PerformMultiPick(::UnityEngine::UIElements::UIDocument*  document, ::UnityEngine::Vector3  center, ::UnityEngine::Vector3  direction, float_t  radius) ;

/// @brief Method PerformPick, addr 0xb443bd0, size 0x154, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::VisualElement* PerformPick(::UnityEngine::UIElements::UIDocument*  document, ::UnityEngine::Vector3  center, ::UnityEngine::Vector3  direction, float_t  radius, bool  useMultiPick) ;

/// @brief Method ProcessPokeInteraction, addr 0xb443324, size 0x6c4, virtual false, abstract: false, final false
inline void ProcessPokeInteraction(::UnityEngine::Collider*  hitCollider, ::UnityEngine::Transform*  interactableTransform, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  interactable, bool  useMultiPick, ::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRPokeFilter*  pokeFilter) ;

/// @brief Method ResetPointerState, addr 0xb443d24, size 0x158, virtual false, abstract: false, final false
inline void ResetPointerState() ;

/// @brief Method UpdateVisualizers, addr 0xb4439e8, size 0x1e8, virtual false, abstract: false, final false
inline void UpdateVisualizers(::UnityEngine::Vector3  pokePoint, ::UnityEngine::Vector3  closestPoint, ::UnityEngine::Vector3  rayOrigin, ::UnityEngine::Vector3  normal, ::UnityEngine::Transform*  parentTransform) ;

/// @brief Method UpdateVisualizersState, addr 0xb4442a4, size 0x40, virtual false, abstract: false, final false
inline void UpdateVisualizersState() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_m_ClosestPointVisualizer() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_m_ClosestPointVisualizer() ;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor> const& __cordl_internal_get_m_Interactor() const;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor>& __cordl_internal_get_m_Interactor() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_m_NormalVisualizer() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_m_NormalVisualizer() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_m_PokePointVisualizer() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_m_PokePointVisualizer() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_m_RayOriginVisualizer() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_m_RayOriginVisualizer() ;

constexpr bool const& __cordl_internal_get_m_UpdateDepth() const;

constexpr bool& __cordl_internal_get_m_UpdateDepth() ;

constexpr bool const& __cordl_internal_get_m_VisualizersCreated() const;

constexpr bool& __cordl_internal_get_m_VisualizersCreated() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_m_VisualizersRoot() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_m_VisualizersRoot() ;

constexpr void __cordl_internal_set_m_ClosestPointVisualizer(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_m_Interactor(::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor>  value) ;

constexpr void __cordl_internal_set_m_NormalVisualizer(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_m_PokePointVisualizer(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_m_RayOriginVisualizer(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_m_UpdateDepth(bool  value) ;

constexpr void __cordl_internal_set_m_VisualizersCreated(bool  value) ;

constexpr void __cordl_internal_set_m_VisualizersRoot(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0xb44321c, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*  interactor) ;

/// @brief Method get_updateDepth, addr 0xb44320c, size 0x8, virtual false, abstract: false, final false
inline bool get_updateDepth() ;

/// @brief Method set_updateDepth, addr 0xb443214, size 0x8, virtual false, abstract: false, final false
inline void set_updateDepth(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRUIToolkitPokeHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRUIToolkitPokeHandler", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRUIToolkitPokeHandler(XRUIToolkitPokeHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRUIToolkitPokeHandler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRUIToolkitPokeHandler(XRUIToolkitPokeHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11319};

/// @brief Field m_VisualizersRoot, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___m_VisualizersRoot;

/// @brief Field m_PokePointVisualizer, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___m_PokePointVisualizer;

/// @brief Field m_ClosestPointVisualizer, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___m_ClosestPointVisualizer;

/// @brief Field m_RayOriginVisualizer, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___m_RayOriginVisualizer;

/// @brief Field m_NormalVisualizer, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___m_NormalVisualizer;

/// @brief Field m_VisualizersCreated, offset: 0x38, size: 0x1, def value: None
 bool  ___m_VisualizersCreated;

/// @brief Field m_Interactor, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor>  ___m_Interactor;

/// @brief Field m_UpdateDepth, offset: 0x48, size: 0x1, def value: None
 bool  ___m_UpdateDepth;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitPokeHandler, ___m_VisualizersRoot) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitPokeHandler, ___m_PokePointVisualizer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitPokeHandler, ___m_ClosestPointVisualizer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitPokeHandler, ___m_RayOriginVisualizer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitPokeHandler, ___m_NormalVisualizer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitPokeHandler, ___m_VisualizersCreated) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitPokeHandler, ___m_Interactor) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitPokeHandler, ___m_UpdateDepth) == 0x48, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitPokeHandler) == 0x50, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::UI
