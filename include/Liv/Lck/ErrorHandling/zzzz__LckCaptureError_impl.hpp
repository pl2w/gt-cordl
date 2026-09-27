#pragma once
// IWYU pragma private; include "Liv/Lck/ErrorHandling/LckCaptureError.hpp"
#include "Liv/Lck/ErrorHandling/zzzz__CaptureErrorType_impl.hpp"
#include "Liv/Lck/ErrorHandling/zzzz__LckCaptureError_def.hpp"
#include "Liv/Lck/ErrorHandling/zzzz__CaptureErrorType_def.hpp"
//  Writing Method size for method: ::Liv::Lck::ErrorHandling::LckCaptureError.get_Type
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::ErrorHandling::CaptureErrorType (::Liv::Lck::ErrorHandling::LckCaptureError::*)()>(&::Liv::Lck::ErrorHandling::LckCaptureError::get_Type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d41e28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::ErrorHandling::LckCaptureError>(),
                        {"get_Type", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ErrorHandling::LckCaptureError.set_Type
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::ErrorHandling::LckCaptureError::*)(::Liv::Lck::ErrorHandling::CaptureErrorType)>(&::Liv::Lck::ErrorHandling::LckCaptureError::set_Type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d41e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::ErrorHandling::LckCaptureError>(),
                        {"set_Type", {}, {::i2c::type_of<::Liv::Lck::ErrorHandling::CaptureErrorType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ErrorHandling::LckCaptureError.get_Message
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Liv::Lck::ErrorHandling::LckCaptureError::*)()>(&::Liv::Lck::ErrorHandling::LckCaptureError::get_Message)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d41e38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::ErrorHandling::LckCaptureError>(),
                        {"get_Message", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ErrorHandling::LckCaptureError.set_Message
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::ErrorHandling::LckCaptureError::*)(::StringW)>(&::Liv::Lck::ErrorHandling::LckCaptureError::set_Message)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d41e40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::ErrorHandling::LckCaptureError>(),
                        {"set_Message", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ErrorHandling::LckCaptureError._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::ErrorHandling::LckCaptureError::*)(::Liv::Lck::ErrorHandling::CaptureErrorType, ::StringW)>(&::Liv::Lck::ErrorHandling::LckCaptureError::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9d41e48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::ErrorHandling::LckCaptureError>(),
                        {".ctor", {}, {::i2c::type_of<::Liv::Lck::ErrorHandling::CaptureErrorType>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Liv::Lck::ErrorHandling::CaptureErrorType Liv::Lck::ErrorHandling::LckCaptureError::get_Type()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::ErrorHandling::LckCaptureError>(),
                        {"get_Type", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::ErrorHandling::CaptureErrorType>(*this, ___internal_method);
}
inline void Liv::Lck::ErrorHandling::LckCaptureError::set_Type(::Liv::Lck::ErrorHandling::CaptureErrorType  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::ErrorHandling::LckCaptureError>(),
                        {"set_Type", {}, {::i2c::type_of<::Liv::Lck::ErrorHandling::CaptureErrorType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::StringW Liv::Lck::ErrorHandling::LckCaptureError::get_Message()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::ErrorHandling::LckCaptureError>(),
                        {"get_Message", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline void Liv::Lck::ErrorHandling::LckCaptureError::set_Message(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::ErrorHandling::LckCaptureError>(),
                        {"set_Message", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void Liv::Lck::ErrorHandling::LckCaptureError::_ctor(::Liv::Lck::ErrorHandling::CaptureErrorType  type, ::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::ErrorHandling::LckCaptureError>(),
                        {".ctor", {}, {::i2c::type_of<::Liv::Lck::ErrorHandling::CaptureErrorType>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, type, message);
}
// Ctor Parameters [CppParam { name: "_Type_k__BackingField", ty: "::Liv::Lck::ErrorHandling::CaptureErrorType", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_Message_k__BackingField", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Liv::Lck::ErrorHandling::LckCaptureError::LckCaptureError(::Liv::Lck::ErrorHandling::CaptureErrorType  _Type_k__BackingField, ::StringW  _Message_k__BackingField) noexcept  {
this->_Type_k__BackingField = _Type_k__BackingField;
this->_Message_k__BackingField = _Message_k__BackingField;
}
// Ctor Parameters []
constexpr ::Liv::Lck::ErrorHandling::LckCaptureError::LckCaptureError()   {
}
