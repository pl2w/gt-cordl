#pragma once
// IWYU pragma private; include "Oculus/Interaction/ControllerRayVisual.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ControllerRayVisual)
namespace Oculus::Interaction {
struct InteractorStateChangeArgs;
}
namespace Oculus::Interaction {
class MaterialPropertyBlockEditor;
}
namespace Oculus::Interaction {
class RayInteractor;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Renderer;
}
// Forward declare root types
namespace Oculus::Interaction {
class ControllerRayVisual;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::ControllerRayVisual*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::ControllerRayVisual*, "Oculus.Interaction", "ControllerRayVisual");
// Dependencies UnityEngine.Color, UnityEngine.MonoBehaviour
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.ControllerRayVisual
class CORDL_TYPE ControllerRayVisual : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_HoverColor0, put=set_HoverColor0)) ::UnityEngine::Color  HoverColor0;

 __declspec(property(get=get_HoverColor1, put=set_HoverColor1)) ::UnityEngine::Color  HoverColor1;

 __declspec(property(get=get_MaxRayVisualLength, put=set_MaxRayVisualLength)) float_t  MaxRayVisualLength;

 __declspec(property(get=get_SelectColor0, put=set_SelectColor0)) ::UnityEngine::Color  SelectColor0;

 __declspec(property(get=get_SelectColor1, put=set_SelectColor1)) ::UnityEngine::Color  SelectColor1;

/// @brief Field _hideWhenNoInteractable, offset 0x7c, size 0x1 
 __declspec(property(get=__cordl_internal_get__hideWhenNoInteractable, put=__cordl_internal_set__hideWhenNoInteractable)) bool  _hideWhenNoInteractable;

/// @brief Field _hoverColor0, offset 0x3c, size 0x10 
 __declspec(property(get=__cordl_internal_get__hoverColor0, put=__cordl_internal_set__hoverColor0)) ::UnityEngine::Color  _hoverColor0;

/// @brief Field _hoverColor1, offset 0x4c, size 0x10 
 __declspec(property(get=__cordl_internal_get__hoverColor1, put=__cordl_internal_set__hoverColor1)) ::UnityEngine::Color  _hoverColor1;

/// @brief Field _materialPropertyBlockEditor, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__materialPropertyBlockEditor, put=__cordl_internal_set__materialPropertyBlockEditor)) ::UnityW<::Oculus::Interaction::MaterialPropertyBlockEditor>  _materialPropertyBlockEditor;

/// @brief Field _maxRayVisualLength, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxRayVisualLength, put=__cordl_internal_set__maxRayVisualLength)) float_t  _maxRayVisualLength;

/// @brief Field _rayInteractor, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__rayInteractor, put=__cordl_internal_set__rayInteractor)) ::UnityW<::Oculus::Interaction::RayInteractor>  _rayInteractor;

/// @brief Field _renderer, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__renderer, put=__cordl_internal_set__renderer)) ::UnityW<::UnityEngine::Renderer>  _renderer;

/// @brief Field _selectColor0, offset 0x5c, size 0x10 
 __declspec(property(get=__cordl_internal_get__selectColor0, put=__cordl_internal_set__selectColor0)) ::UnityEngine::Color  _selectColor0;

/// @brief Field _selectColor1, offset 0x6c, size 0x10 
 __declspec(property(get=__cordl_internal_get__selectColor1, put=__cordl_internal_set__selectColor1)) ::UnityEngine::Color  _selectColor1;

/// @brief Field _shaderColor0, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get__shaderColor0, put=__cordl_internal_set__shaderColor0)) int32_t  _shaderColor0;

/// @brief Field _shaderColor1, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get__shaderColor1, put=__cordl_internal_set__shaderColor1)) int32_t  _shaderColor1;

/// @brief Field _started, offset 0x88, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

/// @brief Method HandleStateChanged, addr 0xa45d5e8, size 0x4, virtual false, abstract: false, final false
inline void HandleStateChanged(::Oculus::Interaction::InteractorStateChangeArgs  args) ;

/// @brief Method InjectAllControllerRayVisual, addr 0xa45d900, size 0x44, virtual false, abstract: false, final false
inline void InjectAllControllerRayVisual(::Oculus::Interaction::RayInteractor*  rayInteractor, ::UnityEngine::Renderer*  renderer, ::Oculus::Interaction::MaterialPropertyBlockEditor*  materialPropertyBlockEditor) ;

/// @brief Method InjectMaterialPropertyBlockEditor, addr 0xa45d954, size 0x8, virtual false, abstract: false, final false
inline void InjectMaterialPropertyBlockEditor(::Oculus::Interaction::MaterialPropertyBlockEditor*  materialPropertyBlockEditor) ;

/// @brief Method InjectRayInteractor, addr 0xa45d944, size 0x8, virtual false, abstract: false, final false
inline void InjectRayInteractor(::Oculus::Interaction::RayInteractor*  rayInteractor) ;

/// @brief Method InjectRenderer, addr 0xa45d94c, size 0x8, virtual false, abstract: false, final false
inline void InjectRenderer(::UnityEngine::Renderer*  renderer) ;

static inline ::Oculus::Interaction::ControllerRayVisual* New_ctor() ;

/// @brief Method OnDisable, addr 0xa45d4bc, size 0x12c, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa45d390, size 0x12c, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Start, addr 0xa45d364, size 0x2c, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method UpdateVisual, addr 0xa45d5ec, size 0x314, virtual false, abstract: false, final false
inline void UpdateVisual() ;

constexpr bool const& __cordl_internal_get__hideWhenNoInteractable() const;

constexpr bool& __cordl_internal_get__hideWhenNoInteractable() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__hoverColor0() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__hoverColor0() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__hoverColor1() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__hoverColor1() ;

constexpr ::UnityW<::Oculus::Interaction::MaterialPropertyBlockEditor> const& __cordl_internal_get__materialPropertyBlockEditor() const;

constexpr ::UnityW<::Oculus::Interaction::MaterialPropertyBlockEditor>& __cordl_internal_get__materialPropertyBlockEditor() ;

constexpr float_t const& __cordl_internal_get__maxRayVisualLength() const;

constexpr float_t& __cordl_internal_get__maxRayVisualLength() ;

constexpr ::UnityW<::Oculus::Interaction::RayInteractor> const& __cordl_internal_get__rayInteractor() const;

constexpr ::UnityW<::Oculus::Interaction::RayInteractor>& __cordl_internal_get__rayInteractor() ;

constexpr ::UnityW<::UnityEngine::Renderer> const& __cordl_internal_get__renderer() const;

constexpr ::UnityW<::UnityEngine::Renderer>& __cordl_internal_get__renderer() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__selectColor0() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__selectColor0() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__selectColor1() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__selectColor1() ;

constexpr int32_t const& __cordl_internal_get__shaderColor0() const;

constexpr int32_t& __cordl_internal_get__shaderColor0() ;

constexpr int32_t const& __cordl_internal_get__shaderColor1() const;

constexpr int32_t& __cordl_internal_get__shaderColor1() ;

constexpr bool const& __cordl_internal_get__started() const;

constexpr bool& __cordl_internal_get__started() ;

constexpr void __cordl_internal_set__hideWhenNoInteractable(bool  value) ;

constexpr void __cordl_internal_set__hoverColor0(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__hoverColor1(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__materialPropertyBlockEditor(::UnityW<::Oculus::Interaction::MaterialPropertyBlockEditor>  value) ;

constexpr void __cordl_internal_set__maxRayVisualLength(float_t  value) ;

constexpr void __cordl_internal_set__rayInteractor(::UnityW<::Oculus::Interaction::RayInteractor>  value) ;

constexpr void __cordl_internal_set__renderer(::UnityW<::UnityEngine::Renderer>  value) ;

constexpr void __cordl_internal_set__selectColor0(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__selectColor1(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__shaderColor0(int32_t  value) ;

constexpr void __cordl_internal_set__shaderColor1(int32_t  value) ;

constexpr void __cordl_internal_set__started(bool  value) ;

/// @brief Method .ctor, addr 0xa45d95c, size 0xb8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_HoverColor0, addr 0xa45d304, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_HoverColor0() ;

/// @brief Method get_HoverColor1, addr 0xa45d31c, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_HoverColor1() ;

/// @brief Method get_MaxRayVisualLength, addr 0xa45d2f4, size 0x8, virtual false, abstract: false, final false
inline float_t get_MaxRayVisualLength() ;

/// @brief Method get_SelectColor0, addr 0xa45d334, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_SelectColor0() ;

/// @brief Method get_SelectColor1, addr 0xa45d34c, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_SelectColor1() ;

/// @brief Method set_HoverColor0, addr 0xa45d310, size 0xc, virtual false, abstract: false, final false
inline void set_HoverColor0(::UnityEngine::Color  value) ;

/// @brief Method set_HoverColor1, addr 0xa45d328, size 0xc, virtual false, abstract: false, final false
inline void set_HoverColor1(::UnityEngine::Color  value) ;

/// @brief Method set_MaxRayVisualLength, addr 0xa45d2fc, size 0x8, virtual false, abstract: false, final false
inline void set_MaxRayVisualLength(float_t  value) ;

/// @brief Method set_SelectColor0, addr 0xa45d340, size 0xc, virtual false, abstract: false, final false
inline void set_SelectColor0(::UnityEngine::Color  value) ;

/// @brief Method set_SelectColor1, addr 0xa45d358, size 0xc, virtual false, abstract: false, final false
inline void set_SelectColor1(::UnityEngine::Color  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ControllerRayVisual() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ControllerRayVisual", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ControllerRayVisual(ControllerRayVisual && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ControllerRayVisual", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ControllerRayVisual(ControllerRayVisual const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15865};

/// [SerializeField]
/// @brief Field _rayInteractor, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::RayInteractor>  ____rayInteractor;

/// [SerializeField]
/// @brief Field _renderer, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Renderer>  ____renderer;

/// [SerializeField]
/// @brief Field _materialPropertyBlockEditor, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::MaterialPropertyBlockEditor>  ____materialPropertyBlockEditor;

/// [SerializeField]
/// @brief Field _maxRayVisualLength, offset: 0x38, size: 0x4, def value: None
 float_t  ____maxRayVisualLength;

/// [SerializeField]
/// @brief Field _hoverColor0, offset: 0x3c, size: 0x10, def value: None
 ::UnityEngine::Color  ____hoverColor0;

/// [SerializeField]
/// @brief Field _hoverColor1, offset: 0x4c, size: 0x10, def value: None
 ::UnityEngine::Color  ____hoverColor1;

/// [SerializeField]
/// @brief Field _selectColor0, offset: 0x5c, size: 0x10, def value: None
 ::UnityEngine::Color  ____selectColor0;

/// [SerializeField]
/// @brief Field _selectColor1, offset: 0x6c, size: 0x10, def value: None
 ::UnityEngine::Color  ____selectColor1;

/// [SerializeField]
/// @brief Field _hideWhenNoInteractable, offset: 0x7c, size: 0x1, def value: None
 bool  ____hideWhenNoInteractable;

/// @brief Field _shaderColor0, offset: 0x80, size: 0x4, def value: None
 int32_t  ____shaderColor0;

/// @brief Field _shaderColor1, offset: 0x84, size: 0x4, def value: None
 int32_t  ____shaderColor1;

/// @brief Field _started, offset: 0x88, size: 0x1, def value: None
 bool  ____started;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::ControllerRayVisual, ____rayInteractor) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::ControllerRayVisual, ____renderer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::ControllerRayVisual, ____materialPropertyBlockEditor) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::ControllerRayVisual, ____maxRayVisualLength) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::ControllerRayVisual, ____hoverColor0) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::ControllerRayVisual, ____hoverColor1) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::ControllerRayVisual, ____selectColor0) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::ControllerRayVisual, ____selectColor1) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::ControllerRayVisual, ____hideWhenNoInteractable) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::ControllerRayVisual, ____shaderColor0) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::ControllerRayVisual, ____shaderColor1) == 0x84, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::ControllerRayVisual, ____started) == 0x88, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::ControllerRayVisual) == 0x90, "Size mismatch!");

} // namespace end def Oculus::Interaction
