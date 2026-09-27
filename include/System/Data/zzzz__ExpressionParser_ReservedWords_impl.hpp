#pragma once
// IWYU pragma private; include "System/Data/ExpressionParser_ReservedWords.hpp"
#include "System/Data/zzzz__Tokens_impl.hpp"
#include "System/Data/zzzz__ExpressionParser_ReservedWords_def.hpp"
#include "System/Data/zzzz__Tokens_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ExpressionParser_ReservedWords._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ExpressionParser_ReservedWords::*)(::StringW, ::System::Data::Tokens, int32_t)>(&::GlobalNamespace::ExpressionParser_ReservedWords::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa9432ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ExpressionParser_ReservedWords>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Data::Tokens>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ExpressionParser_ReservedWords::_ctor(::StringW  word, ::System::Data::Tokens  token, int32_t  op)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ExpressionParser_ReservedWords>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Data::Tokens>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, word, token, op);
}
// Ctor Parameters [CppParam { name: "_word", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_token", ty: "::System::Data::Tokens", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_op", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ExpressionParser_ReservedWords::ExpressionParser_ReservedWords(::StringW  _word, ::System::Data::Tokens  _token, int32_t  _op) noexcept  {
this->_word = _word;
this->_token = _token;
this->_op = _op;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ExpressionParser_ReservedWords::ExpressionParser_ReservedWords()   {
}
