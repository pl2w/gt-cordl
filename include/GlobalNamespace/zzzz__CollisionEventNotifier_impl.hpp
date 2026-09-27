#pragma once
// IWYU pragma private; include "GlobalNamespace/CollisionEventNotifier.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__CollisionEventNotifier_def.hpp"
#include "GlobalNamespace/zzzz__CollisionEventNotifier_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Collision_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CollisionEventNotifier.add_CollisionEnterEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CollisionEventNotifier::*)(::GlobalNamespace::CollisionEventNotifier_CollisionEvent*)>(&::GlobalNamespace::CollisionEventNotifier::add_CollisionEnterEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5ae4108;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CollisionEventNotifier*>(),
                        {"add_CollisionEnterEvent", {}, {::i2c::type_of<::GlobalNamespace::CollisionEventNotifier_CollisionEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CollisionEventNotifier.remove_CollisionEnterEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CollisionEventNotifier::*)(::GlobalNamespace::CollisionEventNotifier_CollisionEvent*)>(&::GlobalNamespace::CollisionEventNotifier::remove_CollisionEnterEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5ae41a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CollisionEventNotifier*>(),
                        {"remove_CollisionEnterEvent", {}, {::i2c::type_of<::GlobalNamespace::CollisionEventNotifier_CollisionEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CollisionEventNotifier.add_CollisionExitEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CollisionEventNotifier::*)(::GlobalNamespace::CollisionEventNotifier_CollisionEvent*)>(&::GlobalNamespace::CollisionEventNotifier::add_CollisionExitEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5ae4240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CollisionEventNotifier*>(),
                        {"add_CollisionExitEvent", {}, {::i2c::type_of<::GlobalNamespace::CollisionEventNotifier_CollisionEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CollisionEventNotifier.remove_CollisionExitEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CollisionEventNotifier::*)(::GlobalNamespace::CollisionEventNotifier_CollisionEvent*)>(&::GlobalNamespace::CollisionEventNotifier::remove_CollisionExitEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5ae42dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CollisionEventNotifier*>(),
                        {"remove_CollisionExitEvent", {}, {::i2c::type_of<::GlobalNamespace::CollisionEventNotifier_CollisionEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CollisionEventNotifier.OnCollisionEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CollisionEventNotifier::*)(::UnityEngine::Collision*)>(&::GlobalNamespace::CollisionEventNotifier::OnCollisionEnter)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5ae4378;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CollisionEventNotifier*>(),
                        {"OnCollisionEnter", {}, {::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CollisionEventNotifier.OnCollisionExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CollisionEventNotifier::*)(::UnityEngine::Collision*)>(&::GlobalNamespace::CollisionEventNotifier::OnCollisionExit)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5ae43a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CollisionEventNotifier*>(),
                        {"OnCollisionExit", {}, {::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CollisionEventNotifier._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CollisionEventNotifier::*)()>(&::GlobalNamespace::CollisionEventNotifier::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ae43c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CollisionEventNotifier*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::CollisionEventNotifier_CollisionEvent*& GlobalNamespace::CollisionEventNotifier::__cordl_internal_get_CollisionEnterEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CollisionEnterEvent;
}
constexpr ::GlobalNamespace::CollisionEventNotifier_CollisionEvent* const& GlobalNamespace::CollisionEventNotifier::__cordl_internal_get_CollisionEnterEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CollisionEnterEvent;
}
constexpr void GlobalNamespace::CollisionEventNotifier::__cordl_internal_set_CollisionEnterEvent(::GlobalNamespace::CollisionEventNotifier_CollisionEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CollisionEnterEvent = value;
}
constexpr ::GlobalNamespace::CollisionEventNotifier_CollisionEvent*& GlobalNamespace::CollisionEventNotifier::__cordl_internal_get_CollisionExitEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CollisionExitEvent;
}
constexpr ::GlobalNamespace::CollisionEventNotifier_CollisionEvent* const& GlobalNamespace::CollisionEventNotifier::__cordl_internal_get_CollisionExitEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CollisionExitEvent;
}
constexpr void GlobalNamespace::CollisionEventNotifier::__cordl_internal_set_CollisionExitEvent(::GlobalNamespace::CollisionEventNotifier_CollisionEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CollisionExitEvent = value;
}
inline void GlobalNamespace::CollisionEventNotifier::add_CollisionEnterEvent(::GlobalNamespace::CollisionEventNotifier_CollisionEvent*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CollisionEventNotifier*>(),
                        {"add_CollisionEnterEvent", {}, {::i2c::type_of<::GlobalNamespace::CollisionEventNotifier_CollisionEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::CollisionEventNotifier::remove_CollisionEnterEvent(::GlobalNamespace::CollisionEventNotifier_CollisionEvent*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CollisionEventNotifier*>(),
                        {"remove_CollisionEnterEvent", {}, {::i2c::type_of<::GlobalNamespace::CollisionEventNotifier_CollisionEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::CollisionEventNotifier::add_CollisionExitEvent(::GlobalNamespace::CollisionEventNotifier_CollisionEvent*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CollisionEventNotifier*>(),
                        {"add_CollisionExitEvent", {}, {::i2c::type_of<::GlobalNamespace::CollisionEventNotifier_CollisionEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::CollisionEventNotifier::remove_CollisionExitEvent(::GlobalNamespace::CollisionEventNotifier_CollisionEvent*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CollisionEventNotifier*>(),
                        {"remove_CollisionExitEvent", {}, {::i2c::type_of<::GlobalNamespace::CollisionEventNotifier_CollisionEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::CollisionEventNotifier::OnCollisionEnter(::UnityEngine::Collision*  collision)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CollisionEventNotifier*>(),
                        {"OnCollisionEnter", {}, {::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collision);
}
inline void GlobalNamespace::CollisionEventNotifier::OnCollisionExit(::UnityEngine::Collision*  collision)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CollisionEventNotifier*>(),
                        {"OnCollisionExit", {}, {::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collision);
}
inline void GlobalNamespace::CollisionEventNotifier::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CollisionEventNotifier*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CollisionEventNotifier* GlobalNamespace::CollisionEventNotifier::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CollisionEventNotifier*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CollisionEventNotifier::CollisionEventNotifier()   {
}
//  Writing Method size for method: ::GlobalNamespace::CollisionEventNotifier_CollisionEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CollisionEventNotifier_CollisionEvent::*)(::System::Object*, ::System::IntPtr)>(&::GlobalNamespace::CollisionEventNotifier_CollisionEvent::_ctor)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5ae43d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CollisionEventNotifier_CollisionEvent*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CollisionEventNotifier_CollisionEvent.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CollisionEventNotifier_CollisionEvent::*)(::GlobalNamespace::CollisionEventNotifier*, ::UnityEngine::Collision*)>(&::GlobalNamespace::CollisionEventNotifier_CollisionEvent::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5ae44dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CollisionEventNotifier_CollisionEvent*>(),
                    {::i2c::class_of<::GlobalNamespace::CollisionEventNotifier_CollisionEvent*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CollisionEventNotifier_CollisionEvent.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::GlobalNamespace::CollisionEventNotifier_CollisionEvent::*)(::GlobalNamespace::CollisionEventNotifier*, ::UnityEngine::Collision*, ::System::AsyncCallback*, ::System::Object*)>(&::GlobalNamespace::CollisionEventNotifier_CollisionEvent::BeginInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5ae44f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CollisionEventNotifier_CollisionEvent*>(),
                    {::i2c::class_of<::GlobalNamespace::CollisionEventNotifier_CollisionEvent*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CollisionEventNotifier_CollisionEvent.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CollisionEventNotifier_CollisionEvent::*)(::System::IAsyncResult*)>(&::GlobalNamespace::CollisionEventNotifier_CollisionEvent::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5ae4518;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CollisionEventNotifier_CollisionEvent*>(),
                    {::i2c::class_of<::GlobalNamespace::CollisionEventNotifier_CollisionEvent*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::CollisionEventNotifier_CollisionEvent::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CollisionEventNotifier_CollisionEvent*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::CollisionEventNotifier_CollisionEvent::Invoke(::GlobalNamespace::CollisionEventNotifier*  notifier, ::UnityEngine::Collision*  collision)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CollisionEventNotifier_CollisionEvent*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, notifier, collision);
}
inline ::System::IAsyncResult* GlobalNamespace::CollisionEventNotifier_CollisionEvent::BeginInvoke(::GlobalNamespace::CollisionEventNotifier*  notifier, ::UnityEngine::Collision*  collision, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CollisionEventNotifier_CollisionEvent*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, notifier, collision, callback, object);
}
inline void GlobalNamespace::CollisionEventNotifier_CollisionEvent::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CollisionEventNotifier_CollisionEvent*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::GlobalNamespace::CollisionEventNotifier_CollisionEvent* GlobalNamespace::CollisionEventNotifier_CollisionEvent::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CollisionEventNotifier_CollisionEvent*>(object, method));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CollisionEventNotifier_CollisionEvent::CollisionEventNotifier_CollisionEvent()   {
}
