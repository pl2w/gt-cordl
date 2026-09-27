#pragma once
// IWYU pragma private; include "Oculus/Interaction/InteractableDebugVisual.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(InteractableDebugVisual)
namespace Oculus::Interaction {
class IInteractableView;
}
namespace Oculus::Interaction {
struct InteractableStateChangeArgs;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
class Renderer;
}
// Forward declare root types
namespace Oculus::Interaction {
class InteractableDebugVisual;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::InteractableDebugVisual*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::InteractableDebugVisual*, "Oculus.Interaction", "InteractableDebugVisual");
// Dependencies UnityEngine.Color, UnityEngine.MonoBehaviour
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.InteractableDebugVisual
class CORDL_TYPE InteractableDebugVisual : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_DisabledColor, put=set_DisabledColor)) ::UnityEngine::Color  DisabledColor;

 __declspec(property(get=get_HoverColor, put=set_HoverColor)) ::UnityEngine::Color  HoverColor;

/// @brief Field InteractableView, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_InteractableView, put=__cordl_internal_set_InteractableView)) ::Oculus::Interaction::IInteractableView*  InteractableView;

 __declspec(property(get=get_NormalColor, put=set_NormalColor)) ::UnityEngine::Color  NormalColor;

 __declspec(property(get=get_SelectColor, put=set_SelectColor)) ::UnityEngine::Color  SelectColor;

/// @brief Field _disabledColor, offset 0x60, size 0x10 
 __declspec(property(get=__cordl_internal_get__disabledColor, put=__cordl_internal_set__disabledColor)) ::UnityEngine::Color  _disabledColor;

/// @brief Field _hoverColor, offset 0x40, size 0x10 
 __declspec(property(get=__cordl_internal_get__hoverColor, put=__cordl_internal_set__hoverColor)) ::UnityEngine::Color  _hoverColor;

/// @brief Field _interactableView, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__interactableView, put=__cordl_internal_set__interactableView)) ::UnityW<::UnityEngine::Object>  _interactableView;

/// @brief Field _material, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__material, put=__cordl_internal_set__material)) ::UnityW<::UnityEngine::Material>  _material;

/// @brief Field _normalColor, offset 0x30, size 0x10 
 __declspec(property(get=__cordl_internal_get__normalColor, put=__cordl_internal_set__normalColor)) ::UnityEngine::Color  _normalColor;

/// @brief Field _renderer, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__renderer, put=__cordl_internal_set__renderer)) ::UnityW<::UnityEngine::Renderer>  _renderer;

/// @brief Field _selectColor, offset 0x50, size 0x10 
 __declspec(property(get=__cordl_internal_get__selectColor, put=__cordl_internal_set__selectColor)) ::UnityEngine::Color  _selectColor;

/// @brief Field _started, offset 0x80, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

/// @brief Method Awake, addr 0xa470b14, size 0x68, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method InjectAllInteractableDebugVisual, addr 0xa470fa0, size 0x2c, virtual false, abstract: false, final false
inline void InjectAllInteractableDebugVisual(::Oculus::Interaction::IInteractableView*  interactableView, ::UnityEngine::Renderer*  renderer) ;

/// @brief Method InjectInteractableView, addr 0xa470fcc, size 0xd0, virtual false, abstract: false, final false
inline void InjectInteractableView(::Oculus::Interaction::IInteractableView*  interactableView) ;

/// @brief Method InjectRenderer, addr 0xa47109c, size 0x8, virtual false, abstract: false, final false
inline void InjectRenderer(::UnityEngine::Renderer*  renderer) ;

static inline ::Oculus::Interaction::InteractableDebugVisual* New_ctor() ;

/// @brief Method OnDestroy, addr 0xa470f34, size 0x5c, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0xa470e34, size 0x100, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa470d2c, size 0x108, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method SetNormalColor, addr 0xa470f90, size 0xc, virtual false, abstract: false, final false
inline void SetNormalColor(::UnityEngine::Color  color) ;

/// @brief Method Start, addr 0xa470b7c, size 0x58, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method UpdateVisual, addr 0xa470bd4, size 0x158, virtual false, abstract: false, final false
inline void UpdateVisual() ;

/// @brief Method UpdateVisualState, addr 0xa470f9c, size 0x4, virtual false, abstract: false, final false
inline void UpdateVisualState(::Oculus::Interaction::InteractableStateChangeArgs  args) ;

constexpr ::Oculus::Interaction::IInteractableView* const& __cordl_internal_get_InteractableView() const;

constexpr ::Oculus::Interaction::IInteractableView*& __cordl_internal_get_InteractableView() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__disabledColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__disabledColor() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__hoverColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__hoverColor() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__interactableView() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__interactableView() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__material() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__material() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__normalColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__normalColor() ;

constexpr ::UnityW<::UnityEngine::Renderer> const& __cordl_internal_get__renderer() const;

constexpr ::UnityW<::UnityEngine::Renderer>& __cordl_internal_get__renderer() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__selectColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__selectColor() ;

constexpr bool const& __cordl_internal_get__started() const;

constexpr bool& __cordl_internal_get__started() ;

constexpr void __cordl_internal_set_InteractableView(::Oculus::Interaction::IInteractableView*  value) ;

constexpr void __cordl_internal_set__disabledColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__hoverColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__interactableView(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__material(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set__normalColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__renderer(::UnityW<::UnityEngine::Renderer>  value) ;

constexpr void __cordl_internal_set__selectColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__started(bool  value) ;

/// @brief Method .ctor, addr 0xa4710a4, size 0x30, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_DisabledColor, addr 0xa470afc, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_DisabledColor() ;

/// @brief Method get_HoverColor, addr 0xa470acc, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_HoverColor() ;

/// @brief Method get_NormalColor, addr 0xa470ab4, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_NormalColor() ;

/// @brief Method get_SelectColor, addr 0xa470ae4, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_SelectColor() ;

/// @brief Method set_DisabledColor, addr 0xa470b08, size 0xc, virtual false, abstract: false, final false
inline void set_DisabledColor(::UnityEngine::Color  value) ;

/// @brief Method set_HoverColor, addr 0xa470ad8, size 0xc, virtual false, abstract: false, final false
inline void set_HoverColor(::UnityEngine::Color  value) ;

/// @brief Method set_NormalColor, addr 0xa470ac0, size 0xc, virtual false, abstract: false, final false
inline void set_NormalColor(::UnityEngine::Color  value) ;

/// @brief Method set_SelectColor, addr 0xa470af0, size 0xc, virtual false, abstract: false, final false
inline void set_SelectColor(::UnityEngine::Color  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InteractableDebugVisual() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InteractableDebugVisual", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InteractableDebugVisual(InteractableDebugVisual && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InteractableDebugVisual", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InteractableDebugVisual(InteractableDebugVisual const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15929};

/// [Tooltip("The interactable to monitor for state changes.")]
/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.IInteractableView), new[] {  })]
/// @brief Field _interactableView, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____interactableView;

/// [Tooltip("The mesh that will change color based on the current state.")]
/// [SerializeField]
/// @brief Field _renderer, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Renderer>  ____renderer;

/// [Tooltip("Displayed when the state is normal.")]
/// [SerializeField]
/// @brief Field _normalColor, offset: 0x30, size: 0x10, def value: None
 ::UnityEngine::Color  ____normalColor;

/// [Tooltip("Displayed when the state is hover.")]
/// [SerializeField]
/// @brief Field _hoverColor, offset: 0x40, size: 0x10, def value: None
 ::UnityEngine::Color  ____hoverColor;

/// [Tooltip("Displayed when the state is selected.")]
/// [SerializeField]
/// @brief Field _selectColor, offset: 0x50, size: 0x10, def value: None
 ::UnityEngine::Color  ____selectColor;

/// [Tooltip("Displayed when the state is disabled.")]
/// [SerializeField]
/// @brief Field _disabledColor, offset: 0x60, size: 0x10, def value: None
 ::UnityEngine::Color  ____disabledColor;

/// @brief Field InteractableView, offset: 0x70, size: 0x8, def value: None
 ::Oculus::Interaction::IInteractableView*  ___InteractableView;

/// @brief Field _material, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ____material;

/// @brief Field _started, offset: 0x80, size: 0x1, def value: None
 bool  ____started;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::InteractableDebugVisual, ____interactableView) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::InteractableDebugVisual, ____renderer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::InteractableDebugVisual, ____normalColor) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::InteractableDebugVisual, ____hoverColor) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::InteractableDebugVisual, ____selectColor) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::InteractableDebugVisual, ____disabledColor) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::InteractableDebugVisual, ___InteractableView) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::InteractableDebugVisual, ____material) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::InteractableDebugVisual, ____started) == 0x80, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::InteractableDebugVisual) == 0x88, "Size mismatch!");

} // namespace end def Oculus::Interaction
