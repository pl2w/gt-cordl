#pragma once
// IWYU pragma private; include "GlobalNamespace/AppealAgeRequest.hpp"
#include "GlobalNamespace/zzzz__KIDRequestData_impl.hpp"
#include "GlobalNamespace/zzzz__AppealAgeRequest_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AppealAgeRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AppealAgeRequest::*)()>(&::GlobalNamespace::AppealAgeRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a261e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AppealAgeRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::AppealAgeRequest::__cordl_internal_get_Age()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Age;
}
constexpr int32_t const& GlobalNamespace::AppealAgeRequest::__cordl_internal_get_Age() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Age;
}
constexpr void GlobalNamespace::AppealAgeRequest::__cordl_internal_set_Age(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Age = value;
}
constexpr ::StringW& GlobalNamespace::AppealAgeRequest::__cordl_internal_get_Email()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Email;
}
constexpr ::StringW const& GlobalNamespace::AppealAgeRequest::__cordl_internal_get_Email() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Email;
}
constexpr void GlobalNamespace::AppealAgeRequest::__cordl_internal_set_Email(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Email = value;
}
constexpr ::StringW& GlobalNamespace::AppealAgeRequest::__cordl_internal_get_Locale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Locale;
}
constexpr ::StringW const& GlobalNamespace::AppealAgeRequest::__cordl_internal_get_Locale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Locale;
}
constexpr void GlobalNamespace::AppealAgeRequest::__cordl_internal_set_Locale(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Locale = value;
}
inline void GlobalNamespace::AppealAgeRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AppealAgeRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::AppealAgeRequest* GlobalNamespace::AppealAgeRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AppealAgeRequest*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AppealAgeRequest::AppealAgeRequest()   {
}
