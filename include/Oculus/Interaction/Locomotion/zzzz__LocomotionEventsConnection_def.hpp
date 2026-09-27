#pragma once
// IWYU pragma private; include "Oculus/Interaction/Locomotion/LocomotionEventsConnection.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(LocomotionEventsConnection)
namespace Oculus::Interaction::Locomotion {
class ILocomotionEventBroadcaster;
}
namespace Oculus::Interaction::Locomotion {
class ILocomotionEventHandler;
}
namespace Oculus::Interaction::Locomotion {
struct LocomotionEvent;
}
namespace Oculus::Interaction::Locomotion {
class LocomotionEventsConnection___c;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
template<typename TInput,typename TOutput>
class Converter_2;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
struct Pose;
}
// Forward declare root types
namespace Oculus::Interaction::Locomotion {
class LocomotionEventsConnection;
}
namespace Oculus::Interaction::Locomotion {
class LocomotionEventsConnection___c;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Locomotion::LocomotionEventsConnection*);
MARK_REF_T(::Oculus::Interaction::Locomotion::LocomotionEventsConnection___c*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Locomotion::LocomotionEventsConnection*, "Oculus.Interaction.Locomotion", "LocomotionEventsConnection");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Locomotion::LocomotionEventsConnection___c*, "Oculus.Interaction.Locomotion", "LocomotionEventsConnection/<>c");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction::Locomotion {
// Is value type: false
// CS Name: Oculus.Interaction.Locomotion.LocomotionEventsConnection
class CORDL_TYPE LocomotionEventsConnection : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c = ::Oculus::Interaction::Locomotion::LocomotionEventsConnection___c;

 __declspec(property(get=get_Broadcasters, put=set_Broadcasters)) ::System::Collections::Generic::List_1<::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster*>*  Broadcasters;

 __declspec(property(get=get_Handlers, put=set_Handlers)) ::System::Collections::Generic::List_1<::Oculus::Interaction::Locomotion::ILocomotionEventHandler*>*  Handlers;

/// @brief Field WhenLocomotionEventHandled, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_WhenLocomotionEventHandled, put=__cordl_internal_set_WhenLocomotionEventHandled)) ::System::Action_2<::Oculus::Interaction::Locomotion::LocomotionEvent,::UnityEngine::Pose>*  WhenLocomotionEventHandled;

/// @brief Field WhenLocomotionPerformed, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_WhenLocomotionPerformed, put=__cordl_internal_set_WhenLocomotionPerformed)) ::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*  WhenLocomotionPerformed;

/// @brief Field <Broadcasters>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__Broadcasters_k__BackingField, put=__cordl_internal_set__Broadcasters_k__BackingField)) ::System::Collections::Generic::List_1<::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster*>*  _Broadcasters_k__BackingField;

/// @brief Field <Handlers>k__BackingField, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__Handlers_k__BackingField, put=__cordl_internal_set__Handlers_k__BackingField)) ::System::Collections::Generic::List_1<::Oculus::Interaction::Locomotion::ILocomotionEventHandler*>*  _Handlers_k__BackingField;

/// @brief Field _broadcasters, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__broadcasters, put=__cordl_internal_set__broadcasters)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  _broadcasters;

/// @brief Field _handler, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__handler, put=__cordl_internal_set__handler)) ::UnityW<::UnityEngine::Object>  _handler;

/// @brief Field _handlers, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__handlers, put=__cordl_internal_set__handlers)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  _handlers;

/// @brief Field _started, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

/// @brief Convert operator to "::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster"
constexpr operator  ::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster*() noexcept;

/// @brief Convert operator to "::Oculus::Interaction::Locomotion::ILocomotionEventHandler"
constexpr operator  ::Oculus::Interaction::Locomotion::ILocomotionEventHandler*() noexcept;

/// @brief Method Awake, addr 0xa4c6970, size 0x2f4, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method HandleLocomotionEvent, addr 0xa4c7444, size 0x214, virtual true, abstract: false, final true
inline void HandleLocomotionEvent(::Oculus::Interaction::Locomotion::LocomotionEvent  locomotionEvent) ;

/// @brief Method HandlerWhenLocomotionEventHandled, addr 0xa4c73ec, size 0x58, virtual false, abstract: false, final false
inline void HandlerWhenLocomotionEventHandled(::Oculus::Interaction::Locomotion::LocomotionEvent  arg1, ::UnityEngine::Pose  arg2) ;

/// @brief Method InjectAllLocomotionBroadcastersHandlerConnection, addr 0xa4c7658, size 0x4, virtual false, abstract: false, final false
inline void InjectAllLocomotionBroadcastersHandlerConnection(::System::Collections::Generic::List_1<::Oculus::Interaction::Locomotion::ILocomotionEventHandler*>*  handlers) ;

/// [Obsolete("Use the list version instead")]
/// @brief Method InjectHandler, addr 0xa4c78a4, size 0xbc, virtual false, abstract: false, final false
inline void InjectHandler(::Oculus::Interaction::Locomotion::ILocomotionEventHandler*  handler) ;

/// @brief Method InjectHandlers, addr 0xa4c765c, size 0x124, virtual false, abstract: false, final false
inline void InjectHandlers(::System::Collections::Generic::List_1<::Oculus::Interaction::Locomotion::ILocomotionEventHandler*>*  handlers) ;

/// @brief Method InjectOptionalBroadcasters, addr 0xa4c7780, size 0x124, virtual false, abstract: false, final false
inline void InjectOptionalBroadcasters(::System::Collections::Generic::List_1<::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster*>*  broadcasters) ;

static inline ::Oculus::Interaction::Locomotion::LocomotionEventsConnection* New_ctor() ;

/// @brief Method OnDisable, addr 0xa4c703c, size 0x3b0, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa4c6c90, size 0x3ac, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Start, addr 0xa4c6c64, size 0x2c, virtual true, abstract: false, final false
inline void Start() ;

constexpr ::System::Action_2<::Oculus::Interaction::Locomotion::LocomotionEvent,::UnityEngine::Pose>* const& __cordl_internal_get_WhenLocomotionEventHandled() const;

constexpr ::System::Action_2<::Oculus::Interaction::Locomotion::LocomotionEvent,::UnityEngine::Pose>*& __cordl_internal_get_WhenLocomotionEventHandled() ;

constexpr ::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>* const& __cordl_internal_get_WhenLocomotionPerformed() const;

constexpr ::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*& __cordl_internal_get_WhenLocomotionPerformed() ;

constexpr ::System::Collections::Generic::List_1<::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster*>* const& __cordl_internal_get__Broadcasters_k__BackingField() const;

constexpr ::System::Collections::Generic::List_1<::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster*>*& __cordl_internal_get__Broadcasters_k__BackingField() ;

constexpr ::System::Collections::Generic::List_1<::Oculus::Interaction::Locomotion::ILocomotionEventHandler*>* const& __cordl_internal_get__Handlers_k__BackingField() const;

constexpr ::System::Collections::Generic::List_1<::Oculus::Interaction::Locomotion::ILocomotionEventHandler*>*& __cordl_internal_get__Handlers_k__BackingField() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* const& __cordl_internal_get__broadcasters() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*& __cordl_internal_get__broadcasters() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__handler() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__handler() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* const& __cordl_internal_get__handlers() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*& __cordl_internal_get__handlers() ;

constexpr bool const& __cordl_internal_get__started() const;

constexpr bool& __cordl_internal_get__started() ;

constexpr void __cordl_internal_set_WhenLocomotionEventHandled(::System::Action_2<::Oculus::Interaction::Locomotion::LocomotionEvent,::UnityEngine::Pose>*  value) ;

constexpr void __cordl_internal_set_WhenLocomotionPerformed(::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*  value) ;

constexpr void __cordl_internal_set__Broadcasters_k__BackingField(::System::Collections::Generic::List_1<::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster*>*  value) ;

constexpr void __cordl_internal_set__Handlers_k__BackingField(::System::Collections::Generic::List_1<::Oculus::Interaction::Locomotion::ILocomotionEventHandler*>*  value) ;

constexpr void __cordl_internal_set__broadcasters(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  value) ;

constexpr void __cordl_internal_set__handler(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__handlers(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  value) ;

constexpr void __cordl_internal_set__started(bool  value) ;

/// @brief Method .ctor, addr 0xa4c7960, size 0x198, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_WhenLocomotionEventHandled, addr 0xa4c6810, size 0xb0, virtual true, abstract: false, final true
inline void add_WhenLocomotionEventHandled(::System::Action_2<::Oculus::Interaction::Locomotion::LocomotionEvent,::UnityEngine::Pose>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_WhenLocomotionPerformed, addr 0xa4c66b0, size 0xb0, virtual true, abstract: false, final true
inline void add_WhenLocomotionPerformed(::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*  value) ;

/// [CompilerGenerated]
/// @brief Method get_Broadcasters, addr 0xa4c6690, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster*>* get_Broadcasters() ;

/// [CompilerGenerated]
/// @brief Method get_Handlers, addr 0xa4c66a0, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::Oculus::Interaction::Locomotion::ILocomotionEventHandler*>* get_Handlers() ;

/// @brief Convert to "::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster"
constexpr ::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster* i___Oculus__Interaction__Locomotion__ILocomotionEventBroadcaster() noexcept;

/// @brief Convert to "::Oculus::Interaction::Locomotion::ILocomotionEventHandler"
constexpr ::Oculus::Interaction::Locomotion::ILocomotionEventHandler* i___Oculus__Interaction__Locomotion__ILocomotionEventHandler() noexcept;

/// [CompilerGenerated]
/// @brief Method remove_WhenLocomotionEventHandled, addr 0xa4c68c0, size 0xb0, virtual true, abstract: false, final true
inline void remove_WhenLocomotionEventHandled(::System::Action_2<::Oculus::Interaction::Locomotion::LocomotionEvent,::UnityEngine::Pose>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_WhenLocomotionPerformed, addr 0xa4c6760, size 0xb0, virtual true, abstract: false, final true
inline void remove_WhenLocomotionPerformed(::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_Broadcasters, addr 0xa4c6698, size 0x8, virtual false, abstract: false, final false
inline void set_Broadcasters(::System::Collections::Generic::List_1<::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster*>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_Handlers, addr 0xa4c66a8, size 0x8, virtual false, abstract: false, final false
inline void set_Handlers(::System::Collections::Generic::List_1<::Oculus::Interaction::Locomotion::ILocomotionEventHandler*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LocomotionEventsConnection() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LocomotionEventsConnection", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LocomotionEventsConnection(LocomotionEventsConnection && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocomotionEventsConnection", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocomotionEventsConnection(LocomotionEventsConnection const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16265};

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.Locomotion.ILocomotionEventBroadcaster), new[] {  })]
/// [Optional((Oculus.Interaction.OptionalAttribute::Flag)2)]
/// @brief Field _broadcasters, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  ____broadcasters;

/// [CompilerGenerated]
/// @brief Field <Broadcasters>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster*>*  ____Broadcasters_k__BackingField;

/// [Obsolete("Use the list of Handlers instead")]
/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.Locomotion.ILocomotionEventHandler), new[] {  })]
/// [Optional((Oculus.Interaction.OptionalAttribute::Flag)4)]
/// @brief Field _handler, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____handler;

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.Locomotion.ILocomotionEventHandler), new[] {  })]
/// @brief Field _handlers, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  ____handlers;

/// [CompilerGenerated]
/// @brief Field <Handlers>k__BackingField, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Oculus::Interaction::Locomotion::ILocomotionEventHandler*>*  ____Handlers_k__BackingField;

/// @brief Field _started, offset: 0x48, size: 0x1, def value: None
 bool  ____started;

/// [CompilerGenerated]
/// @brief Field WhenLocomotionPerformed, offset: 0x50, size: 0x8, def value: None
 ::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*  ___WhenLocomotionPerformed;

/// [CompilerGenerated]
/// @brief Field WhenLocomotionEventHandled, offset: 0x58, size: 0x8, def value: None
 ::System::Action_2<::Oculus::Interaction::Locomotion::LocomotionEvent,::UnityEngine::Pose>*  ___WhenLocomotionEventHandled;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Locomotion::LocomotionEventsConnection, ____broadcasters) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::LocomotionEventsConnection, ____Broadcasters_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::LocomotionEventsConnection, ____handler) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::LocomotionEventsConnection, ____handlers) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::LocomotionEventsConnection, ____Handlers_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::LocomotionEventsConnection, ____started) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::LocomotionEventsConnection, ___WhenLocomotionPerformed) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::LocomotionEventsConnection, ___WhenLocomotionEventHandled) == 0x58, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Locomotion::LocomotionEventsConnection) == 0x60, "Size mismatch!");

} // namespace end def Oculus::Interaction::Locomotion
// [CompilerGenerated]
// Dependencies System.Object
namespace Oculus::Interaction::Locomotion {
// Is value type: false
// CS Name: Oculus.Interaction.Locomotion.LocomotionEventsConnection/<>c
class CORDL_TYPE LocomotionEventsConnection___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Oculus::Interaction::Locomotion::LocomotionEventsConnection___c*  __9;

/// @brief Field <>9__18_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__18_0, put=setStaticF___9__18_0)) ::System::Converter_2<::UnityW<::UnityEngine::Object>,::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster*>*  __9__18_0;

/// @brief Field <>9__18_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__18_1, put=setStaticF___9__18_1)) ::System::Converter_2<::UnityW<::UnityEngine::Object>,::Oculus::Interaction::Locomotion::ILocomotionEventHandler*>*  __9__18_1;

/// @brief Field <>9__25_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__25_0, put=setStaticF___9__25_0)) ::System::Converter_2<::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster*,::UnityW<::UnityEngine::Object>>*  __9__25_0;

/// @brief Field <>9__26_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__26_0, put=setStaticF___9__26_0)) ::System::Converter_2<::Oculus::Interaction::Locomotion::ILocomotionEventHandler*,::UnityW<::UnityEngine::Object>>*  __9__26_0;

/// @brief Field <>9__28_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__28_0, put=setStaticF___9__28_0)) ::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*  __9__28_0;

/// @brief Field <>9__28_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__28_1, put=setStaticF___9__28_1)) ::System::Action_2<::Oculus::Interaction::Locomotion::LocomotionEvent,::UnityEngine::Pose>*  __9__28_1;

static inline ::Oculus::Interaction::Locomotion::LocomotionEventsConnection___c* New_ctor() ;

/// @brief Method <Awake>b__18_0, addr 0xa4c7b68, size 0x48, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster* _Awake_b__18_0(::UnityEngine::Object*  b) ;

/// @brief Method <Awake>b__18_1, addr 0xa4c7bb0, size 0x48, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Locomotion::ILocomotionEventHandler* _Awake_b__18_1(::UnityEngine::Object*  b) ;

/// @brief Method <InjectHandlers>b__26_0, addr 0xa4c7c70, size 0x78, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Object> _InjectHandlers_b__26_0(::Oculus::Interaction::Locomotion::ILocomotionEventHandler*  b) ;

/// @brief Method <InjectOptionalBroadcasters>b__25_0, addr 0xa4c7bf8, size 0x78, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Object> _InjectOptionalBroadcasters_b__25_0(::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster*  b) ;

/// @brief Method <.ctor>b__28_0, addr 0xa4c7ce8, size 0x4, virtual false, abstract: false, final false
inline void __ctor_b__28_0(::Oculus::Interaction::Locomotion::LocomotionEvent  _p0_) ;

/// @brief Method <.ctor>b__28_1, addr 0xa4c7cec, size 0x4, virtual false, abstract: false, final false
inline void __ctor_b__28_1(::Oculus::Interaction::Locomotion::LocomotionEvent  _p0_, ::UnityEngine::Pose  _p1_) ;

/// @brief Method .ctor, addr 0xa4c7b60, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Oculus::Interaction::Locomotion::LocomotionEventsConnection___c* getStaticF___9() ;

static inline ::System::Converter_2<::UnityW<::UnityEngine::Object>,::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster*>* getStaticF___9__18_0() ;

static inline ::System::Converter_2<::UnityW<::UnityEngine::Object>,::Oculus::Interaction::Locomotion::ILocomotionEventHandler*>* getStaticF___9__18_1() ;

static inline ::System::Converter_2<::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster*,::UnityW<::UnityEngine::Object>>* getStaticF___9__25_0() ;

static inline ::System::Converter_2<::Oculus::Interaction::Locomotion::ILocomotionEventHandler*,::UnityW<::UnityEngine::Object>>* getStaticF___9__26_0() ;

static inline ::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>* getStaticF___9__28_0() ;

static inline ::System::Action_2<::Oculus::Interaction::Locomotion::LocomotionEvent,::UnityEngine::Pose>* getStaticF___9__28_1() ;

static inline void setStaticF___9(::Oculus::Interaction::Locomotion::LocomotionEventsConnection___c*  value) ;

static inline void setStaticF___9__18_0(::System::Converter_2<::UnityW<::UnityEngine::Object>,::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster*>*  value) ;

static inline void setStaticF___9__18_1(::System::Converter_2<::UnityW<::UnityEngine::Object>,::Oculus::Interaction::Locomotion::ILocomotionEventHandler*>*  value) ;

static inline void setStaticF___9__25_0(::System::Converter_2<::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster*,::UnityW<::UnityEngine::Object>>*  value) ;

static inline void setStaticF___9__26_0(::System::Converter_2<::Oculus::Interaction::Locomotion::ILocomotionEventHandler*,::UnityW<::UnityEngine::Object>>*  value) ;

static inline void setStaticF___9__28_0(::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*  value) ;

static inline void setStaticF___9__28_1(::System::Action_2<::Oculus::Interaction::Locomotion::LocomotionEvent,::UnityEngine::Pose>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LocomotionEventsConnection___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LocomotionEventsConnection___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LocomotionEventsConnection___c(LocomotionEventsConnection___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocomotionEventsConnection___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocomotionEventsConnection___c(LocomotionEventsConnection___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16264};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::Locomotion::LocomotionEventsConnection___c) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction::Locomotion
