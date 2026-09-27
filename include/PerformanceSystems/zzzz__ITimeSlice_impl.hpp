#pragma once
// IWYU pragma private; include "PerformanceSystems/ITimeSlice.hpp"
#include "PerformanceSystems/zzzz__ITimeSlice_def.hpp"
//  Writing Method size for method: ::PerformanceSystems::ITimeSlice.SliceUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PerformanceSystems::ITimeSlice::*)()>(&::PerformanceSystems::ITimeSlice::SliceUpdate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PerformanceSystems::ITimeSlice*>(),
                    {::i2c::class_of<::PerformanceSystems::ITimeSlice*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PerformanceSystems::ITimeSlice.SliceUpdateAlways
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PerformanceSystems::ITimeSlice::*)(float_t)>(&::PerformanceSystems::ITimeSlice::SliceUpdateAlways)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PerformanceSystems::ITimeSlice*>(),
                    {::i2c::class_of<::PerformanceSystems::ITimeSlice*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PerformanceSystems::ITimeSlice.SliceUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PerformanceSystems::ITimeSlice::*)(float_t)>(&::PerformanceSystems::ITimeSlice::SliceUpdate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PerformanceSystems::ITimeSlice*>(),
                    {::i2c::class_of<::PerformanceSystems::ITimeSlice*>(), 2}
                ));
    return ___internal_method;
  }
};
inline void PerformanceSystems::ITimeSlice::SliceUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PerformanceSystems::ITimeSlice*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void PerformanceSystems::ITimeSlice::SliceUpdateAlways(float_t  deltaTime)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PerformanceSystems::ITimeSlice*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deltaTime);
}
inline void PerformanceSystems::ITimeSlice::SliceUpdate(float_t  deltaTime)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PerformanceSystems::ITimeSlice*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deltaTime);
}
