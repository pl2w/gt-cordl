#pragma once
// IWYU pragma private; include "Backtrace/Unity/Common/MathHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Backtrace/Unity/Common/zzzz__MathHelper_def.hpp"
//  Writing Method size for method: ::Backtrace::Unity::Common::MathHelper.Clamp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(double_t, double_t, double_t)>(&::Backtrace::Unity::Common::MathHelper::Clamp)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5f26820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Common::MathHelper*>(),
                        {"Clamp", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Common::MathHelper.Uniform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(double_t, double_t)>(&::Backtrace::Unity::Common::MathHelper::Uniform)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5f268a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Common::MathHelper*>(),
                        {"Uniform", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
inline double_t Backtrace::Unity::Common::MathHelper::Clamp(double_t  value, double_t  minimum, double_t  maximum)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Common::MathHelper*>(),
                        {"Clamp", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, value, minimum, maximum);
}
inline double_t Backtrace::Unity::Common::MathHelper::Uniform(double_t  minimum, double_t  maximum)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Common::MathHelper*>(),
                        {"Uniform", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, minimum, maximum);
}
// Ctor Parameters []
constexpr ::Backtrace::Unity::Common::MathHelper::MathHelper()   {
}
