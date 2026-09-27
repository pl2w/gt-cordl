#pragma once
// IWYU pragma private; include "GlobalNamespace/AttemptAgeUpdateRequest.hpp"
#include "GlobalNamespace/zzzz__KIDRequestData_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerPlatform_impl.hpp"
#include "GlobalNamespace/zzzz__AttemptAgeUpdateRequest_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AttemptAgeUpdateRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AttemptAgeUpdateRequest::*)()>(&::GlobalNamespace::AttemptAgeUpdateRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a261f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AttemptAgeUpdateRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::AttemptAgeUpdateRequest::__cordl_internal_get_Age()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Age;
}
constexpr int32_t const& GlobalNamespace::AttemptAgeUpdateRequest::__cordl_internal_get_Age() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Age;
}
constexpr void GlobalNamespace::AttemptAgeUpdateRequest::__cordl_internal_set_Age(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Age = value;
}
constexpr ::GlobalNamespace::PlayerPlatform& GlobalNamespace::AttemptAgeUpdateRequest::__cordl_internal_get_Platform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Platform;
}
constexpr ::GlobalNamespace::PlayerPlatform const& GlobalNamespace::AttemptAgeUpdateRequest::__cordl_internal_get_Platform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Platform;
}
constexpr void GlobalNamespace::AttemptAgeUpdateRequest::__cordl_internal_set_Platform(::GlobalNamespace::PlayerPlatform  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Platform = value;
}
inline void GlobalNamespace::AttemptAgeUpdateRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AttemptAgeUpdateRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::AttemptAgeUpdateRequest* GlobalNamespace::AttemptAgeUpdateRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AttemptAgeUpdateRequest*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AttemptAgeUpdateRequest::AttemptAgeUpdateRequest()   {
}
