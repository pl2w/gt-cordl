#pragma once
// IWYU pragma private; include "Oculus/Interaction/Locomotion/SlideLocomotionBroadcaster.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SlideLocomotionBroadcaster)
namespace Oculus::Interaction::Input {
class IAxis2D;
}
namespace Oculus::Interaction::Locomotion {
class ILocomotionEventBroadcaster;
}
namespace Oculus::Interaction::Locomotion {
struct LocomotionEvent;
}
namespace Oculus::Interaction::Locomotion {
class SlideLocomotionBroadcaster___c;
}
namespace Oculus::Interaction {
class UniqueIdentifier;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Oculus::Interaction::Locomotion {
class SlideLocomotionBroadcaster;
}
namespace Oculus::Interaction::Locomotion {
class SlideLocomotionBroadcaster___c;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster*);
MARK_REF_T(::Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster___c*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster*, "Oculus.Interaction.Locomotion", "SlideLocomotionBroadcaster");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster___c*, "Oculus.Interaction.Locomotion", "SlideLocomotionBroadcaster/<>c");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction::Locomotion {
// Is value type: false
// CS Name: Oculus.Interaction.Locomotion.SlideLocomotionBroadcaster
class CORDL_TYPE SlideLocomotionBroadcaster : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c = ::Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster___c;

 __declspec(property(get=get_Aiming, put=set_Aiming)) ::UnityW<::UnityEngine::Transform>  Aiming;

/// @brief Field Axis2D, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_Axis2D, put=__cordl_internal_set_Axis2D)) ::Oculus::Interaction::Input::IAxis2D*  Axis2D;

 __declspec(property(get=get_HorizontalDeadZone, put=set_HorizontalDeadZone)) ::UnityEngine::AnimationCurve*  HorizontalDeadZone;

 __declspec(property(get=get_Identifier)) int32_t  Identifier;

 __declspec(property(get=get_VerticalDeadZone, put=set_VerticalDeadZone)) ::UnityEngine::AnimationCurve*  VerticalDeadZone;

/// @brief Field _aiming, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__aiming, put=__cordl_internal_set__aiming)) ::UnityW<::UnityEngine::Transform>  _aiming;

/// @brief Field _axis2D, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__axis2D, put=__cordl_internal_set__axis2D)) ::UnityW<::UnityEngine::Object>  _axis2D;

/// @brief Field _horizontalDeadZone, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__horizontalDeadZone, put=__cordl_internal_set__horizontalDeadZone)) ::UnityEngine::AnimationCurve*  _horizontalDeadZone;

/// @brief Field _identifier, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__identifier, put=__cordl_internal_set__identifier)) ::Oculus::Interaction::UniqueIdentifier*  _identifier;

/// @brief Field _started, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

/// @brief Field _verticalDeadZone, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__verticalDeadZone, put=__cordl_internal_set__verticalDeadZone)) ::UnityEngine::AnimationCurve*  _verticalDeadZone;

/// @brief Field _whenLocomotionPerformed, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__whenLocomotionPerformed, put=__cordl_internal_set__whenLocomotionPerformed)) ::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*  _whenLocomotionPerformed;

/// @brief Convert operator to "::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster"
constexpr operator  ::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster*() noexcept;

/// @brief Method Awake, addr 0xa4ca5a4, size 0x124, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method InjectAllSlideLocomotionBroadcaster, addr 0xa4caafc, size 0x4, virtual false, abstract: false, final false
inline void InjectAllSlideLocomotionBroadcaster(::Oculus::Interaction::Input::IAxis2D*  axis2D) ;

/// @brief Method InjectAxis2D, addr 0xa4cab00, size 0xd0, virtual false, abstract: false, final false
inline void InjectAxis2D(::Oculus::Interaction::Input::IAxis2D*  axis2D) ;

static inline ::Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster* New_ctor() ;

/// @brief Method ProcessAxisSensitivity, addr 0xa4ca864, size 0xec, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 ProcessAxisSensitivity() ;

/// @brief Method Start, addr 0xa4ca6c8, size 0x2c, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method StepDirection, addr 0xa4ca950, size 0x1ac, virtual false, abstract: false, final false
inline ::UnityEngine::Pose StepDirection(::UnityEngine::Vector3  axisValue) ;

/// @brief Method Update, addr 0xa4ca6f4, size 0x170, virtual true, abstract: false, final false
inline void Update() ;

constexpr ::Oculus::Interaction::Input::IAxis2D* const& __cordl_internal_get_Axis2D() const;

constexpr ::Oculus::Interaction::Input::IAxis2D*& __cordl_internal_get_Axis2D() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__aiming() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__aiming() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__axis2D() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__axis2D() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__horizontalDeadZone() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__horizontalDeadZone() ;

constexpr ::Oculus::Interaction::UniqueIdentifier* const& __cordl_internal_get__identifier() const;

constexpr ::Oculus::Interaction::UniqueIdentifier*& __cordl_internal_get__identifier() ;

constexpr bool const& __cordl_internal_get__started() const;

constexpr bool& __cordl_internal_get__started() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__verticalDeadZone() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__verticalDeadZone() ;

constexpr ::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>* const& __cordl_internal_get__whenLocomotionPerformed() const;

constexpr ::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*& __cordl_internal_get__whenLocomotionPerformed() ;

constexpr void __cordl_internal_set_Axis2D(::Oculus::Interaction::Input::IAxis2D*  value) ;

constexpr void __cordl_internal_set__aiming(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__axis2D(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__horizontalDeadZone(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set__identifier(::Oculus::Interaction::UniqueIdentifier*  value) ;

constexpr void __cordl_internal_set__started(bool  value) ;

constexpr void __cordl_internal_set__verticalDeadZone(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set__whenLocomotionPerformed(::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*  value) ;

/// @brief Method .ctor, addr 0xa4cabd0, size 0x140, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method add_WhenLocomotionPerformed, addr 0xa4ca43c, size 0xa8, virtual true, abstract: false, final true
inline void add_WhenLocomotionPerformed(::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*  value) ;

/// @brief Method get_Aiming, addr 0xa4ca40c, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_Aiming() ;

/// @brief Method get_HorizontalDeadZone, addr 0xa4ca42c, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::AnimationCurve* get_HorizontalDeadZone() ;

/// @brief Method get_Identifier, addr 0xa4ca58c, size 0x18, virtual false, abstract: false, final false
inline int32_t get_Identifier() ;

/// @brief Method get_VerticalDeadZone, addr 0xa4ca41c, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::AnimationCurve* get_VerticalDeadZone() ;

/// @brief Convert to "::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster"
constexpr ::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster* i___Oculus__Interaction__Locomotion__ILocomotionEventBroadcaster() noexcept;

/// @brief Method remove_WhenLocomotionPerformed, addr 0xa4ca4e4, size 0xa8, virtual true, abstract: false, final true
inline void remove_WhenLocomotionPerformed(::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*  value) ;

/// @brief Method set_Aiming, addr 0xa4ca414, size 0x8, virtual false, abstract: false, final false
inline void set_Aiming(::UnityEngine::Transform*  value) ;

/// @brief Method set_HorizontalDeadZone, addr 0xa4ca434, size 0x8, virtual false, abstract: false, final false
inline void set_HorizontalDeadZone(::UnityEngine::AnimationCurve*  value) ;

/// @brief Method set_VerticalDeadZone, addr 0xa4ca424, size 0x8, virtual false, abstract: false, final false
inline void set_VerticalDeadZone(::UnityEngine::AnimationCurve*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SlideLocomotionBroadcaster() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SlideLocomotionBroadcaster", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SlideLocomotionBroadcaster(SlideLocomotionBroadcaster && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SlideLocomotionBroadcaster", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SlideLocomotionBroadcaster(SlideLocomotionBroadcaster const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16274};

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.Input.IAxis2D), new[] {  })]
/// @brief Field _axis2D, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____axis2D;

/// @brief Field Axis2D, offset: 0x28, size: 0x8, def value: None
 ::Oculus::Interaction::Input::IAxis2D*  ___Axis2D;

/// [SerializeField]
/// [Optional]
/// @brief Field _aiming, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____aiming;

/// [SerializeField]
/// [Optional]
/// @brief Field _verticalDeadZone, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____verticalDeadZone;

/// [SerializeField]
/// [Optional]
/// @brief Field _horizontalDeadZone, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____horizontalDeadZone;

/// @brief Field _whenLocomotionPerformed, offset: 0x48, size: 0x8, def value: None
 ::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*  ____whenLocomotionPerformed;

/// @brief Field _identifier, offset: 0x50, size: 0x8, def value: None
 ::Oculus::Interaction::UniqueIdentifier*  ____identifier;

/// @brief Field _started, offset: 0x58, size: 0x1, def value: None
 bool  ____started;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster, ____axis2D) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster, ___Axis2D) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster, ____aiming) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster, ____verticalDeadZone) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster, ____horizontalDeadZone) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster, ____whenLocomotionPerformed) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster, ____identifier) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster, ____started) == 0x58, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster) == 0x60, "Size mismatch!");

} // namespace end def Oculus::Interaction::Locomotion
// [CompilerGenerated]
// Dependencies System.Object
namespace Oculus::Interaction::Locomotion {
// Is value type: false
// CS Name: Oculus.Interaction.Locomotion.SlideLocomotionBroadcaster/<>c
class CORDL_TYPE SlideLocomotionBroadcaster___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster___c*  __9;

/// @brief Field <>9__29_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__29_0, put=setStaticF___9__29_0)) ::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*  __9__29_0;

static inline ::Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster___c* New_ctor() ;

/// @brief Method <.ctor>b__29_0, addr 0xa4cad80, size 0x4, virtual false, abstract: false, final false
inline void __ctor_b__29_0(::Oculus::Interaction::Locomotion::LocomotionEvent  _p0_) ;

/// @brief Method .ctor, addr 0xa4cad78, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster___c* getStaticF___9() ;

static inline ::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>* getStaticF___9__29_0() ;

static inline void setStaticF___9(::Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster___c*  value) ;

static inline void setStaticF___9__29_0(::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SlideLocomotionBroadcaster___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SlideLocomotionBroadcaster___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SlideLocomotionBroadcaster___c(SlideLocomotionBroadcaster___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SlideLocomotionBroadcaster___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SlideLocomotionBroadcaster___c(SlideLocomotionBroadcaster___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16273};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster___c) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction::Locomotion
