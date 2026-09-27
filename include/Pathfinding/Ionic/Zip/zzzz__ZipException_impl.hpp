#pragma once
// IWYU pragma private; include "Pathfinding/Ionic/Zip/ZipException.hpp"
#include "System/zzzz__Exception_impl.hpp"
#include "Pathfinding/Ionic/Zip/zzzz__ZipException_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipException._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::ZipException::*)()>(&::Pathfinding::Ionic::Zip::ZipException::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa68c7b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipException*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipException._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::ZipException::*)(::StringW)>(&::Pathfinding::Ionic::Zip::ZipException::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa68c810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipException*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipException._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::ZipException::*)(::StringW, ::System::Exception*)>(&::Pathfinding::Ionic::Zip::ZipException::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xa68c888;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipException*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Pathfinding::Ionic::Zip::ZipException::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipException*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::Ionic::Zip::ZipException::_ctor(::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipException*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void Pathfinding::Ionic::Zip::ZipException::_ctor(::StringW  message, ::System::Exception*  innerException)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipException*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, innerException);
}
inline ::Pathfinding::Ionic::Zip::ZipException* Pathfinding::Ionic::Zip::ZipException::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::Ionic::Zip::ZipException*>());
}
inline ::Pathfinding::Ionic::Zip::ZipException* Pathfinding::Ionic::Zip::ZipException::New_ctor(::StringW  message)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::Ionic::Zip::ZipException*>(message));
}
inline ::Pathfinding::Ionic::Zip::ZipException* Pathfinding::Ionic::Zip::ZipException::New_ctor(::StringW  message, ::System::Exception*  innerException)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::Ionic::Zip::ZipException*>(message, innerException));
}
// Ctor Parameters []
constexpr ::Pathfinding::Ionic::Zip::ZipException::ZipException()   {
}
