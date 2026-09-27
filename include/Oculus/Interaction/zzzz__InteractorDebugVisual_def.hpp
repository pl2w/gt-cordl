#pragma once
// IWYU pragma private; include "Oculus/Interaction/InteractorDebugVisual.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(InteractorDebugVisual)
namespace Oculus::Interaction {
class IInteractorView;
}
namespace Oculus::Interaction {
struct InteractorStateChangeArgs;
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
class InteractorDebugVisual;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::InteractorDebugVisual*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::InteractorDebugVisual*, "Oculus.Interaction", "InteractorDebugVisual");
// Dependencies UnityEngine.Color, UnityEngine.MonoBehaviour
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.InteractorDebugVisual
class CORDL_TYPE InteractorDebugVisual : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_DisabledColor, put=set_DisabledColor)) ::UnityEngine::Color  DisabledColor;

 __declspec(property(get=get_HoverColor, put=set_HoverColor)) ::UnityEngine::Color  HoverColor;

/// @brief Field InteractorView, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_InteractorView, put=__cordl_internal_set_InteractorView)) ::Oculus::Interaction::IInteractorView*  InteractorView;

 __declspec(property(get=get_NormalColor, put=set_NormalColor)) ::UnityEngine::Color  NormalColor;

 __declspec(property(get=get_SelectColor, put=set_SelectColor)) ::UnityEngine::Color  SelectColor;

/// @brief Field _disabledColor, offset 0x60, size 0x10 
 __declspec(property(get=__cordl_internal_get__disabledColor, put=__cordl_internal_set__disabledColor)) ::UnityEngine::Color  _disabledColor;

/// @brief Field _hoverColor, offset 0x40, size 0x10 
 __declspec(property(get=__cordl_internal_get__hoverColor, put=__cordl_internal_set__hoverColor)) ::UnityEngine::Color  _hoverColor;

/// @brief Field _interactorView, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__interactorView, put=__cordl_internal_set__interactorView)) ::UnityW<::UnityEngine::Object>  _interactorView;

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

/// @brief Method Awake, addr 0xa471134, size 0x68, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method InjectAllInteractorDebugVisual, addr 0xa4715ac, size 0x2c, virtual false, abstract: false, final false
inline void InjectAllInteractorDebugVisual(::Oculus::Interaction::IInteractorView*  interactorView, ::UnityEngine::Renderer*  renderer) ;

/// @brief Method InjectInteractorView, addr 0xa4715d8, size 0xd0, virtual false, abstract: false, final false
inline void InjectInteractorView(::Oculus::Interaction::IInteractorView*  interactorView) ;

/// @brief Method InjectRenderer, addr 0xa4716a8, size 0x8, virtual false, abstract: false, final false
inline void InjectRenderer(::UnityEngine::Renderer*  renderer) ;

static inline ::Oculus::Interaction::InteractorDebugVisual* New_ctor() ;

/// @brief Method OnDestroy, addr 0xa471550, size 0x5c, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0xa47144c, size 0x100, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa4711ec, size 0x108, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Start, addr 0xa47119c, size 0x50, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method UpdateVisual, addr 0xa4712f4, size 0x158, virtual false, abstract: false, final false
inline void UpdateVisual() ;

/// @brief Method UpdateVisualState, addr 0xa47154c, size 0x4, virtual false, abstract: false, final false
inline void UpdateVisualState(::Oculus::Interaction::InteractorStateChangeArgs  args) ;

constexpr ::Oculus::Interaction::IInteractorView* const& __cordl_internal_get_InteractorView() const;

constexpr ::Oculus::Interaction::IInteractorView*& __cordl_internal_get_InteractorView() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__disabledColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__disabledColor() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__hoverColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__hoverColor() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__interactorView() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__interactorView() ;

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

constexpr void __cordl_internal_set_InteractorView(::Oculus::Interaction::IInteractorView*  value) ;

constexpr void __cordl_internal_set__disabledColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__hoverColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__interactorView(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__material(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set__normalColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__renderer(::UnityW<::UnityEngine::Renderer>  value) ;

constexpr void __cordl_internal_set__selectColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__started(bool  value) ;

/// @brief Method .ctor, addr 0xa4716b0, size 0x30, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_DisabledColor, addr 0xa47111c, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_DisabledColor() ;

/// @brief Method get_HoverColor, addr 0xa4710ec, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_HoverColor() ;

/// @brief Method get_NormalColor, addr 0xa4710d4, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_NormalColor() ;

/// @brief Method get_SelectColor, addr 0xa471104, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_SelectColor() ;

/// @brief Method set_DisabledColor, addr 0xa471128, size 0xc, virtual false, abstract: false, final false
inline void set_DisabledColor(::UnityEngine::Color  value) ;

/// @brief Method set_HoverColor, addr 0xa4710f8, size 0xc, virtual false, abstract: false, final false
inline void set_HoverColor(::UnityEngine::Color  value) ;

/// @brief Method set_NormalColor, addr 0xa4710e0, size 0xc, virtual false, abstract: false, final false
inline void set_NormalColor(::UnityEngine::Color  value) ;

/// @brief Method set_SelectColor, addr 0xa471110, size 0xc, virtual false, abstract: false, final false
inline void set_SelectColor(::UnityEngine::Color  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InteractorDebugVisual() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InteractorDebugVisual", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InteractorDebugVisual(InteractorDebugVisual && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InteractorDebugVisual", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InteractorDebugVisual(InteractorDebugVisual const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15930};

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.IInteractorView), new[] {  })]
/// @brief Field _interactorView, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____interactorView;

/// [SerializeField]
/// @brief Field _renderer, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Renderer>  ____renderer;

/// [SerializeField]
/// @brief Field _normalColor, offset: 0x30, size: 0x10, def value: None
 ::UnityEngine::Color  ____normalColor;

/// [SerializeField]
/// @brief Field _hoverColor, offset: 0x40, size: 0x10, def value: None
 ::UnityEngine::Color  ____hoverColor;

/// [SerializeField]
/// @brief Field _selectColor, offset: 0x50, size: 0x10, def value: None
 ::UnityEngine::Color  ____selectColor;

/// [SerializeField]
/// @brief Field _disabledColor, offset: 0x60, size: 0x10, def value: None
 ::UnityEngine::Color  ____disabledColor;

/// @brief Field InteractorView, offset: 0x70, size: 0x8, def value: None
 ::Oculus::Interaction::IInteractorView*  ___InteractorView;

/// @brief Field _material, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ____material;

/// @brief Field _started, offset: 0x80, size: 0x1, def value: None
 bool  ____started;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::InteractorDebugVisual, ____interactorView) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::InteractorDebugVisual, ____renderer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::InteractorDebugVisual, ____normalColor) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::InteractorDebugVisual, ____hoverColor) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::InteractorDebugVisual, ____selectColor) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::InteractorDebugVisual, ____disabledColor) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::InteractorDebugVisual, ___InteractorView) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::InteractorDebugVisual, ____material) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::InteractorDebugVisual, ____started) == 0x80, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::InteractorDebugVisual) == 0x88, "Size mismatch!");

} // namespace end def Oculus::Interaction
