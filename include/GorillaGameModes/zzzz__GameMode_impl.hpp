#pragma once
// IWYU pragma private; include "GorillaGameModes/GameMode.hpp"
#include "GlobalNamespace/zzzz__GorillaGameManager_impl.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_impl.hpp"
#include "GorillaGameModes/zzzz__GameModeType_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaGameModes/zzzz__GameMode_def.hpp"
#include "Fusion/zzzz__NetworkObject_def.hpp"
#include "Fusion/zzzz__NetworkRunner_def.hpp"
#include "GlobalNamespace/zzzz__FusionGameModeData_def.hpp"
#include "GlobalNamespace/zzzz__GameModeSerializer_def.hpp"
#include "GlobalNamespace/zzzz__GorillaGameManager_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "GorillaGameModes/zzzz__GameModeType_def.hpp"
#include "GorillaGameModes/zzzz__GameModeZoneMapping_def.hpp"
#include "GorillaGameModes/zzzz__GameMode_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GorillaGameModes::GameMode.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaGameModes::GameMode::*)()>(&::GorillaGameModes::GameMode::Awake)> {
  constexpr static std::size_t size = 0x3e0;
  constexpr static std::size_t addrs = 0x5b72448;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaGameModes::GameMode*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaGameModes::GameMode.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaGameModes::GameMode::*)()>(&::GorillaGameModes::GameMode::OnDestroy)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5b72828;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaGameModes::GameMode*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaGameModes::GameMode.add_OnStartGameMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GorillaGameModes::GameMode_OnStartGameModeAction*)>(&::GorillaGameModes::GameMode::add_OnStartGameMode)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5b728ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaGameModes::GameMode*>(),
                        {"add_OnStartGameMode", {}, {::i2c::type_of<::GorillaGameModes::GameMode_OnStartGameModeAction*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaGameModes::GameMode.remove_OnStartGameMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GorillaGameModes::GameMode_OnStartGameModeAction*)>(&::GorillaGameModes::GameMode::remove_OnStartGameMode)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5b729c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaGameModes::GameMode*>(),
                        {"remove_OnStartGameMode", {}, {::i2c::type_of<::GorillaGameModes::GameMode_OnStartGameModeAction*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaGameModes::GameMode.get_ActiveGameMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::GorillaGameManager> (*)()>(&::GorillaGameModes::GameMode::get_ActiveGameMode)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5b72a9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaGameModes::GameMode*>(),
                        {"get_ActiveGameMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaGameModes::GameMode.get_ActiveNetworkHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::GameModeSerializer> (*)()>(&::GorillaGameModes::GameMode::get_ActiveNetworkHandler)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5b72af4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaGameModes::GameMode*>(),
                        {"get_ActiveNetworkHandler", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaGameModes::GameMode.get_GameModeZoneMapping
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GorillaGameModes::GameModeZoneMapping> (*)()>(&::GorillaGameModes::GameMode::get_GameModeZoneMapping)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5b72b4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaGameModes::GameMode*>(),
                        {"get_GameModeZoneMapping", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaGameModes::GameMode.get_CurrentGameModeType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GorillaGameModes::GameModeType (*)()>(&::GorillaGameModes::GameMode::get_CurrentGameModeType)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5b72bb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaGameModes::GameMode*>(),
                        {"get_CurrentGameModeType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaGameModes::GameMode.set_CurrentGameModeType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GorillaGameModes::GameModeType)>(&::GorillaGameModes::GameMode::set_CurrentGameModeType)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5b72c08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaGameModes::GameMode*>(),
                        {"set_CurrentGameModeType", {}, {::i2c::type_of<::GorillaGameModes::GameModeType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaGameModes::GameMode.get_CurrentGameModeFlag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::GorillaGameModes::GameMode::get_CurrentGameModeFlag)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5b72c64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaGameModes::GameMode*>(),
                        {"get_CurrentGameModeFlag", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaGameModes::GameMode.add_ParticipatingPlayersChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*,::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*>*)>(&::GorillaGameModes::GameMode::add_ParticipatingPlayersChanged)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5b72cf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaGameModes::GameMode*>(),
                        {"add_ParticipatingPlayersChanged", {}, {::i2c::type_of<::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*,::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaGameModes::GameMode.remove_ParticipatingPlayersChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*,::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*>*)>(&::GorillaGameModes::GameMode::remove_ParticipatingPlayersChanged)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5b72de8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaGameModes::GameMode*>(),
                        {"remove_ParticipatingPlayersChanged", {}, {::i2c::type_of<::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*,::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaGameModes::GameMode.StaticLoad
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GorillaGameModes::GameMode::StaticLoad)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x5b7326c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaGameModes::GameMode*>(),
                        {"StaticLoad", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaGameModes::GameMode.IsPlaying
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GorillaGameModes::GameModeType)>(&::GorillaGameModes::GameMode::IsPlaying)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5b73404;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaGameModes::GameMode*>(),
                        {"IsPlaying", {}, {::i2c::type_of<::GorillaGameModes::GameModeType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaGameModes::GameMode.LoadGameModeFromProperty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GorillaGameModes::GameMode::LoadGameModeFromProperty)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5b73498;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaGameModes::GameMode*>(),
                        {"LoadGameModeFromProperty", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaGameModes::GameMode.ChangeGameFromProperty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GorillaGameModes::GameMode::ChangeGameFromProperty)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5b73778;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaGameModes::GameMode*>(),
                        {"ChangeGameFromProperty", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaGameModes::GameMode.LoadGameModeFromProperty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::GorillaGameModes::GameMode::LoadGameModeFromProperty)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5b738e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaGameModes::GameMode*>(),
                        {"LoadGameModeFromProperty", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaGameModes::GameMode.ChangeGameFromProperty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::GorillaGameModes::GameMode::ChangeGameFromProperty)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5b7397c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaGameModes::GameMode*>(),
                        {"ChangeGameFromProperty", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaGameModes::GameMode.GetGameModeKeyFromRoomProp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::GorillaGameModes::GameMode::GetGameModeKeyFromRoomProp)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x5b739f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaGameModes::GameMode*>(),
                        {"GetGameModeKeyFromRoomProp", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaGameModes::GameMode.FindGameModeFromRoomProperty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::GorillaGameModes::GameMode::FindGameModeFromRoomProperty)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x5b734e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaGameModes::GameMode*>(),
                        {"FindGameModeFromRoomProperty", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaGameModes::GameMode.IsValidGameMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::GorillaGameModes::GameMode::IsValidGameMode)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5b73b28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaGameModes::GameMode*>(),
                        {"IsValidGameMode", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaGameModes::GameMode.FindGameModeInPropertyString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::GorillaGameModes::GameMode::FindGameModeInPropertyString)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5b73954;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaGameModes::GameMode*>(),
                        {"FindGameModeInPropertyString", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaGameModes::GameMode.LoadGameMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::GorillaGameModes::GameMode::LoadGameMode)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x5b73624;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaGameModes::GameMode*>(),
                        {"LoadGameMode", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaGameModes::GameMode.LoadGameMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t)>(&::GorillaGameModes::GameMode::LoadGameMode)> {
  constexpr static std::size_t size = 0x648;
  constexpr static std::size_t addrs = 0x5b73bc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaGameModes::GameMode*>(),
                        {"LoadGameMode", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaGameModes::GameMode.ChangeGameMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::GorillaGameModes::GameMode::ChangeGameMode)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5b737c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaGameModes::GameMode*>(),
                        {"ChangeGameMode", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaGameModes::GameMode.ChangeGameMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t)>(&::GorillaGameModes::GameMode::ChangeGameMode)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x5b74218;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaGameModes::GameMode*>(),
                        {"ChangeGameMode", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaGameModes::GameMode.SetupGameModeRemote
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::GameModeSerializer*)>(&::GorillaGameModes::GameMode::SetupGameModeRemote)> {
  constexpr static std::size_t size = 0x33c;
  constexpr static std::size_t addrs = 0x5b74540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaGameModes::GameMode*>(),
                        {"SetupGameModeRemote", {}, {::i2c::type_of<::GlobalNamespace::GameModeSerializer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaGameModes::GameMode.RemoveNetworkLink
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::GameModeSerializer*)>(&::GorillaGameModes::GameMode::RemoveNetworkLink)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x5b74910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaGameModes::GameMode*>(),
                        {"RemoveNetworkLink", {}, {::i2c::type_of<::GlobalNamespace::GameModeSerializer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaGameModes::GameMode.GetGameModeInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::GorillaGameManager> (*)(::GorillaGameModes::GameModeType)>(&::GorillaGameModes::GameMode::GetGameModeInstance)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5b74a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaGameModes::GameMode*>(),
                        {"GetGameModeInstance", {}, {::i2c::type_of<::GorillaGameModes::GameModeType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaGameModes::GameMode.GetGameModeInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::GorillaGameManager> (*)(int32_t)>(&::GorillaGameModes::GameMode::GetGameModeInstance)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x5b74aa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaGameModes::GameMode*>(),
                        {"GetGameModeInstance", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaGameModes::GameMode.ResetGameModes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GorillaGameModes::GameMode::ResetGameModes)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x5b74cc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaGameModes::GameMode*>(),
                        {"ResetGameModes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaGameModes::GameMode.StartGameModeSafe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::GorillaGameManager*)>(&::GorillaGameModes::GameMode::StartGameModeSafe)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5b7487c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaGameModes::GameMode*>(),
                        {"StartGameModeSafe", {}, {::i2c::type_of<::GlobalNamespace::GorillaGameManager*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaGameModes::GameMode.StopGameModeSafe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::GorillaGameManager*)>(&::GorillaGameModes::GameMode::StopGameModeSafe)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5b744ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaGameModes::GameMode*>(),
                        {"StopGameModeSafe", {}, {::i2c::type_of<::GlobalNamespace::GorillaGameManager*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaGameModes::GameMode.ResetGameModeSafe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::GorillaGameManager*)>(&::GorillaGameModes::GameMode::ResetGameModeSafe)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5b74f04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaGameModes::GameMode*>(),
                        {"ResetGameModeSafe", {}, {::i2c::type_of<::GlobalNamespace::GorillaGameManager*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaGameModes::GameMode.ReportTag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::NetPlayer*)>(&::GorillaGameModes::GameMode::ReportTag)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x5b74f98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaGameModes::GameMode*>(),
                        {"ReportTag", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaGameModes::GameMode.ReportHit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GorillaGameModes::GameMode::ReportHit)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x5b75168;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaGameModes::GameMode*>(),
                        {"ReportHit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaGameModes::GameMode.LocalIsTagged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::NetPlayer*)>(&::GorillaGameModes::GameMode::LocalIsTagged)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x5b75350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaGameModes::GameMode*>(),
                        {"LocalIsTagged", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaGameModes::GameMode.BroadcastRoundComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GorillaGameModes::GameMode::BroadcastRoundComplete)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x5b75490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaGameModes::GameMode*>(),
                        {"BroadcastRoundComplete", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaGameModes::GameMode.BroadcastTag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::NetPlayer*, ::GlobalNamespace::NetPlayer*)>(&::GorillaGameModes::GameMode::BroadcastTag)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x5b75658;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaGameModes::GameMode*>(),
                        {"BroadcastTag", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaGameModes::GameMode.get_ParticipatingPlayers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>* (*)()>(&::GorillaGameModes::GameMode::get_ParticipatingPlayers)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5b758c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaGameModes::GameMode*>(),
                        {"get_ParticipatingPlayers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaGameModes::GameMode.RefreshPlayers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GorillaGameModes::GameMode::RefreshPlayers)> {
  constexpr static std::size_t size = 0x63c;
  constexpr static std::size_t addrs = 0x5b7591c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaGameModes::GameMode*>(),
                        {"RefreshPlayers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaGameModes::GameMode.ContainsNetPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*, ::GlobalNamespace::NetPlayer*)>(&::GorillaGameModes::GameMode::ContainsNetPlayer)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5b76108;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaGameModes::GameMode*>(),
                        {"ContainsNetPlayer", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaGameModes::GameMode.ContainsNetPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ArrayW<::GlobalNamespace::NetPlayer*>, ::GlobalNamespace::NetPlayer*, int32_t)>(&::GorillaGameModes::GameMode::ContainsNetPlayer)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5b761d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaGameModes::GameMode*>(),
                        {"ContainsNetPlayer", {}, {::i2c::type_of<::ArrayW<::GlobalNamespace::NetPlayer*>>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaGameModes::GameMode.OptOut
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::VRRig*)>(&::GorillaGameModes::GameMode::OptOut)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5b76238;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaGameModes::GameMode*>(),
                        {"OptOut", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaGameModes::GameMode.OptOut
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::NetPlayer*)>(&::GorillaGameModes::GameMode::OptOut)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5b76354;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaGameModes::GameMode*>(),
                        {"OptOut", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaGameModes::GameMode.OptOut
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::GorillaGameModes::GameMode::OptOut)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5b762b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaGameModes::GameMode*>(),
                        {"OptOut", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaGameModes::GameMode.OptIn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::VRRig*)>(&::GorillaGameModes::GameMode::OptIn)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5b763c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaGameModes::GameMode*>(),
                        {"OptIn", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaGameModes::GameMode.OptIn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::NetPlayer*)>(&::GorillaGameModes::GameMode::OptIn)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5b764e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaGameModes::GameMode*>(),
                        {"OptIn", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaGameModes::GameMode.OptIn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::GorillaGameModes::GameMode::OptIn)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5b76440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaGameModes::GameMode*>(),
                        {"OptIn", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaGameModes::GameMode.CanParticipate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::NetPlayer*)>(&::GorillaGameModes::GameMode::CanParticipate)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x5b75f58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaGameModes::GameMode*>(),
                        {"CanParticipate", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaGameModes::GameMode._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaGameModes::GameMode::*)()>(&::GorillaGameModes::GameMode::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b76558;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaGameModes::GameMode*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GorillaGameModes::GameModeZoneMapping>& GorillaGameModes::GameMode::__cordl_internal_get_gameModeZoneMapping()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameModeZoneMapping;
}
constexpr ::UnityW<::GorillaGameModes::GameModeZoneMapping> const& GorillaGameModes::GameMode::__cordl_internal_get_gameModeZoneMapping() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameModeZoneMapping;
}
constexpr void GorillaGameModes::GameMode::__cordl_internal_set_gameModeZoneMapping(::UnityW<::GorillaGameModes::GameModeZoneMapping>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gameModeZoneMapping = value;
}
inline void GorillaGameModes::GameMode::setStaticF_OnStartGameMode(::GorillaGameModes::GameMode_OnStartGameModeAction*  value)  {
::cordl_internals::setStaticField<::GorillaGameModes::GameMode_OnStartGameModeAction*, "OnStartGameMode", ::GorillaGameModes::GameMode*>(std::forward<::GorillaGameModes::GameMode_OnStartGameModeAction*>(value));
}
inline ::GorillaGameModes::GameMode_OnStartGameModeAction* GorillaGameModes::GameMode::getStaticF_OnStartGameMode()  {
return ::cordl_internals::getStaticField<::GorillaGameModes::GameMode_OnStartGameModeAction*, "OnStartGameMode", ::GorillaGameModes::GameMode*>();
}
inline void GorillaGameModes::GameMode::setStaticF_instance(::UnityW<::GorillaGameModes::GameMode>  value)  {
::cordl_internals::setStaticField<::UnityW<::GorillaGameModes::GameMode>, "instance", ::GorillaGameModes::GameMode*>(std::forward<::UnityW<::GorillaGameModes::GameMode>>(value));
}
inline ::UnityW<::GorillaGameModes::GameMode> GorillaGameModes::GameMode::getStaticF_instance()  {
return ::cordl_internals::getStaticField<::UnityW<::GorillaGameModes::GameMode>, "instance", ::GorillaGameModes::GameMode*>();
}
inline void GorillaGameModes::GameMode::setStaticF_gameModeTable(::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GlobalNamespace::GorillaGameManager>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GlobalNamespace::GorillaGameManager>>*, "gameModeTable", ::GorillaGameModes::GameMode*>(std::forward<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GlobalNamespace::GorillaGameManager>>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GlobalNamespace::GorillaGameManager>>* GorillaGameModes::GameMode::getStaticF_gameModeTable()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GlobalNamespace::GorillaGameManager>>*, "gameModeTable", ::GorillaGameModes::GameMode*>();
}
inline void GorillaGameModes::GameMode::setStaticF_gameModeKeyByName(::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*, "gameModeKeyByName", ::GorillaGameModes::GameMode*>(std::forward<::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>* GorillaGameModes::GameMode::getStaticF_gameModeKeyByName()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*, "gameModeKeyByName", ::GorillaGameModes::GameMode*>();
}
inline void GorillaGameModes::GameMode::setStaticF_fusionTypeTable(::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GlobalNamespace::FusionGameModeData>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GlobalNamespace::FusionGameModeData>>*, "fusionTypeTable", ::GorillaGameModes::GameMode*>(std::forward<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GlobalNamespace::FusionGameModeData>>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GlobalNamespace::FusionGameModeData>>* GorillaGameModes::GameMode::getStaticF_fusionTypeTable()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GlobalNamespace::FusionGameModeData>>*, "fusionTypeTable", ::GorillaGameModes::GameMode*>();
}
inline void GorillaGameModes::GameMode::setStaticF_gameModes(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GorillaGameManager>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GorillaGameManager>>*, "gameModes", ::GorillaGameModes::GameMode*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GorillaGameManager>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GorillaGameManager>>* GorillaGameModes::GameMode::getStaticF_gameModes()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GorillaGameManager>>*, "gameModes", ::GorillaGameModes::GameMode*>();
}
inline void GorillaGameModes::GameMode::setStaticF_gameModeNames(::System::Collections::Generic::List_1<::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::StringW>*, "gameModeNames", ::GorillaGameModes::GameMode*>(std::forward<::System::Collections::Generic::List_1<::StringW>*>(value));
}
inline ::System::Collections::Generic::List_1<::StringW>* GorillaGameModes::GameMode::getStaticF_gameModeNames()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::StringW>*, "gameModeNames", ::GorillaGameModes::GameMode*>();
}
inline void GorillaGameModes::GameMode::setStaticF_activatedGameModes(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GorillaGameManager>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GorillaGameManager>>*, "activatedGameModes", ::GorillaGameModes::GameMode*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GorillaGameManager>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GorillaGameManager>>* GorillaGameModes::GameMode::getStaticF_activatedGameModes()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GorillaGameManager>>*, "activatedGameModes", ::GorillaGameModes::GameMode*>();
}
inline void GorillaGameModes::GameMode::setStaticF_activeGameMode(::UnityW<::GlobalNamespace::GorillaGameManager>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::GorillaGameManager>, "activeGameMode", ::GorillaGameModes::GameMode*>(std::forward<::UnityW<::GlobalNamespace::GorillaGameManager>>(value));
}
inline ::UnityW<::GlobalNamespace::GorillaGameManager> GorillaGameModes::GameMode::getStaticF_activeGameMode()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::GorillaGameManager>, "activeGameMode", ::GorillaGameModes::GameMode*>();
}
inline void GorillaGameModes::GameMode::setStaticF_activeNetworkHandler(::UnityW<::GlobalNamespace::GameModeSerializer>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::GameModeSerializer>, "activeNetworkHandler", ::GorillaGameModes::GameMode*>(std::forward<::UnityW<::GlobalNamespace::GameModeSerializer>>(value));
}
inline ::UnityW<::GlobalNamespace::GameModeSerializer> GorillaGameModes::GameMode::getStaticF_activeNetworkHandler()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::GameModeSerializer>, "activeNetworkHandler", ::GorillaGameModes::GameMode*>();
}
inline void GorillaGameModes::GameMode::setStaticF__CurrentGameModeType_k__BackingField(::GorillaGameModes::GameModeType  value)  {
::cordl_internals::setStaticField<::GorillaGameModes::GameModeType, "<CurrentGameModeType>k__BackingField", ::GorillaGameModes::GameMode*>(std::forward<::GorillaGameModes::GameModeType>(value));
}
inline ::GorillaGameModes::GameModeType GorillaGameModes::GameMode::getStaticF__CurrentGameModeType_k__BackingField()  {
return ::cordl_internals::getStaticField<::GorillaGameModes::GameModeType, "<CurrentGameModeType>k__BackingField", ::GorillaGameModes::GameMode*>();
}
inline void GorillaGameModes::GameMode::setStaticF_ParticipatingPlayersChanged(::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*,::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*>*  value)  {
::cordl_internals::setStaticField<::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*,::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*>*, "ParticipatingPlayersChanged", ::GorillaGameModes::GameMode*>(std::forward<::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*,::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*>*>(value));
}
inline ::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*,::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*>* GorillaGameModes::GameMode::getStaticF_ParticipatingPlayersChanged()  {
return ::cordl_internals::getStaticField<::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*,::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*>*, "ParticipatingPlayersChanged", ::GorillaGameModes::GameMode*>();
}
inline void GorillaGameModes::GameMode::setStaticF_optOutPlayers(::System::Collections::Generic::HashSet_1<int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::HashSet_1<int32_t>*, "optOutPlayers", ::GorillaGameModes::GameMode*>(std::forward<::System::Collections::Generic::HashSet_1<int32_t>*>(value));
}
inline ::System::Collections::Generic::HashSet_1<int32_t>* GorillaGameModes::GameMode::getStaticF_optOutPlayers()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::HashSet_1<int32_t>*, "optOutPlayers", ::GorillaGameModes::GameMode*>();
}
inline void GorillaGameModes::GameMode::setStaticF__participatingPlayers(::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*, "_participatingPlayers", ::GorillaGameModes::GameMode*>(std::forward<::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*>(value));
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>* GorillaGameModes::GameMode::getStaticF__participatingPlayers()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*, "_participatingPlayers", ::GorillaGameModes::GameMode*>();
}
inline void GorillaGameModes::GameMode::setStaticF__oldPlayersBuffer(::ArrayW<::GlobalNamespace::NetPlayer*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::GlobalNamespace::NetPlayer*>, "_oldPlayersBuffer", ::GorillaGameModes::GameMode*>(std::forward<::ArrayW<::GlobalNamespace::NetPlayer*>>(value));
}
inline ::ArrayW<::GlobalNamespace::NetPlayer*> GorillaGameModes::GameMode::getStaticF__oldPlayersBuffer()  {
return ::cordl_internals::getStaticField<::ArrayW<::GlobalNamespace::NetPlayer*>, "_oldPlayersBuffer", ::GorillaGameModes::GameMode*>();
}
inline void GorillaGameModes::GameMode::setStaticF__oldPlayersCount(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_oldPlayersCount", ::GorillaGameModes::GameMode*>(std::forward<int32_t>(value));
}
inline int32_t GorillaGameModes::GameMode::getStaticF__oldPlayersCount()  {
return ::cordl_internals::getStaticField<int32_t, "_oldPlayersCount", ::GorillaGameModes::GameMode*>();
}
inline void GorillaGameModes::GameMode::setStaticF__tempAddedPlayers(::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*, "_tempAddedPlayers", ::GorillaGameModes::GameMode*>(std::forward<::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*>(value));
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>* GorillaGameModes::GameMode::getStaticF__tempAddedPlayers()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*, "_tempAddedPlayers", ::GorillaGameModes::GameMode*>();
}
inline void GorillaGameModes::GameMode::setStaticF__tempRemovedPlayers(::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*, "_tempRemovedPlayers", ::GorillaGameModes::GameMode*>(std::forward<::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*>(value));
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>* GorillaGameModes::GameMode::getStaticF__tempRemovedPlayers()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*, "_tempRemovedPlayers", ::GorillaGameModes::GameMode*>();
}
inline void GorillaGameModes::GameMode::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaGameModes::GameMode*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaGameModes::GameMode::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaGameModes::GameMode*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaGameModes::GameMode::add_OnStartGameMode(::GorillaGameModes::GameMode_OnStartGameModeAction*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaGameModes::GameMode*>(),
                        {"add_OnStartGameMode", {}, {::i2c::type_of<::GorillaGameModes::GameMode_OnStartGameModeAction*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GorillaGameModes::GameMode::remove_OnStartGameMode(::GorillaGameModes::GameMode_OnStartGameModeAction*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaGameModes::GameMode*>(),
                        {"remove_OnStartGameMode", {}, {::i2c::type_of<::GorillaGameModes::GameMode_OnStartGameModeAction*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::UnityW<::GlobalNamespace::GorillaGameManager> GorillaGameModes::GameMode::get_ActiveGameMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaGameModes::GameMode*>(),
                        {"get_ActiveGameMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::GorillaGameManager>>(nullptr, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::GameModeSerializer> GorillaGameModes::GameMode::get_ActiveNetworkHandler()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaGameModes::GameMode*>(),
                        {"get_ActiveNetworkHandler", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::GameModeSerializer>>(nullptr, ___internal_method);
}
inline ::UnityW<::GorillaGameModes::GameModeZoneMapping> GorillaGameModes::GameMode::get_GameModeZoneMapping()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaGameModes::GameMode*>(),
                        {"get_GameModeZoneMapping", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GorillaGameModes::GameModeZoneMapping>>(nullptr, ___internal_method);
}
inline ::GorillaGameModes::GameModeType GorillaGameModes::GameMode::get_CurrentGameModeType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaGameModes::GameMode*>(),
                        {"get_CurrentGameModeType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GorillaGameModes::GameModeType>(nullptr, ___internal_method);
}
inline void GorillaGameModes::GameMode::set_CurrentGameModeType(::GorillaGameModes::GameModeType  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaGameModes::GameMode*>(),
                        {"set_CurrentGameModeType", {}, {::i2c::type_of<::GorillaGameModes::GameModeType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline int32_t GorillaGameModes::GameMode::get_CurrentGameModeFlag()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaGameModes::GameMode*>(),
                        {"get_CurrentGameModeFlag", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline void GorillaGameModes::GameMode::add_ParticipatingPlayersChanged(::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*,::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaGameModes::GameMode*>(),
                        {"add_ParticipatingPlayersChanged", {}, {::i2c::type_of<::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*,::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GorillaGameModes::GameMode::remove_ParticipatingPlayersChanged(::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*,::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaGameModes::GameMode*>(),
                        {"remove_ParticipatingPlayersChanged", {}, {::i2c::type_of<::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*,::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GorillaGameModes::GameMode::StaticLoad()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaGameModes::GameMode*>(),
                        {"StaticLoad", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline bool GorillaGameModes::GameMode::IsPlaying(::GorillaGameModes::GameModeType  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaGameModes::GameMode*>(),
                        {"IsPlaying", {}, {::i2c::type_of<::GorillaGameModes::GameModeType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type);
}
inline bool GorillaGameModes::GameMode::LoadGameModeFromProperty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaGameModes::GameMode*>(),
                        {"LoadGameModeFromProperty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool GorillaGameModes::GameMode::ChangeGameFromProperty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaGameModes::GameMode*>(),
                        {"ChangeGameFromProperty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool GorillaGameModes::GameMode::LoadGameModeFromProperty(::StringW  prop)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaGameModes::GameMode*>(),
                        {"LoadGameModeFromProperty", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, prop);
}
inline bool GorillaGameModes::GameMode::ChangeGameFromProperty(::StringW  prop)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaGameModes::GameMode*>(),
                        {"ChangeGameFromProperty", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, prop);
}
inline int32_t GorillaGameModes::GameMode::GetGameModeKeyFromRoomProp()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaGameModes::GameMode*>(),
                        {"GetGameModeKeyFromRoomProp", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline ::StringW GorillaGameModes::GameMode::FindGameModeFromRoomProperty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaGameModes::GameMode*>(),
                        {"FindGameModeFromRoomProperty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline bool GorillaGameModes::GameMode::IsValidGameMode(::StringW  gameMode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaGameModes::GameMode*>(),
                        {"IsValidGameMode", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, gameMode);
}
inline ::StringW GorillaGameModes::GameMode::FindGameModeInPropertyString(::StringW  gmString)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaGameModes::GameMode*>(),
                        {"FindGameModeInPropertyString", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, gmString);
}
inline bool GorillaGameModes::GameMode::LoadGameMode(::StringW  gameMode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaGameModes::GameMode*>(),
                        {"LoadGameMode", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, gameMode);
}
inline bool GorillaGameModes::GameMode::LoadGameMode(int32_t  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaGameModes::GameMode*>(),
                        {"LoadGameMode", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, key);
}
inline bool GorillaGameModes::GameMode::ChangeGameMode(::StringW  gameMode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaGameModes::GameMode*>(),
                        {"ChangeGameMode", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, gameMode);
}
inline bool GorillaGameModes::GameMode::ChangeGameMode(int32_t  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaGameModes::GameMode*>(),
                        {"ChangeGameMode", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, key);
}
inline void GorillaGameModes::GameMode::SetupGameModeRemote(::GlobalNamespace::GameModeSerializer*  networkSerializer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaGameModes::GameMode*>(),
                        {"SetupGameModeRemote", {}, {::i2c::type_of<::GlobalNamespace::GameModeSerializer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, networkSerializer);
}
inline void GorillaGameModes::GameMode::RemoveNetworkLink(::GlobalNamespace::GameModeSerializer*  networkSerializer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaGameModes::GameMode*>(),
                        {"RemoveNetworkLink", {}, {::i2c::type_of<::GlobalNamespace::GameModeSerializer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, networkSerializer);
}
inline ::UnityW<::GlobalNamespace::GorillaGameManager> GorillaGameModes::GameMode::GetGameModeInstance(::GorillaGameModes::GameModeType  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaGameModes::GameMode*>(),
                        {"GetGameModeInstance", {}, {::i2c::type_of<::GorillaGameModes::GameModeType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::GorillaGameManager>>(nullptr, ___internal_method, type);
}
inline ::UnityW<::GlobalNamespace::GorillaGameManager> GorillaGameModes::GameMode::GetGameModeInstance(int32_t  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaGameModes::GameMode*>(),
                        {"GetGameModeInstance", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::GorillaGameManager>>(nullptr, ___internal_method, type);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::GlobalNamespace::GorillaGameManager*>)
inline T GorillaGameModes::GameMode::GetGameModeInstance(::GorillaGameModes::GameModeType  type)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GorillaGameModes::GameMode*>(),
                    {"GetGameModeInstance", {::i2c::class_of<T>()}, {::i2c::type_of<::GorillaGameModes::GameModeType>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, type);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::GlobalNamespace::GorillaGameManager*>)
inline T GorillaGameModes::GameMode::GetGameModeInstance(int32_t  type)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GorillaGameModes::GameMode*>(),
                    {"GetGameModeInstance", {::i2c::class_of<T>()}, {::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, type);
}
inline void GorillaGameModes::GameMode::ResetGameModes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaGameModes::GameMode*>(),
                        {"ResetGameModes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GorillaGameModes::GameMode::StartGameModeSafe(::GlobalNamespace::GorillaGameManager*  gameMode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaGameModes::GameMode*>(),
                        {"StartGameModeSafe", {}, {::i2c::type_of<::GlobalNamespace::GorillaGameManager*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, gameMode);
}
inline void GorillaGameModes::GameMode::StopGameModeSafe(::GlobalNamespace::GorillaGameManager*  gameMode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaGameModes::GameMode*>(),
                        {"StopGameModeSafe", {}, {::i2c::type_of<::GlobalNamespace::GorillaGameManager*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, gameMode);
}
inline void GorillaGameModes::GameMode::ResetGameModeSafe(::GlobalNamespace::GorillaGameManager*  gameMode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaGameModes::GameMode*>(),
                        {"ResetGameModeSafe", {}, {::i2c::type_of<::GlobalNamespace::GorillaGameManager*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, gameMode);
}
inline void GorillaGameModes::GameMode::ReportTag(::GlobalNamespace::NetPlayer*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaGameModes::GameMode*>(),
                        {"ReportTag", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, player);
}
inline void GorillaGameModes::GameMode::ReportHit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaGameModes::GameMode*>(),
                        {"ReportHit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline bool GorillaGameModes::GameMode::LocalIsTagged(::GlobalNamespace::NetPlayer*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaGameModes::GameMode*>(),
                        {"LocalIsTagged", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, player);
}
inline void GorillaGameModes::GameMode::BroadcastRoundComplete()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaGameModes::GameMode*>(),
                        {"BroadcastRoundComplete", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GorillaGameModes::GameMode::BroadcastTag(::GlobalNamespace::NetPlayer*  taggedPlayer, ::GlobalNamespace::NetPlayer*  taggingPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaGameModes::GameMode*>(),
                        {"BroadcastTag", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, taggedPlayer, taggingPlayer);
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>* GorillaGameModes::GameMode::get_ParticipatingPlayers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaGameModes::GameMode*>(),
                        {"get_ParticipatingPlayers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*>(nullptr, ___internal_method);
}
inline void GorillaGameModes::GameMode::RefreshPlayers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaGameModes::GameMode*>(),
                        {"RefreshPlayers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline bool GorillaGameModes::GameMode::ContainsNetPlayer(::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*  list, ::GlobalNamespace::NetPlayer*  candidate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaGameModes::GameMode*>(),
                        {"ContainsNetPlayer", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, list, candidate);
}
inline bool GorillaGameModes::GameMode::ContainsNetPlayer(::ArrayW<::GlobalNamespace::NetPlayer*>  array, ::GlobalNamespace::NetPlayer*  candidate, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaGameModes::GameMode*>(),
                        {"ContainsNetPlayer", {}, {::i2c::type_of<::ArrayW<::GlobalNamespace::NetPlayer*>>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, array, candidate, length);
}
inline void GorillaGameModes::GameMode::OptOut(::GlobalNamespace::VRRig*  rig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaGameModes::GameMode*>(),
                        {"OptOut", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, rig);
}
inline void GorillaGameModes::GameMode::OptOut(::GlobalNamespace::NetPlayer*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaGameModes::GameMode*>(),
                        {"OptOut", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, player);
}
inline void GorillaGameModes::GameMode::OptOut(int32_t  playerActorNumber)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaGameModes::GameMode*>(),
                        {"OptOut", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, playerActorNumber);
}
inline void GorillaGameModes::GameMode::OptIn(::GlobalNamespace::VRRig*  rig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaGameModes::GameMode*>(),
                        {"OptIn", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, rig);
}
inline void GorillaGameModes::GameMode::OptIn(::GlobalNamespace::NetPlayer*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaGameModes::GameMode*>(),
                        {"OptIn", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, player);
}
inline void GorillaGameModes::GameMode::OptIn(int32_t  playerActorNumber)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaGameModes::GameMode*>(),
                        {"OptIn", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, playerActorNumber);
}
inline bool GorillaGameModes::GameMode::CanParticipate(::GlobalNamespace::NetPlayer*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaGameModes::GameMode*>(),
                        {"CanParticipate", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, player);
}
inline void GorillaGameModes::GameMode::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaGameModes::GameMode*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaGameModes::GameMode* GorillaGameModes::GameMode::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaGameModes::GameMode*>());
}
// Ctor Parameters []
constexpr ::GorillaGameModes::GameMode::GameMode()   {
}
//  Writing Method size for method: ::GorillaGameModes::GameMode___c__DisplayClass43_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaGameModes::GameMode___c__DisplayClass43_0::*)()>(&::GorillaGameModes::GameMode___c__DisplayClass43_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b74210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaGameModes::GameMode___c__DisplayClass43_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaGameModes::GameMode___c__DisplayClass43_0._LoadGameMode_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaGameModes::GameMode___c__DisplayClass43_0::*)(::Fusion::NetworkRunner*, ::Fusion::NetworkObject*)>(&::GorillaGameModes::GameMode___c__DisplayClass43_0::_LoadGameMode_b__0)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5b766a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaGameModes::GameMode___c__DisplayClass43_0*>(),
                        {"<LoadGameMode>b__0", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::NetworkObject*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GorillaGameModes::GameMode___c__DisplayClass43_0::__cordl_internal_get_key()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___key;
}
constexpr int32_t const& GorillaGameModes::GameMode___c__DisplayClass43_0::__cordl_internal_get_key() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___key;
}
constexpr void GorillaGameModes::GameMode___c__DisplayClass43_0::__cordl_internal_set_key(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___key = value;
}
inline void GorillaGameModes::GameMode___c__DisplayClass43_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaGameModes::GameMode___c__DisplayClass43_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaGameModes::GameMode___c__DisplayClass43_0::_LoadGameMode_b__0(::Fusion::NetworkRunner*  runner, ::Fusion::NetworkObject*  no)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaGameModes::GameMode___c__DisplayClass43_0*>(),
                        {"<LoadGameMode>b__0", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::NetworkObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, no);
}
inline ::GorillaGameModes::GameMode___c__DisplayClass43_0* GorillaGameModes::GameMode___c__DisplayClass43_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaGameModes::GameMode___c__DisplayClass43_0*>());
}
// Ctor Parameters []
constexpr ::GorillaGameModes::GameMode___c__DisplayClass43_0::GameMode___c__DisplayClass43_0()   {
}
//  Writing Method size for method: ::GorillaGameModes::GameMode_OnStartGameModeAction._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaGameModes::GameMode_OnStartGameModeAction::*)(::System::Object*, ::System::IntPtr)>(&::GorillaGameModes::GameMode_OnStartGameModeAction::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5b76560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaGameModes::GameMode_OnStartGameModeAction*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaGameModes::GameMode_OnStartGameModeAction.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaGameModes::GameMode_OnStartGameModeAction::*)(::GorillaGameModes::GameModeType)>(&::GorillaGameModes::GameMode_OnStartGameModeAction::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5b76600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaGameModes::GameMode_OnStartGameModeAction*>(),
                    {::i2c::class_of<::GorillaGameModes::GameMode_OnStartGameModeAction*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaGameModes::GameMode_OnStartGameModeAction.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::GorillaGameModes::GameMode_OnStartGameModeAction::*)(::GorillaGameModes::GameModeType, ::System::AsyncCallback*, ::System::Object*)>(&::GorillaGameModes::GameMode_OnStartGameModeAction::BeginInvoke)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5b76614;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaGameModes::GameMode_OnStartGameModeAction*>(),
                    {::i2c::class_of<::GorillaGameModes::GameMode_OnStartGameModeAction*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaGameModes::GameMode_OnStartGameModeAction.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaGameModes::GameMode_OnStartGameModeAction::*)(::System::IAsyncResult*)>(&::GorillaGameModes::GameMode_OnStartGameModeAction::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5b76698;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaGameModes::GameMode_OnStartGameModeAction*>(),
                    {::i2c::class_of<::GorillaGameModes::GameMode_OnStartGameModeAction*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void GorillaGameModes::GameMode_OnStartGameModeAction::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaGameModes::GameMode_OnStartGameModeAction*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void GorillaGameModes::GameMode_OnStartGameModeAction::Invoke(::GorillaGameModes::GameModeType  newGameModeType)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaGameModes::GameMode_OnStartGameModeAction*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newGameModeType);
}
inline ::System::IAsyncResult* GorillaGameModes::GameMode_OnStartGameModeAction::BeginInvoke(::GorillaGameModes::GameModeType  newGameModeType, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaGameModes::GameMode_OnStartGameModeAction*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, newGameModeType, callback, object);
}
inline void GorillaGameModes::GameMode_OnStartGameModeAction::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaGameModes::GameMode_OnStartGameModeAction*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::GorillaGameModes::GameMode_OnStartGameModeAction* GorillaGameModes::GameMode_OnStartGameModeAction::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaGameModes::GameMode_OnStartGameModeAction*>(object, method));
}
// Ctor Parameters []
constexpr ::GorillaGameModes::GameMode_OnStartGameModeAction::GameMode_OnStartGameModeAction()   {
}
