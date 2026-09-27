#pragma once
// IWYU pragma private; include "GlobalNamespace/ITimeOfDaySystem.hpp"
#include "GlobalNamespace/zzzz__ITimeOfDaySystem_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ITimeOfDaySystem.get_currentTimeInSeconds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::GlobalNamespace::ITimeOfDaySystem::*)()>(&::GlobalNamespace::ITimeOfDaySystem::get_currentTimeInSeconds)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ITimeOfDaySystem*>(),
                    {::i2c::class_of<::GlobalNamespace::ITimeOfDaySystem*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ITimeOfDaySystem.get_totalTimeInSeconds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::GlobalNamespace::ITimeOfDaySystem::*)()>(&::GlobalNamespace::ITimeOfDaySystem::get_totalTimeInSeconds)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ITimeOfDaySystem*>(),
                    {::i2c::class_of<::GlobalNamespace::ITimeOfDaySystem*>(), 1}
                ));
    return ___internal_method;
  }
};
inline double_t GlobalNamespace::ITimeOfDaySystem::get_currentTimeInSeconds()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ITimeOfDaySystem*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline double_t GlobalNamespace::ITimeOfDaySystem::get_totalTimeInSeconds()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ITimeOfDaySystem*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
