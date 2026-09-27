#pragma once
// IWYU pragma private; include "Oculus/Interaction/Locomotion/LocomotionActionsBroadcaster.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/Locomotion/zzzz__LocomotionActionsBroadcaster_LocomotionAction_def.hpp"
#include "Oculus/Interaction/zzzz__ValueToValueDecorator_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LocomotionActionsBroadcaster)
namespace GlobalNamespace {
struct LocomotionActionsBroadcaster_LocomotionAction;
}
namespace Oculus::Interaction::Locomotion {
class Decorator_LocomotionActionsBroadcaster___c;
}
namespace Oculus::Interaction::Locomotion {
class ILocomotionEventBroadcaster;
}
namespace Oculus::Interaction::Locomotion {
class LocomotionActionsBroadcaster_Decorator;
}
namespace Oculus::Interaction::Locomotion {
class LocomotionActionsBroadcaster___c;
}
namespace Oculus::Interaction::Locomotion {
struct LocomotionEvent;
}
namespace Oculus::Interaction {
class Context;
}
namespace Oculus::Interaction {
class UniqueIdentifier;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace UnityEngine {
struct Pose;
}
// Forward declare root types
namespace Oculus::Interaction::Locomotion {
class Decorator_LocomotionActionsBroadcaster___c;
}
namespace Oculus::Interaction::Locomotion {
class LocomotionActionsBroadcaster;
}
namespace Oculus::Interaction::Locomotion {
class LocomotionActionsBroadcaster_Decorator;
}
namespace Oculus::Interaction::Locomotion {
class LocomotionActionsBroadcaster___c;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Locomotion::Decorator_LocomotionActionsBroadcaster___c*);
MARK_REF_T(::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster*);
MARK_REF_T(::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster_Decorator*);
MARK_REF_T(::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster___c*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Locomotion::Decorator_LocomotionActionsBroadcaster___c*, "Oculus.Interaction.Locomotion", "LocomotionActionsBroadcaster/Decorator/<>c");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster*, "Oculus.Interaction.Locomotion", "LocomotionActionsBroadcaster");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster_Decorator*, "Oculus.Interaction.Locomotion", "LocomotionActionsBroadcaster/Decorator");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster___c*, "Oculus.Interaction.Locomotion", "LocomotionActionsBroadcaster/<>c");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction::Locomotion {
// Is value type: false
// CS Name: Oculus.Interaction.Locomotion.LocomotionActionsBroadcaster
class CORDL_TYPE LocomotionActionsBroadcaster : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using LocomotionAction = ::GlobalNamespace::LocomotionActionsBroadcaster_LocomotionAction;

using Decorator = ::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster_Decorator;

using __c = ::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster___c;

 __declspec(property(get=get_Identifier)) int32_t  Identifier;

/// @brief Field WhenLocomotionPerformed, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_WhenLocomotionPerformed, put=__cordl_internal_set_WhenLocomotionPerformed)) ::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*  WhenLocomotionPerformed;

/// @brief Field _context, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__context, put=__cordl_internal_set__context)) ::UnityW<::Oculus::Interaction::Context>  _context;

/// @brief Field _identifier, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__identifier, put=__cordl_internal_set__identifier)) ::Oculus::Interaction::UniqueIdentifier*  _identifier;

/// @brief Convert operator to "::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster"
constexpr operator  ::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster*() noexcept;

/// @brief Method Awake, addr 0xa4c5704, size 0x124, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method CreateLocomotionEventAction, addr 0xa4c591c, size 0xec, virtual false, abstract: false, final false
static inline ::Oculus::Interaction::Locomotion::LocomotionEvent CreateLocomotionEventAction(int32_t  identifier, ::GlobalNamespace::LocomotionActionsBroadcaster_LocomotionAction  action, ::UnityEngine::Pose  pose, ::Oculus::Interaction::Context*  context) ;

/// @brief Method Crouch, addr 0xa4c5a64, size 0x8, virtual false, abstract: false, final false
inline void Crouch() ;

/// @brief Method DisposeLocomotionAction, addr 0xa4c5a08, size 0x5c, virtual false, abstract: false, final false
static inline void DisposeLocomotionAction(::Oculus::Interaction::Locomotion::LocomotionEvent  locomotionEvent, ::Oculus::Interaction::Context*  context) ;

/// @brief Method InjectOptionalContext, addr 0xa4c5a9c, size 0x8, virtual false, abstract: false, final false
inline void InjectOptionalContext(::Oculus::Interaction::Context*  context) ;

/// @brief Method Jump, addr 0xa4c5a94, size 0x8, virtual false, abstract: false, final false
inline void Jump() ;

static inline ::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster* New_ctor() ;

/// @brief Method Run, addr 0xa4c5a7c, size 0x8, virtual false, abstract: false, final false
inline void Run() ;

/// @brief Method SendLocomotionAction, addr 0xa4c5828, size 0xf4, virtual false, abstract: false, final false
inline void SendLocomotionAction(::GlobalNamespace::LocomotionActionsBroadcaster_LocomotionAction  action) ;

/// @brief Method StandUp, addr 0xa4c5a6c, size 0x8, virtual false, abstract: false, final false
inline void StandUp() ;

/// @brief Method ToggleCrouch, addr 0xa4c5a74, size 0x8, virtual false, abstract: false, final false
inline void ToggleCrouch() ;

/// @brief Method ToggleRun, addr 0xa4c5a8c, size 0x8, virtual false, abstract: false, final false
inline void ToggleRun() ;

/// @brief Method TryGetLocomotionActions, addr 0xa4c2dcc, size 0x84, virtual false, abstract: false, final false
static inline bool TryGetLocomotionActions(::Oculus::Interaction::Locomotion::LocomotionEvent  locomotionEvent, ::by_ref<::GlobalNamespace::LocomotionActionsBroadcaster_LocomotionAction>  action, ::Oculus::Interaction::Context*  context) ;

/// @brief Method Walk, addr 0xa4c5a84, size 0x8, virtual false, abstract: false, final false
inline void Walk() ;

constexpr ::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>* const& __cordl_internal_get_WhenLocomotionPerformed() const;

constexpr ::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*& __cordl_internal_get_WhenLocomotionPerformed() ;

constexpr ::UnityW<::Oculus::Interaction::Context> const& __cordl_internal_get__context() const;

constexpr ::UnityW<::Oculus::Interaction::Context>& __cordl_internal_get__context() ;

constexpr ::Oculus::Interaction::UniqueIdentifier* const& __cordl_internal_get__identifier() const;

constexpr ::Oculus::Interaction::UniqueIdentifier*& __cordl_internal_get__identifier() ;

constexpr void __cordl_internal_set_WhenLocomotionPerformed(::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*  value) ;

constexpr void __cordl_internal_set__context(::UnityW<::Oculus::Interaction::Context>  value) ;

constexpr void __cordl_internal_set__identifier(::Oculus::Interaction::UniqueIdentifier*  value) ;

/// @brief Method .ctor, addr 0xa4c5ce4, size 0xf8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_WhenLocomotionPerformed, addr 0xa4c55a4, size 0xb0, virtual true, abstract: false, final true
inline void add_WhenLocomotionPerformed(::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*  value) ;

/// @brief Method get_Identifier, addr 0xa4c558c, size 0x18, virtual false, abstract: false, final false
inline int32_t get_Identifier() ;

/// @brief Convert to "::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster"
constexpr ::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster* i___Oculus__Interaction__Locomotion__ILocomotionEventBroadcaster() noexcept;

/// [CompilerGenerated]
/// @brief Method remove_WhenLocomotionPerformed, addr 0xa4c5654, size 0xb0, virtual true, abstract: false, final true
inline void remove_WhenLocomotionPerformed(::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LocomotionActionsBroadcaster() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LocomotionActionsBroadcaster", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LocomotionActionsBroadcaster(LocomotionActionsBroadcaster && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocomotionActionsBroadcaster", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocomotionActionsBroadcaster(LocomotionActionsBroadcaster const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16258};

/// [SerializeField]
/// [Optional]
/// @brief Field _context, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::Context>  ____context;

/// @brief Field _identifier, offset: 0x28, size: 0x8, def value: None
 ::Oculus::Interaction::UniqueIdentifier*  ____identifier;

/// [CompilerGenerated]
/// @brief Field WhenLocomotionPerformed, offset: 0x30, size: 0x8, def value: None
 ::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*  ___WhenLocomotionPerformed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster, ____context) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster, ____identifier) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster, ___WhenLocomotionPerformed) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster) == 0x38, "Size mismatch!");

} // namespace end def Oculus::Interaction::Locomotion
// [CompilerGenerated]
// Dependencies System.Object
namespace Oculus::Interaction::Locomotion {
// Is value type: false
// CS Name: Oculus.Interaction.Locomotion.LocomotionActionsBroadcaster/<>c
class CORDL_TYPE LocomotionActionsBroadcaster___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster___c*  __9;

/// @brief Field <>9__22_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__22_0, put=setStaticF___9__22_0)) ::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*  __9__22_0;

static inline ::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster___c* New_ctor() ;

/// @brief Method <.ctor>b__22_0, addr 0xa4c5f54, size 0x4, virtual false, abstract: false, final false
inline void __ctor_b__22_0(::Oculus::Interaction::Locomotion::LocomotionEvent  _p0_) ;

/// @brief Method .ctor, addr 0xa4c5f4c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster___c* getStaticF___9() ;

static inline ::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>* getStaticF___9__22_0() ;

static inline void setStaticF___9(::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster___c*  value) ;

static inline void setStaticF___9__22_0(::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LocomotionActionsBroadcaster___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LocomotionActionsBroadcaster___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LocomotionActionsBroadcaster___c(LocomotionActionsBroadcaster___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocomotionActionsBroadcaster___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocomotionActionsBroadcaster___c(LocomotionActionsBroadcaster___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16257};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster___c) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction::Locomotion
// Dependencies Oculus.Interaction.Locomotion.LocomotionActionsBroadcaster::LocomotionAction, Oculus.Interaction.ValueToValueDecorator`2<InstanceT, DecorationT>
namespace Oculus::Interaction::Locomotion {
// Is value type: false
// CS Name: Oculus.Interaction.Locomotion.LocomotionActionsBroadcaster/Decorator
class CORDL_TYPE LocomotionActionsBroadcaster_Decorator : public ::Oculus::Interaction::ValueToValueDecorator_2<uint64_t,::GlobalNamespace::LocomotionActionsBroadcaster_LocomotionAction> {
public:
// Declarations
using __c = ::Oculus::Interaction::Locomotion::Decorator_LocomotionActionsBroadcaster___c;

/// @brief Method GetFromContext, addr 0xa4c5b3c, size 0x1a8, virtual false, abstract: false, final false
static inline ::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster_Decorator* GetFromContext(::Oculus::Interaction::Context*  context) ;

static inline ::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster_Decorator* New_ctor() ;

/// @brief Method .ctor, addr 0xa4c5ddc, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LocomotionActionsBroadcaster_Decorator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LocomotionActionsBroadcaster_Decorator", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LocomotionActionsBroadcaster_Decorator(LocomotionActionsBroadcaster_Decorator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocomotionActionsBroadcaster_Decorator", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocomotionActionsBroadcaster_Decorator(LocomotionActionsBroadcaster_Decorator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16256};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster_Decorator) == 0x20, "Size mismatch!");

} // namespace end def Oculus::Interaction::Locomotion
// [CompilerGenerated]
// Dependencies System.Object
namespace Oculus::Interaction::Locomotion {
// Is value type: false
// CS Name: Oculus.Interaction.Locomotion.LocomotionActionsBroadcaster/Decorator/<>c
class CORDL_TYPE Decorator_LocomotionActionsBroadcaster___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Oculus::Interaction::Locomotion::Decorator_LocomotionActionsBroadcaster___c*  __9;

/// @brief Field <>9__1_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__1_0, put=setStaticF___9__1_0)) ::System::Func_1<::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster_Decorator*>*  __9__1_0;

static inline ::Oculus::Interaction::Locomotion::Decorator_LocomotionActionsBroadcaster___c* New_ctor() ;

/// @brief Method <GetFromContext>b__1_0, addr 0xa4c5e94, size 0x50, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster_Decorator* _GetFromContext_b__1_0() ;

/// @brief Method .ctor, addr 0xa4c5e8c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Oculus::Interaction::Locomotion::Decorator_LocomotionActionsBroadcaster___c* getStaticF___9() ;

static inline ::System::Func_1<::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster_Decorator*>* getStaticF___9__1_0() ;

static inline void setStaticF___9(::Oculus::Interaction::Locomotion::Decorator_LocomotionActionsBroadcaster___c*  value) ;

static inline void setStaticF___9__1_0(::System::Func_1<::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster_Decorator*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Decorator_LocomotionActionsBroadcaster___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Decorator_LocomotionActionsBroadcaster___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Decorator_LocomotionActionsBroadcaster___c(Decorator_LocomotionActionsBroadcaster___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Decorator_LocomotionActionsBroadcaster___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Decorator_LocomotionActionsBroadcaster___c(Decorator_LocomotionActionsBroadcaster___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16255};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::Locomotion::Decorator_LocomotionActionsBroadcaster___c) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction::Locomotion
