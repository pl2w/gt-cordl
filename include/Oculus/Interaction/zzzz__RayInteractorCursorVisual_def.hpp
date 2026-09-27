#pragma once
// IWYU pragma private; include "Oculus/Interaction/RayInteractorCursorVisual.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(RayInteractorCursorVisual)
namespace Oculus::Interaction {
struct InteractorStateChangeArgs;
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
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Oculus::Interaction {
class RayInteractorCursorVisual;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::RayInteractorCursorVisual*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::RayInteractorCursorVisual*, "Oculus.Interaction", "RayInteractorCursorVisual");
// Dependencies UnityEngine.Color, UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.RayInteractorCursorVisual
class CORDL_TYPE RayInteractorCursorVisual : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_HoverColor, put=set_HoverColor)) ::UnityEngine::Color  HoverColor;

 __declspec(property(get=get_OffsetAlongNormal, put=set_OffsetAlongNormal)) float_t  OffsetAlongNormal;

 __declspec(property(get=get_OutlineColor, put=set_OutlineColor)) ::UnityEngine::Color  OutlineColor;

 __declspec(property(get=get_PlayerHead, put=set_PlayerHead)) ::UnityW<::UnityEngine::Transform>  PlayerHead;

 __declspec(property(get=get_SelectColor, put=set_SelectColor)) ::UnityEngine::Color  SelectColor;

/// @brief Field _hoverColor, offset 0x30, size 0x10 
 __declspec(property(get=__cordl_internal_get__hoverColor, put=__cordl_internal_set__hoverColor)) ::UnityEngine::Color  _hoverColor;

/// @brief Field _offsetAlongNormal, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get__offsetAlongNormal, put=__cordl_internal_set__offsetAlongNormal)) float_t  _offsetAlongNormal;

/// @brief Field _outlineColor, offset 0x50, size 0x10 
 __declspec(property(get=__cordl_internal_get__outlineColor, put=__cordl_internal_set__outlineColor)) ::UnityEngine::Color  _outlineColor;

/// @brief Field _playerHead, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__playerHead, put=__cordl_internal_set__playerHead)) ::UnityW<::UnityEngine::Transform>  _playerHead;

/// @brief Field _rayInteractor, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__rayInteractor, put=__cordl_internal_set__rayInteractor)) ::UnityW<::Oculus::Interaction::RayInteractor>  _rayInteractor;

/// @brief Field _renderer, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__renderer, put=__cordl_internal_set__renderer)) ::UnityW<::UnityEngine::Renderer>  _renderer;

/// @brief Field _selectColor, offset 0x40, size 0x10 
 __declspec(property(get=__cordl_internal_get__selectColor, put=__cordl_internal_set__selectColor)) ::UnityEngine::Color  _selectColor;

/// @brief Field _shaderInnerColor, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get__shaderInnerColor, put=__cordl_internal_set__shaderInnerColor)) int32_t  _shaderInnerColor;

/// @brief Field _shaderOutlineColor, offset 0x8c, size 0x4 
 __declspec(property(get=__cordl_internal_get__shaderOutlineColor, put=__cordl_internal_set__shaderOutlineColor)) int32_t  _shaderOutlineColor;

/// @brief Field _shaderRadialGradientBackgroundOpacity, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get__shaderRadialGradientBackgroundOpacity, put=__cordl_internal_set__shaderRadialGradientBackgroundOpacity)) int32_t  _shaderRadialGradientBackgroundOpacity;

/// @brief Field _shaderRadialGradientIntensity, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get__shaderRadialGradientIntensity, put=__cordl_internal_set__shaderRadialGradientIntensity)) int32_t  _shaderRadialGradientIntensity;

/// @brief Field _shaderRadialGradientScale, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get__shaderRadialGradientScale, put=__cordl_internal_set__shaderRadialGradientScale)) int32_t  _shaderRadialGradientScale;

/// @brief Field _startScale, offset 0x70, size 0xc 
 __declspec(property(get=__cordl_internal_get__startScale, put=__cordl_internal_set__startScale)) ::UnityEngine::Vector3  _startScale;

/// @brief Field _started, offset 0x90, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

/// @brief Method InjectAllRayInteractorCursorVisual, addr 0xa45ecb0, size 0x30, virtual false, abstract: false, final false
inline void InjectAllRayInteractorCursorVisual(::Oculus::Interaction::RayInteractor*  rayInteractor, ::UnityEngine::Renderer*  renderer) ;

/// @brief Method InjectRayInteractor, addr 0xa45ece0, size 0x8, virtual false, abstract: false, final false
inline void InjectRayInteractor(::Oculus::Interaction::RayInteractor*  rayInteractor) ;

/// @brief Method InjectRenderer, addr 0xa45ece8, size 0x8, virtual false, abstract: false, final false
inline void InjectRenderer(::UnityEngine::Renderer*  renderer) ;

static inline ::Oculus::Interaction::RayInteractorCursorVisual* New_ctor() ;

/// @brief Method OnDisable, addr 0xa45eb80, size 0x12c, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa45ea4c, size 0x134, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Start, addr 0xa45e5c4, size 0x58, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method UpdateVisual, addr 0xa45e61c, size 0x430, virtual false, abstract: false, final false
inline void UpdateVisual() ;

/// @brief Method UpdateVisualState, addr 0xa45ecac, size 0x4, virtual false, abstract: false, final false
inline void UpdateVisualState(::Oculus::Interaction::InteractorStateChangeArgs  args) ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__hoverColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__hoverColor() ;

constexpr float_t const& __cordl_internal_get__offsetAlongNormal() const;

constexpr float_t& __cordl_internal_get__offsetAlongNormal() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__outlineColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__outlineColor() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__playerHead() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__playerHead() ;

constexpr ::UnityW<::Oculus::Interaction::RayInteractor> const& __cordl_internal_get__rayInteractor() const;

constexpr ::UnityW<::Oculus::Interaction::RayInteractor>& __cordl_internal_get__rayInteractor() ;

constexpr ::UnityW<::UnityEngine::Renderer> const& __cordl_internal_get__renderer() const;

constexpr ::UnityW<::UnityEngine::Renderer>& __cordl_internal_get__renderer() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__selectColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__selectColor() ;

constexpr int32_t const& __cordl_internal_get__shaderInnerColor() const;

constexpr int32_t& __cordl_internal_get__shaderInnerColor() ;

constexpr int32_t const& __cordl_internal_get__shaderOutlineColor() const;

constexpr int32_t& __cordl_internal_get__shaderOutlineColor() ;

constexpr int32_t const& __cordl_internal_get__shaderRadialGradientBackgroundOpacity() const;

constexpr int32_t& __cordl_internal_get__shaderRadialGradientBackgroundOpacity() ;

constexpr int32_t const& __cordl_internal_get__shaderRadialGradientIntensity() const;

constexpr int32_t& __cordl_internal_get__shaderRadialGradientIntensity() ;

constexpr int32_t const& __cordl_internal_get__shaderRadialGradientScale() const;

constexpr int32_t& __cordl_internal_get__shaderRadialGradientScale() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__startScale() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__startScale() ;

constexpr bool const& __cordl_internal_get__started() const;

constexpr bool& __cordl_internal_get__started() ;

constexpr void __cordl_internal_set__hoverColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__offsetAlongNormal(float_t  value) ;

constexpr void __cordl_internal_set__outlineColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__playerHead(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__rayInteractor(::UnityW<::Oculus::Interaction::RayInteractor>  value) ;

constexpr void __cordl_internal_set__renderer(::UnityW<::UnityEngine::Renderer>  value) ;

constexpr void __cordl_internal_set__selectColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__shaderInnerColor(int32_t  value) ;

constexpr void __cordl_internal_set__shaderOutlineColor(int32_t  value) ;

constexpr void __cordl_internal_set__shaderRadialGradientBackgroundOpacity(int32_t  value) ;

constexpr void __cordl_internal_set__shaderRadialGradientIntensity(int32_t  value) ;

constexpr void __cordl_internal_set__shaderRadialGradientScale(int32_t  value) ;

constexpr void __cordl_internal_set__startScale(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__started(bool  value) ;

/// @brief Method .ctor, addr 0xa45ecf0, size 0x128, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_HoverColor, addr 0xa45e56c, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_HoverColor() ;

/// @brief Method get_OffsetAlongNormal, addr 0xa45e5b4, size 0x8, virtual false, abstract: false, final false
inline float_t get_OffsetAlongNormal() ;

/// @brief Method get_OutlineColor, addr 0xa45e59c, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_OutlineColor() ;

/// @brief Method get_PlayerHead, addr 0xa45e500, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_PlayerHead() ;

/// @brief Method get_SelectColor, addr 0xa45e584, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_SelectColor() ;

/// @brief Method set_HoverColor, addr 0xa45e578, size 0xc, virtual false, abstract: false, final false
inline void set_HoverColor(::UnityEngine::Color  value) ;

/// @brief Method set_OffsetAlongNormal, addr 0xa45e5bc, size 0x8, virtual false, abstract: false, final false
inline void set_OffsetAlongNormal(float_t  value) ;

/// @brief Method set_OutlineColor, addr 0xa45e5a8, size 0xc, virtual false, abstract: false, final false
inline void set_OutlineColor(::UnityEngine::Color  value) ;

/// @brief Method set_PlayerHead, addr 0xa45e508, size 0x64, virtual false, abstract: false, final false
inline void set_PlayerHead(::UnityEngine::Transform*  value) ;

/// @brief Method set_SelectColor, addr 0xa45e590, size 0xc, virtual false, abstract: false, final false
inline void set_SelectColor(::UnityEngine::Color  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RayInteractorCursorVisual() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RayInteractorCursorVisual", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RayInteractorCursorVisual(RayInteractorCursorVisual && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RayInteractorCursorVisual", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RayInteractorCursorVisual(RayInteractorCursorVisual const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15867};

/// [SerializeField]
/// @brief Field _rayInteractor, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::RayInteractor>  ____rayInteractor;

/// [SerializeField]
/// @brief Field _renderer, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Renderer>  ____renderer;

/// [SerializeField]
/// @brief Field _hoverColor, offset: 0x30, size: 0x10, def value: None
 ::UnityEngine::Color  ____hoverColor;

/// [SerializeField]
/// @brief Field _selectColor, offset: 0x40, size: 0x10, def value: None
 ::UnityEngine::Color  ____selectColor;

/// [SerializeField]
/// @brief Field _outlineColor, offset: 0x50, size: 0x10, def value: None
 ::UnityEngine::Color  ____outlineColor;

/// [SerializeField]
/// @brief Field _offsetAlongNormal, offset: 0x60, size: 0x4, def value: None
 float_t  ____offsetAlongNormal;

/// [Tooltip("Players head transform, used to maintain the same cursor size on screen as it is moved in the scene.")]
/// [SerializeField]
/// [Optional]
/// @brief Field _playerHead, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____playerHead;

/// @brief Field _startScale, offset: 0x70, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____startScale;

/// @brief Field _shaderRadialGradientScale, offset: 0x7c, size: 0x4, def value: None
 int32_t  ____shaderRadialGradientScale;

/// @brief Field _shaderRadialGradientIntensity, offset: 0x80, size: 0x4, def value: None
 int32_t  ____shaderRadialGradientIntensity;

/// @brief Field _shaderRadialGradientBackgroundOpacity, offset: 0x84, size: 0x4, def value: None
 int32_t  ____shaderRadialGradientBackgroundOpacity;

/// @brief Field _shaderInnerColor, offset: 0x88, size: 0x4, def value: None
 int32_t  ____shaderInnerColor;

/// @brief Field _shaderOutlineColor, offset: 0x8c, size: 0x4, def value: None
 int32_t  ____shaderOutlineColor;

/// @brief Field _started, offset: 0x90, size: 0x1, def value: None
 bool  ____started;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::RayInteractorCursorVisual, ____rayInteractor) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::RayInteractorCursorVisual, ____renderer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::RayInteractorCursorVisual, ____hoverColor) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::RayInteractorCursorVisual, ____selectColor) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::RayInteractorCursorVisual, ____outlineColor) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::RayInteractorCursorVisual, ____offsetAlongNormal) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::RayInteractorCursorVisual, ____playerHead) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::RayInteractorCursorVisual, ____startScale) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::RayInteractorCursorVisual, ____shaderRadialGradientScale) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::RayInteractorCursorVisual, ____shaderRadialGradientIntensity) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::RayInteractorCursorVisual, ____shaderRadialGradientBackgroundOpacity) == 0x84, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::RayInteractorCursorVisual, ____shaderInnerColor) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::RayInteractorCursorVisual, ____shaderOutlineColor) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::RayInteractorCursorVisual, ____started) == 0x90, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::RayInteractorCursorVisual) == 0x98, "Size mismatch!");

} // namespace end def Oculus::Interaction
