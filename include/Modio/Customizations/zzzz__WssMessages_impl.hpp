#pragma once
// IWYU pragma private; include "Modio/Customizations/WssMessages.hpp"
#include "Modio/Customizations/zzzz__WssMessage_impl.hpp"
#include "Modio/Customizations/zzzz__WssMessages_def.hpp"
#include "Modio/Customizations/zzzz__WssMessage_def.hpp"
//  Writing Method size for method: ::Modio::Customizations::WssMessages._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Customizations::WssMessages::*)(::ArrayW<::Modio::Customizations::WssMessage>)>(&::Modio::Customizations::WssMessages::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa05e660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::WssMessages>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<::Modio::Customizations::WssMessage>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Modio::Customizations::WssMessages::_ctor(/* [ParamArray] */ ::ArrayW<::Modio::Customizations::WssMessage>  messages)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::WssMessages>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<::Modio::Customizations::WssMessage>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, messages);
}
// Ctor Parameters [CppParam { name: "messages", ty: "::ArrayW<::Modio::Customizations::WssMessage>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Modio::Customizations::WssMessages::WssMessages(::ArrayW<::Modio::Customizations::WssMessage>  messages) noexcept  {
this->messages = messages;
}
// Ctor Parameters []
constexpr ::Modio::Customizations::WssMessages::WssMessages()   {
}
