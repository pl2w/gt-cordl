#pragma once
// IWYU pragma private; include "GorillaNetworking/BroadcastMyRoomRequest.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GorillaNetworking/zzzz__BroadcastMyRoomRequest_def.hpp"
//  Writing Method size for method: ::GorillaNetworking::BroadcastMyRoomRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::BroadcastMyRoomRequest::*)()>(&::GorillaNetworking::BroadcastMyRoomRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c8c24c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::BroadcastMyRoomRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GorillaNetworking::BroadcastMyRoomRequest::__cordl_internal_get_KeyToFollow()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___KeyToFollow;
}
constexpr ::StringW const& GorillaNetworking::BroadcastMyRoomRequest::__cordl_internal_get_KeyToFollow() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___KeyToFollow;
}
constexpr void GorillaNetworking::BroadcastMyRoomRequest::__cordl_internal_set_KeyToFollow(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___KeyToFollow = value;
}
constexpr ::StringW& GorillaNetworking::BroadcastMyRoomRequest::__cordl_internal_get_RoomToJoin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RoomToJoin;
}
constexpr ::StringW const& GorillaNetworking::BroadcastMyRoomRequest::__cordl_internal_get_RoomToJoin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RoomToJoin;
}
constexpr void GorillaNetworking::BroadcastMyRoomRequest::__cordl_internal_set_RoomToJoin(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RoomToJoin = value;
}
constexpr bool& GorillaNetworking::BroadcastMyRoomRequest::__cordl_internal_get_Set()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Set;
}
constexpr bool const& GorillaNetworking::BroadcastMyRoomRequest::__cordl_internal_get_Set() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Set;
}
constexpr void GorillaNetworking::BroadcastMyRoomRequest::__cordl_internal_set_Set(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Set = value;
}
inline void GorillaNetworking::BroadcastMyRoomRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::BroadcastMyRoomRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaNetworking::BroadcastMyRoomRequest* GorillaNetworking::BroadcastMyRoomRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::BroadcastMyRoomRequest*>());
}
// Ctor Parameters []
constexpr ::GorillaNetworking::BroadcastMyRoomRequest::BroadcastMyRoomRequest()   {
}
