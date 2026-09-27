#pragma once
// IWYU pragma private; include "PlayFab/Public/IScreenTimeTracker.hpp"
#include "PlayFab/Public/zzzz__IScreenTimeTracker_def.hpp"
//  Writing Method size for method: ::PlayFab::Public::IScreenTimeTracker.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::Public::IScreenTimeTracker::*)()>(&::PlayFab::Public::IScreenTimeTracker::OnEnable)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayFab::Public::IScreenTimeTracker*>(),
                    {::i2c::class_of<::PlayFab::Public::IScreenTimeTracker*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Public::IScreenTimeTracker.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::Public::IScreenTimeTracker::*)()>(&::PlayFab::Public::IScreenTimeTracker::OnDisable)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayFab::Public::IScreenTimeTracker*>(),
                    {::i2c::class_of<::PlayFab::Public::IScreenTimeTracker*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Public::IScreenTimeTracker.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::Public::IScreenTimeTracker::*)()>(&::PlayFab::Public::IScreenTimeTracker::OnDestroy)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayFab::Public::IScreenTimeTracker*>(),
                    {::i2c::class_of<::PlayFab::Public::IScreenTimeTracker*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Public::IScreenTimeTracker.OnApplicationQuit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::Public::IScreenTimeTracker::*)()>(&::PlayFab::Public::IScreenTimeTracker::OnApplicationQuit)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayFab::Public::IScreenTimeTracker*>(),
                    {::i2c::class_of<::PlayFab::Public::IScreenTimeTracker*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Public::IScreenTimeTracker.OnApplicationFocus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::Public::IScreenTimeTracker::*)(bool)>(&::PlayFab::Public::IScreenTimeTracker::OnApplicationFocus)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayFab::Public::IScreenTimeTracker*>(),
                    {::i2c::class_of<::PlayFab::Public::IScreenTimeTracker*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Public::IScreenTimeTracker.ClientSessionStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::Public::IScreenTimeTracker::*)(::StringW, ::StringW, ::StringW)>(&::PlayFab::Public::IScreenTimeTracker::ClientSessionStart)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayFab::Public::IScreenTimeTracker*>(),
                    {::i2c::class_of<::PlayFab::Public::IScreenTimeTracker*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Public::IScreenTimeTracker.Send
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::Public::IScreenTimeTracker::*)()>(&::PlayFab::Public::IScreenTimeTracker::Send)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayFab::Public::IScreenTimeTracker*>(),
                    {::i2c::class_of<::PlayFab::Public::IScreenTimeTracker*>(), 6}
                ));
    return ___internal_method;
  }
};
inline void PlayFab::Public::IScreenTimeTracker::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayFab::Public::IScreenTimeTracker*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void PlayFab::Public::IScreenTimeTracker::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayFab::Public::IScreenTimeTracker*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void PlayFab::Public::IScreenTimeTracker::OnDestroy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayFab::Public::IScreenTimeTracker*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void PlayFab::Public::IScreenTimeTracker::OnApplicationQuit()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayFab::Public::IScreenTimeTracker*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void PlayFab::Public::IScreenTimeTracker::OnApplicationFocus(bool  isFocused)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayFab::Public::IScreenTimeTracker*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isFocused);
}
inline void PlayFab::Public::IScreenTimeTracker::ClientSessionStart(::StringW  entityId, ::StringW  entityType, ::StringW  playFabUserId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayFab::Public::IScreenTimeTracker*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entityId, entityType, playFabUserId);
}
inline void PlayFab::Public::IScreenTimeTracker::Send()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayFab::Public::IScreenTimeTracker*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
