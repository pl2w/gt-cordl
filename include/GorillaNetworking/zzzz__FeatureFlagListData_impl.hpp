#pragma once
// IWYU pragma private; include "GorillaNetworking/FeatureFlagListData.hpp"
#include "GorillaNetworking/zzzz__FeatureFlagData_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GorillaNetworking/zzzz__FeatureFlagListData_def.hpp"
//  Writing Method size for method: ::GorillaNetworking::FeatureFlagListData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::FeatureFlagListData::*)()>(&::GorillaNetworking::FeatureFlagListData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c90448;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::FeatureFlagListData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GorillaNetworking::FeatureFlagData*>& GorillaNetworking::FeatureFlagListData::__cordl_internal_get_flags()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flags;
}
constexpr ::ArrayW<::GorillaNetworking::FeatureFlagData*> const& GorillaNetworking::FeatureFlagListData::__cordl_internal_get_flags() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flags;
}
constexpr void GorillaNetworking::FeatureFlagListData::__cordl_internal_set_flags(::ArrayW<::GorillaNetworking::FeatureFlagData*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___flags = value;
}
inline void GorillaNetworking::FeatureFlagListData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::FeatureFlagListData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaNetworking::FeatureFlagListData* GorillaNetworking::FeatureFlagListData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::FeatureFlagListData*>());
}
// Ctor Parameters []
constexpr ::GorillaNetworking::FeatureFlagListData::FeatureFlagListData()   {
}
