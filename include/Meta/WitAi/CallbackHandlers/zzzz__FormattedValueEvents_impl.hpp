#pragma once
// IWYU pragma private; include "Meta/WitAi/CallbackHandlers/FormattedValueEvents.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/WitAi/CallbackHandlers/zzzz__FormattedValueEvents_def.hpp"
#include "Meta/WitAi/CallbackHandlers/zzzz__ValueEvent_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::CallbackHandlers::FormattedValueEvents._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::CallbackHandlers::FormattedValueEvents::*)()>(&::Meta::WitAi::CallbackHandlers::FormattedValueEvents::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x9e9e7fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::CallbackHandlers::FormattedValueEvents*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Meta::WitAi::CallbackHandlers::FormattedValueEvents::__cordl_internal_get_format()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___format;
}
constexpr ::StringW const& Meta::WitAi::CallbackHandlers::FormattedValueEvents::__cordl_internal_get_format() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___format;
}
constexpr void Meta::WitAi::CallbackHandlers::FormattedValueEvents::__cordl_internal_set_format(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___format = value;
}
constexpr ::Meta::WitAi::CallbackHandlers::ValueEvent*& Meta::WitAi::CallbackHandlers::FormattedValueEvents::__cordl_internal_get_onFormattedValueEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onFormattedValueEvent;
}
constexpr ::Meta::WitAi::CallbackHandlers::ValueEvent* const& Meta::WitAi::CallbackHandlers::FormattedValueEvents::__cordl_internal_get_onFormattedValueEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onFormattedValueEvent;
}
constexpr void Meta::WitAi::CallbackHandlers::FormattedValueEvents::__cordl_internal_set_onFormattedValueEvent(::Meta::WitAi::CallbackHandlers::ValueEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onFormattedValueEvent = value;
}
inline void Meta::WitAi::CallbackHandlers::FormattedValueEvents::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::CallbackHandlers::FormattedValueEvents*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::CallbackHandlers::FormattedValueEvents* Meta::WitAi::CallbackHandlers::FormattedValueEvents::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::CallbackHandlers::FormattedValueEvents*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::CallbackHandlers::FormattedValueEvents::FormattedValueEvents()   {
}
