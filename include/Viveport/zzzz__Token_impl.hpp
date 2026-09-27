#pragma once
// IWYU pragma private; include "Viveport/Token.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Viveport/zzzz__Token_def.hpp"
#include "Viveport/Internal/zzzz__StatusCallback2_def.hpp"
#include "Viveport/Internal/zzzz__StatusCallback_def.hpp"
#include "Viveport/zzzz__StatusCallback2_def.hpp"
#include "Viveport/zzzz__StatusCallback_def.hpp"
//  Writing Method size for method: ::Viveport::Token.IsReadyIl2cppCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::Viveport::Token::IsReadyIl2cppCallback)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5b58a1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Token*>(),
                        {"IsReadyIl2cppCallback", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::Token.IsReady
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Viveport::StatusCallback*)>(&::Viveport::Token::IsReady)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x5b58af4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Token*>(),
                        {"IsReady", {}, {::i2c::type_of<::Viveport::StatusCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::Token.GetSessionTokenIl2cppCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::StringW)>(&::Viveport::Token::GetSessionTokenIl2cppCallback)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5b58a80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Token*>(),
                        {"GetSessionTokenIl2cppCallback", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::Token.GetSessionToken
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Viveport::StatusCallback2*)>(&::Viveport::Token::GetSessionToken)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x5b58e1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Token*>(),
                        {"GetSessionToken", {}, {::i2c::type_of<::Viveport::StatusCallback2*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::Token._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::Token::*)()>(&::Viveport::Token::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b5913c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Token*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Viveport::Token::setStaticF_isReadyIl2cppCallback(::Viveport::Internal::StatusCallback*  value)  {
::cordl_internals::setStaticField<::Viveport::Internal::StatusCallback*, "isReadyIl2cppCallback", ::Viveport::Token*>(std::forward<::Viveport::Internal::StatusCallback*>(value));
}
inline ::Viveport::Internal::StatusCallback* Viveport::Token::getStaticF_isReadyIl2cppCallback()  {
return ::cordl_internals::getStaticField<::Viveport::Internal::StatusCallback*, "isReadyIl2cppCallback", ::Viveport::Token*>();
}
inline void Viveport::Token::setStaticF_getSessionTokenIl2cppCallback(::Viveport::Internal::StatusCallback2*  value)  {
::cordl_internals::setStaticField<::Viveport::Internal::StatusCallback2*, "getSessionTokenIl2cppCallback", ::Viveport::Token*>(std::forward<::Viveport::Internal::StatusCallback2*>(value));
}
inline ::Viveport::Internal::StatusCallback2* Viveport::Token::getStaticF_getSessionTokenIl2cppCallback()  {
return ::cordl_internals::getStaticField<::Viveport::Internal::StatusCallback2*, "getSessionTokenIl2cppCallback", ::Viveport::Token*>();
}
inline void Viveport::Token::IsReadyIl2cppCallback(int32_t  errorCode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Token*>(),
                        {"IsReadyIl2cppCallback", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, errorCode);
}
inline void Viveport::Token::IsReady(::Viveport::StatusCallback*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Token*>(),
                        {"IsReady", {}, {::i2c::type_of<::Viveport::StatusCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, callback);
}
inline void Viveport::Token::GetSessionTokenIl2cppCallback(int32_t  errorCode, ::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Token*>(),
                        {"GetSessionTokenIl2cppCallback", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, errorCode, message);
}
inline void Viveport::Token::GetSessionToken(::Viveport::StatusCallback2*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Token*>(),
                        {"GetSessionToken", {}, {::i2c::type_of<::Viveport::StatusCallback2*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, callback);
}
inline void Viveport::Token::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Token*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Viveport::Token* Viveport::Token::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Viveport::Token*>());
}
// Ctor Parameters []
constexpr ::Viveport::Token::Token()   {
}
