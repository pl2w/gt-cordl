#pragma once
// IWYU pragma private; include "GorillaNetworking/Store/GtfcPriceLabel.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaNetworking/Store/zzzz__GtfcPriceLabel_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
//  Writing Method size for method: ::GorillaNetworking::Store::GtfcPriceLabel.SetText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::Store::GtfcPriceLabel::*)(::StringW)>(&::GorillaNetworking::Store::GtfcPriceLabel::SetText)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5ca8318;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::GtfcPriceLabel*>(),
                        {"SetText", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::GtfcPriceLabel._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::Store::GtfcPriceLabel::*)()>(&::GorillaNetworking::Store::GtfcPriceLabel::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ca8338;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::GtfcPriceLabel*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::TMPro::TMP_Text>& GorillaNetworking::Store::GtfcPriceLabel::__cordl_internal_get__label()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____label;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GorillaNetworking::Store::GtfcPriceLabel::__cordl_internal_get__label() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____label;
}
constexpr void GorillaNetworking::Store::GtfcPriceLabel::__cordl_internal_set__label(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____label = value;
}
inline void GorillaNetworking::Store::GtfcPriceLabel::SetText(::StringW  text)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::GtfcPriceLabel*>(),
                        {"SetText", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text);
}
inline void GorillaNetworking::Store::GtfcPriceLabel::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::GtfcPriceLabel*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaNetworking::Store::GtfcPriceLabel* GorillaNetworking::Store::GtfcPriceLabel::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::Store::GtfcPriceLabel*>());
}
// Ctor Parameters []
constexpr ::GorillaNetworking::Store::GtfcPriceLabel::GtfcPriceLabel()   {
}
