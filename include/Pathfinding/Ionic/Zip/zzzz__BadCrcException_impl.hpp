#pragma once
// IWYU pragma private; include "Pathfinding/Ionic/Zip/BadCrcException.hpp"
#include "Pathfinding/Ionic/Zip/zzzz__ZipException_impl.hpp"
#include "Pathfinding/Ionic/Zip/zzzz__BadCrcException_def.hpp"
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::BadCrcException._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::BadCrcException::*)(::StringW)>(&::Pathfinding::Ionic::Zip::BadCrcException::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa68c87c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::BadCrcException*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void Pathfinding::Ionic::Zip::BadCrcException::_ctor(::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::BadCrcException*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline ::Pathfinding::Ionic::Zip::BadCrcException* Pathfinding::Ionic::Zip::BadCrcException::New_ctor(::StringW  message)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::Ionic::Zip::BadCrcException*>(message));
}
// Ctor Parameters []
constexpr ::Pathfinding::Ionic::Zip::BadCrcException::BadCrcException()   {
}
