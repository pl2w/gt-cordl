#pragma once
// IWYU pragma private; include "Meta/WitAi/Utilities/StringToStringEvent.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Meta/WitAi/Utilities/zzzz__StringToStringEvent_def.hpp"
#include "Meta/WitAi/Utilities/zzzz__StringEvent_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::Utilities::StringToStringEvent.FormatString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Utilities::StringToStringEvent::*)(::StringW, ::StringW)>(&::Meta::WitAi::Utilities::StringToStringEvent::FormatString)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x9e84da8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Utilities::StringToStringEvent*>(),
                        {"FormatString", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Utilities::StringToStringEvent.FormatString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Utilities::StringToStringEvent::*)(::StringW)>(&::Meta::WitAi::Utilities::StringToStringEvent::FormatString)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9e84e48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Utilities::StringToStringEvent*>(),
                        {"FormatString", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Utilities::StringToStringEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Utilities::StringToStringEvent::*)()>(&::Meta::WitAi::Utilities::StringToStringEvent::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x9e84e58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Utilities::StringToStringEvent*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Meta::WitAi::Utilities::StringToStringEvent::__cordl_internal_get__format()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____format;
}
constexpr ::StringW const& Meta::WitAi::Utilities::StringToStringEvent::__cordl_internal_get__format() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____format;
}
constexpr void Meta::WitAi::Utilities::StringToStringEvent::__cordl_internal_set__format(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____format = value;
}
constexpr ::Meta::WitAi::Utilities::StringEvent*& Meta::WitAi::Utilities::StringToStringEvent::__cordl_internal_get_onStringEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onStringEvent;
}
constexpr ::Meta::WitAi::Utilities::StringEvent* const& Meta::WitAi::Utilities::StringToStringEvent::__cordl_internal_get_onStringEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onStringEvent;
}
constexpr void Meta::WitAi::Utilities::StringToStringEvent::__cordl_internal_set_onStringEvent(::Meta::WitAi::Utilities::StringEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onStringEvent = value;
}
inline void Meta::WitAi::Utilities::StringToStringEvent::FormatString(::StringW  format, ::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Utilities::StringToStringEvent*>(),
                        {"FormatString", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, format, value);
}
inline void Meta::WitAi::Utilities::StringToStringEvent::FormatString(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Utilities::StringToStringEvent*>(),
                        {"FormatString", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::WitAi::Utilities::StringToStringEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Utilities::StringToStringEvent*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::Utilities::StringToStringEvent* Meta::WitAi::Utilities::StringToStringEvent::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::Utilities::StringToStringEvent*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::Utilities::StringToStringEvent::StringToStringEvent()   {
}
