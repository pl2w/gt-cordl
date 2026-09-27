#pragma once
// IWYU pragma private; include "Liv/Lck/LckUpdateManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Liv/Lck/zzzz__LckUpdateManager_def.hpp"
#include "Liv/Lck/zzzz__ILckEarlyUpdate_def.hpp"
#include "Liv/Lck/zzzz__ILckLateUpdate_def.hpp"
#include "UnityEngine/LowLevel/zzzz__PlayerLoopSystem_def.hpp"
//  Writing Method size for method: ::Liv::Lck::LckUpdateManager.RegisterSingleEarlyUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Liv::Lck::ILckEarlyUpdate*)>(&::Liv::Lck::LckUpdateManager::RegisterSingleEarlyUpdate)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x9ce9824;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckUpdateManager*>(),
                        {"RegisterSingleEarlyUpdate", {}, {::i2c::type_of<::Liv::Lck::ILckEarlyUpdate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckUpdateManager.UnregisterSingleEarlyUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Liv::Lck::ILckEarlyUpdate*)>(&::Liv::Lck::LckUpdateManager::UnregisterSingleEarlyUpdate)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x9ce991c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckUpdateManager*>(),
                        {"UnregisterSingleEarlyUpdate", {}, {::i2c::type_of<::Liv::Lck::ILckEarlyUpdate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckUpdateManager.RegisterSingleLateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Liv::Lck::ILckLateUpdate*)>(&::Liv::Lck::LckUpdateManager::RegisterSingleLateUpdate)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x9cde618;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckUpdateManager*>(),
                        {"RegisterSingleLateUpdate", {}, {::i2c::type_of<::Liv::Lck::ILckLateUpdate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckUpdateManager.UnregisterSingleLateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Liv::Lck::ILckLateUpdate*)>(&::Liv::Lck::LckUpdateManager::UnregisterSingleLateUpdate)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x9ce0080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckUpdateManager*>(),
                        {"UnregisterSingleLateUpdate", {}, {::i2c::type_of<::Liv::Lck::ILckLateUpdate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckUpdateManager.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Liv::Lck::LckUpdateManager::Init)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x9ce998c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckUpdateManager*>(),
                        {"Init", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckUpdateManager.OnEarlyUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Liv::Lck::LckUpdateManager::OnEarlyUpdate)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x9ce9c9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckUpdateManager*>(),
                        {"OnEarlyUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckUpdateManager.OnLateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Liv::Lck::LckUpdateManager::OnLateUpdate)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x9ce9d5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckUpdateManager*>(),
                        {"OnLateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Liv::Lck::LckUpdateManager::setStaticF__earlyUpdateSystem(::Liv::Lck::ILckEarlyUpdate*  value)  {
::cordl_internals::setStaticField<::Liv::Lck::ILckEarlyUpdate*, "_earlyUpdateSystem", ::Liv::Lck::LckUpdateManager*>(std::forward<::Liv::Lck::ILckEarlyUpdate*>(value));
}
inline ::Liv::Lck::ILckEarlyUpdate* Liv::Lck::LckUpdateManager::getStaticF__earlyUpdateSystem()  {
return ::cordl_internals::getStaticField<::Liv::Lck::ILckEarlyUpdate*, "_earlyUpdateSystem", ::Liv::Lck::LckUpdateManager*>();
}
inline void Liv::Lck::LckUpdateManager::setStaticF__lateUpdateSystem(::Liv::Lck::ILckLateUpdate*  value)  {
::cordl_internals::setStaticField<::Liv::Lck::ILckLateUpdate*, "_lateUpdateSystem", ::Liv::Lck::LckUpdateManager*>(std::forward<::Liv::Lck::ILckLateUpdate*>(value));
}
inline ::Liv::Lck::ILckLateUpdate* Liv::Lck::LckUpdateManager::getStaticF__lateUpdateSystem()  {
return ::cordl_internals::getStaticField<::Liv::Lck::ILckLateUpdate*, "_lateUpdateSystem", ::Liv::Lck::LckUpdateManager*>();
}
inline void Liv::Lck::LckUpdateManager::RegisterSingleEarlyUpdate(::Liv::Lck::ILckEarlyUpdate*  earlyUpdateSystem)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckUpdateManager*>(),
                        {"RegisterSingleEarlyUpdate", {}, {::i2c::type_of<::Liv::Lck::ILckEarlyUpdate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, earlyUpdateSystem);
}
inline void Liv::Lck::LckUpdateManager::UnregisterSingleEarlyUpdate(::Liv::Lck::ILckEarlyUpdate*  earlyUpdateSystem)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckUpdateManager*>(),
                        {"UnregisterSingleEarlyUpdate", {}, {::i2c::type_of<::Liv::Lck::ILckEarlyUpdate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, earlyUpdateSystem);
}
inline void Liv::Lck::LckUpdateManager::RegisterSingleLateUpdate(::Liv::Lck::ILckLateUpdate*  lateUpdateSystem)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckUpdateManager*>(),
                        {"RegisterSingleLateUpdate", {}, {::i2c::type_of<::Liv::Lck::ILckLateUpdate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, lateUpdateSystem);
}
inline void Liv::Lck::LckUpdateManager::UnregisterSingleLateUpdate(::Liv::Lck::ILckLateUpdate*  lateUpdateSystem)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckUpdateManager*>(),
                        {"UnregisterSingleLateUpdate", {}, {::i2c::type_of<::Liv::Lck::ILckLateUpdate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, lateUpdateSystem);
}
inline void Liv::Lck::LckUpdateManager::Init()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckUpdateManager*>(),
                        {"Init", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline ::UnityEngine::LowLevel::PlayerLoopSystem Liv::Lck::LckUpdateManager::AddSystem(/* [IsReadOnly] */ ::by_ref<::UnityEngine::LowLevel::PlayerLoopSystem>  loopSystem, ::UnityEngine::LowLevel::PlayerLoopSystem  systemToAdd)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::LckUpdateManager*>(),
                    {"AddSystem", {::i2c::class_of<T>()}, {::i2c::type_of<::by_ref<::UnityEngine::LowLevel::PlayerLoopSystem>>(), ::i2c::type_of<::UnityEngine::LowLevel::PlayerLoopSystem>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::LowLevel::PlayerLoopSystem>(nullptr, ___internal_method, loopSystem, systemToAdd);
}
template<typename T>
inline ::UnityEngine::LowLevel::PlayerLoopSystem Liv::Lck::LckUpdateManager::RemoveSystem(/* [IsReadOnly] */ ::by_ref<::UnityEngine::LowLevel::PlayerLoopSystem>  loopSystem)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::LckUpdateManager*>(),
                    {"RemoveSystem", {::i2c::class_of<T>()}, {::i2c::type_of<::by_ref<::UnityEngine::LowLevel::PlayerLoopSystem>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::LowLevel::PlayerLoopSystem>(nullptr, ___internal_method, loopSystem);
}
inline void Liv::Lck::LckUpdateManager::OnEarlyUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckUpdateManager*>(),
                        {"OnEarlyUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Liv::Lck::LckUpdateManager::OnLateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckUpdateManager*>(),
                        {"OnLateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Liv::Lck::LckUpdateManager::LckUpdateManager()   {
}
