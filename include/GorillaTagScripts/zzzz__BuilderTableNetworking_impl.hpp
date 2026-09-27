#pragma once
// IWYU pragma private; include "GorillaTagScripts/BuilderTableNetworking.hpp"
#include "GlobalNamespace/zzzz__CallLimiter_impl.hpp"
#include "Photon/Pun/zzzz__MonoBehaviourPunCallbacks_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GorillaTagScripts/zzzz__BuilderTableNetworking_def.hpp"
#include "GlobalNamespace/zzzz__BuilderDropZone_DropType_def.hpp"
#include "GlobalNamespace/zzzz__BuilderPiece_State_def.hpp"
#include "GlobalNamespace/zzzz__BuilderPiece_def.hpp"
#include "GlobalNamespace/zzzz__ITickSystemTick_def.hpp"
#include "GorillaTagScripts/zzzz__BuilderTableNetworking_RPC_def.hpp"
#include "GorillaTagScripts/zzzz__BuilderTableNetworking_SharedTableEventTypes_def.hpp"
#include "GorillaTagScripts/zzzz__BuilderTableNetworking_def.hpp"
#include "GorillaTagScripts/zzzz__BuilderTable_def.hpp"
#include "Photon/Pun/zzzz__PhotonMessageInfo_def.hpp"
#include "Photon/Pun/zzzz__PhotonView_def.hpp"
#include "Photon/Realtime/zzzz__Player_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GorillaTagScripts::BuilderTableNetworking.get_TickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::BuilderTableNetworking::*)()>(&::GorillaTagScripts::BuilderTableNetworking::get_TickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bab570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {"get_TickRunning", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTableNetworking.set_TickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTableNetworking::*)(bool)>(&::GorillaTagScripts::BuilderTableNetworking::set_TickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bab578;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {"set_TickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTableNetworking.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTableNetworking::*)()>(&::GorillaTagScripts::BuilderTableNetworking::Awake)> {
  constexpr static std::size_t size = 0xb04;
  constexpr static std::size_t addrs = 0x5bab580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTableNetworking.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTableNetworking::*)()>(&::GorillaTagScripts::BuilderTableNetworking::OnEnable)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5bac11c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTableNetworking.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTableNetworking::*)()>(&::GorillaTagScripts::BuilderTableNetworking::OnDisable)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5bac194;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTableNetworking.SetTable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTableNetworking::*)(::GorillaTagScripts::BuilderTable*)>(&::GorillaTagScripts::BuilderTableNetworking::SetTable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bac20c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {"SetTable", {}, {::i2c::type_of<::GorillaTagScripts::BuilderTable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTableNetworking.GetTable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GorillaTagScripts::BuilderTable> (::GorillaTagScripts::BuilderTableNetworking::*)()>(&::GorillaTagScripts::BuilderTableNetworking::GetTable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bac214;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {"GetTable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTableNetworking.CreateLocalCommandId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GorillaTagScripts::BuilderTableNetworking::*)()>(&::GorillaTagScripts::BuilderTableNetworking::CreateLocalCommandId)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5bac21c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {"CreateLocalCommandId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTableNetworking.GetLocalTableInit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GorillaTagScripts::BuilderTableNetworking_PlayerTableInitState* (::GorillaTagScripts::BuilderTableNetworking::*)()>(&::GorillaTagScripts::BuilderTableNetworking::GetLocalTableInit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bac230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {"GetLocalTableInit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTableNetworking.OnMasterClientSwitched
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTableNetworking::*)(::Photon::Realtime::Player*)>(&::GorillaTagScripts::BuilderTableNetworking::OnMasterClientSwitched)> {
  constexpr static std::size_t size = 0x6b8;
  constexpr static std::size_t addrs = 0x5bac238;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                    {::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(), 33}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTableNetworking.OnPlayerLeftRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTableNetworking::*)(::Photon::Realtime::Player*)>(&::GorillaTagScripts::BuilderTableNetworking::OnPlayerLeftRoom)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0x5bacb98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                    {::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(), 44}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTableNetworking.OnJoinedRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTableNetworking::*)()>(&::GorillaTagScripts::BuilderTableNetworking::OnJoinedRoom)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5bacf28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                    {::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(), 42}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTableNetworking.OnLeftRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTableNetworking::*)()>(&::GorillaTagScripts::BuilderTableNetworking::OnLeftRoom)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5bacf68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                    {::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTableNetworking.Tick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTableNetworking::*)()>(&::GorillaTagScripts::BuilderTableNetworking::Tick)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5bad268;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {"Tick", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTableNetworking.PlayerEnterBuilder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTableNetworking::*)()>(&::GorillaTagScripts::BuilderTableNetworking::PlayerEnterBuilder)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x5bac914;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {"PlayerEnterBuilder", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTableNetworking.PlayerEnterBuilderRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTableNetworking::*)(::Photon::Realtime::Player*, bool, ::Photon::Pun::PhotonMessageInfo)>(&::GorillaTagScripts::BuilderTableNetworking::PlayerEnterBuilderRPC)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x5bad54c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {"PlayerEnterBuilderRPC", {}, {::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTableNetworking.PlayerExitBuilder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTableNetworking::*)()>(&::GorillaTagScripts::BuilderTableNetworking::PlayerExitBuilder)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x5bad008;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {"PlayerExitBuilder", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTableNetworking.IsPrivateMasterClient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::BuilderTableNetworking::*)()>(&::GorillaTagScripts::BuilderTableNetworking::IsPrivateMasterClient)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5bad888;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {"IsPrivateMasterClient", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTableNetworking.UpdateNewPlayerInit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTableNetworking::*)()>(&::GorillaTagScripts::BuilderTableNetworking::UpdateNewPlayerInit)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x5bad2d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {"UpdateNewPlayerInit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTableNetworking.StartCreatingSerializedTable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTableNetworking::*)(::Photon::Realtime::Player*)>(&::GorillaTagScripts::BuilderTableNetworking::StartCreatingSerializedTable)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x5badce4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {"StartCreatingSerializedTable", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTableNetworking.StartBuildTableRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTableNetworking::*)(int32_t, ::Photon::Pun::PhotonMessageInfo)>(&::GorillaTagScripts::BuilderTableNetworking::StartBuildTableRPC)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x5bae184;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {"StartBuildTableRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTableNetworking.SendNextTableData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTableNetworking::*)(::Photon::Realtime::Player*)>(&::GorillaTagScripts::BuilderTableNetworking::SendNextTableData)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x5bade74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {"SendNextTableData", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTableNetworking.SendTableDataRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTableNetworking::*)(int32_t, ::ArrayW<uint8_t>, ::Photon::Pun::PhotonMessageInfo)>(&::GorillaTagScripts::BuilderTableNetworking::SendTableDataRPC)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x5bae3dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {"SendTableDataRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTableNetworking.DoesTableInitExist
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::BuilderTableNetworking::*)(::Photon::Realtime::Player*)>(&::GorillaTagScripts::BuilderTableNetworking::DoesTableInitExist)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5bae6d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {"DoesTableInitExist", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTableNetworking.CreatePlayerTableInit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GorillaTagScripts::BuilderTableNetworking_PlayerTableInitState* (::GorillaTagScripts::BuilderTableNetworking::*)(::Photon::Realtime::Player*)>(&::GorillaTagScripts::BuilderTableNetworking::CreatePlayerTableInit)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x5bae788;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {"CreatePlayerTableInit", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTableNetworking.ResetSerializedTableForAllPlayers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTableNetworking::*)()>(&::GorillaTagScripts::BuilderTableNetworking::ResetSerializedTableForAllPlayers)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5bae944;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {"ResetSerializedTableForAllPlayers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTableNetworking.CreateSerializedTableForNewPlayerInit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTableNetworking::*)(::Photon::Realtime::Player*)>(&::GorillaTagScripts::BuilderTableNetworking::CreateSerializedTableForNewPlayerInit)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5bad944;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {"CreateSerializedTableForNewPlayerInit", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTableNetworking.DestroyPlayerTableInit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTableNetworking::*)(::Photon::Realtime::Player*)>(&::GorillaTagScripts::BuilderTableNetworking::DestroyPlayerTableInit)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5bace50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {"DestroyPlayerTableInit", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTableNetworking.GetPlayerTableInit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GorillaTagScripts::BuilderTableNetworking_PlayerTableInitState* (::GorillaTagScripts::BuilderTableNetworking::*)(::Photon::Realtime::Player*)>(&::GorillaTagScripts::BuilderTableNetworking::GetPlayerTableInit)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5bae0b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {"GetPlayerTableInit", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTableNetworking.ValidateMasterClientIsReady
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::BuilderTableNetworking::*)(::Photon::Realtime::Player*)>(&::GorillaTagScripts::BuilderTableNetworking::ValidateMasterClientIsReady)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5baea40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {"ValidateMasterClientIsReady", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTableNetworking.ValidateCallLimits
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::BuilderTableNetworking::*)(::GlobalNamespace::BuilderTableNetworking_RPC, ::Photon::Pun::PhotonMessageInfo)>(&::GorillaTagScripts::BuilderTableNetworking::ValidateCallLimits)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5bad82c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {"ValidateCallLimits", {}, {::i2c::type_of<::GlobalNamespace::BuilderTableNetworking_RPC>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTableNetworking.RequestFailedRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTableNetworking::*)(int32_t, ::Photon::Pun::PhotonMessageInfo)>(&::GorillaTagScripts::BuilderTableNetworking::RequestFailedRPC)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5baeaf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {"RequestFailedRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTableNetworking.RequestCreatePiece
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTableNetworking::*)(int32_t, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, int32_t)>(&::GorillaTagScripts::BuilderTableNetworking::RequestCreatePiece)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5baebe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {"RequestCreatePiece", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTableNetworking.RequestCreatePieceRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTableNetworking::*)(int32_t, int64_t, int32_t, int32_t, ::Photon::Pun::PhotonMessageInfo)>(&::GorillaTagScripts::BuilderTableNetworking::RequestCreatePieceRPC)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5baebe4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {"RequestCreatePieceRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTableNetworking.PieceCreatedRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTableNetworking::*)(int32_t, int32_t, int64_t, int32_t, int32_t, ::Photon::Realtime::Player*, ::Photon::Pun::PhotonMessageInfo)>(&::GorillaTagScripts::BuilderTableNetworking::PieceCreatedRPC)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5baebe8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {"PieceCreatedRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTableNetworking.CreateShelfPiece
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTableNetworking::*)(int32_t, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, int32_t, ::GlobalNamespace::BuilderPiece_State, int32_t)>(&::GorillaTagScripts::BuilderTableNetworking::CreateShelfPiece)> {
  constexpr static std::size_t size = 0x43c;
  constexpr static std::size_t addrs = 0x5baebec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {"CreateShelfPiece", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::BuilderPiece_State>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTableNetworking.PieceCreatedByShelfRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTableNetworking::*)(int32_t, int32_t, int64_t, int32_t, int32_t, uint8_t, int32_t, ::Photon::Realtime::Player*, ::Photon::Pun::PhotonMessageInfo)>(&::GorillaTagScripts::BuilderTableNetworking::PieceCreatedByShelfRPC)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x5baf028;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {"PieceCreatedByShelfRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTableNetworking.RequestRecyclePiece
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTableNetworking::*)(int32_t, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, bool, int32_t)>(&::GorillaTagScripts::BuilderTableNetworking::RequestRecyclePiece)> {
  constexpr static std::size_t size = 0x478;
  constexpr static std::size_t addrs = 0x5baf260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {"RequestRecyclePiece", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTableNetworking.PieceDestroyedRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTableNetworking::*)(int32_t, int64_t, int32_t, bool, int16_t, ::Photon::Pun::PhotonMessageInfo)>(&::GorillaTagScripts::BuilderTableNetworking::PieceDestroyedRPC)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0x5baf6d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {"PieceDestroyedRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int16_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTableNetworking.RequestPlacePiece
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTableNetworking::*)(::GlobalNamespace::BuilderPiece*, ::GlobalNamespace::BuilderPiece*, int8_t, int8_t, uint8_t, ::GlobalNamespace::BuilderPiece*, int32_t, int32_t)>(&::GorillaTagScripts::BuilderTableNetworking::RequestPlacePiece)> {
  constexpr static std::size_t size = 0x560;
  constexpr static std::size_t addrs = 0x5bafa48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {"RequestPlacePiece", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece*>(), ::i2c::type_of<::GlobalNamespace::BuilderPiece*>(), ::i2c::type_of<int8_t>(), ::i2c::type_of<int8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::GlobalNamespace::BuilderPiece*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTableNetworking.RequestPlacePieceRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTableNetworking::*)(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, ::Photon::Realtime::Player*, ::Photon::Pun::PhotonMessageInfo)>(&::GorillaTagScripts::BuilderTableNetworking::RequestPlacePieceRPC)> {
  constexpr static std::size_t size = 0x6b8;
  constexpr static std::size_t addrs = 0x5baffa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {"RequestPlacePieceRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTableNetworking.PiecePlacedRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTableNetworking::*)(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, ::Photon::Realtime::Player*, int32_t, ::Photon::Pun::PhotonMessageInfo)>(&::GorillaTagScripts::BuilderTableNetworking::PiecePlacedRPC)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0x5bb0660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {"PiecePlacedRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTableNetworking.RequestGrabPiece
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTableNetworking::*)(::GlobalNamespace::BuilderPiece*, bool, ::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::GorillaTagScripts::BuilderTableNetworking::RequestGrabPiece)> {
  constexpr static std::size_t size = 0x454;
  constexpr static std::size_t addrs = 0x5bb0904;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {"RequestGrabPiece", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTableNetworking.RequestGrabPieceRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTableNetworking::*)(int32_t, int32_t, bool, int64_t, ::Photon::Realtime::Player*, ::Photon::Pun::PhotonMessageInfo)>(&::GorillaTagScripts::BuilderTableNetworking::RequestGrabPieceRPC)> {
  constexpr static std::size_t size = 0x4e4;
  constexpr static std::size_t addrs = 0x5bb0fa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {"RequestGrabPieceRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTableNetworking.CheckForFreedPlot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTableNetworking::*)(int32_t, ::Photon::Realtime::Player*)>(&::GorillaTagScripts::BuilderTableNetworking::CheckForFreedPlot)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x5bb0d58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {"CheckForFreedPlot", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTableNetworking.PieceGrabbedRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTableNetworking::*)(int32_t, int32_t, bool, int64_t, ::Photon::Realtime::Player*, ::Photon::Pun::PhotonMessageInfo)>(&::GorillaTagScripts::BuilderTableNetworking::PieceGrabbedRPC)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x5bb1484;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {"PieceGrabbedRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTableNetworking.RequestDropPiece
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTableNetworking::*)(::GlobalNamespace::BuilderPiece*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::GorillaTagScripts::BuilderTableNetworking::RequestDropPiece)> {
  constexpr static std::size_t size = 0x958;
  constexpr static std::size_t addrs = 0x5bb165c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {"RequestDropPiece", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTableNetworking.RequestDropPieceRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTableNetworking::*)(int32_t, int32_t, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Photon::Realtime::Player*, ::Photon::Pun::PhotonMessageInfo)>(&::GorillaTagScripts::BuilderTableNetworking::RequestDropPieceRPC)> {
  constexpr static std::size_t size = 0x580;
  constexpr static std::size_t addrs = 0x5bb1fb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {"RequestDropPieceRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTableNetworking.PieceDroppedRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTableNetworking::*)(int32_t, int32_t, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Photon::Realtime::Player*, ::Photon::Pun::PhotonMessageInfo)>(&::GorillaTagScripts::BuilderTableNetworking::PieceDroppedRPC)> {
  constexpr static std::size_t size = 0x484;
  constexpr static std::size_t addrs = 0x5bb2534;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {"PieceDroppedRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTableNetworking.PieceEnteredDropZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTableNetworking::*)(::GlobalNamespace::BuilderPiece*, ::GlobalNamespace::BuilderDropZone_DropType, int32_t)>(&::GorillaTagScripts::BuilderTableNetworking::PieceEnteredDropZone)> {
  constexpr static std::size_t size = 0x2f4;
  constexpr static std::size_t addrs = 0x5bb29b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {"PieceEnteredDropZone", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece*>(), ::i2c::type_of<::GlobalNamespace::BuilderDropZone_DropType>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTableNetworking.PieceEnteredDropZoneRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTableNetworking::*)(int32_t, int64_t, int32_t, int32_t, ::Photon::Pun::PhotonMessageInfo)>(&::GorillaTagScripts::BuilderTableNetworking::PieceEnteredDropZoneRPC)> {
  constexpr static std::size_t size = 0x378;
  constexpr static std::size_t addrs = 0x5bb2cac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {"PieceEnteredDropZoneRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTableNetworking.PlotClaimedRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTableNetworking::*)(int32_t, ::Photon::Realtime::Player*, bool, ::Photon::Pun::PhotonMessageInfo)>(&::GorillaTagScripts::BuilderTableNetworking::PlotClaimedRPC)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5bb3024;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {"PlotClaimedRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTableNetworking.RequestCreateArmShelfForPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTableNetworking::*)(::Photon::Realtime::Player*)>(&::GorillaTagScripts::BuilderTableNetworking::RequestCreateArmShelfForPlayer)> {
  constexpr static std::size_t size = 0x35c;
  constexpr static std::size_t addrs = 0x5bad988;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {"RequestCreateArmShelfForPlayer", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTableNetworking.ArmShelfCreatedRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTableNetworking::*)(int32_t, int32_t, int32_t, ::Photon::Realtime::Player*, ::Photon::Pun::PhotonMessageInfo)>(&::GorillaTagScripts::BuilderTableNetworking::ArmShelfCreatedRPC)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x5bb3134;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {"ArmShelfCreatedRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTableNetworking.RequestShelfSelection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTableNetworking::*)(int32_t, int32_t, bool)>(&::GorillaTagScripts::BuilderTableNetworking::RequestShelfSelection)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x5bb3288;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {"RequestShelfSelection", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTableNetworking.RequestShelfSelectionRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTableNetworking::*)(int32_t, int32_t, bool, ::Photon::Pun::PhotonMessageInfo)>(&::GorillaTagScripts::BuilderTableNetworking::RequestShelfSelectionRPC)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x5bb3498;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {"RequestShelfSelectionRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTableNetworking.ShelfSelectionChangedRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTableNetworking::*)(int32_t, int32_t, bool, ::Photon::Realtime::Player*, ::Photon::Pun::PhotonMessageInfo)>(&::GorillaTagScripts::BuilderTableNetworking::ShelfSelectionChangedRPC)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x5bb37e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {"ShelfSelectionChangedRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTableNetworking.RequestFunctionalPieceStateChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTableNetworking::*)(int32_t, uint8_t)>(&::GorillaTagScripts::BuilderTableNetworking::RequestFunctionalPieceStateChange)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x5bb3944;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {"RequestFunctionalPieceStateChange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTableNetworking.RequestFunctionalPieceStateChangeRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTableNetworking::*)(int32_t, uint8_t, ::Photon::Pun::PhotonMessageInfo)>(&::GorillaTagScripts::BuilderTableNetworking::RequestFunctionalPieceStateChangeRPC)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x5bb3b08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {"RequestFunctionalPieceStateChangeRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTableNetworking.FunctionalPieceStateChangeMaster
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTableNetworking::*)(int32_t, uint8_t, ::Photon::Realtime::Player*, int32_t)>(&::GorillaTagScripts::BuilderTableNetworking::FunctionalPieceStateChangeMaster)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x5bb3cec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {"FunctionalPieceStateChangeMaster", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTableNetworking.FunctionalPieceStateChangeRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTableNetworking::*)(int32_t, uint8_t, ::Photon::Realtime::Player*, int32_t, ::Photon::Pun::PhotonMessageInfo)>(&::GorillaTagScripts::BuilderTableNetworking::FunctionalPieceStateChangeRPC)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x5bb3f50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {"FunctionalPieceStateChangeRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTableNetworking.RequestBlocksTerminalControl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTableNetworking::*)(bool)>(&::GorillaTagScripts::BuilderTableNetworking::RequestBlocksTerminalControl)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x5bb416c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {"RequestBlocksTerminalControl", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTableNetworking.RequestBlocksTerminalControlRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTableNetworking::*)(bool, ::Photon::Pun::PhotonMessageInfo)>(&::GorillaTagScripts::BuilderTableNetworking::RequestBlocksTerminalControlRPC)> {
  constexpr static std::size_t size = 0x3c4;
  constexpr static std::size_t addrs = 0x5bb42e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {"RequestBlocksTerminalControlRPC", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTableNetworking.SetBlocksTerminalDriverRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTableNetworking::*)(int32_t, ::Photon::Pun::PhotonMessageInfo)>(&::GorillaTagScripts::BuilderTableNetworking::SetBlocksTerminalDriverRPC)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x5bb46a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {"SetBlocksTerminalDriverRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTableNetworking.RequestLoadSharedBlocksMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTableNetworking::*)(::StringW)>(&::GorillaTagScripts::BuilderTableNetworking::RequestLoadSharedBlocksMap)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5bb482c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {"RequestLoadSharedBlocksMap", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTableNetworking.LoadSharedBlocksMapRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTableNetworking::*)(::StringW, ::Photon::Pun::PhotonMessageInfo)>(&::GorillaTagScripts::BuilderTableNetworking::LoadSharedBlocksMapRPC)> {
  constexpr static std::size_t size = 0x3c0;
  constexpr static std::size_t addrs = 0x5bb4910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {"LoadSharedBlocksMapRPC", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTableNetworking.LoadSharedBlocksFailedMaster
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTableNetworking::*)(::StringW)>(&::GorillaTagScripts::BuilderTableNetworking::LoadSharedBlocksFailedMaster)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x5bb4cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {"LoadSharedBlocksFailedMaster", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTableNetworking.SharedBlocksOutOfBoundsMaster
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTableNetworking::*)(::StringW)>(&::GorillaTagScripts::BuilderTableNetworking::SharedBlocksOutOfBoundsMaster)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x5ba98d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {"SharedBlocksOutOfBoundsMaster", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTableNetworking.SharedTableEventRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTableNetworking::*)(uint8_t, ::StringW, ::Photon::Pun::PhotonMessageInfo)>(&::GorillaTagScripts::BuilderTableNetworking::SharedTableEventRPC)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x5bb4e5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {"SharedTableEventRPC", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTableNetworking.OnSharedBlocksLoadStarted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTableNetworking::*)(::StringW)>(&::GorillaTagScripts::BuilderTableNetworking::OnSharedBlocksLoadStarted)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5bb50a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {"OnSharedBlocksLoadStarted", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTableNetworking.OnLoadSharedBlocksFailed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTableNetworking::*)(::StringW)>(&::GorillaTagScripts::BuilderTableNetworking::OnLoadSharedBlocksFailed)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x5bb513c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {"OnLoadSharedBlocksFailed", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTableNetworking.OnSharedBlocksOutOfBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTableNetworking::*)(::StringW)>(&::GorillaTagScripts::BuilderTableNetworking::OnSharedBlocksOutOfBounds)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0x5bb547c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {"OnSharedBlocksOutOfBounds", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTableNetworking.RequestPaintPiece
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTableNetworking::*)(int32_t, int32_t)>(&::GorillaTagScripts::BuilderTableNetworking::RequestPaintPiece)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5bb5750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {"RequestPaintPiece", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTableNetworking._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTableNetworking::*)()>(&::GorillaTagScripts::BuilderTableNetworking::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bb5754;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Photon::Pun::PhotonView>& GorillaTagScripts::BuilderTableNetworking::__cordl_internal_get_tablePhotonView()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tablePhotonView;
}
constexpr ::UnityW<::Photon::Pun::PhotonView> const& GorillaTagScripts::BuilderTableNetworking::__cordl_internal_get_tablePhotonView() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tablePhotonView;
}
constexpr void GorillaTagScripts::BuilderTableNetworking::__cordl_internal_set_tablePhotonView(::UnityW<::Photon::Pun::PhotonView>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tablePhotonView = value;
}
constexpr ::UnityW<::GorillaTagScripts::BuilderTable>& GorillaTagScripts::BuilderTableNetworking::__cordl_internal_get_currTable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currTable;
}
constexpr ::UnityW<::GorillaTagScripts::BuilderTable> const& GorillaTagScripts::BuilderTableNetworking::__cordl_internal_get_currTable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currTable;
}
constexpr void GorillaTagScripts::BuilderTableNetworking::__cordl_internal_set_currTable(::UnityW<::GorillaTagScripts::BuilderTable>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currTable = value;
}
constexpr int32_t& GorillaTagScripts::BuilderTableNetworking::__cordl_internal_get_nextLocalCommandId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextLocalCommandId;
}
constexpr int32_t const& GorillaTagScripts::BuilderTableNetworking::__cordl_internal_get_nextLocalCommandId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextLocalCommandId;
}
constexpr void GorillaTagScripts::BuilderTableNetworking::__cordl_internal_set_nextLocalCommandId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nextLocalCommandId = value;
}
constexpr bool& GorillaTagScripts::BuilderTableNetworking::__cordl_internal_get__TickRunning_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TickRunning_k__BackingField;
}
constexpr bool const& GorillaTagScripts::BuilderTableNetworking::__cordl_internal_get__TickRunning_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TickRunning_k__BackingField;
}
constexpr void GorillaTagScripts::BuilderTableNetworking::__cordl_internal_set__TickRunning_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TickRunning_k__BackingField = value;
}
constexpr ::System::Collections::Generic::List_1<::GorillaTagScripts::BuilderTableNetworking_PlayerTableInitState*>*& GorillaTagScripts::BuilderTableNetworking::__cordl_internal_get_masterClientTableInit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___masterClientTableInit;
}
constexpr ::System::Collections::Generic::List_1<::GorillaTagScripts::BuilderTableNetworking_PlayerTableInitState*>* const& GorillaTagScripts::BuilderTableNetworking::__cordl_internal_get_masterClientTableInit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___masterClientTableInit;
}
constexpr void GorillaTagScripts::BuilderTableNetworking::__cordl_internal_set_masterClientTableInit(::System::Collections::Generic::List_1<::GorillaTagScripts::BuilderTableNetworking_PlayerTableInitState*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___masterClientTableInit = value;
}
constexpr ::System::Collections::Generic::List_1<::GorillaTagScripts::BuilderTableNetworking_PlayerTableInitState*>*& GorillaTagScripts::BuilderTableNetworking::__cordl_internal_get_masterClientTableValidators()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___masterClientTableValidators;
}
constexpr ::System::Collections::Generic::List_1<::GorillaTagScripts::BuilderTableNetworking_PlayerTableInitState*>* const& GorillaTagScripts::BuilderTableNetworking::__cordl_internal_get_masterClientTableValidators() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___masterClientTableValidators;
}
constexpr void GorillaTagScripts::BuilderTableNetworking::__cordl_internal_set_masterClientTableValidators(::System::Collections::Generic::List_1<::GorillaTagScripts::BuilderTableNetworking_PlayerTableInitState*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___masterClientTableValidators = value;
}
constexpr ::GorillaTagScripts::BuilderTableNetworking_PlayerTableInitState*& GorillaTagScripts::BuilderTableNetworking::__cordl_internal_get_localClientTableInit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localClientTableInit;
}
constexpr ::GorillaTagScripts::BuilderTableNetworking_PlayerTableInitState* const& GorillaTagScripts::BuilderTableNetworking::__cordl_internal_get_localClientTableInit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localClientTableInit;
}
constexpr void GorillaTagScripts::BuilderTableNetworking::__cordl_internal_set_localClientTableInit(::GorillaTagScripts::BuilderTableNetworking_PlayerTableInitState*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localClientTableInit = value;
}
constexpr ::GorillaTagScripts::BuilderTableNetworking_PlayerTableInitState*& GorillaTagScripts::BuilderTableNetworking::__cordl_internal_get_localValidationTable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localValidationTable;
}
constexpr ::GorillaTagScripts::BuilderTableNetworking_PlayerTableInitState* const& GorillaTagScripts::BuilderTableNetworking::__cordl_internal_get_localValidationTable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localValidationTable;
}
constexpr void GorillaTagScripts::BuilderTableNetworking::__cordl_internal_set_localValidationTable(::GorillaTagScripts::BuilderTableNetworking_PlayerTableInitState*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localValidationTable = value;
}
constexpr ::System::Collections::Generic::List_1<::Photon::Realtime::Player*>*& GorillaTagScripts::BuilderTableNetworking::__cordl_internal_get_armShelfRequests()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___armShelfRequests;
}
constexpr ::System::Collections::Generic::List_1<::Photon::Realtime::Player*>* const& GorillaTagScripts::BuilderTableNetworking::__cordl_internal_get_armShelfRequests() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___armShelfRequests;
}
constexpr void GorillaTagScripts::BuilderTableNetworking::__cordl_internal_set_armShelfRequests(::System::Collections::Generic::List_1<::Photon::Realtime::Player*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___armShelfRequests = value;
}
constexpr ::ArrayW<::GlobalNamespace::CallLimiter*>& GorillaTagScripts::BuilderTableNetworking::__cordl_internal_get_callLimiters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callLimiters;
}
constexpr ::ArrayW<::GlobalNamespace::CallLimiter*> const& GorillaTagScripts::BuilderTableNetworking::__cordl_internal_get_callLimiters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callLimiters;
}
constexpr void GorillaTagScripts::BuilderTableNetworking::__cordl_internal_set_callLimiters(::ArrayW<::GlobalNamespace::CallLimiter*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___callLimiters = value;
}
inline bool GorillaTagScripts::BuilderTableNetworking::get_TickRunning()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {"get_TickRunning", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaTagScripts::BuilderTableNetworking::set_TickRunning(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {"set_TickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GorillaTagScripts::BuilderTableNetworking::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::BuilderTableNetworking::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::BuilderTableNetworking::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::BuilderTableNetworking::SetTable(::GorillaTagScripts::BuilderTable*  table)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {"SetTable", {}, {::i2c::type_of<::GorillaTagScripts::BuilderTable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, table);
}
inline ::UnityW<::GorillaTagScripts::BuilderTable> GorillaTagScripts::BuilderTableNetworking::GetTable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {"GetTable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GorillaTagScripts::BuilderTable>>(this, ___internal_method);
}
inline int32_t GorillaTagScripts::BuilderTableNetworking::CreateLocalCommandId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {"CreateLocalCommandId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::GorillaTagScripts::BuilderTableNetworking_PlayerTableInitState* GorillaTagScripts::BuilderTableNetworking::GetLocalTableInit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {"GetLocalTableInit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GorillaTagScripts::BuilderTableNetworking_PlayerTableInitState*>(this, ___internal_method);
}
inline void GorillaTagScripts::BuilderTableNetworking::OnMasterClientSwitched(::Photon::Realtime::Player*  newMasterClient)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(), 33}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newMasterClient);
}
inline void GorillaTagScripts::BuilderTableNetworking::OnPlayerLeftRoom(::Photon::Realtime::Player*  player)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(), 44}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player);
}
inline void GorillaTagScripts::BuilderTableNetworking::OnJoinedRoom()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(), 42}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::BuilderTableNetworking::OnLeftRoom()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::BuilderTableNetworking::Tick()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {"Tick", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::BuilderTableNetworking::PlayerEnterBuilder()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {"PlayerEnterBuilder", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::BuilderTableNetworking::PlayerEnterBuilderRPC(::Photon::Realtime::Player*  player, bool  entered, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {"PlayerEnterBuilderRPC", {}, {::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player, entered, info);
}
inline void GorillaTagScripts::BuilderTableNetworking::PlayerExitBuilder()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {"PlayerExitBuilder", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaTagScripts::BuilderTableNetworking::IsPrivateMasterClient()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {"IsPrivateMasterClient", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaTagScripts::BuilderTableNetworking::UpdateNewPlayerInit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {"UpdateNewPlayerInit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::BuilderTableNetworking::StartCreatingSerializedTable(::Photon::Realtime::Player*  newPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {"StartCreatingSerializedTable", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newPlayer);
}
inline void GorillaTagScripts::BuilderTableNetworking::StartBuildTableRPC(int32_t  totalBytes, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {"StartBuildTableRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, totalBytes, info);
}
inline void GorillaTagScripts::BuilderTableNetworking::SendNextTableData(::Photon::Realtime::Player*  requestingPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {"SendNextTableData", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, requestingPlayer);
}
inline void GorillaTagScripts::BuilderTableNetworking::SendTableDataRPC(int32_t  numBytes, ::ArrayW<uint8_t>  bytes, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {"SendTableDataRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, numBytes, bytes, info);
}
inline bool GorillaTagScripts::BuilderTableNetworking::DoesTableInitExist(::Photon::Realtime::Player*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {"DoesTableInitExist", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, player);
}
inline ::GorillaTagScripts::BuilderTableNetworking_PlayerTableInitState* GorillaTagScripts::BuilderTableNetworking::CreatePlayerTableInit(::Photon::Realtime::Player*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {"CreatePlayerTableInit", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GorillaTagScripts::BuilderTableNetworking_PlayerTableInitState*>(this, ___internal_method, player);
}
inline void GorillaTagScripts::BuilderTableNetworking::ResetSerializedTableForAllPlayers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {"ResetSerializedTableForAllPlayers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::BuilderTableNetworking::CreateSerializedTableForNewPlayerInit(::Photon::Realtime::Player*  newPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {"CreateSerializedTableForNewPlayerInit", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newPlayer);
}
inline void GorillaTagScripts::BuilderTableNetworking::DestroyPlayerTableInit(::Photon::Realtime::Player*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {"DestroyPlayerTableInit", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player);
}
inline ::GorillaTagScripts::BuilderTableNetworking_PlayerTableInitState* GorillaTagScripts::BuilderTableNetworking::GetPlayerTableInit(::Photon::Realtime::Player*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {"GetPlayerTableInit", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GorillaTagScripts::BuilderTableNetworking_PlayerTableInitState*>(this, ___internal_method, player);
}
inline bool GorillaTagScripts::BuilderTableNetworking::ValidateMasterClientIsReady(::Photon::Realtime::Player*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {"ValidateMasterClientIsReady", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, player);
}
inline bool GorillaTagScripts::BuilderTableNetworking::ValidateCallLimits(::GlobalNamespace::BuilderTableNetworking_RPC  rpcCall, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {"ValidateCallLimits", {}, {::i2c::type_of<::GlobalNamespace::BuilderTableNetworking_RPC>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, rpcCall, info);
}
inline void GorillaTagScripts::BuilderTableNetworking::RequestFailedRPC(int32_t  localCommandId, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {"RequestFailedRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, localCommandId, info);
}
inline void GorillaTagScripts::BuilderTableNetworking::RequestCreatePiece(int32_t  newPieceType, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, int32_t  materialType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {"RequestCreatePiece", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newPieceType, position, rotation, materialType);
}
inline void GorillaTagScripts::BuilderTableNetworking::RequestCreatePieceRPC(int32_t  newPieceType, int64_t  packedPosition, int32_t  packedRotation, int32_t  materialType, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {"RequestCreatePieceRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newPieceType, packedPosition, packedRotation, materialType, info);
}
inline void GorillaTagScripts::BuilderTableNetworking::PieceCreatedRPC(int32_t  pieceType, int32_t  pieceId, int64_t  packedPosition, int32_t  packedRotation, int32_t  materialType, ::Photon::Realtime::Player*  creatingPlayer, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {"PieceCreatedRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pieceType, pieceId, packedPosition, packedRotation, materialType, creatingPlayer, info);
}
inline void GorillaTagScripts::BuilderTableNetworking::CreateShelfPiece(int32_t  pieceType, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, int32_t  materialType, ::GlobalNamespace::BuilderPiece_State  state, int32_t  shelfID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {"CreateShelfPiece", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::BuilderPiece_State>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pieceType, position, rotation, materialType, state, shelfID);
}
inline void GorillaTagScripts::BuilderTableNetworking::PieceCreatedByShelfRPC(int32_t  pieceType, int32_t  pieceId, int64_t  packedPosition, int32_t  packedRotation, int32_t  materialType, uint8_t  state, int32_t  shelfID, ::Photon::Realtime::Player*  creatingPlayer, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {"PieceCreatedByShelfRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pieceType, pieceId, packedPosition, packedRotation, materialType, state, shelfID, creatingPlayer, info);
}
inline void GorillaTagScripts::BuilderTableNetworking::RequestRecyclePiece(int32_t  pieceId, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, bool  playFX, int32_t  recyclerID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {"RequestRecyclePiece", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pieceId, position, rotation, playFX, recyclerID);
}
inline void GorillaTagScripts::BuilderTableNetworking::PieceDestroyedRPC(int32_t  pieceId, int64_t  packedPosition, int32_t  packedRotation, bool  playFX, int16_t  recyclerID, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {"PieceDestroyedRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int16_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pieceId, packedPosition, packedRotation, playFX, recyclerID, info);
}
inline void GorillaTagScripts::BuilderTableNetworking::RequestPlacePiece(::GlobalNamespace::BuilderPiece*  piece, ::GlobalNamespace::BuilderPiece*  attachPiece, int8_t  bumpOffsetX, int8_t  bumpOffsetZ, uint8_t  twist, ::GlobalNamespace::BuilderPiece*  parentPiece, int32_t  attachIndex, int32_t  parentAttachIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {"RequestPlacePiece", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece*>(), ::i2c::type_of<::GlobalNamespace::BuilderPiece*>(), ::i2c::type_of<int8_t>(), ::i2c::type_of<int8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::GlobalNamespace::BuilderPiece*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, piece, attachPiece, bumpOffsetX, bumpOffsetZ, twist, parentPiece, attachIndex, parentAttachIndex);
}
inline void GorillaTagScripts::BuilderTableNetworking::RequestPlacePieceRPC(int32_t  localCommandId, int32_t  pieceId, int32_t  attachPieceId, int32_t  placement, int32_t  parentPieceId, int32_t  attachIndex, int32_t  parentAttachIndex, ::Photon::Realtime::Player*  placedByPlayer, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {"RequestPlacePieceRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, localCommandId, pieceId, attachPieceId, placement, parentPieceId, attachIndex, parentAttachIndex, placedByPlayer, info);
}
inline void GorillaTagScripts::BuilderTableNetworking::PiecePlacedRPC(int32_t  localCommandId, int32_t  pieceId, int32_t  attachPieceId, int32_t  placement, int32_t  parentPieceId, int32_t  attachIndex, int32_t  parentAttachIndex, ::Photon::Realtime::Player*  placedByPlayer, int32_t  timeStamp, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {"PiecePlacedRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, localCommandId, pieceId, attachPieceId, placement, parentPieceId, attachIndex, parentAttachIndex, placedByPlayer, timeStamp, info);
}
inline void GorillaTagScripts::BuilderTableNetworking::RequestGrabPiece(::GlobalNamespace::BuilderPiece*  piece, bool  isLefHand, ::UnityEngine::Vector3  localPosition, ::UnityEngine::Quaternion  localRotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {"RequestGrabPiece", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, piece, isLefHand, localPosition, localRotation);
}
inline void GorillaTagScripts::BuilderTableNetworking::RequestGrabPieceRPC(int32_t  localCommandId, int32_t  pieceId, bool  isLeftHand, int64_t  packedPosRot, ::Photon::Realtime::Player*  grabbedByPlayer, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {"RequestGrabPieceRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, localCommandId, pieceId, isLeftHand, packedPosRot, grabbedByPlayer, info);
}
inline void GorillaTagScripts::BuilderTableNetworking::CheckForFreedPlot(int32_t  pieceId, ::Photon::Realtime::Player*  grabbedByPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {"CheckForFreedPlot", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pieceId, grabbedByPlayer);
}
inline void GorillaTagScripts::BuilderTableNetworking::PieceGrabbedRPC(int32_t  localCommandId, int32_t  pieceId, bool  isLeftHand, int64_t  packedPosRot, ::Photon::Realtime::Player*  grabbedByPlayer, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {"PieceGrabbedRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, localCommandId, pieceId, isLeftHand, packedPosRot, grabbedByPlayer, info);
}
inline void GorillaTagScripts::BuilderTableNetworking::RequestDropPiece(::GlobalNamespace::BuilderPiece*  piece, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Vector3  velocity, ::UnityEngine::Vector3  angVelocity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {"RequestDropPiece", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, piece, position, rotation, velocity, angVelocity);
}
inline void GorillaTagScripts::BuilderTableNetworking::RequestDropPieceRPC(int32_t  localCommandId, int32_t  pieceId, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Vector3  velocity, ::UnityEngine::Vector3  angVelocity, ::Photon::Realtime::Player*  droppedByPlayer, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {"RequestDropPieceRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, localCommandId, pieceId, position, rotation, velocity, angVelocity, droppedByPlayer, info);
}
inline void GorillaTagScripts::BuilderTableNetworking::PieceDroppedRPC(int32_t  localCommandId, int32_t  pieceId, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Vector3  velocity, ::UnityEngine::Vector3  angVelocity, ::Photon::Realtime::Player*  droppedByPlayer, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {"PieceDroppedRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, localCommandId, pieceId, position, rotation, velocity, angVelocity, droppedByPlayer, info);
}
inline void GorillaTagScripts::BuilderTableNetworking::PieceEnteredDropZone(::GlobalNamespace::BuilderPiece*  piece, ::GlobalNamespace::BuilderDropZone_DropType  dropType, int32_t  dropZoneId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {"PieceEnteredDropZone", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece*>(), ::i2c::type_of<::GlobalNamespace::BuilderDropZone_DropType>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, piece, dropType, dropZoneId);
}
inline void GorillaTagScripts::BuilderTableNetworking::PieceEnteredDropZoneRPC(int32_t  pieceId, int64_t  position, int32_t  rotation, int32_t  dropZoneId, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {"PieceEnteredDropZoneRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pieceId, position, rotation, dropZoneId, info);
}
inline void GorillaTagScripts::BuilderTableNetworking::PlotClaimedRPC(int32_t  pieceId, ::Photon::Realtime::Player*  claimingPlayer, bool  claimed, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {"PlotClaimedRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pieceId, claimingPlayer, claimed, info);
}
inline void GorillaTagScripts::BuilderTableNetworking::RequestCreateArmShelfForPlayer(::Photon::Realtime::Player*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {"RequestCreateArmShelfForPlayer", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player);
}
inline void GorillaTagScripts::BuilderTableNetworking::ArmShelfCreatedRPC(int32_t  pieceIdLeft, int32_t  pieceIdRight, int32_t  pieceType, ::Photon::Realtime::Player*  owningPlayer, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {"ArmShelfCreatedRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pieceIdLeft, pieceIdRight, pieceType, owningPlayer, info);
}
inline void GorillaTagScripts::BuilderTableNetworking::RequestShelfSelection(int32_t  shelfID, int32_t  groupID, bool  isConveyor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {"RequestShelfSelection", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, shelfID, groupID, isConveyor);
}
inline void GorillaTagScripts::BuilderTableNetworking::RequestShelfSelectionRPC(int32_t  shelfId, int32_t  setId, bool  isConveyor, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {"RequestShelfSelectionRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, shelfId, setId, isConveyor, info);
}
inline void GorillaTagScripts::BuilderTableNetworking::ShelfSelectionChangedRPC(int32_t  shelfId, int32_t  setId, bool  isConveyor, ::Photon::Realtime::Player*  caller, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {"ShelfSelectionChangedRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, shelfId, setId, isConveyor, caller, info);
}
inline void GorillaTagScripts::BuilderTableNetworking::RequestFunctionalPieceStateChange(int32_t  pieceID, uint8_t  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {"RequestFunctionalPieceStateChange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pieceID, state);
}
inline void GorillaTagScripts::BuilderTableNetworking::RequestFunctionalPieceStateChangeRPC(int32_t  pieceID, uint8_t  state, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {"RequestFunctionalPieceStateChangeRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pieceID, state, info);
}
inline void GorillaTagScripts::BuilderTableNetworking::FunctionalPieceStateChangeMaster(int32_t  pieceID, uint8_t  state, ::Photon::Realtime::Player*  instigator, int32_t  timeStamp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {"FunctionalPieceStateChangeMaster", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pieceID, state, instigator, timeStamp);
}
inline void GorillaTagScripts::BuilderTableNetworking::FunctionalPieceStateChangeRPC(int32_t  pieceID, uint8_t  state, ::Photon::Realtime::Player*  caller, int32_t  timeStamp, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {"FunctionalPieceStateChangeRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pieceID, state, caller, timeStamp, info);
}
inline void GorillaTagScripts::BuilderTableNetworking::RequestBlocksTerminalControl(bool  locked)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {"RequestBlocksTerminalControl", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, locked);
}
inline void GorillaTagScripts::BuilderTableNetworking::RequestBlocksTerminalControlRPC(bool  lockedStatus, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {"RequestBlocksTerminalControlRPC", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lockedStatus, info);
}
inline void GorillaTagScripts::BuilderTableNetworking::SetBlocksTerminalDriverRPC(int32_t  driver, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {"SetBlocksTerminalDriverRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, driver, info);
}
inline void GorillaTagScripts::BuilderTableNetworking::RequestLoadSharedBlocksMap(::StringW  mapID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {"RequestLoadSharedBlocksMap", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mapID);
}
inline void GorillaTagScripts::BuilderTableNetworking::LoadSharedBlocksMapRPC(::StringW  mapID, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {"LoadSharedBlocksMapRPC", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mapID, info);
}
inline void GorillaTagScripts::BuilderTableNetworking::LoadSharedBlocksFailedMaster(::StringW  mapID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {"LoadSharedBlocksFailedMaster", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mapID);
}
inline void GorillaTagScripts::BuilderTableNetworking::SharedBlocksOutOfBoundsMaster(::StringW  mapID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {"SharedBlocksOutOfBoundsMaster", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mapID);
}
inline void GorillaTagScripts::BuilderTableNetworking::SharedTableEventRPC(uint8_t  eventType, ::StringW  mapID, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {"SharedTableEventRPC", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventType, mapID, info);
}
inline void GorillaTagScripts::BuilderTableNetworking::OnSharedBlocksLoadStarted(::StringW  mapID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {"OnSharedBlocksLoadStarted", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mapID);
}
inline void GorillaTagScripts::BuilderTableNetworking::OnLoadSharedBlocksFailed(::StringW  mapID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {"OnLoadSharedBlocksFailed", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mapID);
}
inline void GorillaTagScripts::BuilderTableNetworking::OnSharedBlocksOutOfBounds(::StringW  mapID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {"OnSharedBlocksOutOfBounds", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mapID);
}
inline void GorillaTagScripts::BuilderTableNetworking::RequestPaintPiece(int32_t  pieceID, int32_t  materialType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {"RequestPaintPiece", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pieceID, materialType);
}
inline void GorillaTagScripts::BuilderTableNetworking::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTagScripts::BuilderTableNetworking* GorillaTagScripts::BuilderTableNetworking::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::BuilderTableNetworking*>());
}
/// @brief Convert operator to "::GlobalNamespace::ITickSystemTick"
constexpr  GorillaTagScripts::BuilderTableNetworking::operator ::GlobalNamespace::ITickSystemTick*() noexcept {
return static_cast<::GlobalNamespace::ITickSystemTick*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ITickSystemTick"
constexpr ::GlobalNamespace::ITickSystemTick* GorillaTagScripts::BuilderTableNetworking::i___GlobalNamespace__ITickSystemTick() noexcept {
return static_cast<::GlobalNamespace::ITickSystemTick*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::BuilderTableNetworking::BuilderTableNetworking()   {
}
//  Writing Method size for method: ::GorillaTagScripts::BuilderTableNetworking_PlayerTableInitState._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTableNetworking_PlayerTableInitState::*)()>(&::GorillaTagScripts::BuilderTableNetworking_PlayerTableInitState::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5bac084;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking_PlayerTableInitState*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTableNetworking_PlayerTableInitState.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTableNetworking_PlayerTableInitState::*)()>(&::GorillaTagScripts::BuilderTableNetworking_PlayerTableInitState::Reset)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5bac8f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking_PlayerTableInitState*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Photon::Realtime::Player*& GorillaTagScripts::BuilderTableNetworking_PlayerTableInitState::__cordl_internal_get_player()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___player;
}
constexpr ::Photon::Realtime::Player* const& GorillaTagScripts::BuilderTableNetworking_PlayerTableInitState::__cordl_internal_get_player() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___player;
}
constexpr void GorillaTagScripts::BuilderTableNetworking_PlayerTableInitState::__cordl_internal_set_player(::Photon::Realtime::Player*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___player = value;
}
constexpr int32_t& GorillaTagScripts::BuilderTableNetworking_PlayerTableInitState::__cordl_internal_get_numSerializedBytes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___numSerializedBytes;
}
constexpr int32_t const& GorillaTagScripts::BuilderTableNetworking_PlayerTableInitState::__cordl_internal_get_numSerializedBytes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___numSerializedBytes;
}
constexpr void GorillaTagScripts::BuilderTableNetworking_PlayerTableInitState::__cordl_internal_set_numSerializedBytes(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___numSerializedBytes = value;
}
constexpr int32_t& GorillaTagScripts::BuilderTableNetworking_PlayerTableInitState::__cordl_internal_get_totalSerializedBytes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___totalSerializedBytes;
}
constexpr int32_t const& GorillaTagScripts::BuilderTableNetworking_PlayerTableInitState::__cordl_internal_get_totalSerializedBytes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___totalSerializedBytes;
}
constexpr void GorillaTagScripts::BuilderTableNetworking_PlayerTableInitState::__cordl_internal_set_totalSerializedBytes(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___totalSerializedBytes = value;
}
constexpr ::ArrayW<uint8_t>& GorillaTagScripts::BuilderTableNetworking_PlayerTableInitState::__cordl_internal_get_serializedTableState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serializedTableState;
}
constexpr ::ArrayW<uint8_t> const& GorillaTagScripts::BuilderTableNetworking_PlayerTableInitState::__cordl_internal_get_serializedTableState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serializedTableState;
}
constexpr void GorillaTagScripts::BuilderTableNetworking_PlayerTableInitState::__cordl_internal_set_serializedTableState(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___serializedTableState = value;
}
constexpr ::ArrayW<uint8_t>& GorillaTagScripts::BuilderTableNetworking_PlayerTableInitState::__cordl_internal_get_chunk()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chunk;
}
constexpr ::ArrayW<uint8_t> const& GorillaTagScripts::BuilderTableNetworking_PlayerTableInitState::__cordl_internal_get_chunk() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chunk;
}
constexpr void GorillaTagScripts::BuilderTableNetworking_PlayerTableInitState::__cordl_internal_set_chunk(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___chunk = value;
}
constexpr float_t& GorillaTagScripts::BuilderTableNetworking_PlayerTableInitState::__cordl_internal_get_waitForInitTimeRemaining()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waitForInitTimeRemaining;
}
constexpr float_t const& GorillaTagScripts::BuilderTableNetworking_PlayerTableInitState::__cordl_internal_get_waitForInitTimeRemaining() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waitForInitTimeRemaining;
}
constexpr void GorillaTagScripts::BuilderTableNetworking_PlayerTableInitState::__cordl_internal_set_waitForInitTimeRemaining(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___waitForInitTimeRemaining = value;
}
constexpr float_t& GorillaTagScripts::BuilderTableNetworking_PlayerTableInitState::__cordl_internal_get_sendNextChunkTimeRemaining()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sendNextChunkTimeRemaining;
}
constexpr float_t const& GorillaTagScripts::BuilderTableNetworking_PlayerTableInitState::__cordl_internal_get_sendNextChunkTimeRemaining() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sendNextChunkTimeRemaining;
}
constexpr void GorillaTagScripts::BuilderTableNetworking_PlayerTableInitState::__cordl_internal_set_sendNextChunkTimeRemaining(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sendNextChunkTimeRemaining = value;
}
inline void GorillaTagScripts::BuilderTableNetworking_PlayerTableInitState::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking_PlayerTableInitState*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::BuilderTableNetworking_PlayerTableInitState::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableNetworking_PlayerTableInitState*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTagScripts::BuilderTableNetworking_PlayerTableInitState* GorillaTagScripts::BuilderTableNetworking_PlayerTableInitState::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::BuilderTableNetworking_PlayerTableInitState*>());
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::BuilderTableNetworking_PlayerTableInitState::BuilderTableNetworking_PlayerTableInitState()   {
}
