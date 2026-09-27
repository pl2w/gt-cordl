#pragma once
// IWYU pragma private; include "Oculus/Interaction/FingerPinchValue.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/Input/zzzz__HandFinger_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(FingerPinchValue)
namespace Oculus::Interaction::Input {
struct HandFinger;
}
namespace Oculus::Interaction::Input {
class IAxis1D;
}
namespace Oculus::Interaction::Input {
class IHand;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace Oculus::Interaction {
class FingerPinchValue;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::FingerPinchValue*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::FingerPinchValue*, "Oculus.Interaction", "FingerPinchValue");
// Dependencies Oculus.Interaction.Input.HandFinger, UnityEngine.MonoBehaviour
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.FingerPinchValue
class CORDL_TYPE FingerPinchValue : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_ChangeRate, put=set_ChangeRate)) float_t  ChangeRate;

 __declspec(property(get=get_Curve, put=set_Curve)) ::UnityEngine::AnimationCurve*  Curve;

 __declspec(property(get=get_Finger, put=set_Finger)) ::Oculus::Interaction::Input::HandFinger  Finger;

 __declspec(property(get=get_Hand, put=set_Hand)) ::Oculus::Interaction::Input::IHand*  Hand;

/// @brief Field <Hand>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__Hand_k__BackingField, put=__cordl_internal_set__Hand_k__BackingField)) ::Oculus::Interaction::Input::IHand*  _Hand_k__BackingField;

/// @brief Field _changeRate, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__changeRate, put=__cordl_internal_set__changeRate)) float_t  _changeRate;

/// @brief Field _curve, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__curve, put=__cordl_internal_set__curve)) ::UnityEngine::AnimationCurve*  _curve;

/// @brief Field _finger, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__finger, put=__cordl_internal_set__finger)) ::Oculus::Interaction::Input::HandFinger  _finger;

/// @brief Field _firstCall, offset 0x45, size 0x1 
 __declspec(property(get=__cordl_internal_get__firstCall, put=__cordl_internal_set__firstCall)) bool  _firstCall;

/// @brief Field _hand, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__hand, put=__cordl_internal_set__hand)) ::UnityW<::UnityEngine::Object>  _hand;

/// @brief Field _started, offset 0x44, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

/// @brief Field _value, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__value, put=__cordl_internal_set__value)) float_t  _value;

/// @brief Convert operator to "::Oculus::Interaction::Input::IAxis1D"
constexpr operator  ::Oculus::Interaction::Input::IAxis1D*() noexcept;

/// @brief Method Awake, addr 0xa47c9bc, size 0x58, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method HandleHandUpdated, addr 0xa47cc50, size 0x100, virtual false, abstract: false, final false
inline void HandleHandUpdated() ;

/// @brief Method InjectAllFingerPinchValue, addr 0xa47cd50, size 0x4, virtual false, abstract: false, final false
inline void InjectAllFingerPinchValue(::Oculus::Interaction::Input::IHand*  hand) ;

/// @brief Method InjectHand, addr 0xa47cd54, size 0xd0, virtual false, abstract: false, final false
inline void InjectHand(::Oculus::Interaction::Input::IHand*  hand) ;

static inline ::Oculus::Interaction::FingerPinchValue* New_ctor() ;

/// @brief Method OnDisable, addr 0xa47cb48, size 0x100, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa47ca40, size 0x108, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Start, addr 0xa47ca14, size 0x2c, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method Value, addr 0xa47cc48, size 0x8, virtual true, abstract: false, final true
inline float_t Value() ;

constexpr ::Oculus::Interaction::Input::IHand* const& __cordl_internal_get__Hand_k__BackingField() const;

constexpr ::Oculus::Interaction::Input::IHand*& __cordl_internal_get__Hand_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__changeRate() const;

constexpr float_t& __cordl_internal_get__changeRate() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__curve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__curve() ;

constexpr ::Oculus::Interaction::Input::HandFinger const& __cordl_internal_get__finger() const;

constexpr ::Oculus::Interaction::Input::HandFinger& __cordl_internal_get__finger() ;

constexpr bool const& __cordl_internal_get__firstCall() const;

constexpr bool& __cordl_internal_get__firstCall() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__hand() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__hand() ;

constexpr bool const& __cordl_internal_get__started() const;

constexpr bool& __cordl_internal_get__started() ;

constexpr float_t const& __cordl_internal_get__value() const;

constexpr float_t& __cordl_internal_get__value() ;

constexpr void __cordl_internal_set__Hand_k__BackingField(::Oculus::Interaction::Input::IHand*  value) ;

constexpr void __cordl_internal_set__changeRate(float_t  value) ;

constexpr void __cordl_internal_set__curve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set__finger(::Oculus::Interaction::Input::HandFinger  value) ;

constexpr void __cordl_internal_set__firstCall(bool  value) ;

constexpr void __cordl_internal_set__hand(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__started(bool  value) ;

constexpr void __cordl_internal_set__value(float_t  value) ;

/// @brief Method .ctor, addr 0xa47ce24, size 0x4c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_ChangeRate, addr 0xa47c99c, size 0x8, virtual false, abstract: false, final false
inline float_t get_ChangeRate() ;

/// @brief Method get_Curve, addr 0xa47c9ac, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::AnimationCurve* get_Curve() ;

/// @brief Method get_Finger, addr 0xa47c98c, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Input::HandFinger get_Finger() ;

/// [CompilerGenerated]
/// @brief Method get_Hand, addr 0xa47c97c, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Input::IHand* get_Hand() ;

/// @brief Convert to "::Oculus::Interaction::Input::IAxis1D"
constexpr ::Oculus::Interaction::Input::IAxis1D* i___Oculus__Interaction__Input__IAxis1D() noexcept;

/// @brief Method set_ChangeRate, addr 0xa47c9a4, size 0x8, virtual false, abstract: false, final false
inline void set_ChangeRate(float_t  value) ;

/// @brief Method set_Curve, addr 0xa47c9b4, size 0x8, virtual false, abstract: false, final false
inline void set_Curve(::UnityEngine::AnimationCurve*  value) ;

/// @brief Method set_Finger, addr 0xa47c994, size 0x8, virtual false, abstract: false, final false
inline void set_Finger(::Oculus::Interaction::Input::HandFinger  value) ;

/// [CompilerGenerated]
/// @brief Method set_Hand, addr 0xa47c984, size 0x8, virtual false, abstract: false, final false
inline void set_Hand(::Oculus::Interaction::Input::IHand*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FingerPinchValue() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FingerPinchValue", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FingerPinchValue(FingerPinchValue && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FingerPinchValue", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FingerPinchValue(FingerPinchValue const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15969};

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.Input.IHand), new[] {  })]
/// @brief Field _hand, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____hand;

/// [CompilerGenerated]
/// @brief Field <Hand>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::Oculus::Interaction::Input::IHand*  ____Hand_k__BackingField;

/// [SerializeField]
/// @brief Field _finger, offset: 0x30, size: 0x4, def value: None
 ::Oculus::Interaction::Input::HandFinger  ____finger;

/// [SerializeField]
/// [Range(0, 1)]
/// @brief Field _changeRate, offset: 0x34, size: 0x4, def value: None
 float_t  ____changeRate;

/// [SerializeField]
/// @brief Field _curve, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____curve;

/// @brief Field _value, offset: 0x40, size: 0x4, def value: None
 float_t  ____value;

/// @brief Field _started, offset: 0x44, size: 0x1, def value: None
 bool  ____started;

/// @brief Field _firstCall, offset: 0x45, size: 0x1, def value: None
 bool  ____firstCall;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::FingerPinchValue, ____hand) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::FingerPinchValue, ____Hand_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::FingerPinchValue, ____finger) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::FingerPinchValue, ____changeRate) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::FingerPinchValue, ____curve) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::FingerPinchValue, ____value) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::FingerPinchValue, ____started) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::FingerPinchValue, ____firstCall) == 0x45, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::FingerPinchValue) == 0x48, "Size mismatch!");

} // namespace end def Oculus::Interaction
