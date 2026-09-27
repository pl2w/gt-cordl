#pragma once
// IWYU pragma private; include "Oculus/Interaction/HandRayInteractorCursorVisual.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(HandRayInteractorCursorVisual)
namespace Oculus::Interaction::Input {
class IHand;
}
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
class GameObject;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
class Renderer;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Oculus::Interaction {
class HandRayInteractorCursorVisual;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::HandRayInteractorCursorVisual*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::HandRayInteractorCursorVisual*, "Oculus.Interaction", "HandRayInteractorCursorVisual");
// Dependencies UnityEngine.Color, UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.HandRayInteractorCursorVisual
class CORDL_TYPE HandRayInteractorCursorVisual : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field Hand, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_Hand, put=__cordl_internal_set_Hand)) ::Oculus::Interaction::Input::IHand*  Hand;

 __declspec(property(get=get_OffsetAlongNormal, put=set_OffsetAlongNormal)) float_t  OffsetAlongNormal;

 __declspec(property(get=get_OutlineColor, put=set_OutlineColor)) ::UnityEngine::Color  OutlineColor;

 __declspec(property(get=get_PlayerHead, put=set_PlayerHead)) ::UnityW<::UnityEngine::Transform>  PlayerHead;

/// @brief Field _cursor, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__cursor, put=__cordl_internal_set__cursor)) ::UnityW<::UnityEngine::GameObject>  _cursor;

/// @brief Field _hand, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__hand, put=__cordl_internal_set__hand)) ::UnityW<::UnityEngine::Object>  _hand;

/// @brief Field _offsetAlongNormal, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get__offsetAlongNormal, put=__cordl_internal_set__offsetAlongNormal)) float_t  _offsetAlongNormal;

/// @brief Field _outlineColor, offset 0x48, size 0x10 
 __declspec(property(get=__cordl_internal_get__outlineColor, put=__cordl_internal_set__outlineColor)) ::UnityEngine::Color  _outlineColor;

/// @brief Field _playerHead, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__playerHead, put=__cordl_internal_set__playerHead)) ::UnityW<::UnityEngine::Transform>  _playerHead;

/// @brief Field _rayInteractor, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__rayInteractor, put=__cordl_internal_set__rayInteractor)) ::UnityW<::Oculus::Interaction::RayInteractor>  _rayInteractor;

/// @brief Field _renderer, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__renderer, put=__cordl_internal_set__renderer)) ::UnityW<::UnityEngine::Renderer>  _renderer;

/// @brief Field _selectObject, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__selectObject, put=__cordl_internal_set__selectObject)) ::UnityW<::UnityEngine::GameObject>  _selectObject;

/// @brief Field _shaderOutlineColor, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get__shaderOutlineColor, put=__cordl_internal_set__shaderOutlineColor)) int32_t  _shaderOutlineColor;

/// @brief Field _shaderRadialGradientBackgroundOpacity, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get__shaderRadialGradientBackgroundOpacity, put=__cordl_internal_set__shaderRadialGradientBackgroundOpacity)) int32_t  _shaderRadialGradientBackgroundOpacity;

/// @brief Field _shaderRadialGradientIntensity, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get__shaderRadialGradientIntensity, put=__cordl_internal_set__shaderRadialGradientIntensity)) int32_t  _shaderRadialGradientIntensity;

/// @brief Field _shaderRadialGradientScale, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get__shaderRadialGradientScale, put=__cordl_internal_set__shaderRadialGradientScale)) int32_t  _shaderRadialGradientScale;

/// @brief Field _startScale, offset 0x68, size 0xc 
 __declspec(property(get=__cordl_internal_get__startScale, put=__cordl_internal_set__startScale)) ::UnityEngine::Vector3  _startScale;

/// @brief Field _started, offset 0x90, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

/// @brief Method InjectAllHandRayInteractorCursorVisual, addr 0xa45e2c0, size 0x5c, virtual false, abstract: false, final false
inline void InjectAllHandRayInteractorCursorVisual(::Oculus::Interaction::Input::IHand*  hand, ::Oculus::Interaction::RayInteractor*  rayInteractor, ::UnityEngine::GameObject*  cursor, ::UnityEngine::Renderer*  renderer) ;

/// @brief Method InjectCursor, addr 0xa45e3f4, size 0x8, virtual false, abstract: false, final false
inline void InjectCursor(::UnityEngine::GameObject*  cursor) ;

/// @brief Method InjectHand, addr 0xa45e31c, size 0xd0, virtual false, abstract: false, final false
inline void InjectHand(::Oculus::Interaction::Input::IHand*  hand) ;

/// @brief Method InjectRayInteractor, addr 0xa45e3ec, size 0x8, virtual false, abstract: false, final false
inline void InjectRayInteractor(::Oculus::Interaction::RayInteractor*  rayInteractor) ;

/// @brief Method InjectRenderer, addr 0xa45e3fc, size 0x8, virtual false, abstract: false, final false
inline void InjectRenderer(::UnityEngine::Renderer*  renderer) ;

static inline ::Oculus::Interaction::HandRayInteractorCursorVisual* New_ctor() ;

/// @brief Method OnDisable, addr 0xa45e190, size 0x12c, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa45db64, size 0x134, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Start, addr 0xa45daa8, size 0xbc, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method UpdateVisual, addr 0xa45dc98, size 0x4f8, virtual false, abstract: false, final false
inline void UpdateVisual() ;

/// @brief Method UpdateVisualState, addr 0xa45e2bc, size 0x4, virtual false, abstract: false, final false
inline void UpdateVisualState(::Oculus::Interaction::InteractorStateChangeArgs  args) ;

constexpr ::Oculus::Interaction::Input::IHand* const& __cordl_internal_get_Hand() const;

constexpr ::Oculus::Interaction::Input::IHand*& __cordl_internal_get_Hand() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__cursor() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__cursor() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__hand() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__hand() ;

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

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__selectObject() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__selectObject() ;

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

constexpr void __cordl_internal_set_Hand(::Oculus::Interaction::Input::IHand*  value) ;

constexpr void __cordl_internal_set__cursor(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__hand(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__offsetAlongNormal(float_t  value) ;

constexpr void __cordl_internal_set__outlineColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__playerHead(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__rayInteractor(::UnityW<::Oculus::Interaction::RayInteractor>  value) ;

constexpr void __cordl_internal_set__renderer(::UnityW<::UnityEngine::Renderer>  value) ;

constexpr void __cordl_internal_set__selectObject(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__shaderOutlineColor(int32_t  value) ;

constexpr void __cordl_internal_set__shaderRadialGradientBackgroundOpacity(int32_t  value) ;

constexpr void __cordl_internal_set__shaderRadialGradientIntensity(int32_t  value) ;

constexpr void __cordl_internal_set__shaderRadialGradientScale(int32_t  value) ;

constexpr void __cordl_internal_set__startScale(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__started(bool  value) ;

/// @brief Method .ctor, addr 0xa45e404, size 0xfc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_OffsetAlongNormal, addr 0xa45da98, size 0x8, virtual false, abstract: false, final false
inline float_t get_OffsetAlongNormal() ;

/// @brief Method get_OutlineColor, addr 0xa45da80, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_OutlineColor() ;

/// @brief Method get_PlayerHead, addr 0xa45da14, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_PlayerHead() ;

/// @brief Method set_OffsetAlongNormal, addr 0xa45daa0, size 0x8, virtual false, abstract: false, final false
inline void set_OffsetAlongNormal(float_t  value) ;

/// @brief Method set_OutlineColor, addr 0xa45da8c, size 0xc, virtual false, abstract: false, final false
inline void set_OutlineColor(::UnityEngine::Color  value) ;

/// @brief Method set_PlayerHead, addr 0xa45da1c, size 0x64, virtual false, abstract: false, final false
inline void set_PlayerHead(::UnityEngine::Transform*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HandRayInteractorCursorVisual() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HandRayInteractorCursorVisual", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HandRayInteractorCursorVisual(HandRayInteractorCursorVisual && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HandRayInteractorCursorVisual", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HandRayInteractorCursorVisual(HandRayInteractorCursorVisual const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15866};

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.Input.IHand), new[] {  })]
/// @brief Field _hand, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____hand;

/// @brief Field Hand, offset: 0x28, size: 0x8, def value: None
 ::Oculus::Interaction::Input::IHand*  ___Hand;

/// [SerializeField]
/// @brief Field _rayInteractor, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::RayInteractor>  ____rayInteractor;

/// [SerializeField]
/// @brief Field _cursor, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____cursor;

/// [SerializeField]
/// @brief Field _renderer, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Renderer>  ____renderer;

/// [SerializeField]
/// @brief Field _outlineColor, offset: 0x48, size: 0x10, def value: None
 ::UnityEngine::Color  ____outlineColor;

/// [SerializeField]
/// @brief Field _offsetAlongNormal, offset: 0x58, size: 0x4, def value: None
 float_t  ____offsetAlongNormal;

/// [Tooltip("Players head transform, used to maintain the same cursor size on screen as it is moved in the scene.")]
/// [SerializeField]
/// [Optional]
/// @brief Field _playerHead, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____playerHead;

/// @brief Field _startScale, offset: 0x68, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____startScale;

/// @brief Field _shaderRadialGradientScale, offset: 0x74, size: 0x4, def value: None
 int32_t  ____shaderRadialGradientScale;

/// @brief Field _shaderRadialGradientIntensity, offset: 0x78, size: 0x4, def value: None
 int32_t  ____shaderRadialGradientIntensity;

/// @brief Field _shaderRadialGradientBackgroundOpacity, offset: 0x7c, size: 0x4, def value: None
 int32_t  ____shaderRadialGradientBackgroundOpacity;

/// @brief Field _shaderOutlineColor, offset: 0x80, size: 0x4, def value: None
 int32_t  ____shaderOutlineColor;

/// [SerializeField]
/// @brief Field _selectObject, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____selectObject;

/// @brief Field _started, offset: 0x90, size: 0x1, def value: None
 bool  ____started;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::HandRayInteractorCursorVisual, ____hand) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandRayInteractorCursorVisual, ___Hand) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandRayInteractorCursorVisual, ____rayInteractor) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandRayInteractorCursorVisual, ____cursor) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandRayInteractorCursorVisual, ____renderer) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandRayInteractorCursorVisual, ____outlineColor) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandRayInteractorCursorVisual, ____offsetAlongNormal) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandRayInteractorCursorVisual, ____playerHead) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandRayInteractorCursorVisual, ____startScale) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandRayInteractorCursorVisual, ____shaderRadialGradientScale) == 0x74, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandRayInteractorCursorVisual, ____shaderRadialGradientIntensity) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandRayInteractorCursorVisual, ____shaderRadialGradientBackgroundOpacity) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandRayInteractorCursorVisual, ____shaderOutlineColor) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandRayInteractorCursorVisual, ____selectObject) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandRayInteractorCursorVisual, ____started) == 0x90, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::HandRayInteractorCursorVisual) == 0x98, "Size mismatch!");

} // namespace end def Oculus::Interaction
