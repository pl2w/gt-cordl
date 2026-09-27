#pragma once
// IWYU pragma private; include "TagEffects/GameObjectOnDisableDispatcher.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "TagEffects/zzzz__GameObjectOnDisableDispatcher_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "TagEffects/zzzz__GameObjectOnDisableDispatcher_def.hpp"
//  Writing Method size for method: ::TagEffects::GameObjectOnDisableDispatcher.add_OnDisabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TagEffects::GameObjectOnDisableDispatcher::*)(::TagEffects::GameObjectOnDisableDispatcher_OnDisabledEvent*)>(&::TagEffects::GameObjectOnDisableDispatcher::add_OnDisabled)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5cd89dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TagEffects::GameObjectOnDisableDispatcher*>(),
                        {"add_OnDisabled", {}, {::i2c::type_of<::TagEffects::GameObjectOnDisableDispatcher_OnDisabledEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TagEffects::GameObjectOnDisableDispatcher.remove_OnDisabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TagEffects::GameObjectOnDisableDispatcher::*)(::TagEffects::GameObjectOnDisableDispatcher_OnDisabledEvent*)>(&::TagEffects::GameObjectOnDisableDispatcher::remove_OnDisabled)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5cd90b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TagEffects::GameObjectOnDisableDispatcher*>(),
                        {"remove_OnDisabled", {}, {::i2c::type_of<::TagEffects::GameObjectOnDisableDispatcher_OnDisabledEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TagEffects::GameObjectOnDisableDispatcher.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TagEffects::GameObjectOnDisableDispatcher::*)()>(&::TagEffects::GameObjectOnDisableDispatcher::OnDisable)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5cd9394;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TagEffects::GameObjectOnDisableDispatcher*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TagEffects::GameObjectOnDisableDispatcher._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TagEffects::GameObjectOnDisableDispatcher::*)()>(&::TagEffects::GameObjectOnDisableDispatcher::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cd93b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TagEffects::GameObjectOnDisableDispatcher*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::TagEffects::GameObjectOnDisableDispatcher_OnDisabledEvent*& TagEffects::GameObjectOnDisableDispatcher::__cordl_internal_get_OnDisabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnDisabled;
}
constexpr ::TagEffects::GameObjectOnDisableDispatcher_OnDisabledEvent* const& TagEffects::GameObjectOnDisableDispatcher::__cordl_internal_get_OnDisabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnDisabled;
}
constexpr void TagEffects::GameObjectOnDisableDispatcher::__cordl_internal_set_OnDisabled(::TagEffects::GameObjectOnDisableDispatcher_OnDisabledEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnDisabled = value;
}
inline void TagEffects::GameObjectOnDisableDispatcher::add_OnDisabled(::TagEffects::GameObjectOnDisableDispatcher_OnDisabledEvent*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TagEffects::GameObjectOnDisableDispatcher*>(),
                        {"add_OnDisabled", {}, {::i2c::type_of<::TagEffects::GameObjectOnDisableDispatcher_OnDisabledEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void TagEffects::GameObjectOnDisableDispatcher::remove_OnDisabled(::TagEffects::GameObjectOnDisableDispatcher_OnDisabledEvent*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TagEffects::GameObjectOnDisableDispatcher*>(),
                        {"remove_OnDisabled", {}, {::i2c::type_of<::TagEffects::GameObjectOnDisableDispatcher_OnDisabledEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void TagEffects::GameObjectOnDisableDispatcher::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TagEffects::GameObjectOnDisableDispatcher*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void TagEffects::GameObjectOnDisableDispatcher::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TagEffects::GameObjectOnDisableDispatcher*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::TagEffects::GameObjectOnDisableDispatcher* TagEffects::GameObjectOnDisableDispatcher::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::TagEffects::GameObjectOnDisableDispatcher*>());
}
// Ctor Parameters []
constexpr ::TagEffects::GameObjectOnDisableDispatcher::GameObjectOnDisableDispatcher()   {
}
//  Writing Method size for method: ::TagEffects::GameObjectOnDisableDispatcher_OnDisabledEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TagEffects::GameObjectOnDisableDispatcher_OnDisabledEvent::*)(::System::Object*, ::System::IntPtr)>(&::TagEffects::GameObjectOnDisableDispatcher_OnDisabledEvent::_ctor)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5cd88d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TagEffects::GameObjectOnDisableDispatcher_OnDisabledEvent*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TagEffects::GameObjectOnDisableDispatcher_OnDisabledEvent.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TagEffects::GameObjectOnDisableDispatcher_OnDisabledEvent::*)(::TagEffects::GameObjectOnDisableDispatcher*)>(&::TagEffects::GameObjectOnDisableDispatcher_OnDisabledEvent::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5cd93bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::TagEffects::GameObjectOnDisableDispatcher_OnDisabledEvent*>(),
                    {::i2c::class_of<::TagEffects::GameObjectOnDisableDispatcher_OnDisabledEvent*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TagEffects::GameObjectOnDisableDispatcher_OnDisabledEvent.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::TagEffects::GameObjectOnDisableDispatcher_OnDisabledEvent::*)(::TagEffects::GameObjectOnDisableDispatcher*, ::System::AsyncCallback*, ::System::Object*)>(&::TagEffects::GameObjectOnDisableDispatcher_OnDisabledEvent::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5cd93d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::TagEffects::GameObjectOnDisableDispatcher_OnDisabledEvent*>(),
                    {::i2c::class_of<::TagEffects::GameObjectOnDisableDispatcher_OnDisabledEvent*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TagEffects::GameObjectOnDisableDispatcher_OnDisabledEvent.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TagEffects::GameObjectOnDisableDispatcher_OnDisabledEvent::*)(::System::IAsyncResult*)>(&::TagEffects::GameObjectOnDisableDispatcher_OnDisabledEvent::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5cd93f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::TagEffects::GameObjectOnDisableDispatcher_OnDisabledEvent*>(),
                    {::i2c::class_of<::TagEffects::GameObjectOnDisableDispatcher_OnDisabledEvent*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void TagEffects::GameObjectOnDisableDispatcher_OnDisabledEvent::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TagEffects::GameObjectOnDisableDispatcher_OnDisabledEvent*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void TagEffects::GameObjectOnDisableDispatcher_OnDisabledEvent::Invoke(::TagEffects::GameObjectOnDisableDispatcher*  me)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::TagEffects::GameObjectOnDisableDispatcher_OnDisabledEvent*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, me);
}
inline ::System::IAsyncResult* TagEffects::GameObjectOnDisableDispatcher_OnDisabledEvent::BeginInvoke(::TagEffects::GameObjectOnDisableDispatcher*  me, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::TagEffects::GameObjectOnDisableDispatcher_OnDisabledEvent*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, me, callback, object);
}
inline void TagEffects::GameObjectOnDisableDispatcher_OnDisabledEvent::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::TagEffects::GameObjectOnDisableDispatcher_OnDisabledEvent*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::TagEffects::GameObjectOnDisableDispatcher_OnDisabledEvent* TagEffects::GameObjectOnDisableDispatcher_OnDisabledEvent::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::TagEffects::GameObjectOnDisableDispatcher_OnDisabledEvent*>(object, method));
}
// Ctor Parameters []
constexpr ::TagEffects::GameObjectOnDisableDispatcher_OnDisabledEvent::GameObjectOnDisableDispatcher_OnDisabledEvent()   {
}
