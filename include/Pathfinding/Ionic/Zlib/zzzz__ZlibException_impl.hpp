#pragma once
// IWYU pragma private; include "Pathfinding/Ionic/Zlib/ZlibException.hpp"
#include "System/zzzz__Exception_impl.hpp"
#include "Pathfinding/Ionic/Zlib/zzzz__ZlibException_def.hpp"
//  Writing Method size for method: ::Pathfinding::Ionic::Zlib::ZlibException._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zlib::ZlibException::*)(::StringW)>(&::Pathfinding::Ionic::Zlib::ZlibException::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa6aa190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zlib::ZlibException*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void Pathfinding::Ionic::Zlib::ZlibException::_ctor(::StringW  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zlib::ZlibException*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, s);
}
inline ::Pathfinding::Ionic::Zlib::ZlibException* Pathfinding::Ionic::Zlib::ZlibException::New_ctor(::StringW  s)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::Ionic::Zlib::ZlibException*>(s));
}
// Ctor Parameters []
constexpr ::Pathfinding::Ionic::Zlib::ZlibException::ZlibException()   {
}
