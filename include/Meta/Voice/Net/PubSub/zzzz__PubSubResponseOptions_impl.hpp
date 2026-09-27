#pragma once
// IWYU pragma private; include "Meta/Voice/Net/PubSub/PubSubResponseOptions.hpp"
#include "Meta/Voice/Net/PubSub/zzzz__PubSubResponseOptions_def.hpp"
//  Writing Method size for method: ::Meta::Voice::Net::PubSub::PubSubResponseOptions.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::Voice::Net::PubSub::PubSubResponseOptions::*)(::Meta::Voice::Net::PubSub::PubSubResponseOptions)>(&::Meta::Voice::Net::PubSub::PubSubResponseOptions::Equals)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x9e6b0f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::PubSub::PubSubResponseOptions>(),
                        {"Equals", {}, {::i2c::type_of<::Meta::Voice::Net::PubSub::PubSubResponseOptions>()}}
                    )));
    return ___internal_method;
  }
};
inline bool Meta::Voice::Net::PubSub::PubSubResponseOptions::Equals(::Meta::Voice::Net::PubSub::PubSubResponseOptions  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::PubSub::PubSubResponseOptions>(),
                        {"Equals", {}, {::i2c::type_of<::Meta::Voice::Net::PubSub::PubSubResponseOptions>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
// Ctor Parameters [CppParam { name: "transcriptionResponses", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "composerResponses", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Meta::Voice::Net::PubSub::PubSubResponseOptions::PubSubResponseOptions(bool  transcriptionResponses, bool  composerResponses) noexcept  {
this->transcriptionResponses = transcriptionResponses;
this->composerResponses = composerResponses;
}
// Ctor Parameters []
constexpr ::Meta::Voice::Net::PubSub::PubSubResponseOptions::PubSubResponseOptions()   {
}
