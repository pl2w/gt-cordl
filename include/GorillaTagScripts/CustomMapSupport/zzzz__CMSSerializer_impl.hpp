#pragma once
// IWYU pragma private; include "GorillaTagScripts/CustomMapSupport/CMSSerializer.hpp"
#include "GlobalNamespace/zzzz__GorillaSerializer_impl.hpp"
#include "GorillaTagScripts/CustomMapSupport/zzzz__CMSSerializer_def.hpp"
#include "GlobalNamespace/zzzz__CallLimiter_def.hpp"
#include "GorillaTagScripts/CustomMapSupport/zzzz__CMSTrigger_def.hpp"
#include "Photon/Pun/zzzz__PhotonMessageInfo_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
//  Writing Method size for method: ::GorillaTagScripts::CustomMapSupport::CMSSerializer.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::CustomMapSupport::CMSSerializer::*)()>(&::GorillaTagScripts::CustomMapSupport::CMSSerializer::Awake)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5bd9b38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::CustomMapSupport::CMSSerializer*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::CustomMapSupport::CMSSerializer.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::CustomMapSupport::CMSSerializer::*)()>(&::GorillaTagScripts::CustomMapSupport::CMSSerializer::OnEnable)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x5bd9c34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::CustomMapSupport::CMSSerializer*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::CustomMapSupport::CMSSerializer.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::CustomMapSupport::CMSSerializer::*)()>(&::GorillaTagScripts::CustomMapSupport::CMSSerializer::OnDisable)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5bd9d5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::CustomMapSupport::CMSSerializer*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::CustomMapSupport::CMSSerializer.OnCustomMapLoaded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::CustomMapSupport::CMSSerializer::*)(bool)>(&::GorillaTagScripts::CustomMapSupport::CMSSerializer::OnCustomMapLoaded)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5bd9e2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::CustomMapSupport::CMSSerializer*>(),
                        {"OnCustomMapLoaded", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::CustomMapSupport::CMSSerializer.ResetSyncedMapObjects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GorillaTagScripts::CustomMapSupport::CMSSerializer::ResetSyncedMapObjects)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5bda030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::CustomMapSupport::CMSSerializer*>(),
                        {"ResetSyncedMapObjects", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::CustomMapSupport::CMSSerializer.RegisterTrigger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::GorillaTagScripts::CustomMapSupport::CMSTrigger*)>(&::GorillaTagScripts::CustomMapSupport::CMSSerializer::RegisterTrigger)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x5bda108;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::CustomMapSupport::CMSSerializer*>(),
                        {"RegisterTrigger", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GorillaTagScripts::CustomMapSupport::CMSTrigger*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::CustomMapSupport::CMSSerializer.TryGetRegisteredTrigger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint8_t, ::by_ref<::GorillaTagScripts::CustomMapSupport::CMSTrigger*>)>(&::GorillaTagScripts::CustomMapSupport::CMSSerializer::TryGetRegisteredTrigger)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x5bda2ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::CustomMapSupport::CMSSerializer*>(),
                        {"TryGetRegisteredTrigger", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<::by_ref<::GorillaTagScripts::CustomMapSupport::CMSTrigger*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::CustomMapSupport::CMSSerializer.UnregisterTriggers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::GorillaTagScripts::CustomMapSupport::CMSSerializer::UnregisterTriggers)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5bda468;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::CustomMapSupport::CMSSerializer*>(),
                        {"UnregisterTriggers", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::CustomMapSupport::CMSSerializer.ResetTrigger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint8_t)>(&::GorillaTagScripts::CustomMapSupport::CMSSerializer::ResetTrigger)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5bda4e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::CustomMapSupport::CMSSerializer*>(),
                        {"ResetTrigger", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::CustomMapSupport::CMSSerializer.RequestSyncTriggerHistory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GorillaTagScripts::CustomMapSupport::CMSSerializer::RequestSyncTriggerHistory)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x5bd9e8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::CustomMapSupport::CMSSerializer*>(),
                        {"RequestSyncTriggerHistory", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::CustomMapSupport::CMSSerializer.RequestSyncTriggerHistory_RPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::CustomMapSupport::CMSSerializer::*)(::Photon::Pun::PhotonMessageInfo)>(&::GorillaTagScripts::CustomMapSupport::CMSSerializer::RequestSyncTriggerHistory_RPC)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x5bda568;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::CustomMapSupport::CMSSerializer*>(),
                        {"RequestSyncTriggerHistory_RPC", {}, {::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::CustomMapSupport::CMSSerializer.SyncTriggerHistory_RPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::CustomMapSupport::CMSSerializer::*)(::ArrayW<uint8_t>, ::Photon::Pun::PhotonMessageInfo)>(&::GorillaTagScripts::CustomMapSupport::CMSSerializer::SyncTriggerHistory_RPC)> {
  constexpr static std::size_t size = 0x39c;
  constexpr static std::size_t addrs = 0x5bda868;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::CustomMapSupport::CMSSerializer*>(),
                        {"SyncTriggerHistory_RPC", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::CustomMapSupport::CMSSerializer.SyncTriggerCounts_RPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::CustomMapSupport::CMSSerializer::*)(::System::Collections::Generic::Dictionary_2<uint8_t,uint8_t>*, ::Photon::Pun::PhotonMessageInfo)>(&::GorillaTagScripts::CustomMapSupport::CMSSerializer::SyncTriggerCounts_RPC)> {
  constexpr static std::size_t size = 0x398;
  constexpr static std::size_t addrs = 0x5bdae5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::CustomMapSupport::CMSSerializer*>(),
                        {"SyncTriggerCounts_RPC", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<uint8_t,uint8_t>*>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::CustomMapSupport::CMSSerializer.ProcessSceneLoad
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::GorillaTagScripts::CustomMapSupport::CMSSerializer::ProcessSceneLoad)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x5bdb60c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::CustomMapSupport::CMSSerializer*>(),
                        {"ProcessSceneLoad", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::CustomMapSupport::CMSSerializer.ProcessTriggerHistory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::GorillaTagScripts::CustomMapSupport::CMSSerializer::ProcessTriggerHistory)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x5bdac04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::CustomMapSupport::CMSSerializer*>(),
                        {"ProcessTriggerHistory", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::CustomMapSupport::CMSSerializer.ProcessTriggerCounts
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::GorillaTagScripts::CustomMapSupport::CMSSerializer::ProcessTriggerCounts)> {
  constexpr static std::size_t size = 0x418;
  constexpr static std::size_t addrs = 0x5bdb1f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::CustomMapSupport::CMSSerializer*>(),
                        {"ProcessTriggerCounts", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::CustomMapSupport::CMSSerializer.RequestTrigger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint8_t)>(&::GorillaTagScripts::CustomMapSupport::CMSSerializer::RequestTrigger)> {
  constexpr static std::size_t size = 0x3bc;
  constexpr static std::size_t addrs = 0x5bdb8bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::CustomMapSupport::CMSSerializer*>(),
                        {"RequestTrigger", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::CustomMapSupport::CMSSerializer.RequestTrigger_RPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::CustomMapSupport::CMSSerializer::*)(uint8_t, ::Photon::Pun::PhotonMessageInfo)>(&::GorillaTagScripts::CustomMapSupport::CMSSerializer::RequestTrigger_RPC)> {
  constexpr static std::size_t size = 0x42c;
  constexpr static std::size_t addrs = 0x5bdbf04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::CustomMapSupport::CMSSerializer*>(),
                        {"RequestTrigger_RPC", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::CustomMapSupport::CMSSerializer.ActivateTrigger_RPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::CustomMapSupport::CMSSerializer::*)(uint8_t, int32_t, ::Photon::Pun::PhotonMessageInfo)>(&::GorillaTagScripts::CustomMapSupport::CMSSerializer::ActivateTrigger_RPC)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x5bdc4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::CustomMapSupport::CMSSerializer*>(),
                        {"ActivateTrigger_RPC", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::CustomMapSupport::CMSSerializer.ActivateTrigger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::CustomMapSupport::CMSSerializer::*)(uint8_t, double_t, bool)>(&::GorillaTagScripts::CustomMapSupport::CMSSerializer::ActivateTrigger)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x5bdbc78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::CustomMapSupport::CMSSerializer*>(),
                        {"ActivateTrigger", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::CustomMapSupport::CMSSerializer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::CustomMapSupport::CMSSerializer::*)()>(&::GorillaTagScripts::CustomMapSupport::CMSSerializer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bdc74c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::CustomMapSupport::CMSSerializer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GorillaTagScripts::CustomMapSupport::CMSSerializer::setStaticF_instance(::UnityW<::GorillaTagScripts::CustomMapSupport::CMSSerializer>  value)  {
::cordl_internals::setStaticField<::UnityW<::GorillaTagScripts::CustomMapSupport::CMSSerializer>, "instance", ::GorillaTagScripts::CustomMapSupport::CMSSerializer*>(std::forward<::UnityW<::GorillaTagScripts::CustomMapSupport::CMSSerializer>>(value));
}
inline ::UnityW<::GorillaTagScripts::CustomMapSupport::CMSSerializer> GorillaTagScripts::CustomMapSupport::CMSSerializer::getStaticF_instance()  {
return ::cordl_internals::getStaticField<::UnityW<::GorillaTagScripts::CustomMapSupport::CMSSerializer>, "instance", ::GorillaTagScripts::CustomMapSupport::CMSSerializer*>();
}
inline void GorillaTagScripts::CustomMapSupport::CMSSerializer::setStaticF_hasInstance(bool  value)  {
::cordl_internals::setStaticField<bool, "hasInstance", ::GorillaTagScripts::CustomMapSupport::CMSSerializer*>(std::forward<bool>(value));
}
inline bool GorillaTagScripts::CustomMapSupport::CMSSerializer::getStaticF_hasInstance()  {
return ::cordl_internals::getStaticField<bool, "hasInstance", ::GorillaTagScripts::CustomMapSupport::CMSSerializer*>();
}
inline void GorillaTagScripts::CustomMapSupport::CMSSerializer::setStaticF_registeredTriggersPerScene(::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<uint8_t,::UnityW<::GorillaTagScripts::CustomMapSupport::CMSTrigger>>*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<uint8_t,::UnityW<::GorillaTagScripts::CustomMapSupport::CMSTrigger>>*>*, "registeredTriggersPerScene", ::GorillaTagScripts::CustomMapSupport::CMSSerializer*>(std::forward<::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<uint8_t,::UnityW<::GorillaTagScripts::CustomMapSupport::CMSTrigger>>*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<uint8_t,::UnityW<::GorillaTagScripts::CustomMapSupport::CMSTrigger>>*>* GorillaTagScripts::CustomMapSupport::CMSSerializer::getStaticF_registeredTriggersPerScene()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<uint8_t,::UnityW<::GorillaTagScripts::CustomMapSupport::CMSTrigger>>*>*, "registeredTriggersPerScene", ::GorillaTagScripts::CustomMapSupport::CMSSerializer*>();
}
inline void GorillaTagScripts::CustomMapSupport::CMSSerializer::setStaticF_triggerHistory(::System::Collections::Generic::List_1<uint8_t>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<uint8_t>*, "triggerHistory", ::GorillaTagScripts::CustomMapSupport::CMSSerializer*>(std::forward<::System::Collections::Generic::List_1<uint8_t>*>(value));
}
inline ::System::Collections::Generic::List_1<uint8_t>* GorillaTagScripts::CustomMapSupport::CMSSerializer::getStaticF_triggerHistory()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<uint8_t>*, "triggerHistory", ::GorillaTagScripts::CustomMapSupport::CMSSerializer*>();
}
inline void GorillaTagScripts::CustomMapSupport::CMSSerializer::setStaticF_triggerCounts(::System::Collections::Generic::Dictionary_2<uint8_t,uint8_t>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<uint8_t,uint8_t>*, "triggerCounts", ::GorillaTagScripts::CustomMapSupport::CMSSerializer*>(std::forward<::System::Collections::Generic::Dictionary_2<uint8_t,uint8_t>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<uint8_t,uint8_t>* GorillaTagScripts::CustomMapSupport::CMSSerializer::getStaticF_triggerCounts()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<uint8_t,uint8_t>*, "triggerCounts", ::GorillaTagScripts::CustomMapSupport::CMSSerializer*>();
}
inline void GorillaTagScripts::CustomMapSupport::CMSSerializer::setStaticF_waitingForTriggerHistory(bool  value)  {
::cordl_internals::setStaticField<bool, "waitingForTriggerHistory", ::GorillaTagScripts::CustomMapSupport::CMSSerializer*>(std::forward<bool>(value));
}
inline bool GorillaTagScripts::CustomMapSupport::CMSSerializer::getStaticF_waitingForTriggerHistory()  {
return ::cordl_internals::getStaticField<bool, "waitingForTriggerHistory", ::GorillaTagScripts::CustomMapSupport::CMSSerializer*>();
}
inline void GorillaTagScripts::CustomMapSupport::CMSSerializer::setStaticF_scenesWaitingForTriggerHistory(::System::Collections::Generic::List_1<::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::StringW>*, "scenesWaitingForTriggerHistory", ::GorillaTagScripts::CustomMapSupport::CMSSerializer*>(std::forward<::System::Collections::Generic::List_1<::StringW>*>(value));
}
inline ::System::Collections::Generic::List_1<::StringW>* GorillaTagScripts::CustomMapSupport::CMSSerializer::getStaticF_scenesWaitingForTriggerHistory()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::StringW>*, "scenesWaitingForTriggerHistory", ::GorillaTagScripts::CustomMapSupport::CMSSerializer*>();
}
inline void GorillaTagScripts::CustomMapSupport::CMSSerializer::setStaticF_waitingForTriggerCounts(bool  value)  {
::cordl_internals::setStaticField<bool, "waitingForTriggerCounts", ::GorillaTagScripts::CustomMapSupport::CMSSerializer*>(std::forward<bool>(value));
}
inline bool GorillaTagScripts::CustomMapSupport::CMSSerializer::getStaticF_waitingForTriggerCounts()  {
return ::cordl_internals::getStaticField<bool, "waitingForTriggerCounts", ::GorillaTagScripts::CustomMapSupport::CMSSerializer*>();
}
inline void GorillaTagScripts::CustomMapSupport::CMSSerializer::setStaticF_scenesWaitingForTriggerCounts(::System::Collections::Generic::List_1<::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::StringW>*, "scenesWaitingForTriggerCounts", ::GorillaTagScripts::CustomMapSupport::CMSSerializer*>(std::forward<::System::Collections::Generic::List_1<::StringW>*>(value));
}
inline ::System::Collections::Generic::List_1<::StringW>* GorillaTagScripts::CustomMapSupport::CMSSerializer::getStaticF_scenesWaitingForTriggerCounts()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::StringW>*, "scenesWaitingForTriggerCounts", ::GorillaTagScripts::CustomMapSupport::CMSSerializer*>();
}
inline void GorillaTagScripts::CustomMapSupport::CMSSerializer::setStaticF_ActivateTriggerCallLimiter(::GlobalNamespace::CallLimiter*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::CallLimiter*, "ActivateTriggerCallLimiter", ::GorillaTagScripts::CustomMapSupport::CMSSerializer*>(std::forward<::GlobalNamespace::CallLimiter*>(value));
}
inline ::GlobalNamespace::CallLimiter* GorillaTagScripts::CustomMapSupport::CMSSerializer::getStaticF_ActivateTriggerCallLimiter()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::CallLimiter*, "ActivateTriggerCallLimiter", ::GorillaTagScripts::CustomMapSupport::CMSSerializer*>();
}
inline void GorillaTagScripts::CustomMapSupport::CMSSerializer::setStaticF_OnTriggerHistoryProcessedForScene(::UnityEngine::Events::UnityEvent_1<::StringW>*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Events::UnityEvent_1<::StringW>*, "OnTriggerHistoryProcessedForScene", ::GorillaTagScripts::CustomMapSupport::CMSSerializer*>(std::forward<::UnityEngine::Events::UnityEvent_1<::StringW>*>(value));
}
inline ::UnityEngine::Events::UnityEvent_1<::StringW>* GorillaTagScripts::CustomMapSupport::CMSSerializer::getStaticF_OnTriggerHistoryProcessedForScene()  {
return ::cordl_internals::getStaticField<::UnityEngine::Events::UnityEvent_1<::StringW>*, "OnTriggerHistoryProcessedForScene", ::GorillaTagScripts::CustomMapSupport::CMSSerializer*>();
}
inline void GorillaTagScripts::CustomMapSupport::CMSSerializer::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::CustomMapSupport::CMSSerializer*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::CustomMapSupport::CMSSerializer::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::CustomMapSupport::CMSSerializer*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::CustomMapSupport::CMSSerializer::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::CustomMapSupport::CMSSerializer*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::CustomMapSupport::CMSSerializer::OnCustomMapLoaded(bool  success)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::CustomMapSupport::CMSSerializer*>(),
                        {"OnCustomMapLoaded", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, success);
}
inline void GorillaTagScripts::CustomMapSupport::CMSSerializer::ResetSyncedMapObjects()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::CustomMapSupport::CMSSerializer*>(),
                        {"ResetSyncedMapObjects", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GorillaTagScripts::CustomMapSupport::CMSSerializer::RegisterTrigger(::StringW  sceneName, ::GorillaTagScripts::CustomMapSupport::CMSTrigger*  trigger)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::CustomMapSupport::CMSSerializer*>(),
                        {"RegisterTrigger", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GorillaTagScripts::CustomMapSupport::CMSTrigger*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sceneName, trigger);
}
inline bool GorillaTagScripts::CustomMapSupport::CMSSerializer::TryGetRegisteredTrigger(uint8_t  triggerID, ::by_ref<::GorillaTagScripts::CustomMapSupport::CMSTrigger*>  trigger)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::CustomMapSupport::CMSSerializer*>(),
                        {"TryGetRegisteredTrigger", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<::by_ref<::GorillaTagScripts::CustomMapSupport::CMSTrigger*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, triggerID, trigger);
}
inline void GorillaTagScripts::CustomMapSupport::CMSSerializer::UnregisterTriggers(::StringW  forScene)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::CustomMapSupport::CMSSerializer*>(),
                        {"UnregisterTriggers", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, forScene);
}
inline void GorillaTagScripts::CustomMapSupport::CMSSerializer::ResetTrigger(uint8_t  triggerID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::CustomMapSupport::CMSSerializer*>(),
                        {"ResetTrigger", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, triggerID);
}
inline void GorillaTagScripts::CustomMapSupport::CMSSerializer::RequestSyncTriggerHistory()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::CustomMapSupport::CMSSerializer*>(),
                        {"RequestSyncTriggerHistory", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GorillaTagScripts::CustomMapSupport::CMSSerializer::RequestSyncTriggerHistory_RPC(::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::CustomMapSupport::CMSSerializer*>(),
                        {"RequestSyncTriggerHistory_RPC", {}, {::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info);
}
inline void GorillaTagScripts::CustomMapSupport::CMSSerializer::SyncTriggerHistory_RPC(::ArrayW<uint8_t>  syncedTriggerHistory, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::CustomMapSupport::CMSSerializer*>(),
                        {"SyncTriggerHistory_RPC", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, syncedTriggerHistory, info);
}
inline void GorillaTagScripts::CustomMapSupport::CMSSerializer::SyncTriggerCounts_RPC(::System::Collections::Generic::Dictionary_2<uint8_t,uint8_t>*  syncedTriggerCounts, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::CustomMapSupport::CMSSerializer*>(),
                        {"SyncTriggerCounts_RPC", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<uint8_t,uint8_t>*>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, syncedTriggerCounts, info);
}
inline void GorillaTagScripts::CustomMapSupport::CMSSerializer::ProcessSceneLoad(::StringW  sceneName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::CustomMapSupport::CMSSerializer*>(),
                        {"ProcessSceneLoad", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sceneName);
}
inline void GorillaTagScripts::CustomMapSupport::CMSSerializer::ProcessTriggerHistory(::StringW  forScene)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::CustomMapSupport::CMSSerializer*>(),
                        {"ProcessTriggerHistory", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, forScene);
}
inline void GorillaTagScripts::CustomMapSupport::CMSSerializer::ProcessTriggerCounts(::StringW  forScene)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::CustomMapSupport::CMSSerializer*>(),
                        {"ProcessTriggerCounts", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, forScene);
}
inline void GorillaTagScripts::CustomMapSupport::CMSSerializer::RequestTrigger(uint8_t  triggerID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::CustomMapSupport::CMSSerializer*>(),
                        {"RequestTrigger", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, triggerID);
}
inline void GorillaTagScripts::CustomMapSupport::CMSSerializer::RequestTrigger_RPC(uint8_t  triggerID, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::CustomMapSupport::CMSSerializer*>(),
                        {"RequestTrigger_RPC", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, triggerID, info);
}
inline void GorillaTagScripts::CustomMapSupport::CMSSerializer::ActivateTrigger_RPC(uint8_t  triggerID, int32_t  originatingPlayer, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::CustomMapSupport::CMSSerializer*>(),
                        {"ActivateTrigger_RPC", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, triggerID, originatingPlayer, info);
}
inline void GorillaTagScripts::CustomMapSupport::CMSSerializer::ActivateTrigger(uint8_t  triggerID, double_t  triggerTime, bool  originatedLocally)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::CustomMapSupport::CMSSerializer*>(),
                        {"ActivateTrigger", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, triggerID, triggerTime, originatedLocally);
}
inline void GorillaTagScripts::CustomMapSupport::CMSSerializer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::CustomMapSupport::CMSSerializer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTagScripts::CustomMapSupport::CMSSerializer* GorillaTagScripts::CustomMapSupport::CMSSerializer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::CustomMapSupport::CMSSerializer*>());
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::CustomMapSupport::CMSSerializer::CMSSerializer()   {
}
