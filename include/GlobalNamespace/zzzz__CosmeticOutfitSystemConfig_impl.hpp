#pragma once
// IWYU pragma private; include "GlobalNamespace/CosmeticOutfitSystemConfig.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__CosmeticOutfitSystemConfig_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CosmeticOutfitSystemConfig._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticOutfitSystemConfig::*)()>(&::GlobalNamespace::CosmeticOutfitSystemConfig::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x578364c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticOutfitSystemConfig*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::CosmeticOutfitSystemConfig::__cordl_internal_get_nonSubscriberMaxOutfits()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nonSubscriberMaxOutfits;
}
constexpr int32_t const& GlobalNamespace::CosmeticOutfitSystemConfig::__cordl_internal_get_nonSubscriberMaxOutfits() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nonSubscriberMaxOutfits;
}
constexpr void GlobalNamespace::CosmeticOutfitSystemConfig::__cordl_internal_set_nonSubscriberMaxOutfits(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nonSubscriberMaxOutfits = value;
}
constexpr int32_t& GlobalNamespace::CosmeticOutfitSystemConfig::__cordl_internal_get_subscriberMaxOutfits()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subscriberMaxOutfits;
}
constexpr int32_t const& GlobalNamespace::CosmeticOutfitSystemConfig::__cordl_internal_get_subscriberMaxOutfits() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subscriberMaxOutfits;
}
constexpr void GlobalNamespace::CosmeticOutfitSystemConfig::__cordl_internal_set_subscriberMaxOutfits(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___subscriberMaxOutfits = value;
}
constexpr ::StringW& GlobalNamespace::CosmeticOutfitSystemConfig::__cordl_internal_get_mothershipKey()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mothershipKey;
}
constexpr ::StringW const& GlobalNamespace::CosmeticOutfitSystemConfig::__cordl_internal_get_mothershipKey() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mothershipKey;
}
constexpr void GlobalNamespace::CosmeticOutfitSystemConfig::__cordl_internal_set_mothershipKey(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mothershipKey = value;
}
constexpr char16_t& GlobalNamespace::CosmeticOutfitSystemConfig::__cordl_internal_get_outfitSeparator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outfitSeparator;
}
constexpr char16_t const& GlobalNamespace::CosmeticOutfitSystemConfig::__cordl_internal_get_outfitSeparator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outfitSeparator;
}
constexpr void GlobalNamespace::CosmeticOutfitSystemConfig::__cordl_internal_set_outfitSeparator(char16_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___outfitSeparator = value;
}
constexpr char16_t& GlobalNamespace::CosmeticOutfitSystemConfig::__cordl_internal_get_itemSeparator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___itemSeparator;
}
constexpr char16_t const& GlobalNamespace::CosmeticOutfitSystemConfig::__cordl_internal_get_itemSeparator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___itemSeparator;
}
constexpr void GlobalNamespace::CosmeticOutfitSystemConfig::__cordl_internal_set_itemSeparator(char16_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___itemSeparator = value;
}
constexpr ::StringW& GlobalNamespace::CosmeticOutfitSystemConfig::__cordl_internal_get_selectedOutfitPref()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selectedOutfitPref;
}
constexpr ::StringW const& GlobalNamespace::CosmeticOutfitSystemConfig::__cordl_internal_get_selectedOutfitPref() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selectedOutfitPref;
}
constexpr void GlobalNamespace::CosmeticOutfitSystemConfig::__cordl_internal_set_selectedOutfitPref(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___selectedOutfitPref = value;
}
inline void GlobalNamespace::CosmeticOutfitSystemConfig::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticOutfitSystemConfig*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CosmeticOutfitSystemConfig* GlobalNamespace::CosmeticOutfitSystemConfig::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CosmeticOutfitSystemConfig*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CosmeticOutfitSystemConfig::CosmeticOutfitSystemConfig()   {
}
