#pragma once
// IWYU pragma private; include "GlobalNamespace/GetRequirementsData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__GetRequirementsData_def.hpp"
#include "GlobalNamespace/zzzz__GetRequirementsResponse_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GetRequirementsData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GetRequirementsData::*)()>(&::GlobalNamespace::GetRequirementsData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a260cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GetRequirementsData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::GetRequirementsResponse*& GlobalNamespace::GetRequirementsData::__cordl_internal_get_AgeGateRequirements()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AgeGateRequirements;
}
constexpr ::GlobalNamespace::GetRequirementsResponse* const& GlobalNamespace::GetRequirementsData::__cordl_internal_get_AgeGateRequirements() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AgeGateRequirements;
}
constexpr void GlobalNamespace::GetRequirementsData::__cordl_internal_set_AgeGateRequirements(::GlobalNamespace::GetRequirementsResponse*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AgeGateRequirements = value;
}
inline void GlobalNamespace::GetRequirementsData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GetRequirementsData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GetRequirementsData* GlobalNamespace::GetRequirementsData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GetRequirementsData*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GetRequirementsData::GetRequirementsData()   {
}
