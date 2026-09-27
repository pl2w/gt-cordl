#pragma once
// IWYU pragma private; include "Fusion/Photon/Realtime/RaiseEventOptions.hpp"
#include "Fusion/Photon/Realtime/zzzz__EventCaching_impl.hpp"
#include "Fusion/Photon/Realtime/zzzz__ReceiverGroup_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/Photon/Realtime/zzzz__RaiseEventOptions_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__WebFlags_def.hpp"
//  Writing Method size for method: ::Fusion::Photon::Realtime::RaiseEventOptions._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::RaiseEventOptions::*)()>(&::Fusion::Photon::Realtime::RaiseEventOptions::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5f5dc6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::RaiseEventOptions*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Fusion::Photon::Realtime::EventCaching& Fusion::Photon::Realtime::RaiseEventOptions::__cordl_internal_get_CachingOption()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CachingOption;
}
constexpr ::Fusion::Photon::Realtime::EventCaching const& Fusion::Photon::Realtime::RaiseEventOptions::__cordl_internal_get_CachingOption() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CachingOption;
}
constexpr void Fusion::Photon::Realtime::RaiseEventOptions::__cordl_internal_set_CachingOption(::Fusion::Photon::Realtime::EventCaching  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CachingOption = value;
}
constexpr uint8_t& Fusion::Photon::Realtime::RaiseEventOptions::__cordl_internal_get_InterestGroup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InterestGroup;
}
constexpr uint8_t const& Fusion::Photon::Realtime::RaiseEventOptions::__cordl_internal_get_InterestGroup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InterestGroup;
}
constexpr void Fusion::Photon::Realtime::RaiseEventOptions::__cordl_internal_set_InterestGroup(uint8_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___InterestGroup = value;
}
constexpr ::ArrayW<int32_t>& Fusion::Photon::Realtime::RaiseEventOptions::__cordl_internal_get_TargetActors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TargetActors;
}
constexpr ::ArrayW<int32_t> const& Fusion::Photon::Realtime::RaiseEventOptions::__cordl_internal_get_TargetActors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TargetActors;
}
constexpr void Fusion::Photon::Realtime::RaiseEventOptions::__cordl_internal_set_TargetActors(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TargetActors = value;
}
constexpr ::Fusion::Photon::Realtime::ReceiverGroup& Fusion::Photon::Realtime::RaiseEventOptions::__cordl_internal_get_Receivers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Receivers;
}
constexpr ::Fusion::Photon::Realtime::ReceiverGroup const& Fusion::Photon::Realtime::RaiseEventOptions::__cordl_internal_get_Receivers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Receivers;
}
constexpr void Fusion::Photon::Realtime::RaiseEventOptions::__cordl_internal_set_Receivers(::Fusion::Photon::Realtime::ReceiverGroup  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Receivers = value;
}
constexpr uint8_t& Fusion::Photon::Realtime::RaiseEventOptions::__cordl_internal_get_SequenceChannel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SequenceChannel;
}
constexpr uint8_t const& Fusion::Photon::Realtime::RaiseEventOptions::__cordl_internal_get_SequenceChannel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SequenceChannel;
}
constexpr void Fusion::Photon::Realtime::RaiseEventOptions::__cordl_internal_set_SequenceChannel(uint8_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SequenceChannel = value;
}
constexpr ::Fusion::Photon::Realtime::WebFlags*& Fusion::Photon::Realtime::RaiseEventOptions::__cordl_internal_get_Flags()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Flags;
}
constexpr ::Fusion::Photon::Realtime::WebFlags* const& Fusion::Photon::Realtime::RaiseEventOptions::__cordl_internal_get_Flags() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Flags;
}
constexpr void Fusion::Photon::Realtime::RaiseEventOptions::__cordl_internal_set_Flags(::Fusion::Photon::Realtime::WebFlags*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Flags = value;
}
inline void Fusion::Photon::Realtime::RaiseEventOptions::setStaticF_Default(::Fusion::Photon::Realtime::RaiseEventOptions*  value)  {
::cordl_internals::setStaticField<::Fusion::Photon::Realtime::RaiseEventOptions*, "Default", ::Fusion::Photon::Realtime::RaiseEventOptions*>(std::forward<::Fusion::Photon::Realtime::RaiseEventOptions*>(value));
}
inline ::Fusion::Photon::Realtime::RaiseEventOptions* Fusion::Photon::Realtime::RaiseEventOptions::getStaticF_Default()  {
return ::cordl_internals::getStaticField<::Fusion::Photon::Realtime::RaiseEventOptions*, "Default", ::Fusion::Photon::Realtime::RaiseEventOptions*>();
}
inline void Fusion::Photon::Realtime::RaiseEventOptions::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::RaiseEventOptions*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::Photon::Realtime::RaiseEventOptions* Fusion::Photon::Realtime::RaiseEventOptions::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Photon::Realtime::RaiseEventOptions*>());
}
// Ctor Parameters []
constexpr ::Fusion::Photon::Realtime::RaiseEventOptions::RaiseEventOptions()   {
}
