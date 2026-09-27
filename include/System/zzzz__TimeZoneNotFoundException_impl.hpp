#pragma once
// IWYU pragma private; include "System/TimeZoneNotFoundException.hpp"
#include "System/zzzz__Exception_impl.hpp"
#include "System/zzzz__TimeZoneNotFoundException_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::System::TimeZoneNotFoundException._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::TimeZoneNotFoundException::*)()>(&::System::TimeZoneNotFoundException::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa2f7234;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneNotFoundException*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneNotFoundException._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::TimeZoneNotFoundException::*)(::StringW)>(&::System::TimeZoneNotFoundException::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa2f728c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneNotFoundException*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneNotFoundException._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::TimeZoneNotFoundException::*)(::StringW, ::System::Exception*)>(&::System::TimeZoneNotFoundException::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xa2f72f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneNotFoundException*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneNotFoundException._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::TimeZoneNotFoundException::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::TimeZoneNotFoundException::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xa2f7364;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneNotFoundException*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>()}}
                    )));
    return ___internal_method;
  }
};
inline void System::TimeZoneNotFoundException::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneNotFoundException*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::TimeZoneNotFoundException::_ctor(::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneNotFoundException*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void System::TimeZoneNotFoundException::_ctor(::StringW  message, ::System::Exception*  innerException)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneNotFoundException*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, innerException);
}
inline void System::TimeZoneNotFoundException::_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZoneNotFoundException*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
inline ::System::TimeZoneNotFoundException* System::TimeZoneNotFoundException::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::TimeZoneNotFoundException*>());
}
inline ::System::TimeZoneNotFoundException* System::TimeZoneNotFoundException::New_ctor(::StringW  message)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::TimeZoneNotFoundException*>(message));
}
inline ::System::TimeZoneNotFoundException* System::TimeZoneNotFoundException::New_ctor(::StringW  message, ::System::Exception*  innerException)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::TimeZoneNotFoundException*>(message, innerException));
}
inline ::System::TimeZoneNotFoundException* System::TimeZoneNotFoundException::New_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::TimeZoneNotFoundException*>(info, context));
}
// Ctor Parameters []
constexpr ::System::TimeZoneNotFoundException::TimeZoneNotFoundException()   {
}
