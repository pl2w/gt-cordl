#pragma once
// IWYU pragma private; include "Cysharp/Text/NestedStringBuilderCreationException.hpp"
#include "System/zzzz__InvalidOperationException_impl.hpp"
#include "Cysharp/Text/zzzz__NestedStringBuilderCreationException_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::Cysharp::Text::NestedStringBuilderCreationException._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Text::NestedStringBuilderCreationException::*)(::StringW, ::StringW)>(&::Cysharp::Text::NestedStringBuilderCreationException::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xb9aadb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::NestedStringBuilderCreationException*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::NestedStringBuilderCreationException._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Text::NestedStringBuilderCreationException::*)(::StringW, ::System::Exception*)>(&::Cysharp::Text::NestedStringBuilderCreationException::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb9aae40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::NestedStringBuilderCreationException*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Cysharp::Text::NestedStringBuilderCreationException::_ctor(::StringW  typeName, ::StringW  extraMessage)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::NestedStringBuilderCreationException*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, typeName, extraMessage);
}
inline void Cysharp::Text::NestedStringBuilderCreationException::_ctor(::StringW  message, ::System::Exception*  innerException)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::NestedStringBuilderCreationException*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, innerException);
}
inline ::Cysharp::Text::NestedStringBuilderCreationException* Cysharp::Text::NestedStringBuilderCreationException::New_ctor(::StringW  typeName, ::StringW  extraMessage)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Text::NestedStringBuilderCreationException*>(typeName, extraMessage));
}
inline ::Cysharp::Text::NestedStringBuilderCreationException* Cysharp::Text::NestedStringBuilderCreationException::New_ctor(::StringW  message, ::System::Exception*  innerException)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Text::NestedStringBuilderCreationException*>(message, innerException));
}
// Ctor Parameters []
constexpr ::Cysharp::Text::NestedStringBuilderCreationException::NestedStringBuilderCreationException()   {
}
