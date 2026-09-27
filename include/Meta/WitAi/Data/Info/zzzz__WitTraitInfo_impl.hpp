#pragma once
// IWYU pragma private; include "Meta/WitAi/Data/Info/WitTraitInfo.hpp"
#include "Meta/WitAi/Data/Info/zzzz__WitTraitValueInfo_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/WitAi/Data/Info/zzzz__WitTraitInfo_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::Data::Info::WitTraitInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Data::Info::WitTraitInfo::*)()>(&::Meta::WitAi::Data::Info::WitTraitInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e47d88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::Info::WitTraitInfo*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Meta::WitAi::Data::Info::WitTraitInfo::__cordl_internal_get_name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name;
}
constexpr ::StringW const& Meta::WitAi::Data::Info::WitTraitInfo::__cordl_internal_get_name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name;
}
constexpr void Meta::WitAi::Data::Info::WitTraitInfo::__cordl_internal_set_name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___name = value;
}
constexpr ::StringW& Meta::WitAi::Data::Info::WitTraitInfo::__cordl_internal_get_id()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___id;
}
constexpr ::StringW const& Meta::WitAi::Data::Info::WitTraitInfo::__cordl_internal_get_id() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___id;
}
constexpr void Meta::WitAi::Data::Info::WitTraitInfo::__cordl_internal_set_id(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___id = value;
}
constexpr ::ArrayW<::Meta::WitAi::Data::Info::WitTraitValueInfo>& Meta::WitAi::Data::Info::WitTraitInfo::__cordl_internal_get_values()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___values;
}
constexpr ::ArrayW<::Meta::WitAi::Data::Info::WitTraitValueInfo> const& Meta::WitAi::Data::Info::WitTraitInfo::__cordl_internal_get_values() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___values;
}
constexpr void Meta::WitAi::Data::Info::WitTraitInfo::__cordl_internal_set_values(::ArrayW<::Meta::WitAi::Data::Info::WitTraitValueInfo>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___values = value;
}
inline void Meta::WitAi::Data::Info::WitTraitInfo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::Info::WitTraitInfo*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::Data::Info::WitTraitInfo* Meta::WitAi::Data::Info::WitTraitInfo::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::Data::Info::WitTraitInfo*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::Data::Info::WitTraitInfo::WitTraitInfo()   {
}
