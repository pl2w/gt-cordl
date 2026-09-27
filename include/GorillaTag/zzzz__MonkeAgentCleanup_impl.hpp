#pragma once
// IWYU pragma private; include "GorillaTag/MonkeAgentCleanup.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GorillaTag/zzzz__MonkeAgentCleanup_def.hpp"
#include "ExitGames/Client/Photon/zzzz__Hashtable_def.hpp"
#include "GorillaTag/zzzz__TickSystemTimer_def.hpp"
#include "Photon/Pun/zzzz__PhotonView_def.hpp"
#include "Photon/Realtime/zzzz__RaiseEventOptions_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GorillaTag::MonkeAgentCleanup.RegisterForDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Photon::Pun::PhotonView*)>(&::GorillaTag::MonkeAgentCleanup::RegisterForDestroy)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x5d29c98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::MonkeAgentCleanup*>(),
                        {"RegisterForDestroy", {}, {::i2c::type_of<::Photon::Pun::PhotonView*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::MonkeAgentCleanup.OnLeftRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GorillaTag::MonkeAgentCleanup::OnLeftRoom)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5d29e94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::MonkeAgentCleanup*>(),
                        {"OnLeftRoom", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::MonkeAgentCleanup.CheckDestroyQueue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GorillaTag::MonkeAgentCleanup::CheckDestroyQueue)> {
  constexpr static std::size_t size = 0x3ac;
  constexpr static std::size_t addrs = 0x5d29f54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::MonkeAgentCleanup*>(),
                        {"CheckDestroyQueue", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GorillaTag::MonkeAgentCleanup::setStaticF_k_destroyQueue(::System::Collections::Generic::Queue_1<::UnityW<::Photon::Pun::PhotonView>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Queue_1<::UnityW<::Photon::Pun::PhotonView>>*, "k_destroyQueue", ::GorillaTag::MonkeAgentCleanup*>(std::forward<::System::Collections::Generic::Queue_1<::UnityW<::Photon::Pun::PhotonView>>*>(value));
}
inline ::System::Collections::Generic::Queue_1<::UnityW<::Photon::Pun::PhotonView>>* GorillaTag::MonkeAgentCleanup::getStaticF_k_destroyQueue()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Queue_1<::UnityW<::Photon::Pun::PhotonView>>*, "k_destroyQueue", ::GorillaTag::MonkeAgentCleanup*>();
}
inline void GorillaTag::MonkeAgentCleanup::setStaticF_k_destroyTargets(::System::Collections::Generic::HashSet_1<::UnityW<::Photon::Pun::PhotonView>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::HashSet_1<::UnityW<::Photon::Pun::PhotonView>>*, "k_destroyTargets", ::GorillaTag::MonkeAgentCleanup*>(std::forward<::System::Collections::Generic::HashSet_1<::UnityW<::Photon::Pun::PhotonView>>*>(value));
}
inline ::System::Collections::Generic::HashSet_1<::UnityW<::Photon::Pun::PhotonView>>* GorillaTag::MonkeAgentCleanup::getStaticF_k_destroyTargets()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::HashSet_1<::UnityW<::Photon::Pun::PhotonView>>*, "k_destroyTargets", ::GorillaTag::MonkeAgentCleanup*>();
}
inline void GorillaTag::MonkeAgentCleanup::setStaticF_k_destroyTimer(::GorillaTag::TickSystemTimer*  value)  {
::cordl_internals::setStaticField<::GorillaTag::TickSystemTimer*, "k_destroyTimer", ::GorillaTag::MonkeAgentCleanup*>(std::forward<::GorillaTag::TickSystemTimer*>(value));
}
inline ::GorillaTag::TickSystemTimer* GorillaTag::MonkeAgentCleanup::getStaticF_k_destroyTimer()  {
return ::cordl_internals::getStaticField<::GorillaTag::TickSystemTimer*, "k_destroyTimer", ::GorillaTag::MonkeAgentCleanup*>();
}
inline void GorillaTag::MonkeAgentCleanup::setStaticF_k_cacheInfo(::ExitGames::Client::Photon::Hashtable*  value)  {
::cordl_internals::setStaticField<::ExitGames::Client::Photon::Hashtable*, "k_cacheInfo", ::GorillaTag::MonkeAgentCleanup*>(std::forward<::ExitGames::Client::Photon::Hashtable*>(value));
}
inline ::ExitGames::Client::Photon::Hashtable* GorillaTag::MonkeAgentCleanup::getStaticF_k_cacheInfo()  {
return ::cordl_internals::getStaticField<::ExitGames::Client::Photon::Hashtable*, "k_cacheInfo", ::GorillaTag::MonkeAgentCleanup*>();
}
inline void GorillaTag::MonkeAgentCleanup::setStaticF_k_raiseEventOptions(::Photon::Realtime::RaiseEventOptions*  value)  {
::cordl_internals::setStaticField<::Photon::Realtime::RaiseEventOptions*, "k_raiseEventOptions", ::GorillaTag::MonkeAgentCleanup*>(std::forward<::Photon::Realtime::RaiseEventOptions*>(value));
}
inline ::Photon::Realtime::RaiseEventOptions* GorillaTag::MonkeAgentCleanup::getStaticF_k_raiseEventOptions()  {
return ::cordl_internals::getStaticField<::Photon::Realtime::RaiseEventOptions*, "k_raiseEventOptions", ::GorillaTag::MonkeAgentCleanup*>();
}
inline void GorillaTag::MonkeAgentCleanup::setStaticF_k_viewIdKey(::System::Object*  value)  {
::cordl_internals::setStaticField<::System::Object*, "k_viewIdKey", ::GorillaTag::MonkeAgentCleanup*>(std::forward<::System::Object*>(value));
}
inline ::System::Object* GorillaTag::MonkeAgentCleanup::getStaticF_k_viewIdKey()  {
return ::cordl_internals::getStaticField<::System::Object*, "k_viewIdKey", ::GorillaTag::MonkeAgentCleanup*>();
}
inline void GorillaTag::MonkeAgentCleanup::RegisterForDestroy(::Photon::Pun::PhotonView*  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::MonkeAgentCleanup*>(),
                        {"RegisterForDestroy", {}, {::i2c::type_of<::Photon::Pun::PhotonView*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, target);
}
inline void GorillaTag::MonkeAgentCleanup::OnLeftRoom()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::MonkeAgentCleanup*>(),
                        {"OnLeftRoom", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GorillaTag::MonkeAgentCleanup::CheckDestroyQueue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::MonkeAgentCleanup*>(),
                        {"CheckDestroyQueue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::GorillaTag::MonkeAgentCleanup::MonkeAgentCleanup()   {
}
