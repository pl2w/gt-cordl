#pragma once
// IWYU pragma private; include "Fusion/Primes.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/zzzz__Primes_def.hpp"
//  Writing Method size for method: ::Fusion::Primes.IsPrime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t)>(&::Fusion::Primes::IsPrime)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5f3f870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Primes*>(),
                        {"IsPrime", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Primes.GetNextPrime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::Fusion::Primes::GetNextPrime)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x5f3f938;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Primes*>(),
                        {"GetNextPrime", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::Primes::setStaticF__primeTable(::ArrayW<int32_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<int32_t>, "_primeTable", ::Fusion::Primes*>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> Fusion::Primes::getStaticF__primeTable()  {
return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "_primeTable", ::Fusion::Primes*>();
}
inline bool Fusion::Primes::IsPrime(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Primes*>(),
                        {"IsPrime", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value);
}
inline int32_t Fusion::Primes::GetNextPrime(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Primes*>(),
                        {"GetNextPrime", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::Fusion::Primes::Primes()   {
}
