#pragma once
// IWYU pragma private; include "Oculus/Interaction/HandRayPinchGlow.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/zzzz__HandRayPinchGlow_GlowType_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(HandRayPinchGlow)
namespace GlobalNamespace {
struct HandRayPinchGlow_GlowType;
}
namespace Oculus::Interaction::Input {
class IHand;
}
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
class Object;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Oculus::Interaction {
class HandRayPinchGlow;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::HandRayPinchGlow*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::HandRayPinchGlow*, "Oculus.Interaction", "HandRayPinchGlow");
// Dependencies Oculus.Interaction.HandRayPinchGlow::GlowType, UnityEngine.Color, UnityEngine.MonoBehaviour
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.HandRayPinchGlow
class CORDL_TYPE HandRayPinchGlow : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using GlowType = ::GlobalNamespace::HandRayPinchGlow_GlowType;

/// @brief Field Hand, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_Hand, put=__cordl_internal_set_Hand)) ::Oculus::Interaction::Input::IHand*  Hand;

/// @brief Field _generateGlowID, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get__generateGlowID, put=__cordl_internal_set__generateGlowID)) int32_t  _generateGlowID;

/// @brief Field _glowColor, offset 0x38, size 0x10 
 __declspec(property(get=__cordl_internal_get__glowColor, put=__cordl_internal_set__glowColor)) ::UnityEngine::Color  _glowColor;

/// @brief Field _glowColorID, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get__glowColorID, put=__cordl_internal_set__glowColorID)) int32_t  _glowColorID;

/// @brief Field _glowEnabled, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get__glowEnabled, put=__cordl_internal_set__glowEnabled)) bool  _glowEnabled;

/// @brief Field _glowMaxLengthID, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get__glowMaxLengthID, put=__cordl_internal_set__glowMaxLengthID)) int32_t  _glowMaxLengthID;

/// @brief Field _glowParameterID, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get__glowParameterID, put=__cordl_internal_set__glowParameterID)) int32_t  _glowParameterID;

/// @brief Field _glowPositionID, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get__glowPositionID, put=__cordl_internal_set__glowPositionID)) int32_t  _glowPositionID;

/// @brief Field _glowType, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__glowType, put=__cordl_internal_set__glowType)) ::GlobalNamespace::HandRayPinchGlow_GlowType  _glowType;

/// @brief Field _glowTypeID, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get__glowTypeID, put=__cordl_internal_set__glowTypeID)) int32_t  _glowTypeID;

/// @brief Field _hand, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__hand, put=__cordl_internal_set__hand)) ::UnityW<::UnityEngine::Object>  _hand;

/// @brief Field _materialEditor, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__materialEditor, put=__cordl_internal_set__materialEditor)) ::UnityW<::Oculus::Interaction::MaterialPropertyBlockEditor>  _materialEditor;

/// @brief Field _rayInteractor, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__rayInteractor, put=__cordl_internal_set__rayInteractor)) ::UnityW<::Oculus::Interaction::RayInteractor>  _rayInteractor;

/// @brief Field _started, offset 0x71, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

/// @brief Method Awake, addr 0xa407548, size 0x68, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method InjectAllHandRayPinchGlow, addr 0xa407d18, size 0x7c, virtual false, abstract: false, final false
inline void InjectAllHandRayPinchGlow(::Oculus::Interaction::Input::IHand*  hand, ::Oculus::Interaction::RayInteractor*  interactor, ::Oculus::Interaction::MaterialPropertyBlockEditor*  materialEditor, ::UnityEngine::Color  color, ::GlobalNamespace::HandRayPinchGlow_GlowType  glowType) ;

/// @brief Method InjectGlowColor, addr 0xa407e74, size 0xc, virtual false, abstract: false, final false
inline void InjectGlowColor(::UnityEngine::Color  color) ;

/// @brief Method InjectGlowType, addr 0xa407e80, size 0x8, virtual false, abstract: false, final false
inline void InjectGlowType(::GlobalNamespace::HandRayPinchGlow_GlowType  glowType) ;

/// @brief Method InjectHand, addr 0xa407d94, size 0xd0, virtual false, abstract: false, final false
inline void InjectHand(::Oculus::Interaction::Input::IHand*  hand) ;

/// @brief Method InjectMaterialPropertyBlockEditor, addr 0xa407e6c, size 0x8, virtual false, abstract: false, final false
inline void InjectMaterialPropertyBlockEditor(::Oculus::Interaction::MaterialPropertyBlockEditor*  materialEditor) ;

/// @brief Method InjectRayInteractor, addr 0xa407e64, size 0x8, virtual false, abstract: false, final false
inline void InjectRayInteractor(::Oculus::Interaction::RayInteractor*  interactor) ;

static inline ::Oculus::Interaction::HandRayPinchGlow* New_ctor() ;

/// @brief Method OnDisable, addr 0xa407aa0, size 0x12c, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa4075d8, size 0x134, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Start, addr 0xa4075b0, size 0x28, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method UpdateGlow, addr 0xa407bd0, size 0x148, virtual false, abstract: false, final false
inline void UpdateGlow(::UnityEngine::Vector3  glowPosition, float_t  pinchStrength, float_t  glowMaxLength) ;

/// @brief Method UpdateVisual, addr 0xa40770c, size 0x394, virtual false, abstract: false, final false
inline void UpdateVisual() ;

/// @brief Method UpdateVisualState, addr 0xa407bcc, size 0x4, virtual false, abstract: false, final false
inline void UpdateVisualState(::Oculus::Interaction::InteractorStateChangeArgs  args) ;

constexpr ::Oculus::Interaction::Input::IHand* const& __cordl_internal_get_Hand() const;

constexpr ::Oculus::Interaction::Input::IHand*& __cordl_internal_get_Hand() ;

constexpr int32_t const& __cordl_internal_get__generateGlowID() const;

constexpr int32_t& __cordl_internal_get__generateGlowID() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__glowColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__glowColor() ;

constexpr int32_t const& __cordl_internal_get__glowColorID() const;

constexpr int32_t& __cordl_internal_get__glowColorID() ;

constexpr bool const& __cordl_internal_get__glowEnabled() const;

constexpr bool& __cordl_internal_get__glowEnabled() ;

constexpr int32_t const& __cordl_internal_get__glowMaxLengthID() const;

constexpr int32_t& __cordl_internal_get__glowMaxLengthID() ;

constexpr int32_t const& __cordl_internal_get__glowParameterID() const;

constexpr int32_t& __cordl_internal_get__glowParameterID() ;

constexpr int32_t const& __cordl_internal_get__glowPositionID() const;

constexpr int32_t& __cordl_internal_get__glowPositionID() ;

constexpr ::GlobalNamespace::HandRayPinchGlow_GlowType const& __cordl_internal_get__glowType() const;

constexpr ::GlobalNamespace::HandRayPinchGlow_GlowType& __cordl_internal_get__glowType() ;

constexpr int32_t const& __cordl_internal_get__glowTypeID() const;

constexpr int32_t& __cordl_internal_get__glowTypeID() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__hand() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__hand() ;

constexpr ::UnityW<::Oculus::Interaction::MaterialPropertyBlockEditor> const& __cordl_internal_get__materialEditor() const;

constexpr ::UnityW<::Oculus::Interaction::MaterialPropertyBlockEditor>& __cordl_internal_get__materialEditor() ;

constexpr ::UnityW<::Oculus::Interaction::RayInteractor> const& __cordl_internal_get__rayInteractor() const;

constexpr ::UnityW<::Oculus::Interaction::RayInteractor>& __cordl_internal_get__rayInteractor() ;

constexpr bool const& __cordl_internal_get__started() const;

constexpr bool& __cordl_internal_get__started() ;

constexpr void __cordl_internal_set_Hand(::Oculus::Interaction::Input::IHand*  value) ;

constexpr void __cordl_internal_set__generateGlowID(int32_t  value) ;

constexpr void __cordl_internal_set__glowColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__glowColorID(int32_t  value) ;

constexpr void __cordl_internal_set__glowEnabled(bool  value) ;

constexpr void __cordl_internal_set__glowMaxLengthID(int32_t  value) ;

constexpr void __cordl_internal_set__glowParameterID(int32_t  value) ;

constexpr void __cordl_internal_set__glowPositionID(int32_t  value) ;

constexpr void __cordl_internal_set__glowType(::GlobalNamespace::HandRayPinchGlow_GlowType  value) ;

constexpr void __cordl_internal_set__glowTypeID(int32_t  value) ;

constexpr void __cordl_internal_set__hand(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__materialEditor(::UnityW<::Oculus::Interaction::MaterialPropertyBlockEditor>  value) ;

constexpr void __cordl_internal_set__rayInteractor(::UnityW<::Oculus::Interaction::RayInteractor>  value) ;

constexpr void __cordl_internal_set__started(bool  value) ;

/// @brief Method .ctor, addr 0xa407e88, size 0x144, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HandRayPinchGlow() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HandRayPinchGlow", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HandRayPinchGlow(HandRayPinchGlow && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HandRayPinchGlow", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HandRayPinchGlow(HandRayPinchGlow const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15719};

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.Input.IHand), new[] {  })]
/// @brief Field _hand, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____hand;

/// [SerializeField]
/// @brief Field _rayInteractor, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::RayInteractor>  ____rayInteractor;

/// [SerializeField]
/// @brief Field _materialEditor, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::MaterialPropertyBlockEditor>  ____materialEditor;

/// [SerializeField]
/// @brief Field _glowColor, offset: 0x38, size: 0x10, def value: None
 ::UnityEngine::Color  ____glowColor;

/// [SerializeField]
/// @brief Field _glowType, offset: 0x48, size: 0x4, def value: None
 ::GlobalNamespace::HandRayPinchGlow_GlowType  ____glowType;

/// @brief Field Hand, offset: 0x50, size: 0x8, def value: None
 ::Oculus::Interaction::Input::IHand*  ___Hand;

/// @brief Field _generateGlowID, offset: 0x58, size: 0x4, def value: None
 int32_t  ____generateGlowID;

/// @brief Field _glowPositionID, offset: 0x5c, size: 0x4, def value: None
 int32_t  ____glowPositionID;

/// @brief Field _glowColorID, offset: 0x60, size: 0x4, def value: None
 int32_t  ____glowColorID;

/// @brief Field _glowTypeID, offset: 0x64, size: 0x4, def value: None
 int32_t  ____glowTypeID;

/// @brief Field _glowParameterID, offset: 0x68, size: 0x4, def value: None
 int32_t  ____glowParameterID;

/// @brief Field _glowMaxLengthID, offset: 0x6c, size: 0x4, def value: None
 int32_t  ____glowMaxLengthID;

/// @brief Field _glowEnabled, offset: 0x70, size: 0x1, def value: None
 bool  ____glowEnabled;

/// @brief Field _started, offset: 0x71, size: 0x1, def value: None
 bool  ____started;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::HandRayPinchGlow, ____hand) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandRayPinchGlow, ____rayInteractor) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandRayPinchGlow, ____materialEditor) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandRayPinchGlow, ____glowColor) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandRayPinchGlow, ____glowType) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandRayPinchGlow, ___Hand) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandRayPinchGlow, ____generateGlowID) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandRayPinchGlow, ____glowPositionID) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandRayPinchGlow, ____glowColorID) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandRayPinchGlow, ____glowTypeID) == 0x64, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandRayPinchGlow, ____glowParameterID) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandRayPinchGlow, ____glowMaxLengthID) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandRayPinchGlow, ____glowEnabled) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandRayPinchGlow, ____started) == 0x71, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::HandRayPinchGlow) == 0x78, "Size mismatch!");

} // namespace end def Oculus::Interaction
