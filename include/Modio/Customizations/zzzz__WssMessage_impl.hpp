#pragma once
// IWYU pragma private; include "Modio/Customizations/WssMessage.hpp"
#include "Modio/Customizations/zzzz__WssMessage_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JToken_def.hpp"
template<typename TOutput>
requires(::cordl_internals::value_type_constraint<TOutput> && ::cordl_internals::default_constructor_constraint<TOutput>)
inline bool Modio::Customizations::WssMessage::TryGetValue(::by_ref<TOutput>  output)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Modio::Customizations::WssMessage>(),
                    {"TryGetValue", {::i2c::class_of<TOutput>()}, {::i2c::type_of<::by_ref<TOutput>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TOutput>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, output);
}
// Ctor Parameters [CppParam { name: "operation", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "context", ty: "::Newtonsoft::Json::Linq::JToken*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Modio::Customizations::WssMessage::WssMessage(::StringW  operation, ::Newtonsoft::Json::Linq::JToken*  context) noexcept  {
this->operation = operation;
this->context = context;
}
// Ctor Parameters []
constexpr ::Modio::Customizations::WssMessage::WssMessage()   {
}
