#pragma once
// IWYU pragma private; include "GorillaNetworking/ReturnQueueStatsRequest.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GorillaNetworking/zzzz__ReturnQueueStatsRequest_def.hpp"
//  Writing Method size for method: ::GorillaNetworking::ReturnQueueStatsRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::ReturnQueueStatsRequest::*)()>(&::GorillaNetworking::ReturnQueueStatsRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c8c26c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ReturnQueueStatsRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GorillaNetworking::ReturnQueueStatsRequest::__cordl_internal_get_queueName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___queueName;
}
constexpr ::StringW const& GorillaNetworking::ReturnQueueStatsRequest::__cordl_internal_get_queueName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___queueName;
}
constexpr void GorillaNetworking::ReturnQueueStatsRequest::__cordl_internal_set_queueName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___queueName = value;
}
inline void GorillaNetworking::ReturnQueueStatsRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ReturnQueueStatsRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaNetworking::ReturnQueueStatsRequest* GorillaNetworking::ReturnQueueStatsRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::ReturnQueueStatsRequest*>());
}
// Ctor Parameters []
constexpr ::GorillaNetworking::ReturnQueueStatsRequest::ReturnQueueStatsRequest()   {
}
