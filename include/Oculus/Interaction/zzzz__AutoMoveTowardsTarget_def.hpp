#pragma once
// IWYU pragma private; include "Oculus/Interaction/AutoMoveTowardsTarget.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/zzzz__PoseTravelData_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AutoMoveTowardsTarget)
namespace Oculus::Interaction {
class AutoMoveTowardsTarget___c;
}
namespace Oculus::Interaction {
class IMovement;
}
namespace Oculus::Interaction {
class IPointableElement;
}
namespace Oculus::Interaction {
struct PointerEventType;
}
namespace Oculus::Interaction {
struct PointerEvent;
}
namespace Oculus::Interaction {
struct PoseTravelData;
}
namespace Oculus::Interaction {
class Tween;
}
namespace Oculus::Interaction {
class UniqueIdentifier;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine {
struct Pose;
}
// Forward declare root types
namespace Oculus::Interaction {
class AutoMoveTowardsTarget;
}
namespace Oculus::Interaction {
class AutoMoveTowardsTarget___c;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::AutoMoveTowardsTarget*);
MARK_REF_T(::Oculus::Interaction::AutoMoveTowardsTarget___c*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::AutoMoveTowardsTarget*, "Oculus.Interaction", "AutoMoveTowardsTarget");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::AutoMoveTowardsTarget___c*, "Oculus.Interaction", "AutoMoveTowardsTarget/<>c");
// Dependencies Oculus.Interaction.PoseTravelData, System.Object, UnityEngine.Pose
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.AutoMoveTowardsTarget
class CORDL_TYPE AutoMoveTowardsTarget : public ::System::Object {
public:
// Declarations
using __c = ::Oculus::Interaction::AutoMoveTowardsTarget___c;

 __declspec(property(get=get_Aborting, put=set_Aborting)) bool  Aborting;

 __declspec(property(get=get_Identifier)) int32_t  Identifier;

 __declspec(property(get=get_Pose)) ::UnityEngine::Pose  Pose;

 __declspec(property(get=get_Stopped)) bool  Stopped;

/// @brief Field WhenAborted, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_WhenAborted, put=__cordl_internal_set_WhenAborted)) ::System::Action_1<::Oculus::Interaction::AutoMoveTowardsTarget*>*  WhenAborted;

/// @brief Field <Aborting>k__BackingField, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get__Aborting_k__BackingField, put=__cordl_internal_set__Aborting_k__BackingField)) bool  _Aborting_k__BackingField;

/// @brief Field _eventRegistered, offset 0x80, size 0x1 
 __declspec(property(get=__cordl_internal_get__eventRegistered, put=__cordl_internal_set__eventRegistered)) bool  _eventRegistered;

/// @brief Field _identifier, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__identifier, put=__cordl_internal_set__identifier)) ::Oculus::Interaction::UniqueIdentifier*  _identifier;

/// @brief Field _pointableElement, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__pointableElement, put=__cordl_internal_set__pointableElement)) ::Oculus::Interaction::IPointableElement*  _pointableElement;

/// @brief Field _source, offset 0x64, size 0x1c 
 __declspec(property(get=__cordl_internal_get__source, put=__cordl_internal_set__source)) ::UnityEngine::Pose  _source;

/// @brief Field _target, offset 0x48, size 0x1c 
 __declspec(property(get=__cordl_internal_get__target, put=__cordl_internal_set__target)) ::UnityEngine::Pose  _target;

/// @brief Field _travellingData, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get__travellingData, put=__cordl_internal_set__travellingData)) ::Oculus::Interaction::PoseTravelData  _travellingData;

/// @brief Field _tween, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__tween, put=__cordl_internal_set__tween)) ::Oculus::Interaction::Tween*  _tween;

/// @brief Convert operator to "::Oculus::Interaction::IMovement"
constexpr operator  ::Oculus::Interaction::IMovement*() noexcept;

/// @brief Method AbortSelfAligment, addr 0xa473484, size 0x30, virtual false, abstract: false, final false
inline void AbortSelfAligment() ;

/// @brief Method GeneratePointerEvent, addr 0xa473778, size 0x144, virtual false, abstract: false, final false
inline void GeneratePointerEvent(::Oculus::Interaction::PointerEventType  pointerEventType) ;

/// @brief Method HandlePointerEventRaised, addr 0xa4738bc, size 0x18, virtual false, abstract: false, final false
inline void HandlePointerEventRaised(::Oculus::Interaction::PointerEvent  evt) ;

/// @brief Method MoveTo, addr 0xa473340, size 0x144, virtual true, abstract: false, final true
inline void MoveTo(::UnityEngine::Pose  target) ;

static inline ::Oculus::Interaction::AutoMoveTowardsTarget* New_ctor(::Oculus::Interaction::PoseTravelData  travellingData, ::Oculus::Interaction::IPointableElement*  pointableElement) ;

/// @brief Method StopAndSetPose, addr 0xa4735fc, size 0x17c, virtual true, abstract: false, final true
inline void StopAndSetPose(::UnityEngine::Pose  pose) ;

/// @brief Method Tick, addr 0xa472b04, size 0x58, virtual true, abstract: false, final true
inline void Tick() ;

/// @brief Method UpdateTarget, addr 0xa4735a4, size 0x58, virtual true, abstract: false, final true
inline void UpdateTarget(::UnityEngine::Pose  target) ;

constexpr ::System::Action_1<::Oculus::Interaction::AutoMoveTowardsTarget*>* const& __cordl_internal_get_WhenAborted() const;

constexpr ::System::Action_1<::Oculus::Interaction::AutoMoveTowardsTarget*>*& __cordl_internal_get_WhenAborted() ;

constexpr bool const& __cordl_internal_get__Aborting_k__BackingField() const;

constexpr bool& __cordl_internal_get__Aborting_k__BackingField() ;

constexpr bool const& __cordl_internal_get__eventRegistered() const;

constexpr bool& __cordl_internal_get__eventRegistered() ;

constexpr ::Oculus::Interaction::UniqueIdentifier* const& __cordl_internal_get__identifier() const;

constexpr ::Oculus::Interaction::UniqueIdentifier*& __cordl_internal_get__identifier() ;

constexpr ::Oculus::Interaction::IPointableElement* const& __cordl_internal_get__pointableElement() const;

constexpr ::Oculus::Interaction::IPointableElement*& __cordl_internal_get__pointableElement() ;

constexpr ::UnityEngine::Pose const& __cordl_internal_get__source() const;

constexpr ::UnityEngine::Pose& __cordl_internal_get__source() ;

constexpr ::UnityEngine::Pose const& __cordl_internal_get__target() const;

constexpr ::UnityEngine::Pose& __cordl_internal_get__target() ;

constexpr ::Oculus::Interaction::PoseTravelData const& __cordl_internal_get__travellingData() const;

constexpr ::Oculus::Interaction::PoseTravelData& __cordl_internal_get__travellingData() ;

constexpr ::Oculus::Interaction::Tween* const& __cordl_internal_get__tween() const;

constexpr ::Oculus::Interaction::Tween*& __cordl_internal_get__tween() ;

constexpr void __cordl_internal_set_WhenAborted(::System::Action_1<::Oculus::Interaction::AutoMoveTowardsTarget*>*  value) ;

constexpr void __cordl_internal_set__Aborting_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__eventRegistered(bool  value) ;

constexpr void __cordl_internal_set__identifier(::Oculus::Interaction::UniqueIdentifier*  value) ;

constexpr void __cordl_internal_set__pointableElement(::Oculus::Interaction::IPointableElement*  value) ;

constexpr void __cordl_internal_set__source(::UnityEngine::Pose  value) ;

constexpr void __cordl_internal_set__target(::UnityEngine::Pose  value) ;

constexpr void __cordl_internal_set__travellingData(::Oculus::Interaction::PoseTravelData  value) ;

constexpr void __cordl_internal_set__tween(::Oculus::Interaction::Tween*  value) ;

/// @brief Method .ctor, addr 0xa472ca0, size 0x1e4, virtual false, abstract: false, final false
inline void _ctor(::Oculus::Interaction::PoseTravelData  travellingData, ::Oculus::Interaction::IPointableElement*  pointableElement) ;

/// [CompilerGenerated]
/// @brief Method get_Aborting, addr 0xa4731e4, size 0x8, virtual false, abstract: false, final false
inline bool get_Aborting() ;

/// @brief Method get_Identifier, addr 0xa4731f4, size 0x18, virtual false, abstract: false, final false
inline int32_t get_Identifier() ;

/// @brief Method get_Pose, addr 0xa4731c0, size 0x24, virtual true, abstract: false, final true
inline ::UnityEngine::Pose get_Pose() ;

/// @brief Method get_Stopped, addr 0xa472b5c, size 0x18, virtual true, abstract: false, final true
inline bool get_Stopped() ;

/// @brief Convert to "::Oculus::Interaction::IMovement"
constexpr ::Oculus::Interaction::IMovement* i___Oculus__Interaction__IMovement() noexcept;

/// [CompilerGenerated]
/// @brief Method set_Aborting, addr 0xa4731ec, size 0x8, virtual false, abstract: false, final false
inline void set_Aborting(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AutoMoveTowardsTarget() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AutoMoveTowardsTarget", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AutoMoveTowardsTarget(AutoMoveTowardsTarget && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AutoMoveTowardsTarget", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AutoMoveTowardsTarget(AutoMoveTowardsTarget const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15940};

/// @brief Field _travellingData, offset: 0x10, size: 0x10, def value: None
 ::Oculus::Interaction::PoseTravelData  ____travellingData;

/// @brief Field _pointableElement, offset: 0x20, size: 0x8, def value: None
 ::Oculus::Interaction::IPointableElement*  ____pointableElement;

/// [CompilerGenerated]
/// @brief Field <Aborting>k__BackingField, offset: 0x28, size: 0x1, def value: None
 bool  ____Aborting_k__BackingField;

/// @brief Field WhenAborted, offset: 0x30, size: 0x8, def value: None
 ::System::Action_1<::Oculus::Interaction::AutoMoveTowardsTarget*>*  ___WhenAborted;

/// @brief Field _identifier, offset: 0x38, size: 0x8, def value: None
 ::Oculus::Interaction::UniqueIdentifier*  ____identifier;

/// @brief Field _tween, offset: 0x40, size: 0x8, def value: None
 ::Oculus::Interaction::Tween*  ____tween;

/// @brief Field _target, offset: 0x48, size: 0x1c, def value: None
 ::UnityEngine::Pose  ____target;

/// @brief Field _source, offset: 0x64, size: 0x1c, def value: None
 ::UnityEngine::Pose  ____source;

/// @brief Field _eventRegistered, offset: 0x80, size: 0x1, def value: None
 bool  ____eventRegistered;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::AutoMoveTowardsTarget, ____travellingData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::AutoMoveTowardsTarget, ____pointableElement) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::AutoMoveTowardsTarget, ____Aborting_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::AutoMoveTowardsTarget, ___WhenAborted) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::AutoMoveTowardsTarget, ____identifier) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::AutoMoveTowardsTarget, ____tween) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::AutoMoveTowardsTarget, ____target) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::AutoMoveTowardsTarget, ____source) == 0x64, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::AutoMoveTowardsTarget, ____eventRegistered) == 0x80, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::AutoMoveTowardsTarget) == 0x88, "Size mismatch!");

} // namespace end def Oculus::Interaction
// [CompilerGenerated]
// Dependencies System.Object
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.AutoMoveTowardsTarget/<>c
class CORDL_TYPE AutoMoveTowardsTarget___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Oculus::Interaction::AutoMoveTowardsTarget___c*  __9;

/// @brief Field <>9__18_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__18_0, put=setStaticF___9__18_0)) ::System::Action_1<::Oculus::Interaction::AutoMoveTowardsTarget*>*  __9__18_0;

static inline ::Oculus::Interaction::AutoMoveTowardsTarget___c* New_ctor() ;

/// @brief Method <.ctor>b__18_0, addr 0xa473944, size 0x4, virtual false, abstract: false, final false
inline void __ctor_b__18_0(::Oculus::Interaction::AutoMoveTowardsTarget*  _p0_) ;

/// @brief Method .ctor, addr 0xa47393c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Oculus::Interaction::AutoMoveTowardsTarget___c* getStaticF___9() ;

static inline ::System::Action_1<::Oculus::Interaction::AutoMoveTowardsTarget*>* getStaticF___9__18_0() ;

static inline void setStaticF___9(::Oculus::Interaction::AutoMoveTowardsTarget___c*  value) ;

static inline void setStaticF___9__18_0(::System::Action_1<::Oculus::Interaction::AutoMoveTowardsTarget*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AutoMoveTowardsTarget___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AutoMoveTowardsTarget___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AutoMoveTowardsTarget___c(AutoMoveTowardsTarget___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AutoMoveTowardsTarget___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AutoMoveTowardsTarget___c(AutoMoveTowardsTarget___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15939};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::AutoMoveTowardsTarget___c) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction
