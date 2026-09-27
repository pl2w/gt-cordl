#pragma once
// IWYU pragma private; include "Oculus/Interaction/Locomotion/WristAngleActiveState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(WristAngleActiveState)
namespace Oculus::Interaction::Input {
class IHand;
}
namespace Oculus::Interaction {
class IActiveState;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Oculus::Interaction::Locomotion {
class WristAngleActiveState;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Locomotion::WristAngleActiveState*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Locomotion::WristAngleActiveState*, "Oculus.Interaction.Locomotion", "WristAngleActiveState");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction::Locomotion {
// Is value type: false
// CS Name: Oculus.Interaction.Locomotion.WristAngleActiveState
class CORDL_TYPE WristAngleActiveState : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_Active, put=set_Active)) bool  Active;

 __declspec(property(get=get_Hand, put=set_Hand)) ::Oculus::Interaction::Input::IHand*  Hand;

 __declspec(property(get=get_MaxAngle, put=set_MaxAngle)) float_t  MaxAngle;

 __declspec(property(get=get_MinAngle, put=set_MinAngle)) float_t  MinAngle;

/// @brief Field <Active>k__BackingField, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get__Active_k__BackingField, put=__cordl_internal_set__Active_k__BackingField)) bool  _Active_k__BackingField;

/// @brief Field <Hand>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__Hand_k__BackingField, put=__cordl_internal_set__Hand_k__BackingField)) ::Oculus::Interaction::Input::IHand*  _Hand_k__BackingField;

/// @brief Field _currentAngle, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentAngle, put=__cordl_internal_set__currentAngle)) float_t  _currentAngle;

/// @brief Field _hand, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__hand, put=__cordl_internal_set__hand)) ::UnityW<::UnityEngine::Object>  _hand;

/// @brief Field _maxAngle, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxAngle, put=__cordl_internal_set__maxAngle)) float_t  _maxAngle;

/// @brief Field _minAngle, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__minAngle, put=__cordl_internal_set__minAngle)) float_t  _minAngle;

/// @brief Field _shoulder, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__shoulder, put=__cordl_internal_set__shoulder)) ::UnityW<::UnityEngine::Transform>  _shoulder;

/// @brief Field _started, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

/// @brief Convert operator to "::Oculus::Interaction::IActiveState"
constexpr operator  ::Oculus::Interaction::IActiveState*() noexcept;

/// @brief Method Awake, addr 0xa4d7458, size 0x58, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method CalculateAngle, addr 0xa4d7518, size 0x5a0, virtual false, abstract: false, final false
inline float_t CalculateAngle() ;

/// @brief Method InjectAllWristAngleActiveState, addr 0xa4d7ab8, size 0x2c, virtual false, abstract: false, final false
inline void InjectAllWristAngleActiveState(::Oculus::Interaction::Input::IHand*  hand, ::UnityEngine::Transform*  shoulder) ;

/// @brief Method InjectHand, addr 0xa4d7ae4, size 0xcc, virtual false, abstract: false, final false
inline void InjectHand(::Oculus::Interaction::Input::IHand*  hand) ;

/// @brief Method InjectShoulder, addr 0xa4d7bb0, size 0x8, virtual false, abstract: false, final false
inline void InjectShoulder(::UnityEngine::Transform*  shoulder) ;

static inline ::Oculus::Interaction::Locomotion::WristAngleActiveState* New_ctor() ;

/// @brief Method Start, addr 0xa4d74b0, size 0x2c, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0xa4d74dc, size 0x3c, virtual true, abstract: false, final false
inline void Update() ;

constexpr bool const& __cordl_internal_get__Active_k__BackingField() const;

constexpr bool& __cordl_internal_get__Active_k__BackingField() ;

constexpr ::Oculus::Interaction::Input::IHand* const& __cordl_internal_get__Hand_k__BackingField() const;

constexpr ::Oculus::Interaction::Input::IHand*& __cordl_internal_get__Hand_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__currentAngle() const;

constexpr float_t& __cordl_internal_get__currentAngle() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__hand() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__hand() ;

constexpr float_t const& __cordl_internal_get__maxAngle() const;

constexpr float_t& __cordl_internal_get__maxAngle() ;

constexpr float_t const& __cordl_internal_get__minAngle() const;

constexpr float_t& __cordl_internal_get__minAngle() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__shoulder() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__shoulder() ;

constexpr bool const& __cordl_internal_get__started() const;

constexpr bool& __cordl_internal_get__started() ;

constexpr void __cordl_internal_set__Active_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__Hand_k__BackingField(::Oculus::Interaction::Input::IHand*  value) ;

constexpr void __cordl_internal_set__currentAngle(float_t  value) ;

constexpr void __cordl_internal_set__hand(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__maxAngle(float_t  value) ;

constexpr void __cordl_internal_set__minAngle(float_t  value) ;

constexpr void __cordl_internal_set__shoulder(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__started(bool  value) ;

/// @brief Method .ctor, addr 0xa4d7bb8, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_Active, addr 0xa4d7448, size 0x8, virtual true, abstract: false, final true
inline bool get_Active() ;

/// [CompilerGenerated]
/// @brief Method get_Hand, addr 0xa4d7418, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Input::IHand* get_Hand() ;

/// @brief Method get_MaxAngle, addr 0xa4d7438, size 0x8, virtual false, abstract: false, final false
inline float_t get_MaxAngle() ;

/// @brief Method get_MinAngle, addr 0xa4d7428, size 0x8, virtual false, abstract: false, final false
inline float_t get_MinAngle() ;

/// @brief Convert to "::Oculus::Interaction::IActiveState"
constexpr ::Oculus::Interaction::IActiveState* i___Oculus__Interaction__IActiveState() noexcept;

/// [CompilerGenerated]
/// @brief Method set_Active, addr 0xa4d7450, size 0x8, virtual false, abstract: false, final false
inline void set_Active(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_Hand, addr 0xa4d7420, size 0x8, virtual false, abstract: false, final false
inline void set_Hand(::Oculus::Interaction::Input::IHand*  value) ;

/// @brief Method set_MaxAngle, addr 0xa4d7440, size 0x8, virtual false, abstract: false, final false
inline void set_MaxAngle(float_t  value) ;

/// @brief Method set_MinAngle, addr 0xa4d7430, size 0x8, virtual false, abstract: false, final false
inline void set_MinAngle(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WristAngleActiveState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WristAngleActiveState", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WristAngleActiveState(WristAngleActiveState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WristAngleActiveState", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WristAngleActiveState(WristAngleActiveState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16309};

/// @brief Field _wristLimit offset 0xffffffff size 0x4
static constexpr float_t  _wristLimit{static_cast<float_t>(-70.0f)};

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.Input.IHand), new[] {  })]
/// @brief Field _hand, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____hand;

/// [CompilerGenerated]
/// @brief Field <Hand>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::Oculus::Interaction::Input::IHand*  ____Hand_k__BackingField;

/// [SerializeField]
/// @brief Field _shoulder, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____shoulder;

/// [SerializeField]
/// @brief Field _minAngle, offset: 0x38, size: 0x4, def value: None
 float_t  ____minAngle;

/// [SerializeField]
/// @brief Field _maxAngle, offset: 0x3c, size: 0x4, def value: None
 float_t  ____maxAngle;

/// [CompilerGenerated]
/// @brief Field <Active>k__BackingField, offset: 0x40, size: 0x1, def value: None
 bool  ____Active_k__BackingField;

/// @brief Field _currentAngle, offset: 0x44, size: 0x4, def value: None
 float_t  ____currentAngle;

/// @brief Field _started, offset: 0x48, size: 0x1, def value: None
 bool  ____started;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Locomotion::WristAngleActiveState, ____hand) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::WristAngleActiveState, ____Hand_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::WristAngleActiveState, ____shoulder) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::WristAngleActiveState, ____minAngle) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::WristAngleActiveState, ____maxAngle) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::WristAngleActiveState, ____Active_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::WristAngleActiveState, ____currentAngle) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::WristAngleActiveState, ____started) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Locomotion::WristAngleActiveState) == 0x50, "Size mismatch!");

} // namespace end def Oculus::Interaction::Locomotion
