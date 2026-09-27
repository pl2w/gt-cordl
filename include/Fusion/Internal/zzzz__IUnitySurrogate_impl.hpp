#pragma once
// IWYU pragma private; include "Fusion/Internal/IUnitySurrogate.hpp"
#include "Fusion/Internal/zzzz__IUnitySurrogate_def.hpp"
//  Writing Method size for method: ::Fusion::Internal::IUnitySurrogate.Read
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Internal::IUnitySurrogate::*)(int32_t*, int32_t)>(&::Fusion::Internal::IUnitySurrogate::Read)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Internal::IUnitySurrogate*>(),
                    {::i2c::class_of<::Fusion::Internal::IUnitySurrogate*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Internal::IUnitySurrogate.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Internal::IUnitySurrogate::*)(int32_t*, int32_t)>(&::Fusion::Internal::IUnitySurrogate::Write)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Internal::IUnitySurrogate*>(),
                    {::i2c::class_of<::Fusion::Internal::IUnitySurrogate*>(), 1}
                ));
    return ___internal_method;
  }
};
inline void Fusion::Internal::IUnitySurrogate::Read(int32_t*  data, int32_t  capacity)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Internal::IUnitySurrogate*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, capacity);
}
inline void Fusion::Internal::IUnitySurrogate::Write(int32_t*  data, int32_t  capacity)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Internal::IUnitySurrogate*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, capacity);
}
