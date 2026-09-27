#pragma once
// IWYU pragma private; include "GorillaNetworking/ScheduledEvents/ScheduledEventInfo.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "GorillaNetworking/ScheduledEvents/zzzz__ScheduledEventInfo_def.hpp"
//  Writing Method size for method: ::GorillaNetworking::ScheduledEvents::ScheduledEventInfo.get_None
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GorillaNetworking::ScheduledEvents::ScheduledEventInfo (*)()>(&::GorillaNetworking::ScheduledEvents::ScheduledEventInfo::get_None)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5ca1d78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventInfo>(),
                        {"get_None", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::GorillaNetworking::ScheduledEvents::ScheduledEventInfo GorillaNetworking::ScheduledEvents::ScheduledEventInfo::get_None()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventInfo>(),
                        {"get_None", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GorillaNetworking::ScheduledEvents::ScheduledEventInfo>(nullptr, ___internal_method);
}
// Ctor Parameters [CppParam { name: "isActive", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "scheduledStart", ty: "::System::DateTime", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GorillaNetworking::ScheduledEvents::ScheduledEventInfo::ScheduledEventInfo(bool  isActive, ::System::DateTime  scheduledStart) noexcept  {
this->isActive = isActive;
this->scheduledStart = scheduledStart;
}
// Ctor Parameters []
constexpr ::GorillaNetworking::ScheduledEvents::ScheduledEventInfo::ScheduledEventInfo()   {
}
