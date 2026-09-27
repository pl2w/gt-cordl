#pragma once
// IWYU pragma private; include "GorillaNetworking/ReturnVstumpMapStatsRequest.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GorillaNetworking/zzzz__ReturnVstumpMapStatsRequest_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GorillaNetworking::ReturnVstumpMapStatsRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::ReturnVstumpMapStatsRequest::*)()>(&::GorillaNetworking::ReturnVstumpMapStatsRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c8c274;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ReturnVstumpMapStatsRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::StringW>*& GorillaNetworking::ReturnVstumpMapStatsRequest::__cordl_internal_get_mapIds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mapIds;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& GorillaNetworking::ReturnVstumpMapStatsRequest::__cordl_internal_get_mapIds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mapIds;
}
constexpr void GorillaNetworking::ReturnVstumpMapStatsRequest::__cordl_internal_set_mapIds(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mapIds = value;
}
inline void GorillaNetworking::ReturnVstumpMapStatsRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ReturnVstumpMapStatsRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaNetworking::ReturnVstumpMapStatsRequest* GorillaNetworking::ReturnVstumpMapStatsRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::ReturnVstumpMapStatsRequest*>());
}
// Ctor Parameters []
constexpr ::GorillaNetworking::ReturnVstumpMapStatsRequest::ReturnVstumpMapStatsRequest()   {
}
