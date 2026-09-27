#pragma once
// IWYU pragma private; include "Fusion/Photon/Realtime/Extension/RealtimeExtensions_RoomInfo.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/Photon/Realtime/Extension/zzzz__RealtimeExtensions_RoomInfo_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__RoomInfo_def.hpp"
#include "Fusion/zzzz__SessionProperty_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
//  Writing Method size for method: ::Fusion::Photon::Realtime::Extension::RealtimeExtensions_RoomInfo.GetCustomProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW,::Fusion::SessionProperty*>* (*)(::Fusion::Photon::Realtime::RoomInfo*)>(&::Fusion::Photon::Realtime::Extension::RealtimeExtensions_RoomInfo::GetCustomProperties)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5f69054;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Extension::RealtimeExtensions_RoomInfo*>(),
                        {"GetCustomProperties", {}, {::i2c::type_of<::Fusion::Photon::Realtime::RoomInfo*>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::Collections::Generic::Dictionary_2<::StringW,::Fusion::SessionProperty*>* Fusion::Photon::Realtime::Extension::RealtimeExtensions_RoomInfo::GetCustomProperties(::Fusion::Photon::Realtime::RoomInfo*  roomInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Extension::RealtimeExtensions_RoomInfo*>(),
                        {"GetCustomProperties", {}, {::i2c::type_of<::Fusion::Photon::Realtime::RoomInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW,::Fusion::SessionProperty*>*>(nullptr, ___internal_method, roomInfo);
}
// Ctor Parameters []
constexpr ::Fusion::Photon::Realtime::Extension::RealtimeExtensions_RoomInfo::RealtimeExtensions_RoomInfo()   {
}
