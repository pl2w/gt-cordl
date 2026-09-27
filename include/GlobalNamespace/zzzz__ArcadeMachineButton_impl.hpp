#pragma once
// IWYU pragma private; include "GlobalNamespace/ArcadeMachineButton.hpp"
#include "GlobalNamespace/zzzz__GorillaPressableButton_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "GlobalNamespace/zzzz__ArcadeMachineButton_def.hpp"
#include "GlobalNamespace/zzzz__ArcadeMachineButton_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ArcadeMachineButton.add_OnStateChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArcadeMachineButton::*)(::GlobalNamespace::ArcadeMachineButton_ArcadeMachineButtonEvent*)>(&::GlobalNamespace::ArcadeMachineButton::add_OnStateChange)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x56d30a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArcadeMachineButton*>(),
                        {"add_OnStateChange", {}, {::i2c::type_of<::GlobalNamespace::ArcadeMachineButton_ArcadeMachineButtonEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArcadeMachineButton.remove_OnStateChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArcadeMachineButton::*)(::GlobalNamespace::ArcadeMachineButton_ArcadeMachineButtonEvent*)>(&::GlobalNamespace::ArcadeMachineButton::remove_OnStateChange)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x56d3140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArcadeMachineButton*>(),
                        {"remove_OnStateChange", {}, {::i2c::type_of<::GlobalNamespace::ArcadeMachineButton_ArcadeMachineButtonEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArcadeMachineButton.ButtonActivation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArcadeMachineButton::*)()>(&::GlobalNamespace::ArcadeMachineButton::ButtonActivation)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x56d31dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ArcadeMachineButton*>(),
                    {::i2c::class_of<::GlobalNamespace::ArcadeMachineButton*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArcadeMachineButton.OnTriggerExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArcadeMachineButton::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::ArcadeMachineButton::OnTriggerExit)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x56d3228;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArcadeMachineButton*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArcadeMachineButton._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArcadeMachineButton::*)()>(&::GlobalNamespace::ArcadeMachineButton::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56d3304;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArcadeMachineButton*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::ArcadeMachineButton::__cordl_internal_get_state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
constexpr bool const& GlobalNamespace::ArcadeMachineButton::__cordl_internal_get_state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
constexpr void GlobalNamespace::ArcadeMachineButton::__cordl_internal_set_state(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___state = value;
}
constexpr int32_t& GlobalNamespace::ArcadeMachineButton::__cordl_internal_get_ButtonID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ButtonID;
}
constexpr int32_t const& GlobalNamespace::ArcadeMachineButton::__cordl_internal_get_ButtonID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ButtonID;
}
constexpr void GlobalNamespace::ArcadeMachineButton::__cordl_internal_set_ButtonID(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ButtonID = value;
}
constexpr ::GlobalNamespace::ArcadeMachineButton_ArcadeMachineButtonEvent*& GlobalNamespace::ArcadeMachineButton::__cordl_internal_get_OnStateChange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnStateChange;
}
constexpr ::GlobalNamespace::ArcadeMachineButton_ArcadeMachineButtonEvent* const& GlobalNamespace::ArcadeMachineButton::__cordl_internal_get_OnStateChange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnStateChange;
}
constexpr void GlobalNamespace::ArcadeMachineButton::__cordl_internal_set_OnStateChange(::GlobalNamespace::ArcadeMachineButton_ArcadeMachineButtonEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnStateChange = value;
}
inline void GlobalNamespace::ArcadeMachineButton::add_OnStateChange(::GlobalNamespace::ArcadeMachineButton_ArcadeMachineButtonEvent*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArcadeMachineButton*>(),
                        {"add_OnStateChange", {}, {::i2c::type_of<::GlobalNamespace::ArcadeMachineButton_ArcadeMachineButtonEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::ArcadeMachineButton::remove_OnStateChange(::GlobalNamespace::ArcadeMachineButton_ArcadeMachineButtonEvent*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArcadeMachineButton*>(),
                        {"remove_OnStateChange", {}, {::i2c::type_of<::GlobalNamespace::ArcadeMachineButton_ArcadeMachineButtonEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::ArcadeMachineButton::ButtonActivation()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ArcadeMachineButton*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ArcadeMachineButton::OnTriggerExit(::UnityEngine::Collider*  collider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArcadeMachineButton*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collider);
}
inline void GlobalNamespace::ArcadeMachineButton::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArcadeMachineButton*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ArcadeMachineButton* GlobalNamespace::ArcadeMachineButton::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ArcadeMachineButton*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ArcadeMachineButton::ArcadeMachineButton()   {
}
//  Writing Method size for method: ::GlobalNamespace::ArcadeMachineButton_ArcadeMachineButtonEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArcadeMachineButton_ArcadeMachineButtonEvent::*)(::System::Object*, ::System::IntPtr)>(&::GlobalNamespace::ArcadeMachineButton_ArcadeMachineButtonEvent::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x56d330c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArcadeMachineButton_ArcadeMachineButtonEvent*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArcadeMachineButton_ArcadeMachineButtonEvent.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArcadeMachineButton_ArcadeMachineButtonEvent::*)(int32_t, bool)>(&::GlobalNamespace::ArcadeMachineButton_ArcadeMachineButtonEvent::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x56d33ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ArcadeMachineButton_ArcadeMachineButtonEvent*>(),
                    {::i2c::class_of<::GlobalNamespace::ArcadeMachineButton_ArcadeMachineButtonEvent*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArcadeMachineButton_ArcadeMachineButtonEvent.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::GlobalNamespace::ArcadeMachineButton_ArcadeMachineButtonEvent::*)(int32_t, bool, ::System::AsyncCallback*, ::System::Object*)>(&::GlobalNamespace::ArcadeMachineButton_ArcadeMachineButtonEvent::BeginInvoke)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x56d33c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ArcadeMachineButton_ArcadeMachineButtonEvent*>(),
                    {::i2c::class_of<::GlobalNamespace::ArcadeMachineButton_ArcadeMachineButtonEvent*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArcadeMachineButton_ArcadeMachineButtonEvent.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArcadeMachineButton_ArcadeMachineButtonEvent::*)(::System::IAsyncResult*)>(&::GlobalNamespace::ArcadeMachineButton_ArcadeMachineButtonEvent::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x56d3440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ArcadeMachineButton_ArcadeMachineButtonEvent*>(),
                    {::i2c::class_of<::GlobalNamespace::ArcadeMachineButton_ArcadeMachineButtonEvent*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ArcadeMachineButton_ArcadeMachineButtonEvent::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArcadeMachineButton_ArcadeMachineButtonEvent*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::ArcadeMachineButton_ArcadeMachineButtonEvent::Invoke(int32_t  id, bool  state)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ArcadeMachineButton_ArcadeMachineButtonEvent*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id, state);
}
inline ::System::IAsyncResult* GlobalNamespace::ArcadeMachineButton_ArcadeMachineButtonEvent::BeginInvoke(int32_t  id, bool  state, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ArcadeMachineButton_ArcadeMachineButtonEvent*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, id, state, callback, object);
}
inline void GlobalNamespace::ArcadeMachineButton_ArcadeMachineButtonEvent::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ArcadeMachineButton_ArcadeMachineButtonEvent*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::GlobalNamespace::ArcadeMachineButton_ArcadeMachineButtonEvent* GlobalNamespace::ArcadeMachineButton_ArcadeMachineButtonEvent::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ArcadeMachineButton_ArcadeMachineButtonEvent*>(object, method));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ArcadeMachineButton_ArcadeMachineButtonEvent::ArcadeMachineButton_ArcadeMachineButtonEvent()   {
}
