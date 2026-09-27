#pragma once
// IWYU pragma private; include "Oculus/Interaction/DPadUnityEventWrapper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector2Int_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(DPadUnityEventWrapper)
namespace Oculus::Interaction::Input {
class IAxis2D;
}
namespace UnityEngine::Events {
class UnityEvent;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
struct Vector2Int;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace Oculus::Interaction {
class DPadUnityEventWrapper;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::DPadUnityEventWrapper*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::DPadUnityEventWrapper*, "Oculus.Interaction", "DPadUnityEventWrapper");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector2Int
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.DPadUnityEventWrapper
class CORDL_TYPE DPadUnityEventWrapper : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_Axis, put=set_Axis)) ::Oculus::Interaction::Input::IAxis2D*  Axis;

 __declspec(property(get=get_NegativeDeadZone, put=set_NegativeDeadZone)) float_t  NegativeDeadZone;

 __declspec(property(get=get_PositiveDeadZone, put=set_PositiveDeadZone)) float_t  PositiveDeadZone;

 __declspec(property(get=get_WhenPressDown)) ::UnityEngine::Events::UnityEvent*  WhenPressDown;

 __declspec(property(get=get_WhenPressLeft)) ::UnityEngine::Events::UnityEvent*  WhenPressLeft;

 __declspec(property(get=get_WhenPressRight)) ::UnityEngine::Events::UnityEvent*  WhenPressRight;

 __declspec(property(get=get_WhenPressUp)) ::UnityEngine::Events::UnityEvent*  WhenPressUp;

/// @brief Field <Axis>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__Axis_k__BackingField, put=__cordl_internal_set__Axis_k__BackingField)) ::Oculus::Interaction::Input::IAxis2D*  _Axis_k__BackingField;

/// @brief Field _axis, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__axis, put=__cordl_internal_set__axis)) ::UnityW<::UnityEngine::Object>  _axis;

/// @brief Field _lastDirection, offset 0x5c, size 0x8 
 __declspec(property(get=__cordl_internal_get__lastDirection, put=__cordl_internal_set__lastDirection)) ::UnityEngine::Vector2Int  _lastDirection;

/// @brief Field _negativeDeadZone, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__negativeDeadZone, put=__cordl_internal_set__negativeDeadZone)) float_t  _negativeDeadZone;

/// @brief Field _positiveDeadZone, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__positiveDeadZone, put=__cordl_internal_set__positiveDeadZone)) float_t  _positiveDeadZone;

/// @brief Field _started, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

/// @brief Field _whenPressDown, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__whenPressDown, put=__cordl_internal_set__whenPressDown)) ::UnityEngine::Events::UnityEvent*  _whenPressDown;

/// @brief Field _whenPressLeft, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__whenPressLeft, put=__cordl_internal_set__whenPressLeft)) ::UnityEngine::Events::UnityEvent*  _whenPressLeft;

/// @brief Field _whenPressRight, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__whenPressRight, put=__cordl_internal_set__whenPressRight)) ::UnityEngine::Events::UnityEvent*  _whenPressRight;

/// @brief Field _whenPressUp, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__whenPressUp, put=__cordl_internal_set__whenPressUp)) ::UnityEngine::Events::UnityEvent*  _whenPressUp;

/// @brief Method Awake, addr 0xa411e74, size 0x58, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method AxisToDPadDirection, addr 0xa41205c, size 0xb0, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2Int AxisToDPadDirection(::UnityEngine::Vector2  axisValue) ;

/// @brief Method InjectAllDPadUnityEventWrapper, addr 0xa41210c, size 0x4, virtual false, abstract: false, final false
inline void InjectAllDPadUnityEventWrapper(::Oculus::Interaction::Input::IAxis2D*  axis) ;

/// @brief Method InjectAxis, addr 0xa412110, size 0xcc, virtual false, abstract: false, final false
inline void InjectAxis(::Oculus::Interaction::Input::IAxis2D*  axis) ;

static inline ::Oculus::Interaction::DPadUnityEventWrapper* New_ctor() ;

/// @brief Method OnDisable, addr 0xa411ef4, size 0x58, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa411ef0, size 0x4, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Start, addr 0xa411ecc, size 0x24, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0xa411f4c, size 0x110, virtual true, abstract: false, final false
inline void Update() ;

constexpr ::Oculus::Interaction::Input::IAxis2D* const& __cordl_internal_get__Axis_k__BackingField() const;

constexpr ::Oculus::Interaction::Input::IAxis2D*& __cordl_internal_get__Axis_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__axis() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__axis() ;

constexpr ::UnityEngine::Vector2Int const& __cordl_internal_get__lastDirection() const;

constexpr ::UnityEngine::Vector2Int& __cordl_internal_get__lastDirection() ;

constexpr float_t const& __cordl_internal_get__negativeDeadZone() const;

constexpr float_t& __cordl_internal_get__negativeDeadZone() ;

constexpr float_t const& __cordl_internal_get__positiveDeadZone() const;

constexpr float_t& __cordl_internal_get__positiveDeadZone() ;

constexpr bool const& __cordl_internal_get__started() const;

constexpr bool& __cordl_internal_get__started() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get__whenPressDown() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get__whenPressDown() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get__whenPressLeft() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get__whenPressLeft() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get__whenPressRight() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get__whenPressRight() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get__whenPressUp() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get__whenPressUp() ;

constexpr void __cordl_internal_set__Axis_k__BackingField(::Oculus::Interaction::Input::IAxis2D*  value) ;

constexpr void __cordl_internal_set__axis(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__lastDirection(::UnityEngine::Vector2Int  value) ;

constexpr void __cordl_internal_set__negativeDeadZone(float_t  value) ;

constexpr void __cordl_internal_set__positiveDeadZone(float_t  value) ;

constexpr void __cordl_internal_set__started(bool  value) ;

constexpr void __cordl_internal_set__whenPressDown(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set__whenPressLeft(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set__whenPressRight(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set__whenPressUp(::UnityEngine::Events::UnityEvent*  value) ;

/// @brief Method .ctor, addr 0xa4121dc, size 0x64, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_Axis, addr 0xa411e24, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Input::IAxis2D* get_Axis() ;

/// @brief Method get_NegativeDeadZone, addr 0xa411e44, size 0x8, virtual false, abstract: false, final false
inline float_t get_NegativeDeadZone() ;

/// @brief Method get_PositiveDeadZone, addr 0xa411e34, size 0x8, virtual false, abstract: false, final false
inline float_t get_PositiveDeadZone() ;

/// @brief Method get_WhenPressDown, addr 0xa411e6c, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Events::UnityEvent* get_WhenPressDown() ;

/// @brief Method get_WhenPressLeft, addr 0xa411e54, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Events::UnityEvent* get_WhenPressLeft() ;

/// @brief Method get_WhenPressRight, addr 0xa411e5c, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Events::UnityEvent* get_WhenPressRight() ;

/// @brief Method get_WhenPressUp, addr 0xa411e64, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Events::UnityEvent* get_WhenPressUp() ;

/// [CompilerGenerated]
/// @brief Method set_Axis, addr 0xa411e2c, size 0x8, virtual false, abstract: false, final false
inline void set_Axis(::Oculus::Interaction::Input::IAxis2D*  value) ;

/// @brief Method set_NegativeDeadZone, addr 0xa411e4c, size 0x8, virtual false, abstract: false, final false
inline void set_NegativeDeadZone(float_t  value) ;

/// @brief Method set_PositiveDeadZone, addr 0xa411e3c, size 0x8, virtual false, abstract: false, final false
inline void set_PositiveDeadZone(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DPadUnityEventWrapper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DPadUnityEventWrapper", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DPadUnityEventWrapper(DPadUnityEventWrapper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DPadUnityEventWrapper", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DPadUnityEventWrapper(DPadUnityEventWrapper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15752};

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.Input.IAxis2D), new[] {  })]
/// @brief Field _axis, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____axis;

/// [CompilerGenerated]
/// @brief Field <Axis>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::Oculus::Interaction::Input::IAxis2D*  ____Axis_k__BackingField;

/// [SerializeField]
/// @brief Field _positiveDeadZone, offset: 0x30, size: 0x4, def value: None
 float_t  ____positiveDeadZone;

/// [SerializeField]
/// @brief Field _negativeDeadZone, offset: 0x34, size: 0x4, def value: None
 float_t  ____negativeDeadZone;

/// [SerializeField]
/// @brief Field _whenPressLeft, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ____whenPressLeft;

/// [SerializeField]
/// @brief Field _whenPressRight, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ____whenPressRight;

/// [SerializeField]
/// @brief Field _whenPressUp, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ____whenPressUp;

/// [SerializeField]
/// @brief Field _whenPressDown, offset: 0x50, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ____whenPressDown;

/// @brief Field _started, offset: 0x58, size: 0x1, def value: None
 bool  ____started;

/// @brief Field _lastDirection, offset: 0x5c, size: 0x8, def value: None
 ::UnityEngine::Vector2Int  ____lastDirection;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::DPadUnityEventWrapper, ____axis) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::DPadUnityEventWrapper, ____Axis_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::DPadUnityEventWrapper, ____positiveDeadZone) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::DPadUnityEventWrapper, ____negativeDeadZone) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::DPadUnityEventWrapper, ____whenPressLeft) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::DPadUnityEventWrapper, ____whenPressRight) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::DPadUnityEventWrapper, ____whenPressUp) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::DPadUnityEventWrapper, ____whenPressDown) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::DPadUnityEventWrapper, ____started) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::DPadUnityEventWrapper, ____lastDirection) == 0x5c, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::DPadUnityEventWrapper) == 0x68, "Size mismatch!");

} // namespace end def Oculus::Interaction
