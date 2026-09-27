#pragma once
// IWYU pragma private; include "Viveport/Internal/Token.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Viveport/Internal/zzzz__Token_def.hpp"
#include "Viveport/Internal/zzzz__StatusCallback2_def.hpp"
#include "Viveport/Internal/zzzz__StatusCallback_def.hpp"
//  Writing Method size for method: ::Viveport::Internal::Token.IsReady
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Viveport::Internal::StatusCallback*)>(&::Viveport::Internal::Token::IsReady)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x5b58cdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Internal::Token*>(),
                        {"IsReady", {}, {::i2c::type_of<::Viveport::Internal::StatusCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::Internal::Token.GetSessionToken
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Viveport::Internal::StatusCallback2*)>(&::Viveport::Internal::Token::GetSessionToken)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x5b58ffc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Internal::Token*>(),
                        {"GetSessionToken", {}, {::i2c::type_of<::Viveport::Internal::StatusCallback2*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::Internal::Token._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::Internal::Token::*)()>(&::Viveport::Internal::Token::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b5a34c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Internal::Token*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline int32_t Viveport::Internal::Token::IsReady(::Viveport::Internal::StatusCallback*  IsReadyCallback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Internal::Token*>(),
                        {"IsReady", {}, {::i2c::type_of<::Viveport::Internal::StatusCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, IsReadyCallback);
}
inline int32_t Viveport::Internal::Token::GetSessionToken(::Viveport::Internal::StatusCallback2*  GetSessionTokenCallback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Internal::Token*>(),
                        {"GetSessionToken", {}, {::i2c::type_of<::Viveport::Internal::StatusCallback2*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, GetSessionTokenCallback);
}
inline void Viveport::Internal::Token::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Internal::Token*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Viveport::Internal::Token* Viveport::Internal::Token::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Viveport::Internal::Token*>());
}
// Ctor Parameters []
constexpr ::Viveport::Internal::Token::Token()   {
}
