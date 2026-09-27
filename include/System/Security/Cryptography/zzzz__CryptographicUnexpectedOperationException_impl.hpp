#pragma once
// IWYU pragma private; include "System/Security/Cryptography/CryptographicUnexpectedOperationException.hpp"
#include "System/Security/Cryptography/zzzz__CryptographicException_impl.hpp"
#include "System/Security/Cryptography/zzzz__CryptographicUnexpectedOperationException_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::CryptographicUnexpectedOperationException._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::CryptographicUnexpectedOperationException::*)()>(&::System::Security::Cryptography::CryptographicUnexpectedOperationException::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xa163cc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CryptographicUnexpectedOperationException*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::CryptographicUnexpectedOperationException._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::CryptographicUnexpectedOperationException::*)(::StringW)>(&::System::Security::Cryptography::CryptographicUnexpectedOperationException::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa1603bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CryptographicUnexpectedOperationException*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::CryptographicUnexpectedOperationException._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::CryptographicUnexpectedOperationException::*)(::StringW, ::StringW)>(&::System::Security::Cryptography::CryptographicUnexpectedOperationException::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa163cec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CryptographicUnexpectedOperationException*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::CryptographicUnexpectedOperationException._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::CryptographicUnexpectedOperationException::*)(::StringW, ::System::Exception*)>(&::System::Security::Cryptography::CryptographicUnexpectedOperationException::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa163d9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CryptographicUnexpectedOperationException*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::CryptographicUnexpectedOperationException._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::CryptographicUnexpectedOperationException::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Security::Cryptography::CryptographicUnexpectedOperationException::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa163de4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CryptographicUnexpectedOperationException*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>()}}
                    )));
    return ___internal_method;
  }
};
inline void System::Security::Cryptography::CryptographicUnexpectedOperationException::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CryptographicUnexpectedOperationException*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Security::Cryptography::CryptographicUnexpectedOperationException::_ctor(::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CryptographicUnexpectedOperationException*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void System::Security::Cryptography::CryptographicUnexpectedOperationException::_ctor(::StringW  format, ::StringW  insert)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CryptographicUnexpectedOperationException*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, format, insert);
}
inline void System::Security::Cryptography::CryptographicUnexpectedOperationException::_ctor(::StringW  message, ::System::Exception*  inner)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CryptographicUnexpectedOperationException*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, inner);
}
inline void System::Security::Cryptography::CryptographicUnexpectedOperationException::_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CryptographicUnexpectedOperationException*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
inline ::System::Security::Cryptography::CryptographicUnexpectedOperationException* System::Security::Cryptography::CryptographicUnexpectedOperationException::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::CryptographicUnexpectedOperationException*>());
}
inline ::System::Security::Cryptography::CryptographicUnexpectedOperationException* System::Security::Cryptography::CryptographicUnexpectedOperationException::New_ctor(::StringW  message)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::CryptographicUnexpectedOperationException*>(message));
}
inline ::System::Security::Cryptography::CryptographicUnexpectedOperationException* System::Security::Cryptography::CryptographicUnexpectedOperationException::New_ctor(::StringW  format, ::StringW  insert)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::CryptographicUnexpectedOperationException*>(format, insert));
}
inline ::System::Security::Cryptography::CryptographicUnexpectedOperationException* System::Security::Cryptography::CryptographicUnexpectedOperationException::New_ctor(::StringW  message, ::System::Exception*  inner)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::CryptographicUnexpectedOperationException*>(message, inner));
}
inline ::System::Security::Cryptography::CryptographicUnexpectedOperationException* System::Security::Cryptography::CryptographicUnexpectedOperationException::New_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::CryptographicUnexpectedOperationException*>(info, context));
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::CryptographicUnexpectedOperationException::CryptographicUnexpectedOperationException()   {
}
