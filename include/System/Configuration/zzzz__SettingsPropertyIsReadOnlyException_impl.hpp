#pragma once
// IWYU pragma private; include "System/Configuration/SettingsPropertyIsReadOnlyException.hpp"
#include "System/zzzz__Exception_impl.hpp"
#include "System/Configuration/zzzz__SettingsPropertyIsReadOnlyException_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::System::Configuration::SettingsPropertyIsReadOnlyException._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::SettingsPropertyIsReadOnlyException::*)()>(&::System::Configuration::SettingsPropertyIsReadOnlyException::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfd470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsPropertyIsReadOnlyException*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::SettingsPropertyIsReadOnlyException._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::SettingsPropertyIsReadOnlyException::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Configuration::SettingsPropertyIsReadOnlyException::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfd4a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsPropertyIsReadOnlyException*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::SettingsPropertyIsReadOnlyException._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::SettingsPropertyIsReadOnlyException::*)(::StringW)>(&::System::Configuration::SettingsPropertyIsReadOnlyException::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfd4e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsPropertyIsReadOnlyException*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::SettingsPropertyIsReadOnlyException._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::SettingsPropertyIsReadOnlyException::*)(::StringW, ::System::Exception*)>(&::System::Configuration::SettingsPropertyIsReadOnlyException::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfd518;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsPropertyIsReadOnlyException*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>()}}
                    )));
    return ___internal_method;
  }
};
inline void System::Configuration::SettingsPropertyIsReadOnlyException::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsPropertyIsReadOnlyException*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Configuration::SettingsPropertyIsReadOnlyException::_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsPropertyIsReadOnlyException*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
inline void System::Configuration::SettingsPropertyIsReadOnlyException::_ctor(::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsPropertyIsReadOnlyException*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void System::Configuration::SettingsPropertyIsReadOnlyException::_ctor(::StringW  message, ::System::Exception*  innerException)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsPropertyIsReadOnlyException*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, innerException);
}
inline ::System::Configuration::SettingsPropertyIsReadOnlyException* System::Configuration::SettingsPropertyIsReadOnlyException::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Configuration::SettingsPropertyIsReadOnlyException*>());
}
inline ::System::Configuration::SettingsPropertyIsReadOnlyException* System::Configuration::SettingsPropertyIsReadOnlyException::New_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Configuration::SettingsPropertyIsReadOnlyException*>(info, context));
}
inline ::System::Configuration::SettingsPropertyIsReadOnlyException* System::Configuration::SettingsPropertyIsReadOnlyException::New_ctor(::StringW  message)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Configuration::SettingsPropertyIsReadOnlyException*>(message));
}
inline ::System::Configuration::SettingsPropertyIsReadOnlyException* System::Configuration::SettingsPropertyIsReadOnlyException::New_ctor(::StringW  message, ::System::Exception*  innerException)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Configuration::SettingsPropertyIsReadOnlyException*>(message, innerException));
}
// Ctor Parameters []
constexpr ::System::Configuration::SettingsPropertyIsReadOnlyException::SettingsPropertyIsReadOnlyException()   {
}
