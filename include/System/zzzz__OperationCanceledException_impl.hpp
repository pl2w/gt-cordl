#pragma once
// IWYU pragma private; include "System/OperationCanceledException.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__SystemException_impl.hpp"
#include "System/zzzz__OperationCanceledException_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::System::OperationCanceledException.get_CancellationToken
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::CancellationToken (::System::OperationCanceledException::*)()>(&::System::OperationCanceledException::get_CancellationToken)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa2ed51c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::OperationCanceledException*>(),
                        {"get_CancellationToken", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::OperationCanceledException.set_CancellationToken
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::OperationCanceledException::*)(::System::Threading::CancellationToken)>(&::System::OperationCanceledException::set_CancellationToken)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa2ed524;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::OperationCanceledException*>(),
                        {"set_CancellationToken", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::OperationCanceledException._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::OperationCanceledException::*)()>(&::System::OperationCanceledException::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa2ed530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::OperationCanceledException*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::OperationCanceledException._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::OperationCanceledException::*)(::StringW)>(&::System::OperationCanceledException::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa2ed600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::OperationCanceledException*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::OperationCanceledException._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::OperationCanceledException::*)(::StringW, ::System::Exception*)>(&::System::OperationCanceledException::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa2ed620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::OperationCanceledException*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::OperationCanceledException._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::OperationCanceledException::*)(::System::Threading::CancellationToken)>(&::System::OperationCanceledException::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa2ed6c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::OperationCanceledException*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::OperationCanceledException._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::OperationCanceledException::*)(::StringW, ::System::Threading::CancellationToken)>(&::System::OperationCanceledException::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa2ed6ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::OperationCanceledException*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::OperationCanceledException._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::OperationCanceledException::*)(::StringW, ::System::Exception*, ::System::Threading::CancellationToken)>(&::System::OperationCanceledException::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa2ed724;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::OperationCanceledException*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::OperationCanceledException._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::OperationCanceledException::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::OperationCanceledException::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa2ed75c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::OperationCanceledException*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Threading::CancellationToken& System::OperationCanceledException::__cordl_internal_get__cancellationToken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cancellationToken;
}
constexpr ::System::Threading::CancellationToken const& System::OperationCanceledException::__cordl_internal_get__cancellationToken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cancellationToken;
}
constexpr void System::OperationCanceledException::__cordl_internal_set__cancellationToken(::System::Threading::CancellationToken  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cancellationToken = value;
}
inline ::System::Threading::CancellationToken System::OperationCanceledException::get_CancellationToken()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::OperationCanceledException*>(),
                        {"get_CancellationToken", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::CancellationToken>(this, ___internal_method);
}
inline void System::OperationCanceledException::set_CancellationToken(::System::Threading::CancellationToken  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::OperationCanceledException*>(),
                        {"set_CancellationToken", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::OperationCanceledException::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::OperationCanceledException*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::OperationCanceledException::_ctor(::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::OperationCanceledException*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void System::OperationCanceledException::_ctor(::StringW  message, ::System::Exception*  innerException)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::OperationCanceledException*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, innerException);
}
inline void System::OperationCanceledException::_ctor(::System::Threading::CancellationToken  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::OperationCanceledException*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, token);
}
inline void System::OperationCanceledException::_ctor(::StringW  message, ::System::Threading::CancellationToken  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::OperationCanceledException*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, token);
}
inline void System::OperationCanceledException::_ctor(::StringW  message, ::System::Exception*  innerException, ::System::Threading::CancellationToken  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::OperationCanceledException*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, innerException, token);
}
inline void System::OperationCanceledException::_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::OperationCanceledException*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
inline ::System::OperationCanceledException* System::OperationCanceledException::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::OperationCanceledException*>());
}
inline ::System::OperationCanceledException* System::OperationCanceledException::New_ctor(::StringW  message)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::OperationCanceledException*>(message));
}
inline ::System::OperationCanceledException* System::OperationCanceledException::New_ctor(::StringW  message, ::System::Exception*  innerException)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::OperationCanceledException*>(message, innerException));
}
inline ::System::OperationCanceledException* System::OperationCanceledException::New_ctor(::System::Threading::CancellationToken  token)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::OperationCanceledException*>(token));
}
inline ::System::OperationCanceledException* System::OperationCanceledException::New_ctor(::StringW  message, ::System::Threading::CancellationToken  token)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::OperationCanceledException*>(message, token));
}
inline ::System::OperationCanceledException* System::OperationCanceledException::New_ctor(::StringW  message, ::System::Exception*  innerException, ::System::Threading::CancellationToken  token)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::OperationCanceledException*>(message, innerException, token));
}
inline ::System::OperationCanceledException* System::OperationCanceledException::New_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::OperationCanceledException*>(info, context));
}
// Ctor Parameters []
constexpr ::System::OperationCanceledException::OperationCanceledException()   {
}
