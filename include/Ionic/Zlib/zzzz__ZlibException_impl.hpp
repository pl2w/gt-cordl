#pragma once
// IWYU pragma private; include "Ionic/Zlib/ZlibException.hpp"
#include "System/zzzz__Exception_impl.hpp"
#include "Ionic/Zlib/zzzz__ZlibException_def.hpp"
//  Writing Method size for method: ::Ionic::Zlib::ZlibException._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ionic::Zlib::ZlibException::*)()>(&::Ionic::Zlib::ZlibException::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa79aebc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ZlibException*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::ZlibException._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ionic::Zlib::ZlibException::*)(::StringW)>(&::Ionic::Zlib::ZlibException::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa79af14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ZlibException*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void Ionic::Zlib::ZlibException::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ZlibException*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Ionic::Zlib::ZlibException::_ctor(::StringW  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ZlibException*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, s);
}
inline ::Ionic::Zlib::ZlibException* Ionic::Zlib::ZlibException::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Ionic::Zlib::ZlibException*>());
}
inline ::Ionic::Zlib::ZlibException* Ionic::Zlib::ZlibException::New_ctor(::StringW  s)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Ionic::Zlib::ZlibException*>(s));
}
// Ctor Parameters []
constexpr ::Ionic::Zlib::ZlibException::ZlibException()   {
}
