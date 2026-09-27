#pragma once
// IWYU pragma private; include "GlobalNamespace/SIGadgetBlasterType.hpp"
#include "GlobalNamespace/zzzz__SIGadgetBlasterType_def.hpp"
#include "GlobalNamespace/zzzz__SIUpgradeSet_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SIGadgetBlasterType.OnUpdateAuthority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetBlasterType::*)(float_t)>(&::GlobalNamespace::SIGadgetBlasterType::OnUpdateAuthority)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SIGadgetBlasterType*>(),
                    {::i2c::class_of<::GlobalNamespace::SIGadgetBlasterType*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetBlasterType.OnUpdateRemote
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetBlasterType::*)(float_t)>(&::GlobalNamespace::SIGadgetBlasterType::OnUpdateRemote)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SIGadgetBlasterType*>(),
                    {::i2c::class_of<::GlobalNamespace::SIGadgetBlasterType*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetBlasterType.SetStateShared
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetBlasterType::*)()>(&::GlobalNamespace::SIGadgetBlasterType::SetStateShared)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SIGadgetBlasterType*>(),
                    {::i2c::class_of<::GlobalNamespace::SIGadgetBlasterType*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetBlasterType.NetworkFireProjectile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetBlasterType::*)(::ArrayW<::System::Object*>)>(&::GlobalNamespace::SIGadgetBlasterType::NetworkFireProjectile)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SIGadgetBlasterType*>(),
                    {::i2c::class_of<::GlobalNamespace::SIGadgetBlasterType*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetBlasterType.ApplyUpgradeNodes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetBlasterType::*)(::GlobalNamespace::SIUpgradeSet)>(&::GlobalNamespace::SIGadgetBlasterType::ApplyUpgradeNodes)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SIGadgetBlasterType*>(),
                    {::i2c::class_of<::GlobalNamespace::SIGadgetBlasterType*>(), 4}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::SIGadgetBlasterType::OnUpdateAuthority(float_t  dt)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SIGadgetBlasterType*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt);
}
inline void GlobalNamespace::SIGadgetBlasterType::OnUpdateRemote(float_t  dt)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SIGadgetBlasterType*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt);
}
inline void GlobalNamespace::SIGadgetBlasterType::SetStateShared()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SIGadgetBlasterType*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetBlasterType::NetworkFireProjectile(::ArrayW<::System::Object*>  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SIGadgetBlasterType*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void GlobalNamespace::SIGadgetBlasterType::ApplyUpgradeNodes(::GlobalNamespace::SIUpgradeSet  withUpgrades)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SIGadgetBlasterType*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, withUpgrades);
}
