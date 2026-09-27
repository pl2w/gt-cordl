#pragma once
// IWYU pragma private; include "Oculus/Interaction/PointableDebugVisual.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(PointableDebugVisual)
namespace Oculus::Interaction {
class IPointable;
}
namespace Oculus::Interaction {
struct PointerEvent;
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
class PointableDebugVisual;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::PointableDebugVisual*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::PointableDebugVisual*, "Oculus.Interaction", "PointableDebugVisual");
// Dependencies UnityEngine.Color, UnityEngine.MonoBehaviour
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.PointableDebugVisual
class CORDL_TYPE PointableDebugVisual : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_HoverColor, put=set_HoverColor)) ::UnityEngine::Color  HoverColor;

 __declspec(property(get=get_NormalColor, put=set_NormalColor)) ::UnityEngine::Color  NormalColor;

/// @brief Field Pointable, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_Pointable, put=__cordl_internal_set_Pointable)) ::Oculus::Interaction::IPointable*  Pointable;

 __declspec(property(get=get_SelectColor, put=set_SelectColor)) ::UnityEngine::Color  SelectColor;

/// @brief Field _hover, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get__hover, put=__cordl_internal_set__hover)) bool  _hover;

/// @brief Field _hoverColor, offset 0x40, size 0x10 
 __declspec(property(get=__cordl_internal_get__hoverColor, put=__cordl_internal_set__hoverColor)) ::UnityEngine::Color  _hoverColor;

/// @brief Field _material, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__material, put=__cordl_internal_set__material)) ::UnityW<::UnityEngine::Material>  _material;

/// @brief Field _normalColor, offset 0x30, size 0x10 
 __declspec(property(get=__cordl_internal_get__normalColor, put=__cordl_internal_set__normalColor)) ::UnityEngine::Color  _normalColor;

/// @brief Field _pointable, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__pointable, put=__cordl_internal_set__pointable)) ::UnityW<::UnityEngine::Object>  _pointable;

/// @brief Field _renderer, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__renderer, put=__cordl_internal_set__renderer)) ::UnityW<::UnityEngine::Renderer>  _renderer;

/// @brief Field _select, offset 0x71, size 0x1 
 __declspec(property(get=__cordl_internal_get__select, put=__cordl_internal_set__select)) bool  _select;

/// @brief Field _selectColor, offset 0x50, size 0x10 
 __declspec(property(get=__cordl_internal_get__selectColor, put=__cordl_internal_set__selectColor)) ::UnityEngine::Color  _selectColor;

/// @brief Field _started, offset 0x72, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

/// @brief Method Awake, addr 0xa46ba38, size 0x68, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method HandlePointerEventRaised, addr 0xa46bdec, size 0x54, virtual false, abstract: false, final false
inline void HandlePointerEventRaised(::Oculus::Interaction::PointerEvent  evt) ;

/// @brief Method InjectAllPointableDebugVisual, addr 0xa46be40, size 0x2c, virtual false, abstract: false, final false
inline void InjectAllPointableDebugVisual(::Oculus::Interaction::IPointable*  pointable, ::UnityEngine::Renderer*  renderer) ;

/// @brief Method InjectPointable, addr 0xa46be6c, size 0xd0, virtual false, abstract: false, final false
inline void InjectPointable(::Oculus::Interaction::IPointable*  pointable) ;

/// @brief Method InjectRenderer, addr 0xa46bf3c, size 0x8, virtual false, abstract: false, final false
inline void InjectRenderer(::UnityEngine::Renderer*  renderer) ;

static inline ::Oculus::Interaction::PointableDebugVisual* New_ctor() ;

/// @brief Method OnDestroy, addr 0xa46bd90, size 0x5c, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0xa46bc90, size 0x100, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa46bb14, size 0x104, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Start, addr 0xa46baa0, size 0x74, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method UpdateMaterialColor, addr 0xa46bc18, size 0x78, virtual false, abstract: false, final false
inline void UpdateMaterialColor() ;

constexpr ::Oculus::Interaction::IPointable* const& __cordl_internal_get_Pointable() const;

constexpr ::Oculus::Interaction::IPointable*& __cordl_internal_get_Pointable() ;

constexpr bool const& __cordl_internal_get__hover() const;

constexpr bool& __cordl_internal_get__hover() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__hoverColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__hoverColor() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__material() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__material() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__normalColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__normalColor() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__pointable() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__pointable() ;

constexpr ::UnityW<::UnityEngine::Renderer> const& __cordl_internal_get__renderer() const;

constexpr ::UnityW<::UnityEngine::Renderer>& __cordl_internal_get__renderer() ;

constexpr bool const& __cordl_internal_get__select() const;

constexpr bool& __cordl_internal_get__select() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__selectColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__selectColor() ;

constexpr bool const& __cordl_internal_get__started() const;

constexpr bool& __cordl_internal_get__started() ;

constexpr void __cordl_internal_set_Pointable(::Oculus::Interaction::IPointable*  value) ;

constexpr void __cordl_internal_set__hover(bool  value) ;

constexpr void __cordl_internal_set__hoverColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__material(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set__normalColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__pointable(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__renderer(::UnityW<::UnityEngine::Renderer>  value) ;

constexpr void __cordl_internal_set__select(bool  value) ;

constexpr void __cordl_internal_set__selectColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__started(bool  value) ;

/// @brief Method .ctor, addr 0xa46bf44, size 0x28, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_HoverColor, addr 0xa46ba08, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_HoverColor() ;

/// @brief Method get_NormalColor, addr 0xa46b9f0, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_NormalColor() ;

/// @brief Method get_SelectColor, addr 0xa46ba20, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_SelectColor() ;

/// @brief Method set_HoverColor, addr 0xa46ba14, size 0xc, virtual false, abstract: false, final false
inline void set_HoverColor(::UnityEngine::Color  value) ;

/// @brief Method set_NormalColor, addr 0xa46b9fc, size 0xc, virtual false, abstract: false, final false
inline void set_NormalColor(::UnityEngine::Color  value) ;

/// @brief Method set_SelectColor, addr 0xa46ba2c, size 0xc, virtual false, abstract: false, final false
inline void set_SelectColor(::UnityEngine::Color  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PointableDebugVisual() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PointableDebugVisual", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PointableDebugVisual(PointableDebugVisual && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PointableDebugVisual", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PointableDebugVisual(PointableDebugVisual const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15907};

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.IPointable), new[] {  })]
/// @brief Field _pointable, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____pointable;

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

/// @brief Field Pointable, offset: 0x60, size: 0x8, def value: None
 ::Oculus::Interaction::IPointable*  ___Pointable;

/// @brief Field _material, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ____material;

/// @brief Field _hover, offset: 0x70, size: 0x1, def value: None
 bool  ____hover;

/// @brief Field _select, offset: 0x71, size: 0x1, def value: None
 bool  ____select;

/// @brief Field _started, offset: 0x72, size: 0x1, def value: None
 bool  ____started;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::PointableDebugVisual, ____pointable) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PointableDebugVisual, ____renderer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PointableDebugVisual, ____normalColor) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PointableDebugVisual, ____hoverColor) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PointableDebugVisual, ____selectColor) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PointableDebugVisual, ___Pointable) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PointableDebugVisual, ____material) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PointableDebugVisual, ____hover) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PointableDebugVisual, ____select) == 0x71, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PointableDebugVisual, ____started) == 0x72, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::PointableDebugVisual) == 0x78, "Size mismatch!");

} // namespace end def Oculus::Interaction
