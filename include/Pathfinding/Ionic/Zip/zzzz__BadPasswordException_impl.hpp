#pragma once
// IWYU pragma private; include "Pathfinding/Ionic/Zip/BadPasswordException.hpp"
#include "Pathfinding/Ionic/Zip/zzzz__ZipException_impl.hpp"
#include "Pathfinding/Ionic/Zip/zzzz__BadPasswordException_def.hpp"
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::BadPasswordException._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::BadPasswordException::*)()>(&::Pathfinding::Ionic::Zip::BadPasswordException::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa68c7b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::BadPasswordException*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::BadPasswordException._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::BadPasswordException::*)(::StringW)>(&::Pathfinding::Ionic::Zip::BadPasswordException::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa68c80c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::BadPasswordException*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void Pathfinding::Ionic::Zip::BadPasswordException::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::BadPasswordException*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::Ionic::Zip::BadPasswordException::_ctor(::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::BadPasswordException*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline ::Pathfinding::Ionic::Zip::BadPasswordException* Pathfinding::Ionic::Zip::BadPasswordException::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::Ionic::Zip::BadPasswordException*>());
}
inline ::Pathfinding::Ionic::Zip::BadPasswordException* Pathfinding::Ionic::Zip::BadPasswordException::New_ctor(::StringW  message)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::Ionic::Zip::BadPasswordException*>(message));
}
// Ctor Parameters []
constexpr ::Pathfinding::Ionic::Zip::BadPasswordException::BadPasswordException()   {
}
