#pragma once
// IWYU pragma private; include "GlobalNamespace/CosmeticCritterSpawnerIndependent.hpp"
#include "GlobalNamespace/zzzz__CosmeticCritterSpawner_impl.hpp"
#include "GlobalNamespace/zzzz__CosmeticCritterSpawnerIndependent_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CosmeticCritterSpawnerIndependent.CanSpawnLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CosmeticCritterSpawnerIndependent::*)()>(&::GlobalNamespace::CosmeticCritterSpawnerIndependent::CanSpawnLocal)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5800f3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CosmeticCritterSpawnerIndependent*>(),
                    {::i2c::class_of<::GlobalNamespace::CosmeticCritterSpawnerIndependent*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticCritterSpawnerIndependent.CanSpawnRemote
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CosmeticCritterSpawnerIndependent::*)(double_t)>(&::GlobalNamespace::CosmeticCritterSpawnerIndependent::CanSpawnRemote)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5800f50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CosmeticCritterSpawnerIndependent*>(),
                    {::i2c::class_of<::GlobalNamespace::CosmeticCritterSpawnerIndependent*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticCritterSpawnerIndependent.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticCritterSpawnerIndependent::*)()>(&::GlobalNamespace::CosmeticCritterSpawnerIndependent::OnEnable)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5800f80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CosmeticCritterSpawnerIndependent*>(),
                    {::i2c::class_of<::GlobalNamespace::CosmeticCritterSpawnerIndependent*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticCritterSpawnerIndependent.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticCritterSpawnerIndependent::*)()>(&::GlobalNamespace::CosmeticCritterSpawnerIndependent::OnDisable)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5800fe4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CosmeticCritterSpawnerIndependent*>(),
                    {::i2c::class_of<::GlobalNamespace::CosmeticCritterSpawnerIndependent*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticCritterSpawnerIndependent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticCritterSpawnerIndependent::*)()>(&::GlobalNamespace::CosmeticCritterSpawnerIndependent::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5801048;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticCritterSpawnerIndependent*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline bool GlobalNamespace::CosmeticCritterSpawnerIndependent::CanSpawnLocal()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CosmeticCritterSpawnerIndependent*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::CosmeticCritterSpawnerIndependent::CanSpawnRemote(double_t  serverTime)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CosmeticCritterSpawnerIndependent*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, serverTime);
}
inline void GlobalNamespace::CosmeticCritterSpawnerIndependent::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CosmeticCritterSpawnerIndependent*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CosmeticCritterSpawnerIndependent::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CosmeticCritterSpawnerIndependent*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CosmeticCritterSpawnerIndependent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticCritterSpawnerIndependent*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CosmeticCritterSpawnerIndependent* GlobalNamespace::CosmeticCritterSpawnerIndependent::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CosmeticCritterSpawnerIndependent*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CosmeticCritterSpawnerIndependent::CosmeticCritterSpawnerIndependent()   {
}
