#pragma once
// IWYU pragma private; include "Meta/WitAi/Data/SimulatedResponseMessage.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/WitAi/Data/zzzz__SimulatedResponseMessage_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::Data::SimulatedResponseMessage._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Data::SimulatedResponseMessage::*)()>(&::Meta::WitAi::Data::SimulatedResponseMessage::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e479e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::SimulatedResponseMessage*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& Meta::WitAi::Data::SimulatedResponseMessage::__cordl_internal_get_delay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___delay;
}
constexpr float_t const& Meta::WitAi::Data::SimulatedResponseMessage::__cordl_internal_get_delay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___delay;
}
constexpr void Meta::WitAi::Data::SimulatedResponseMessage::__cordl_internal_set_delay(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___delay = value;
}
constexpr ::StringW& Meta::WitAi::Data::SimulatedResponseMessage::__cordl_internal_get_responseBody()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___responseBody;
}
constexpr ::StringW const& Meta::WitAi::Data::SimulatedResponseMessage::__cordl_internal_get_responseBody() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___responseBody;
}
constexpr void Meta::WitAi::Data::SimulatedResponseMessage::__cordl_internal_set_responseBody(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___responseBody = value;
}
inline void Meta::WitAi::Data::SimulatedResponseMessage::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::SimulatedResponseMessage*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::Data::SimulatedResponseMessage* Meta::WitAi::Data::SimulatedResponseMessage::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::Data::SimulatedResponseMessage*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::Data::SimulatedResponseMessage::SimulatedResponseMessage()   {
}
