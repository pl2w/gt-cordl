#pragma once
// IWYU pragma private; include "GlobalNamespace/VerifyAgeRequest.hpp"
#include "GlobalNamespace/zzzz__KIDRequestData_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerPlatform_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "GlobalNamespace/zzzz__VerifyAgeRequest_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::VerifyAgeRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VerifyAgeRequest::*)()>(&::GlobalNamespace::VerifyAgeRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a262ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VerifyAgeRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Nullable_1<int32_t>& GlobalNamespace::VerifyAgeRequest::__cordl_internal_get_Age()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Age;
}
constexpr ::System::Nullable_1<int32_t> const& GlobalNamespace::VerifyAgeRequest::__cordl_internal_get_Age() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Age;
}
constexpr void GlobalNamespace::VerifyAgeRequest::__cordl_internal_set_Age(::System::Nullable_1<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Age = value;
}
constexpr ::System::Nullable_1<::GlobalNamespace::PlayerPlatform>& GlobalNamespace::VerifyAgeRequest::__cordl_internal_get_Platform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Platform;
}
constexpr ::System::Nullable_1<::GlobalNamespace::PlayerPlatform> const& GlobalNamespace::VerifyAgeRequest::__cordl_internal_get_Platform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Platform;
}
constexpr void GlobalNamespace::VerifyAgeRequest::__cordl_internal_set_Platform(::System::Nullable_1<::GlobalNamespace::PlayerPlatform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Platform = value;
}
inline void GlobalNamespace::VerifyAgeRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VerifyAgeRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::VerifyAgeRequest* GlobalNamespace::VerifyAgeRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::VerifyAgeRequest*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VerifyAgeRequest::VerifyAgeRequest()   {
}
