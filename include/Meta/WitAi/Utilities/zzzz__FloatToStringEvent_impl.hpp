#pragma once
// IWYU pragma private; include "Meta/WitAi/Utilities/FloatToStringEvent.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Meta/WitAi/Utilities/zzzz__FloatToStringEvent_def.hpp"
#include "Meta/WitAi/Utilities/zzzz__StringEvent_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::Utilities::FloatToStringEvent.ConvertFloatToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Utilities::FloatToStringEvent::*)(float_t)>(&::Meta::WitAi::Utilities::FloatToStringEvent::ConvertFloatToString)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x9e849cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Utilities::FloatToStringEvent*>(),
                        {"ConvertFloatToString", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Utilities::FloatToStringEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Utilities::FloatToStringEvent::*)()>(&::Meta::WitAi::Utilities::FloatToStringEvent::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x9e84a90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Utilities::FloatToStringEvent*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Meta::WitAi::Utilities::FloatToStringEvent::__cordl_internal_get__floatFormat()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____floatFormat;
}
constexpr ::StringW const& Meta::WitAi::Utilities::FloatToStringEvent::__cordl_internal_get__floatFormat() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____floatFormat;
}
constexpr void Meta::WitAi::Utilities::FloatToStringEvent::__cordl_internal_set__floatFormat(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____floatFormat = value;
}
constexpr ::StringW& Meta::WitAi::Utilities::FloatToStringEvent::__cordl_internal_get__stringFormat()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stringFormat;
}
constexpr ::StringW const& Meta::WitAi::Utilities::FloatToStringEvent::__cordl_internal_get__stringFormat() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stringFormat;
}
constexpr void Meta::WitAi::Utilities::FloatToStringEvent::__cordl_internal_set__stringFormat(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____stringFormat = value;
}
constexpr ::Meta::WitAi::Utilities::StringEvent*& Meta::WitAi::Utilities::FloatToStringEvent::__cordl_internal_get_onFloatToString()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onFloatToString;
}
constexpr ::Meta::WitAi::Utilities::StringEvent* const& Meta::WitAi::Utilities::FloatToStringEvent::__cordl_internal_get_onFloatToString() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onFloatToString;
}
constexpr void Meta::WitAi::Utilities::FloatToStringEvent::__cordl_internal_set_onFloatToString(::Meta::WitAi::Utilities::StringEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onFloatToString = value;
}
inline void Meta::WitAi::Utilities::FloatToStringEvent::ConvertFloatToString(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Utilities::FloatToStringEvent*>(),
                        {"ConvertFloatToString", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::WitAi::Utilities::FloatToStringEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Utilities::FloatToStringEvent*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::Utilities::FloatToStringEvent* Meta::WitAi::Utilities::FloatToStringEvent::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::Utilities::FloatToStringEvent*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::Utilities::FloatToStringEvent::FloatToStringEvent()   {
}
