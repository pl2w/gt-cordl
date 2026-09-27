#pragma once
// IWYU pragma private; include "Cysharp/Text/ExceptionUtil.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Cysharp/Text/zzzz__ExceptionUtil_def.hpp"
//  Writing Method size for method: ::Cysharp::Text::ExceptionUtil.ThrowArgumentException
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::Cysharp::Text::ExceptionUtil::ThrowArgumentException)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xb9a98b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::ExceptionUtil*>(),
                        {"ThrowArgumentException", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::ExceptionUtil.ThrowFormatException
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Cysharp::Text::ExceptionUtil::ThrowFormatException)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xb9a990c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::ExceptionUtil*>(),
                        {"ThrowFormatException", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::ExceptionUtil.ThrowFormatError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Cysharp::Text::ExceptionUtil::ThrowFormatError)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xb9a9958;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::ExceptionUtil*>(),
                        {"ThrowFormatError", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Cysharp::Text::ExceptionUtil::ThrowArgumentException(::StringW  paramName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::ExceptionUtil*>(),
                        {"ThrowArgumentException", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, paramName);
}
inline void Cysharp::Text::ExceptionUtil::ThrowFormatException()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::ExceptionUtil*>(),
                        {"ThrowFormatException", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Cysharp::Text::ExceptionUtil::ThrowFormatError()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::ExceptionUtil*>(),
                        {"ThrowFormatError", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Cysharp::Text::ExceptionUtil::ExceptionUtil()   {
}
