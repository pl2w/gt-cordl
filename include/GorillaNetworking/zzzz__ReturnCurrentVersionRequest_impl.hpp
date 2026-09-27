#pragma once
// IWYU pragma private; include "GorillaNetworking/ReturnCurrentVersionRequest.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GorillaNetworking/zzzz__ReturnCurrentVersionRequest_def.hpp"
//  Writing Method size for method: ::GorillaNetworking::ReturnCurrentVersionRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::ReturnCurrentVersionRequest::*)()>(&::GorillaNetworking::ReturnCurrentVersionRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c8c244;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ReturnCurrentVersionRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GorillaNetworking::ReturnCurrentVersionRequest::__cordl_internal_get_CurrentVersion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CurrentVersion;
}
constexpr ::StringW const& GorillaNetworking::ReturnCurrentVersionRequest::__cordl_internal_get_CurrentVersion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CurrentVersion;
}
constexpr void GorillaNetworking::ReturnCurrentVersionRequest::__cordl_internal_set_CurrentVersion(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CurrentVersion = value;
}
constexpr ::System::Nullable_1<int32_t>& GorillaNetworking::ReturnCurrentVersionRequest::__cordl_internal_get_UpdatedSynchTest()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UpdatedSynchTest;
}
constexpr ::System::Nullable_1<int32_t> const& GorillaNetworking::ReturnCurrentVersionRequest::__cordl_internal_get_UpdatedSynchTest() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UpdatedSynchTest;
}
constexpr void GorillaNetworking::ReturnCurrentVersionRequest::__cordl_internal_set_UpdatedSynchTest(::System::Nullable_1<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UpdatedSynchTest = value;
}
inline void GorillaNetworking::ReturnCurrentVersionRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ReturnCurrentVersionRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaNetworking::ReturnCurrentVersionRequest* GorillaNetworking::ReturnCurrentVersionRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::ReturnCurrentVersionRequest*>());
}
// Ctor Parameters []
constexpr ::GorillaNetworking::ReturnCurrentVersionRequest::ReturnCurrentVersionRequest()   {
}
