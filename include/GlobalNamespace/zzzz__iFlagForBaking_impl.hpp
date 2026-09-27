#pragma once
// IWYU pragma private; include "GlobalNamespace/iFlagForBaking.hpp"
#include "GlobalNamespace/zzzz__iFlagForBaking_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::iFlagForBaking.SetForBaking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::iFlagForBaking::*)()>(&::GlobalNamespace::iFlagForBaking::SetForBaking)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::iFlagForBaking*>(),
                    {::i2c::class_of<::GlobalNamespace::iFlagForBaking*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::iFlagForBaking.SetForGame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::iFlagForBaking::*)()>(&::GlobalNamespace::iFlagForBaking::SetForGame)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::iFlagForBaking*>(),
                    {::i2c::class_of<::GlobalNamespace::iFlagForBaking*>(), 1}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::iFlagForBaking::SetForBaking()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::iFlagForBaking*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::iFlagForBaking::SetForGame()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::iFlagForBaking*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
