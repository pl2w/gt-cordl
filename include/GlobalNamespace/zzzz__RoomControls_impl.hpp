#pragma once
// IWYU pragma private; include "GlobalNamespace/RoomControls.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__RoomControls_def.hpp"
#include "ExitGames/Client/Photon/zzzz__Hashtable_def.hpp"
#include "GlobalNamespace/zzzz__RoomControls_def.hpp"
#include "GorillaTag/zzzz__DelegateListProcessor_1_def.hpp"
#include "GorillaTag/zzzz__DelegateListProcessor_2_def.hpp"
#include "GorillaTag/zzzz__DelegateListProcessor_def.hpp"
#include "Photon/Realtime/zzzz__IInRoomCallbacks_def.hpp"
#include "Photon/Realtime/zzzz__Player_def.hpp"
#include "Photon/Realtime/zzzz__RaiseEventOptions_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyDictionary_2_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RoomControls.get_RoomControlsEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::RoomControls::get_RoomControlsEnabled)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5ad9438;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomControls*>(),
                        {"get_RoomControlsEnabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomControls.get_BlockedPlayers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyDictionary_2<::StringW,int64_t>* (*)()>(&::GlobalNamespace::RoomControls::get_BlockedPlayers)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5ad9490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomControls*>(),
                        {"get_BlockedPlayers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomControls.get_MutedPlayers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyDictionary_2<::StringW,int64_t>* (*)()>(&::GlobalNamespace::RoomControls::get_MutedPlayers)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5ad94e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomControls*>(),
                        {"get_MutedPlayers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomControls.SubscribeToRoomEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::RoomControls::SubscribeToRoomEvents)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x5ad9540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomControls*>(),
                        {"SubscribeToRoomEvents", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomControls.RemovePunCallbacks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::RoomControls::RemovePunCallbacks)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5ad9768;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomControls*>(),
                        {"RemovePunCallbacks", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomControls.ApplyRoomProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ExitGames::Client::Photon::Hashtable*)>(&::GlobalNamespace::RoomControls::ApplyRoomProperties)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x5ad97f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomControls*>(),
                        {"ApplyRoomProperties", {}, {::i2c::type_of<::ExitGames::Client::Photon::Hashtable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomControls.ReconcileRoomProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ExitGames::Client::Photon::Hashtable*)>(&::GlobalNamespace::RoomControls::ReconcileRoomProperties)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x5ad9c0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomControls*>(),
                        {"ReconcileRoomProperties", {}, {::i2c::type_of<::ExitGames::Client::Photon::Hashtable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomControls.ApplyRoomProperty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ExitGames::Client::Photon::Hashtable*, ::System::Collections::Generic::Dictionary_2<::StringW,int64_t>*)>(&::GlobalNamespace::RoomControls::ApplyRoomProperty)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x5ad9a90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomControls*>(),
                        {"ApplyRoomProperty", {}, {::i2c::type_of<::ExitGames::Client::Photon::Hashtable*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,int64_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomControls.ReconcileRoomProperty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ExitGames::Client::Photon::Hashtable*, ::System::Collections::Generic::Dictionary_2<::StringW,int64_t>*, ::GorillaTag::DelegateListProcessor_2<::StringW,bool>*)>(&::GlobalNamespace::RoomControls::ReconcileRoomProperty)> {
  constexpr static std::size_t size = 0x37c;
  constexpr static std::size_t addrs = 0x5ad9e94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomControls*>(),
                        {"ReconcileRoomProperty", {}, {::i2c::type_of<::ExitGames::Client::Photon::Hashtable*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,int64_t>*>(), ::i2c::type_of<::GorillaTag::DelegateListProcessor_2<::StringW,bool>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomControls.IsRoomControlsTrusted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::RoomControls::IsRoomControlsTrusted)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5ad9a28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomControls*>(),
                        {"IsRoomControlsTrusted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomControls.CanModerate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::RoomControls::CanModerate)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5ada210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomControls*>(),
                        {"CanModerate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomControls.CanModerate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::StringW>)>(&::GlobalNamespace::RoomControls::CanModerate)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x5ada26c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomControls*>(),
                        {"CanModerate", {}, {::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomControls.KickPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::GlobalNamespace::RoomControls::KickPlayer)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x5ada484;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomControls*>(),
                        {"KickPlayer", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomControls.KickAndBlockPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, int32_t)>(&::GlobalNamespace::RoomControls::KickAndBlockPlayer)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x5ada644;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomControls*>(),
                        {"KickAndBlockPlayer", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomControls.UnblockPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::GlobalNamespace::RoomControls::UnblockPlayer)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x5ada86c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomControls*>(),
                        {"UnblockPlayer", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomControls.MutePlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, int32_t)>(&::GlobalNamespace::RoomControls::MutePlayer)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x5ada9c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomControls*>(),
                        {"MutePlayer", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomControls.UnmutePlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::GlobalNamespace::RoomControls::UnmutePlayer)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x5adabf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomControls*>(),
                        {"UnmutePlayer", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::RoomControls::setStaticF_roomControlsEnabled(bool  value)  {
::cordl_internals::setStaticField<bool, "roomControlsEnabled", ::GlobalNamespace::RoomControls*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::RoomControls::getStaticF_roomControlsEnabled()  {
return ::cordl_internals::getStaticField<bool, "roomControlsEnabled", ::GlobalNamespace::RoomControls*>();
}
inline void GlobalNamespace::RoomControls::setStaticF_OnRoomControlsEnabledChanged(::GorillaTag::DelegateListProcessor_1<bool>*  value)  {
::cordl_internals::setStaticField<::GorillaTag::DelegateListProcessor_1<bool>*, "OnRoomControlsEnabledChanged", ::GlobalNamespace::RoomControls*>(std::forward<::GorillaTag::DelegateListProcessor_1<bool>*>(value));
}
inline ::GorillaTag::DelegateListProcessor_1<bool>* GlobalNamespace::RoomControls::getStaticF_OnRoomControlsEnabledChanged()  {
return ::cordl_internals::getStaticField<::GorillaTag::DelegateListProcessor_1<bool>*, "OnRoomControlsEnabledChanged", ::GlobalNamespace::RoomControls*>();
}
inline void GlobalNamespace::RoomControls::setStaticF_blockedPlayers(::System::Collections::Generic::Dictionary_2<::StringW,int64_t>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW,int64_t>*, "blockedPlayers", ::GlobalNamespace::RoomControls*>(std::forward<::System::Collections::Generic::Dictionary_2<::StringW,int64_t>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,int64_t>* GlobalNamespace::RoomControls::getStaticF_blockedPlayers()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW,int64_t>*, "blockedPlayers", ::GlobalNamespace::RoomControls*>();
}
inline void GlobalNamespace::RoomControls::setStaticF_OnPlayerBlockChanged(::GorillaTag::DelegateListProcessor_2<::StringW,bool>*  value)  {
::cordl_internals::setStaticField<::GorillaTag::DelegateListProcessor_2<::StringW,bool>*, "OnPlayerBlockChanged", ::GlobalNamespace::RoomControls*>(std::forward<::GorillaTag::DelegateListProcessor_2<::StringW,bool>*>(value));
}
inline ::GorillaTag::DelegateListProcessor_2<::StringW,bool>* GlobalNamespace::RoomControls::getStaticF_OnPlayerBlockChanged()  {
return ::cordl_internals::getStaticField<::GorillaTag::DelegateListProcessor_2<::StringW,bool>*, "OnPlayerBlockChanged", ::GlobalNamespace::RoomControls*>();
}
inline void GlobalNamespace::RoomControls::setStaticF_mutedPlayers(::System::Collections::Generic::Dictionary_2<::StringW,int64_t>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW,int64_t>*, "mutedPlayers", ::GlobalNamespace::RoomControls*>(std::forward<::System::Collections::Generic::Dictionary_2<::StringW,int64_t>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,int64_t>* GlobalNamespace::RoomControls::getStaticF_mutedPlayers()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW,int64_t>*, "mutedPlayers", ::GlobalNamespace::RoomControls*>();
}
inline void GlobalNamespace::RoomControls::setStaticF_OnPlayerMuteChanged(::GorillaTag::DelegateListProcessor_2<::StringW,bool>*  value)  {
::cordl_internals::setStaticField<::GorillaTag::DelegateListProcessor_2<::StringW,bool>*, "OnPlayerMuteChanged", ::GlobalNamespace::RoomControls*>(std::forward<::GorillaTag::DelegateListProcessor_2<::StringW,bool>*>(value));
}
inline ::GorillaTag::DelegateListProcessor_2<::StringW,bool>* GlobalNamespace::RoomControls::getStaticF_OnPlayerMuteChanged()  {
return ::cordl_internals::getStaticField<::GorillaTag::DelegateListProcessor_2<::StringW,bool>*, "OnPlayerMuteChanged", ::GlobalNamespace::RoomControls*>();
}
inline void GlobalNamespace::RoomControls::setStaticF_OnRoomStateLoaded(::GorillaTag::DelegateListProcessor*  value)  {
::cordl_internals::setStaticField<::GorillaTag::DelegateListProcessor*, "OnRoomStateLoaded", ::GlobalNamespace::RoomControls*>(std::forward<::GorillaTag::DelegateListProcessor*>(value));
}
inline ::GorillaTag::DelegateListProcessor* GlobalNamespace::RoomControls::getStaticF_OnRoomStateLoaded()  {
return ::cordl_internals::getStaticField<::GorillaTag::DelegateListProcessor*, "OnRoomStateLoaded", ::GlobalNamespace::RoomControls*>();
}
inline void GlobalNamespace::RoomControls::setStaticF_punCallbacks(::GlobalNamespace::RoomControls_PunCallbacks*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::RoomControls_PunCallbacks*, "punCallbacks", ::GlobalNamespace::RoomControls*>(std::forward<::GlobalNamespace::RoomControls_PunCallbacks*>(value));
}
inline ::GlobalNamespace::RoomControls_PunCallbacks* GlobalNamespace::RoomControls::getStaticF_punCallbacks()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::RoomControls_PunCallbacks*, "punCallbacks", ::GlobalNamespace::RoomControls*>();
}
inline void GlobalNamespace::RoomControls::setStaticF_RaiseToMasterClient(::Photon::Realtime::RaiseEventOptions*  value)  {
::cordl_internals::setStaticField<::Photon::Realtime::RaiseEventOptions*, "RaiseToMasterClient", ::GlobalNamespace::RoomControls*>(std::forward<::Photon::Realtime::RaiseEventOptions*>(value));
}
inline ::Photon::Realtime::RaiseEventOptions* GlobalNamespace::RoomControls::getStaticF_RaiseToMasterClient()  {
return ::cordl_internals::getStaticField<::Photon::Realtime::RaiseEventOptions*, "RaiseToMasterClient", ::GlobalNamespace::RoomControls*>();
}
inline bool GlobalNamespace::RoomControls::get_RoomControlsEnabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomControls*>(),
                        {"get_RoomControlsEnabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::System::Collections::Generic::IReadOnlyDictionary_2<::StringW,int64_t>* GlobalNamespace::RoomControls::get_BlockedPlayers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomControls*>(),
                        {"get_BlockedPlayers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyDictionary_2<::StringW,int64_t>*>(nullptr, ___internal_method);
}
inline ::System::Collections::Generic::IReadOnlyDictionary_2<::StringW,int64_t>* GlobalNamespace::RoomControls::get_MutedPlayers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomControls*>(),
                        {"get_MutedPlayers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyDictionary_2<::StringW,int64_t>*>(nullptr, ___internal_method);
}
inline void GlobalNamespace::RoomControls::SubscribeToRoomEvents()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomControls*>(),
                        {"SubscribeToRoomEvents", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::RoomControls::RemovePunCallbacks()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomControls*>(),
                        {"RemovePunCallbacks", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::RoomControls::ApplyRoomProperties(::ExitGames::Client::Photon::Hashtable*  properties)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomControls*>(),
                        {"ApplyRoomProperties", {}, {::i2c::type_of<::ExitGames::Client::Photon::Hashtable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, properties);
}
inline void GlobalNamespace::RoomControls::ReconcileRoomProperties(::ExitGames::Client::Photon::Hashtable*  propertiesThatChanged)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomControls*>(),
                        {"ReconcileRoomProperties", {}, {::i2c::type_of<::ExitGames::Client::Photon::Hashtable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, propertiesThatChanged);
}
inline void GlobalNamespace::RoomControls::ApplyRoomProperty(::ExitGames::Client::Photon::Hashtable*  source, ::System::Collections::Generic::Dictionary_2<::StringW,int64_t>*  destination)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomControls*>(),
                        {"ApplyRoomProperty", {}, {::i2c::type_of<::ExitGames::Client::Photon::Hashtable*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,int64_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source, destination);
}
inline void GlobalNamespace::RoomControls::ReconcileRoomProperty(::ExitGames::Client::Photon::Hashtable*  source, ::System::Collections::Generic::Dictionary_2<::StringW,int64_t>*  destination, ::GorillaTag::DelegateListProcessor_2<::StringW,bool>*  onPropertyChanged)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomControls*>(),
                        {"ReconcileRoomProperty", {}, {::i2c::type_of<::ExitGames::Client::Photon::Hashtable*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,int64_t>*>(), ::i2c::type_of<::GorillaTag::DelegateListProcessor_2<::StringW,bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source, destination, onPropertyChanged);
}
inline bool GlobalNamespace::RoomControls::IsRoomControlsTrusted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomControls*>(),
                        {"IsRoomControlsTrusted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::RoomControls::CanModerate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomControls*>(),
                        {"CanModerate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::RoomControls::CanModerate(::by_ref<::StringW>  cannotReason)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomControls*>(),
                        {"CanModerate", {}, {::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, cannotReason);
}
inline void GlobalNamespace::RoomControls::KickPlayer(int32_t  targetActorNumber)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomControls*>(),
                        {"KickPlayer", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, targetActorNumber);
}
inline void GlobalNamespace::RoomControls::KickAndBlockPlayer(int32_t  targetActorNumber, int32_t  howManySeconds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomControls*>(),
                        {"KickAndBlockPlayer", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, targetActorNumber, howManySeconds);
}
inline void GlobalNamespace::RoomControls::UnblockPlayer(::StringW  targetUserId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomControls*>(),
                        {"UnblockPlayer", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, targetUserId);
}
inline void GlobalNamespace::RoomControls::MutePlayer(int32_t  targetActorNumber, int32_t  howManySeconds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomControls*>(),
                        {"MutePlayer", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, targetActorNumber, howManySeconds);
}
inline void GlobalNamespace::RoomControls::UnmutePlayer(::StringW  targetUserId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomControls*>(),
                        {"UnmutePlayer", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, targetUserId);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RoomControls::RoomControls()   {
}
//  Writing Method size for method: ::GlobalNamespace::RoomControls___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RoomControls___c::*)()>(&::GlobalNamespace::RoomControls___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5adb088;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomControls___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomControls___c._SubscribeToRoomEvents_b__21_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RoomControls___c::*)()>(&::GlobalNamespace::RoomControls___c::_SubscribeToRoomEvents_b__21_0)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x5adb090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomControls___c*>(),
                        {"<SubscribeToRoomEvents>b__21_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomControls___c._SubscribeToRoomEvents_b__21_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RoomControls___c::*)()>(&::GlobalNamespace::RoomControls___c::_SubscribeToRoomEvents_b__21_1)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5adb1b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomControls___c*>(),
                        {"<SubscribeToRoomEvents>b__21_1", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::RoomControls___c::setStaticF___9(::GlobalNamespace::RoomControls___c*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::RoomControls___c*, "<>9", ::GlobalNamespace::RoomControls___c*>(std::forward<::GlobalNamespace::RoomControls___c*>(value));
}
inline ::GlobalNamespace::RoomControls___c* GlobalNamespace::RoomControls___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::RoomControls___c*, "<>9", ::GlobalNamespace::RoomControls___c*>();
}
inline void GlobalNamespace::RoomControls___c::setStaticF___9__21_0(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "<>9__21_0", ::GlobalNamespace::RoomControls___c*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* GlobalNamespace::RoomControls___c::getStaticF___9__21_0()  {
return ::cordl_internals::getStaticField<::System::Action*, "<>9__21_0", ::GlobalNamespace::RoomControls___c*>();
}
inline void GlobalNamespace::RoomControls___c::setStaticF___9__21_1(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "<>9__21_1", ::GlobalNamespace::RoomControls___c*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* GlobalNamespace::RoomControls___c::getStaticF___9__21_1()  {
return ::cordl_internals::getStaticField<::System::Action*, "<>9__21_1", ::GlobalNamespace::RoomControls___c*>();
}
inline void GlobalNamespace::RoomControls___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomControls___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RoomControls___c::_SubscribeToRoomEvents_b__21_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomControls___c*>(),
                        {"<SubscribeToRoomEvents>b__21_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RoomControls___c::_SubscribeToRoomEvents_b__21_1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomControls___c*>(),
                        {"<SubscribeToRoomEvents>b__21_1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::RoomControls___c* GlobalNamespace::RoomControls___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RoomControls___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RoomControls___c::RoomControls___c()   {
}
//  Writing Method size for method: ::GlobalNamespace::RoomControls_PunCallbacks.Photon_Realtime_IInRoomCallbacks_OnRoomPropertiesUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RoomControls_PunCallbacks::*)(::ExitGames::Client::Photon::Hashtable*)>(&::GlobalNamespace::RoomControls_PunCallbacks::Photon_Realtime_IInRoomCallbacks_OnRoomPropertiesUpdate)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5adafbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomControls_PunCallbacks*>(),
                        {"Photon.Realtime.IInRoomCallbacks.OnRoomPropertiesUpdate", {}, {::i2c::type_of<::ExitGames::Client::Photon::Hashtable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomControls_PunCallbacks.Photon_Realtime_IInRoomCallbacks_OnPlayerEnteredRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RoomControls_PunCallbacks::*)(::Photon::Realtime::Player*)>(&::GlobalNamespace::RoomControls_PunCallbacks::Photon_Realtime_IInRoomCallbacks_OnPlayerEnteredRoom)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5adb010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomControls_PunCallbacks*>(),
                        {"Photon.Realtime.IInRoomCallbacks.OnPlayerEnteredRoom", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomControls_PunCallbacks.Photon_Realtime_IInRoomCallbacks_OnPlayerLeftRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RoomControls_PunCallbacks::*)(::Photon::Realtime::Player*)>(&::GlobalNamespace::RoomControls_PunCallbacks::Photon_Realtime_IInRoomCallbacks_OnPlayerLeftRoom)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5adb014;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomControls_PunCallbacks*>(),
                        {"Photon.Realtime.IInRoomCallbacks.OnPlayerLeftRoom", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomControls_PunCallbacks.Photon_Realtime_IInRoomCallbacks_OnPlayerPropertiesUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RoomControls_PunCallbacks::*)(::Photon::Realtime::Player*, ::ExitGames::Client::Photon::Hashtable*)>(&::GlobalNamespace::RoomControls_PunCallbacks::Photon_Realtime_IInRoomCallbacks_OnPlayerPropertiesUpdate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5adb018;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomControls_PunCallbacks*>(),
                        {"Photon.Realtime.IInRoomCallbacks.OnPlayerPropertiesUpdate", {}, {::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<::ExitGames::Client::Photon::Hashtable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomControls_PunCallbacks.Photon_Realtime_IInRoomCallbacks_OnMasterClientSwitched
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RoomControls_PunCallbacks::*)(::Photon::Realtime::Player*)>(&::GlobalNamespace::RoomControls_PunCallbacks::Photon_Realtime_IInRoomCallbacks_OnMasterClientSwitched)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5adb01c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomControls_PunCallbacks*>(),
                        {"Photon.Realtime.IInRoomCallbacks.OnMasterClientSwitched", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomControls_PunCallbacks._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RoomControls_PunCallbacks::*)()>(&::GlobalNamespace::RoomControls_PunCallbacks::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5adafb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomControls_PunCallbacks*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::RoomControls_PunCallbacks::Photon_Realtime_IInRoomCallbacks_OnRoomPropertiesUpdate(::ExitGames::Client::Photon::Hashtable*  propertiesThatChanged)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomControls_PunCallbacks*>(),
                        {"Photon.Realtime.IInRoomCallbacks.OnRoomPropertiesUpdate", {}, {::i2c::type_of<::ExitGames::Client::Photon::Hashtable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, propertiesThatChanged);
}
inline void GlobalNamespace::RoomControls_PunCallbacks::Photon_Realtime_IInRoomCallbacks_OnPlayerEnteredRoom(::Photon::Realtime::Player*  newPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomControls_PunCallbacks*>(),
                        {"Photon.Realtime.IInRoomCallbacks.OnPlayerEnteredRoom", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newPlayer);
}
inline void GlobalNamespace::RoomControls_PunCallbacks::Photon_Realtime_IInRoomCallbacks_OnPlayerLeftRoom(::Photon::Realtime::Player*  otherPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomControls_PunCallbacks*>(),
                        {"Photon.Realtime.IInRoomCallbacks.OnPlayerLeftRoom", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, otherPlayer);
}
inline void GlobalNamespace::RoomControls_PunCallbacks::Photon_Realtime_IInRoomCallbacks_OnPlayerPropertiesUpdate(::Photon::Realtime::Player*  targetPlayer, ::ExitGames::Client::Photon::Hashtable*  changedProps)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomControls_PunCallbacks*>(),
                        {"Photon.Realtime.IInRoomCallbacks.OnPlayerPropertiesUpdate", {}, {::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<::ExitGames::Client::Photon::Hashtable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targetPlayer, changedProps);
}
inline void GlobalNamespace::RoomControls_PunCallbacks::Photon_Realtime_IInRoomCallbacks_OnMasterClientSwitched(::Photon::Realtime::Player*  newMasterClient)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomControls_PunCallbacks*>(),
                        {"Photon.Realtime.IInRoomCallbacks.OnMasterClientSwitched", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newMasterClient);
}
inline void GlobalNamespace::RoomControls_PunCallbacks::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomControls_PunCallbacks*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::RoomControls_PunCallbacks* GlobalNamespace::RoomControls_PunCallbacks::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RoomControls_PunCallbacks*>());
}
/// @brief Convert operator to "::Photon::Realtime::IInRoomCallbacks"
constexpr  GlobalNamespace::RoomControls_PunCallbacks::operator ::Photon::Realtime::IInRoomCallbacks*() noexcept {
return static_cast<::Photon::Realtime::IInRoomCallbacks*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Realtime::IInRoomCallbacks"
constexpr ::Photon::Realtime::IInRoomCallbacks* GlobalNamespace::RoomControls_PunCallbacks::i___Photon__Realtime__IInRoomCallbacks() noexcept {
return static_cast<::Photon::Realtime::IInRoomCallbacks*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RoomControls_PunCallbacks::RoomControls_PunCallbacks()   {
}
