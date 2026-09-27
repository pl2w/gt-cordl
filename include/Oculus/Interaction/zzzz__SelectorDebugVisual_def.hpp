#pragma once
// IWYU pragma private; include "Oculus/Interaction/SelectorDebugVisual.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(SelectorDebugVisual)
namespace Oculus::Interaction {
class ISelector;
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
class SelectorDebugVisual;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::SelectorDebugVisual*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::SelectorDebugVisual*, "Oculus.Interaction", "SelectorDebugVisual");
// Dependencies UnityEngine.Color, UnityEngine.MonoBehaviour
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.SelectorDebugVisual
class CORDL_TYPE SelectorDebugVisual : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_NormalColor, put=set_NormalColor)) ::UnityEngine::Color  NormalColor;

 __declspec(property(get=get_SelectColor, put=set_SelectColor)) ::UnityEngine::Color  SelectColor;

/// @brief Field Selector, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_Selector, put=__cordl_internal_set_Selector)) ::Oculus::Interaction::ISelector*  Selector;

/// @brief Field _material, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__material, put=__cordl_internal_set__material)) ::UnityW<::UnityEngine::Material>  _material;

/// @brief Field _normalColor, offset 0x30, size 0x10 
 __declspec(property(get=__cordl_internal_get__normalColor, put=__cordl_internal_set__normalColor)) ::UnityEngine::Color  _normalColor;

/// @brief Field _renderer, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__renderer, put=__cordl_internal_set__renderer)) ::UnityW<::UnityEngine::Renderer>  _renderer;

/// @brief Field _selectColor, offset 0x40, size 0x10 
 __declspec(property(get=__cordl_internal_get__selectColor, put=__cordl_internal_set__selectColor)) ::UnityEngine::Color  _selectColor;

/// @brief Field _selected, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get__selected, put=__cordl_internal_set__selected)) bool  _selected;

/// @brief Field _selector, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__selector, put=__cordl_internal_set__selector)) ::UnityW<::UnityEngine::Object>  _selector;

/// @brief Field _started, offset 0x61, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

/// @brief Method Awake, addr 0xa471710, size 0x68, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method HandleSelected, addr 0xa471be0, size 0x38, virtual false, abstract: false, final false
inline void HandleSelected() ;

/// @brief Method HandleUnselected, addr 0xa471b50, size 0x34, virtual false, abstract: false, final false
inline void HandleUnselected() ;

/// @brief Method InjectAllSelectorDebugVisual, addr 0xa471c18, size 0x2c, virtual false, abstract: false, final false
inline void InjectAllSelectorDebugVisual(::Oculus::Interaction::ISelector*  selector, ::UnityEngine::Renderer*  renderer) ;

/// @brief Method InjectRenderer, addr 0xa471d14, size 0x8, virtual false, abstract: false, final false
inline void InjectRenderer(::UnityEngine::Renderer*  renderer) ;

/// @brief Method InjectSelector, addr 0xa471c44, size 0xd0, virtual false, abstract: false, final false
inline void InjectSelector(::Oculus::Interaction::ISelector*  selector) ;

static inline ::Oculus::Interaction::SelectorDebugVisual* New_ctor() ;

/// @brief Method OnDestroy, addr 0xa471b84, size 0x5c, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0xa471998, size 0x1b8, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa4717ec, size 0x1ac, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Start, addr 0xa471778, size 0x74, virtual true, abstract: false, final false
inline void Start() ;

constexpr ::Oculus::Interaction::ISelector* const& __cordl_internal_get_Selector() const;

constexpr ::Oculus::Interaction::ISelector*& __cordl_internal_get_Selector() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__material() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__material() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__normalColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__normalColor() ;

constexpr ::UnityW<::UnityEngine::Renderer> const& __cordl_internal_get__renderer() const;

constexpr ::UnityW<::UnityEngine::Renderer>& __cordl_internal_get__renderer() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__selectColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__selectColor() ;

constexpr bool const& __cordl_internal_get__selected() const;

constexpr bool& __cordl_internal_get__selected() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__selector() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__selector() ;

constexpr bool const& __cordl_internal_get__started() const;

constexpr bool& __cordl_internal_get__started() ;

constexpr void __cordl_internal_set_Selector(::Oculus::Interaction::ISelector*  value) ;

constexpr void __cordl_internal_set__material(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set__normalColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__renderer(::UnityW<::UnityEngine::Renderer>  value) ;

constexpr void __cordl_internal_set__selectColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__selected(bool  value) ;

constexpr void __cordl_internal_set__selector(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__started(bool  value) ;

/// @brief Method .ctor, addr 0xa471d1c, size 0x1c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_NormalColor, addr 0xa4716e0, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_NormalColor() ;

/// @brief Method get_SelectColor, addr 0xa4716f8, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_SelectColor() ;

/// @brief Method set_NormalColor, addr 0xa4716ec, size 0xc, virtual false, abstract: false, final false
inline void set_NormalColor(::UnityEngine::Color  value) ;

/// @brief Method set_SelectColor, addr 0xa471704, size 0xc, virtual false, abstract: false, final false
inline void set_SelectColor(::UnityEngine::Color  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SelectorDebugVisual() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SelectorDebugVisual", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SelectorDebugVisual(SelectorDebugVisual && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SelectorDebugVisual", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SelectorDebugVisual(SelectorDebugVisual const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15931};

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.ISelector), new[] {  })]
/// @brief Field _selector, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____selector;

/// [SerializeField]
/// @brief Field _renderer, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Renderer>  ____renderer;

/// [SerializeField]
/// @brief Field _normalColor, offset: 0x30, size: 0x10, def value: None
 ::UnityEngine::Color  ____normalColor;

/// [SerializeField]
/// @brief Field _selectColor, offset: 0x40, size: 0x10, def value: None
 ::UnityEngine::Color  ____selectColor;

/// @brief Field Selector, offset: 0x50, size: 0x8, def value: None
 ::Oculus::Interaction::ISelector*  ___Selector;

/// @brief Field _material, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ____material;

/// @brief Field _selected, offset: 0x60, size: 0x1, def value: None
 bool  ____selected;

/// @brief Field _started, offset: 0x61, size: 0x1, def value: None
 bool  ____started;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::SelectorDebugVisual, ____selector) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::SelectorDebugVisual, ____renderer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::SelectorDebugVisual, ____normalColor) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::SelectorDebugVisual, ____selectColor) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::SelectorDebugVisual, ___Selector) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::SelectorDebugVisual, ____material) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::SelectorDebugVisual, ____selected) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::SelectorDebugVisual, ____started) == 0x61, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::SelectorDebugVisual) == 0x68, "Size mismatch!");

} // namespace end def Oculus::Interaction
