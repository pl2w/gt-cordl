#pragma once
// IWYU pragma private; include "Oculus/Interaction/Locomotion/LocomotionActionsBroadcaster.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__LocomotionActionsBroadcaster_LocomotionAction_impl.hpp"
#include "Oculus/Interaction/zzzz__ValueToValueDecorator_2_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__LocomotionActionsBroadcaster_def.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__ILocomotionEventBroadcaster_def.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__LocomotionActionsBroadcaster_LocomotionAction_def.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__LocomotionActionsBroadcaster_def.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__LocomotionEvent_def.hpp"
#include "Oculus/Interaction/zzzz__Context_def.hpp"
#include "Oculus/Interaction/zzzz__UniqueIdentifier_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster.get_Identifier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster::*)()>(&::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster::get_Identifier)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa4c558c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster*>(),
                        {"get_Identifier", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster.add_WhenLocomotionPerformed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster::*)(::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*)>(&::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster::add_WhenLocomotionPerformed)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa4c55a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster*>(),
                        {"add_WhenLocomotionPerformed", {}, {::i2c::type_of<::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster.remove_WhenLocomotionPerformed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster::*)(::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*)>(&::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster::remove_WhenLocomotionPerformed)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa4c5654;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster*>(),
                        {"remove_WhenLocomotionPerformed", {}, {::i2c::type_of<::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster::*)()>(&::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster::Awake)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0xa4c5704;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster*>(),
                    {::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster.SendLocomotionAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster::*)(::GlobalNamespace::LocomotionActionsBroadcaster_LocomotionAction)>(&::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster::SendLocomotionAction)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xa4c5828;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster*>(),
                        {"SendLocomotionAction", {}, {::i2c::type_of<::GlobalNamespace::LocomotionActionsBroadcaster_LocomotionAction>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster.Crouch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster::*)()>(&::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster::Crouch)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4c5a64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster*>(),
                        {"Crouch", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster.StandUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster::*)()>(&::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster::StandUp)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4c5a6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster*>(),
                        {"StandUp", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster.ToggleCrouch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster::*)()>(&::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster::ToggleCrouch)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4c5a74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster*>(),
                        {"ToggleCrouch", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster.Run
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster::*)()>(&::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster::Run)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4c5a7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster*>(),
                        {"Run", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster.Walk
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster::*)()>(&::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster::Walk)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4c5a84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster*>(),
                        {"Walk", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster.ToggleRun
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster::*)()>(&::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster::ToggleRun)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4c5a8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster*>(),
                        {"ToggleRun", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster.Jump
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster::*)()>(&::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster::Jump)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4c5a94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster*>(),
                        {"Jump", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster.InjectOptionalContext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster::*)(::Oculus::Interaction::Context*)>(&::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster::InjectOptionalContext)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4c5a9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster*>(),
                        {"InjectOptionalContext", {}, {::i2c::type_of<::Oculus::Interaction::Context*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster.CreateLocomotionEventAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Locomotion::LocomotionEvent (*)(int32_t, ::GlobalNamespace::LocomotionActionsBroadcaster_LocomotionAction, ::UnityEngine::Pose, ::Oculus::Interaction::Context*)>(&::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster::CreateLocomotionEventAction)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xa4c591c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster*>(),
                        {"CreateLocomotionEventAction", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::LocomotionActionsBroadcaster_LocomotionAction>(), ::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<::Oculus::Interaction::Context*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster.TryGetLocomotionActions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Oculus::Interaction::Locomotion::LocomotionEvent, ::by_ref<::GlobalNamespace::LocomotionActionsBroadcaster_LocomotionAction>, ::Oculus::Interaction::Context*)>(&::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster::TryGetLocomotionActions)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xa4c2dcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster*>(),
                        {"TryGetLocomotionActions", {}, {::i2c::type_of<::Oculus::Interaction::Locomotion::LocomotionEvent>(), ::i2c::type_of<::by_ref<::GlobalNamespace::LocomotionActionsBroadcaster_LocomotionAction>>(), ::i2c::type_of<::Oculus::Interaction::Context*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster.DisposeLocomotionAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Oculus::Interaction::Locomotion::LocomotionEvent, ::Oculus::Interaction::Context*)>(&::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster::DisposeLocomotionAction)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa4c5a08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster*>(),
                        {"DisposeLocomotionAction", {}, {::i2c::type_of<::Oculus::Interaction::Locomotion::LocomotionEvent>(), ::i2c::type_of<::Oculus::Interaction::Context*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster::*)()>(&::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster::_ctor)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xa4c5ce4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Oculus::Interaction::Context>& Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster::__cordl_internal_get__context()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____context;
}
constexpr ::UnityW<::Oculus::Interaction::Context> const& Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster::__cordl_internal_get__context() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____context;
}
constexpr void Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster::__cordl_internal_set__context(::UnityW<::Oculus::Interaction::Context>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____context = value;
}
constexpr ::Oculus::Interaction::UniqueIdentifier*& Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster::__cordl_internal_get__identifier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____identifier;
}
constexpr ::Oculus::Interaction::UniqueIdentifier* const& Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster::__cordl_internal_get__identifier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____identifier;
}
constexpr void Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster::__cordl_internal_set__identifier(::Oculus::Interaction::UniqueIdentifier*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____identifier = value;
}
constexpr ::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*& Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster::__cordl_internal_get_WhenLocomotionPerformed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenLocomotionPerformed;
}
constexpr ::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>* const& Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster::__cordl_internal_get_WhenLocomotionPerformed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenLocomotionPerformed;
}
constexpr void Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster::__cordl_internal_set_WhenLocomotionPerformed(::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WhenLocomotionPerformed = value;
}
inline int32_t Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster::get_Identifier()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster*>(),
                        {"get_Identifier", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster::add_WhenLocomotionPerformed(::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster*>(),
                        {"add_WhenLocomotionPerformed", {}, {::i2c::type_of<::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster::remove_WhenLocomotionPerformed(::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster*>(),
                        {"remove_WhenLocomotionPerformed", {}, {::i2c::type_of<::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster::SendLocomotionAction(::GlobalNamespace::LocomotionActionsBroadcaster_LocomotionAction  action)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster*>(),
                        {"SendLocomotionAction", {}, {::i2c::type_of<::GlobalNamespace::LocomotionActionsBroadcaster_LocomotionAction>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, action);
}
inline void Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster::Crouch()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster*>(),
                        {"Crouch", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster::StandUp()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster*>(),
                        {"StandUp", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster::ToggleCrouch()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster*>(),
                        {"ToggleCrouch", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster::Run()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster*>(),
                        {"Run", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster::Walk()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster*>(),
                        {"Walk", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster::ToggleRun()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster*>(),
                        {"ToggleRun", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster::Jump()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster*>(),
                        {"Jump", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster::InjectOptionalContext(::Oculus::Interaction::Context*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster*>(),
                        {"InjectOptionalContext", {}, {::i2c::type_of<::Oculus::Interaction::Context*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline ::Oculus::Interaction::Locomotion::LocomotionEvent Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster::CreateLocomotionEventAction(int32_t  identifier, ::GlobalNamespace::LocomotionActionsBroadcaster_LocomotionAction  action, ::UnityEngine::Pose  pose, ::Oculus::Interaction::Context*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster*>(),
                        {"CreateLocomotionEventAction", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::LocomotionActionsBroadcaster_LocomotionAction>(), ::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<::Oculus::Interaction::Context*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Locomotion::LocomotionEvent>(nullptr, ___internal_method, identifier, action, pose, context);
}
inline bool Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster::TryGetLocomotionActions(::Oculus::Interaction::Locomotion::LocomotionEvent  locomotionEvent, ::by_ref<::GlobalNamespace::LocomotionActionsBroadcaster_LocomotionAction>  action, ::Oculus::Interaction::Context*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster*>(),
                        {"TryGetLocomotionActions", {}, {::i2c::type_of<::Oculus::Interaction::Locomotion::LocomotionEvent>(), ::i2c::type_of<::by_ref<::GlobalNamespace::LocomotionActionsBroadcaster_LocomotionAction>>(), ::i2c::type_of<::Oculus::Interaction::Context*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, locomotionEvent, action, context);
}
inline void Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster::DisposeLocomotionAction(::Oculus::Interaction::Locomotion::LocomotionEvent  locomotionEvent, ::Oculus::Interaction::Context*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster*>(),
                        {"DisposeLocomotionAction", {}, {::i2c::type_of<::Oculus::Interaction::Locomotion::LocomotionEvent>(), ::i2c::type_of<::Oculus::Interaction::Context*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, locomotionEvent, context);
}
inline void Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster* Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster*>());
}
/// @brief Convert operator to "::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster"
constexpr  Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster::operator ::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster*() noexcept {
return static_cast<::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster"
constexpr ::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster* Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster::i___Oculus__Interaction__Locomotion__ILocomotionEventBroadcaster() noexcept {
return static_cast<::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster::LocomotionActionsBroadcaster()   {
}
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster___c::*)()>(&::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4c5f4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster___c.__ctor_b__22_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster___c::*)(::Oculus::Interaction::Locomotion::LocomotionEvent)>(&::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster___c::__ctor_b__22_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa4c5f54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster___c*>(),
                        {"<.ctor>b__22_0", {}, {::i2c::type_of<::Oculus::Interaction::Locomotion::LocomotionEvent>()}}
                    )));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster___c::setStaticF___9(::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster___c*  value)  {
::cordl_internals::setStaticField<::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster___c*, "<>9", ::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster___c*>(std::forward<::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster___c*>(value));
}
inline ::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster___c* Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster___c*, "<>9", ::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster___c*>();
}
inline void Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster___c::setStaticF___9__22_0(::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*, "<>9__22_0", ::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster___c*>(std::forward<::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*>(value));
}
inline ::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>* Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster___c::getStaticF___9__22_0()  {
return ::cordl_internals::getStaticField<::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*, "<>9__22_0", ::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster___c*>();
}
inline void Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster___c::__ctor_b__22_0(::Oculus::Interaction::Locomotion::LocomotionEvent  _p0_)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster___c*>(),
                        {"<.ctor>b__22_0", {}, {::i2c::type_of<::Oculus::Interaction::Locomotion::LocomotionEvent>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _p0_);
}
inline ::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster___c* Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster___c*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster___c::LocomotionActionsBroadcaster___c()   {
}
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster_Decorator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster_Decorator::*)()>(&::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster_Decorator::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa4c5ddc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster_Decorator*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster_Decorator.GetFromContext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster_Decorator* (*)(::Oculus::Interaction::Context*)>(&::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster_Decorator::GetFromContext)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0xa4c5b3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster_Decorator*>(),
                        {"GetFromContext", {}, {::i2c::type_of<::Oculus::Interaction::Context*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster_Decorator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster_Decorator*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster_Decorator* Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster_Decorator::GetFromContext(::Oculus::Interaction::Context*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster_Decorator*>(),
                        {"GetFromContext", {}, {::i2c::type_of<::Oculus::Interaction::Context*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster_Decorator*>(nullptr, ___internal_method, context);
}
inline ::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster_Decorator* Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster_Decorator::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster_Decorator*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster_Decorator::LocomotionActionsBroadcaster_Decorator()   {
}
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::Decorator_LocomotionActionsBroadcaster___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::Decorator_LocomotionActionsBroadcaster___c::*)()>(&::Oculus::Interaction::Locomotion::Decorator_LocomotionActionsBroadcaster___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4c5e8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::Decorator_LocomotionActionsBroadcaster___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::Decorator_LocomotionActionsBroadcaster___c._GetFromContext_b__1_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster_Decorator* (::Oculus::Interaction::Locomotion::Decorator_LocomotionActionsBroadcaster___c::*)()>(&::Oculus::Interaction::Locomotion::Decorator_LocomotionActionsBroadcaster___c::_GetFromContext_b__1_0)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xa4c5e94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::Decorator_LocomotionActionsBroadcaster___c*>(),
                        {"<GetFromContext>b__1_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::Locomotion::Decorator_LocomotionActionsBroadcaster___c::setStaticF___9(::Oculus::Interaction::Locomotion::Decorator_LocomotionActionsBroadcaster___c*  value)  {
::cordl_internals::setStaticField<::Oculus::Interaction::Locomotion::Decorator_LocomotionActionsBroadcaster___c*, "<>9", ::Oculus::Interaction::Locomotion::Decorator_LocomotionActionsBroadcaster___c*>(std::forward<::Oculus::Interaction::Locomotion::Decorator_LocomotionActionsBroadcaster___c*>(value));
}
inline ::Oculus::Interaction::Locomotion::Decorator_LocomotionActionsBroadcaster___c* Oculus::Interaction::Locomotion::Decorator_LocomotionActionsBroadcaster___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Oculus::Interaction::Locomotion::Decorator_LocomotionActionsBroadcaster___c*, "<>9", ::Oculus::Interaction::Locomotion::Decorator_LocomotionActionsBroadcaster___c*>();
}
inline void Oculus::Interaction::Locomotion::Decorator_LocomotionActionsBroadcaster___c::setStaticF___9__1_0(::System::Func_1<::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster_Decorator*>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster_Decorator*>*, "<>9__1_0", ::Oculus::Interaction::Locomotion::Decorator_LocomotionActionsBroadcaster___c*>(std::forward<::System::Func_1<::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster_Decorator*>*>(value));
}
inline ::System::Func_1<::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster_Decorator*>* Oculus::Interaction::Locomotion::Decorator_LocomotionActionsBroadcaster___c::getStaticF___9__1_0()  {
return ::cordl_internals::getStaticField<::System::Func_1<::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster_Decorator*>*, "<>9__1_0", ::Oculus::Interaction::Locomotion::Decorator_LocomotionActionsBroadcaster___c*>();
}
inline void Oculus::Interaction::Locomotion::Decorator_LocomotionActionsBroadcaster___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::Decorator_LocomotionActionsBroadcaster___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster_Decorator* Oculus::Interaction::Locomotion::Decorator_LocomotionActionsBroadcaster___c::_GetFromContext_b__1_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::Decorator_LocomotionActionsBroadcaster___c*>(),
                        {"<GetFromContext>b__1_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Locomotion::LocomotionActionsBroadcaster_Decorator*>(this, ___internal_method);
}
inline ::Oculus::Interaction::Locomotion::Decorator_LocomotionActionsBroadcaster___c* Oculus::Interaction::Locomotion::Decorator_LocomotionActionsBroadcaster___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Locomotion::Decorator_LocomotionActionsBroadcaster___c*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Locomotion::Decorator_LocomotionActionsBroadcaster___c::Decorator_LocomotionActionsBroadcaster___c()   {
}
