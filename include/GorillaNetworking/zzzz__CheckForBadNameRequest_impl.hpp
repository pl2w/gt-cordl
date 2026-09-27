#pragma once
// IWYU pragma private; include "GorillaNetworking/CheckForBadNameRequest.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GorillaNetworking/zzzz__CheckForBadNameRequest_def.hpp"
//  Writing Method size for method: ::GorillaNetworking::CheckForBadNameRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CheckForBadNameRequest::*)()>(&::GorillaNetworking::CheckForBadNameRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c8c264;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CheckForBadNameRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GorillaNetworking::CheckForBadNameRequest::__cordl_internal_get_name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name;
}
constexpr ::StringW const& GorillaNetworking::CheckForBadNameRequest::__cordl_internal_get_name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name;
}
constexpr void GorillaNetworking::CheckForBadNameRequest::__cordl_internal_set_name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___name = value;
}
constexpr bool& GorillaNetworking::CheckForBadNameRequest::__cordl_internal_get_forRoom()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___forRoom;
}
constexpr bool const& GorillaNetworking::CheckForBadNameRequest::__cordl_internal_get_forRoom() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___forRoom;
}
constexpr void GorillaNetworking::CheckForBadNameRequest::__cordl_internal_set_forRoom(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___forRoom = value;
}
constexpr bool& GorillaNetworking::CheckForBadNameRequest::__cordl_internal_get_forTroop()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___forTroop;
}
constexpr bool const& GorillaNetworking::CheckForBadNameRequest::__cordl_internal_get_forTroop() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___forTroop;
}
constexpr void GorillaNetworking::CheckForBadNameRequest::__cordl_internal_set_forTroop(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___forTroop = value;
}
inline void GorillaNetworking::CheckForBadNameRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CheckForBadNameRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaNetworking::CheckForBadNameRequest* GorillaNetworking::CheckForBadNameRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::CheckForBadNameRequest*>());
}
// Ctor Parameters []
constexpr ::GorillaNetworking::CheckForBadNameRequest::CheckForBadNameRequest()   {
}
