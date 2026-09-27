#pragma once
// IWYU pragma private; include "GlobalNamespace/IDCardScanner.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__IDCardScanner_def.hpp"
#include "GlobalNamespace/zzzz__IDCardScanner_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IDCardScanner.add_OnPlayerCardSwipe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IDCardScanner::*)(::GlobalNamespace::IDCardScanner_CardSwipeEvent*)>(&::GlobalNamespace::IDCardScanner::add_OnPlayerCardSwipe)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5d0c1f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::IDCardScanner*>(),
                        {"add_OnPlayerCardSwipe", {}, {::i2c::type_of<::GlobalNamespace::IDCardScanner_CardSwipeEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IDCardScanner.remove_OnPlayerCardSwipe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IDCardScanner::*)(::GlobalNamespace::IDCardScanner_CardSwipeEvent*)>(&::GlobalNamespace::IDCardScanner::remove_OnPlayerCardSwipe)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5d0c290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::IDCardScanner*>(),
                        {"remove_OnPlayerCardSwipe", {}, {::i2c::type_of<::GlobalNamespace::IDCardScanner_CardSwipeEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IDCardScanner.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IDCardScanner::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::IDCardScanner::OnTriggerEnter)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x5d0c32c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::IDCardScanner*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IDCardScanner._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IDCardScanner::*)()>(&::GlobalNamespace::IDCardScanner::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d0c5b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::IDCardScanner*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::IDCardScanner_CardSwipeEvent*& GlobalNamespace::IDCardScanner::__cordl_internal_get_OnPlayerCardSwipe()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnPlayerCardSwipe;
}
constexpr ::GlobalNamespace::IDCardScanner_CardSwipeEvent* const& GlobalNamespace::IDCardScanner::__cordl_internal_get_OnPlayerCardSwipe() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnPlayerCardSwipe;
}
constexpr void GlobalNamespace::IDCardScanner::__cordl_internal_set_OnPlayerCardSwipe(::GlobalNamespace::IDCardScanner_CardSwipeEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnPlayerCardSwipe = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::IDCardScanner::__cordl_internal_get_onCardSwiped()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onCardSwiped;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::IDCardScanner::__cordl_internal_get_onCardSwiped() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onCardSwiped;
}
constexpr void GlobalNamespace::IDCardScanner::__cordl_internal_set_onCardSwiped(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onCardSwiped = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<int32_t>*& GlobalNamespace::IDCardScanner::__cordl_internal_get_onCardSwipedByPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onCardSwipedByPlayer;
}
constexpr ::UnityEngine::Events::UnityEvent_1<int32_t>* const& GlobalNamespace::IDCardScanner::__cordl_internal_get_onCardSwipedByPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onCardSwipedByPlayer;
}
constexpr void GlobalNamespace::IDCardScanner::__cordl_internal_set_onCardSwipedByPlayer(::UnityEngine::Events::UnityEvent_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onCardSwipedByPlayer = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::IDCardScanner::__cordl_internal_get_onSucceeded()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSucceeded;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::IDCardScanner::__cordl_internal_get_onSucceeded() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSucceeded;
}
constexpr void GlobalNamespace::IDCardScanner::__cordl_internal_set_onSucceeded(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onSucceeded = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::IDCardScanner::__cordl_internal_get_onFailed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onFailed;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::IDCardScanner::__cordl_internal_get_onFailed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onFailed;
}
constexpr void GlobalNamespace::IDCardScanner::__cordl_internal_set_onFailed(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onFailed = value;
}
constexpr bool& GlobalNamespace::IDCardScanner::__cordl_internal_get_requireSpecificPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___requireSpecificPlayer;
}
constexpr bool const& GlobalNamespace::IDCardScanner::__cordl_internal_get_requireSpecificPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___requireSpecificPlayer;
}
constexpr void GlobalNamespace::IDCardScanner::__cordl_internal_set_requireSpecificPlayer(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___requireSpecificPlayer = value;
}
constexpr bool& GlobalNamespace::IDCardScanner::__cordl_internal_get_requireAuthority()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___requireAuthority;
}
constexpr bool const& GlobalNamespace::IDCardScanner::__cordl_internal_get_requireAuthority() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___requireAuthority;
}
constexpr void GlobalNamespace::IDCardScanner::__cordl_internal_set_requireAuthority(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___requireAuthority = value;
}
constexpr ::GlobalNamespace::NetPlayer*& GlobalNamespace::IDCardScanner::__cordl_internal_get_restrictToPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___restrictToPlayer;
}
constexpr ::GlobalNamespace::NetPlayer* const& GlobalNamespace::IDCardScanner::__cordl_internal_get_restrictToPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___restrictToPlayer;
}
constexpr void GlobalNamespace::IDCardScanner::__cordl_internal_set_restrictToPlayer(::GlobalNamespace::NetPlayer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___restrictToPlayer = value;
}
inline void GlobalNamespace::IDCardScanner::add_OnPlayerCardSwipe(::GlobalNamespace::IDCardScanner_CardSwipeEvent*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::IDCardScanner*>(),
                        {"add_OnPlayerCardSwipe", {}, {::i2c::type_of<::GlobalNamespace::IDCardScanner_CardSwipeEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::IDCardScanner::remove_OnPlayerCardSwipe(::GlobalNamespace::IDCardScanner_CardSwipeEvent*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::IDCardScanner*>(),
                        {"remove_OnPlayerCardSwipe", {}, {::i2c::type_of<::GlobalNamespace::IDCardScanner_CardSwipeEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::IDCardScanner::OnTriggerEnter(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::IDCardScanner*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GlobalNamespace::IDCardScanner::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::IDCardScanner*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::IDCardScanner* GlobalNamespace::IDCardScanner::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::IDCardScanner*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::IDCardScanner::IDCardScanner()   {
}
//  Writing Method size for method: ::GlobalNamespace::IDCardScanner_CardSwipeEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IDCardScanner_CardSwipeEvent::*)(::System::Object*, ::System::IntPtr)>(&::GlobalNamespace::IDCardScanner_CardSwipeEvent::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5d0c5c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::IDCardScanner_CardSwipeEvent*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IDCardScanner_CardSwipeEvent.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IDCardScanner_CardSwipeEvent::*)(int32_t)>(&::GlobalNamespace::IDCardScanner_CardSwipeEvent::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5d0c660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::IDCardScanner_CardSwipeEvent*>(),
                    {::i2c::class_of<::GlobalNamespace::IDCardScanner_CardSwipeEvent*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IDCardScanner_CardSwipeEvent.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::GlobalNamespace::IDCardScanner_CardSwipeEvent::*)(int32_t, ::System::AsyncCallback*, ::System::Object*)>(&::GlobalNamespace::IDCardScanner_CardSwipeEvent::BeginInvoke)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5d0c674;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::IDCardScanner_CardSwipeEvent*>(),
                    {::i2c::class_of<::GlobalNamespace::IDCardScanner_CardSwipeEvent*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IDCardScanner_CardSwipeEvent.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IDCardScanner_CardSwipeEvent::*)(::System::IAsyncResult*)>(&::GlobalNamespace::IDCardScanner_CardSwipeEvent::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5d0c6d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::IDCardScanner_CardSwipeEvent*>(),
                    {::i2c::class_of<::GlobalNamespace::IDCardScanner_CardSwipeEvent*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::IDCardScanner_CardSwipeEvent::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::IDCardScanner_CardSwipeEvent*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::IDCardScanner_CardSwipeEvent::Invoke(int32_t  actorNumber)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::IDCardScanner_CardSwipeEvent*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, actorNumber);
}
inline ::System::IAsyncResult* GlobalNamespace::IDCardScanner_CardSwipeEvent::BeginInvoke(int32_t  actorNumber, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::IDCardScanner_CardSwipeEvent*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, actorNumber, callback, object);
}
inline void GlobalNamespace::IDCardScanner_CardSwipeEvent::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::IDCardScanner_CardSwipeEvent*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::GlobalNamespace::IDCardScanner_CardSwipeEvent* GlobalNamespace::IDCardScanner_CardSwipeEvent::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::IDCardScanner_CardSwipeEvent*>(object, method));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::IDCardScanner_CardSwipeEvent::IDCardScanner_CardSwipeEvent()   {
}
