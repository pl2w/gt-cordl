#pragma once
// IWYU pragma private; include "GlobalNamespace/IGRSleepableEntity.hpp"
#include "GlobalNamespace/zzzz__IGRSleepableEntity_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IGRSleepableEntity.get_Position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::IGRSleepableEntity::*)()>(&::GlobalNamespace::IGRSleepableEntity::get_Position)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::IGRSleepableEntity*>(),
                    {::i2c::class_of<::GlobalNamespace::IGRSleepableEntity*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IGRSleepableEntity.get_WakeUpRadius
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::IGRSleepableEntity::*)()>(&::GlobalNamespace::IGRSleepableEntity::get_WakeUpRadius)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::IGRSleepableEntity*>(),
                    {::i2c::class_of<::GlobalNamespace::IGRSleepableEntity*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IGRSleepableEntity.IsSleeping
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::IGRSleepableEntity::*)()>(&::GlobalNamespace::IGRSleepableEntity::IsSleeping)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::IGRSleepableEntity*>(),
                    {::i2c::class_of<::GlobalNamespace::IGRSleepableEntity*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IGRSleepableEntity.WakeUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IGRSleepableEntity::*)()>(&::GlobalNamespace::IGRSleepableEntity::WakeUp)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::IGRSleepableEntity*>(),
                    {::i2c::class_of<::GlobalNamespace::IGRSleepableEntity*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IGRSleepableEntity.Sleep
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IGRSleepableEntity::*)()>(&::GlobalNamespace::IGRSleepableEntity::Sleep)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::IGRSleepableEntity*>(),
                    {::i2c::class_of<::GlobalNamespace::IGRSleepableEntity*>(), 4}
                ));
    return ___internal_method;
  }
};
inline ::UnityEngine::Vector3 GlobalNamespace::IGRSleepableEntity::get_Position()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::IGRSleepableEntity*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline float_t GlobalNamespace::IGRSleepableEntity::get_WakeUpRadius()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::IGRSleepableEntity*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline bool GlobalNamespace::IGRSleepableEntity::IsSleeping()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::IGRSleepableEntity*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::IGRSleepableEntity::WakeUp()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::IGRSleepableEntity*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::IGRSleepableEntity::Sleep()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::IGRSleepableEntity*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
