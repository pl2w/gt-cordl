#pragma once
// IWYU pragma private; include "Unity/Cinemachine/ClipperLibException.hpp"
#include "System/zzzz__Exception_impl.hpp"
#include "Unity/Cinemachine/zzzz__ClipperLibException_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::ClipperLibException._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::ClipperLibException::*)(::StringW)>(&::Unity::Cinemachine::ClipperLibException::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xaefa5c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperLibException*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void Unity::Cinemachine::ClipperLibException::_ctor(::StringW  description)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperLibException*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, description);
}
/// @brief [NullableContext(1)]
inline ::Unity::Cinemachine::ClipperLibException* Unity::Cinemachine::ClipperLibException::New_ctor(::StringW  description)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::ClipperLibException*>(description));
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::ClipperLibException::ClipperLibException()   {
}
