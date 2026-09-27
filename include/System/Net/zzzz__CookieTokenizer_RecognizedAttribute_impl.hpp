#pragma once
// IWYU pragma private; include "System/Net/CookieTokenizer_RecognizedAttribute.hpp"
#include "System/Net/zzzz__CookieToken_impl.hpp"
#include "System/Net/zzzz__CookieTokenizer_RecognizedAttribute_def.hpp"
#include "System/Net/zzzz__CookieToken_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CookieTokenizer_RecognizedAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CookieTokenizer_RecognizedAttribute::*)(::StringW, ::System::Net::CookieToken)>(&::GlobalNamespace::CookieTokenizer_RecognizedAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xac7b0a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CookieTokenizer_RecognizedAttribute>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Net::CookieToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CookieTokenizer_RecognizedAttribute.get_Token
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::CookieToken (::GlobalNamespace::CookieTokenizer_RecognizedAttribute::*)()>(&::GlobalNamespace::CookieTokenizer_RecognizedAttribute::get_Token)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac7b0c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CookieTokenizer_RecognizedAttribute>(),
                        {"get_Token", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CookieTokenizer_RecognizedAttribute.IsEqualTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CookieTokenizer_RecognizedAttribute::*)(::StringW)>(&::GlobalNamespace::CookieTokenizer_RecognizedAttribute::IsEqualTo)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xac7b0d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CookieTokenizer_RecognizedAttribute>(),
                        {"IsEqualTo", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::CookieTokenizer_RecognizedAttribute::_ctor(::StringW  name, ::System::Net::CookieToken  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CookieTokenizer_RecognizedAttribute>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Net::CookieToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, name, token);
}
inline ::System::Net::CookieToken GlobalNamespace::CookieTokenizer_RecognizedAttribute::get_Token()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CookieTokenizer_RecognizedAttribute>(),
                        {"get_Token", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::CookieToken>(*this, ___internal_method);
}
inline bool GlobalNamespace::CookieTokenizer_RecognizedAttribute::IsEqualTo(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CookieTokenizer_RecognizedAttribute>(),
                        {"IsEqualTo", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "m_name", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_token", ty: "::System::Net::CookieToken", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::CookieTokenizer_RecognizedAttribute::CookieTokenizer_RecognizedAttribute(::StringW  m_name, ::System::Net::CookieToken  m_token) noexcept  {
this->m_name = m_name;
this->m_token = m_token;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CookieTokenizer_RecognizedAttribute::CookieTokenizer_RecognizedAttribute()   {
}
