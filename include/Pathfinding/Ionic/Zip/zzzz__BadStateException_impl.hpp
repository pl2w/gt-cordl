#pragma once
// IWYU pragma private; include "Pathfinding/Ionic/Zip/BadStateException.hpp"
#include "Pathfinding/Ionic/Zip/zzzz__ZipException_impl.hpp"
#include "Pathfinding/Ionic/Zip/zzzz__BadStateException_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::BadStateException._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::BadStateException::*)(::StringW)>(&::Pathfinding::Ionic::Zip::BadStateException::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa68c880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::BadStateException*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::BadStateException._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::BadStateException::*)(::StringW, ::System::Exception*)>(&::Pathfinding::Ionic::Zip::BadStateException::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa68c884;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::BadStateException*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Pathfinding::Ionic::Zip::BadStateException::_ctor(::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::BadStateException*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void Pathfinding::Ionic::Zip::BadStateException::_ctor(::StringW  message, ::System::Exception*  innerException)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::BadStateException*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, innerException);
}
inline ::Pathfinding::Ionic::Zip::BadStateException* Pathfinding::Ionic::Zip::BadStateException::New_ctor(::StringW  message)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::Ionic::Zip::BadStateException*>(message));
}
inline ::Pathfinding::Ionic::Zip::BadStateException* Pathfinding::Ionic::Zip::BadStateException::New_ctor(::StringW  message, ::System::Exception*  innerException)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::Ionic::Zip::BadStateException*>(message, innerException));
}
// Ctor Parameters []
constexpr ::Pathfinding::Ionic::Zip::BadStateException::BadStateException()   {
}
