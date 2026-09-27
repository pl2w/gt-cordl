#pragma once
// IWYU pragma private; include "Meta/XR/MultiplayerBlocks/Colocation/Fusion/FusionNetworkData.hpp"
#include "Fusion/zzzz__NetworkBehaviour_impl.hpp"
#include "Meta/XR/MultiplayerBlocks/Colocation/Fusion/zzzz__FusionAnchor_impl.hpp"
#include "Meta/XR/MultiplayerBlocks/Colocation/Fusion/zzzz__FusionPlayer_impl.hpp"
#include "Meta/XR/MultiplayerBlocks/Colocation/Fusion/zzzz__FusionNetworkData_def.hpp"
#include "Fusion/zzzz__NetworkBehaviour_def.hpp"
#include "Fusion/zzzz__NetworkLinkedList_1_def.hpp"
#include "Fusion/zzzz__SimulationMessage_def.hpp"
#include "Meta/XR/MultiplayerBlocks/Colocation/Fusion/zzzz__FusionAnchor_def.hpp"
#include "Meta/XR/MultiplayerBlocks/Colocation/Fusion/zzzz__FusionPlayer_def.hpp"
#include "Meta/XR/MultiplayerBlocks/Colocation/zzzz__Anchor_def.hpp"
#include "Meta/XR/MultiplayerBlocks/Colocation/zzzz__INetworkData_def.hpp"
#include "Meta/XR/MultiplayerBlocks/Colocation/zzzz__Player_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData.get_ColocationGroupCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData::*)()>(&::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData::get_ColocationGroupCount)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x9f63a28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData*>(),
                        {"get_ColocationGroupCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData.set_ColocationGroupCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData::*)(uint32_t)>(&::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData::set_ColocationGroupCount)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x9f63a84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData*>(),
                        {"set_ColocationGroupCount", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData.get_AnchorList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkLinkedList_1<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionAnchor> (::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData::*)()>(&::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData::get_AnchorList)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x9f63ae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData*>(),
                        {"get_AnchorList", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData.get_PlayerList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkLinkedList_1<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionPlayer> (::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData::*)()>(&::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData::get_PlayerList)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x9f63c18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData*>(),
                        {"get_PlayerList", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData.AddPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData::*)(::Meta::XR::MultiplayerBlocks::Colocation::Player)>(&::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData::AddPlayer)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x9f63d50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData*>(),
                        {"AddPlayer", {}, {::i2c::type_of<::Meta::XR::MultiplayerBlocks::Colocation::Player>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData.RemovePlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData::*)(::Meta::XR::MultiplayerBlocks::Colocation::Player)>(&::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData::RemovePlayer)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x9f63eac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData*>(),
                        {"RemovePlayer", {}, {::i2c::type_of<::Meta::XR::MultiplayerBlocks::Colocation::Player>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData.GetPlayerWithPlayerId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::Meta::XR::MultiplayerBlocks::Colocation::Player> (::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData::*)(uint64_t)>(&::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData::GetPlayerWithPlayerId)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x9f63fec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData*>(),
                        {"GetPlayerWithPlayerId", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData.GetPlayerWithOculusId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::Meta::XR::MultiplayerBlocks::Colocation::Player> (::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData::*)(uint64_t)>(&::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData::GetPlayerWithOculusId)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x9f64284;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData*>(),
                        {"GetPlayerWithOculusId", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData.GetAllPlayers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::Meta::XR::MultiplayerBlocks::Colocation::Player>* (::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData::*)()>(&::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData::GetAllPlayers)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x9f64500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData*>(),
                        {"GetAllPlayers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData.AddAnchor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData::*)(::Meta::XR::MultiplayerBlocks::Colocation::Anchor)>(&::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData::AddAnchor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x9f647c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData*>(),
                        {"AddAnchor", {}, {::i2c::type_of<::Meta::XR::MultiplayerBlocks::Colocation::Anchor>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData.RemoveAnchor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData::*)(::Meta::XR::MultiplayerBlocks::Colocation::Anchor)>(&::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData::RemoveAnchor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x9f648b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData*>(),
                        {"RemoveAnchor", {}, {::i2c::type_of<::Meta::XR::MultiplayerBlocks::Colocation::Anchor>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData.GetAnchor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::Meta::XR::MultiplayerBlocks::Colocation::Anchor> (::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData::*)(uint64_t)>(&::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData::GetAnchor)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x9f649a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData*>(),
                        {"GetAnchor", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData.GetAllAnchors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::Meta::XR::MultiplayerBlocks::Colocation::Anchor>* (::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData::*)()>(&::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData::GetAllAnchors)> {
  constexpr static std::size_t size = 0x2e4;
  constexpr static std::size_t addrs = 0x9f64c28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData*>(),
                        {"GetAllAnchors", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData.GetColocationGroupCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData::*)()>(&::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData::GetColocationGroupCount)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9f64f0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData*>(),
                        {"GetColocationGroupCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData.IncrementColocationGroupCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData::*)()>(&::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData::IncrementColocationGroupCount)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x9f64f10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData*>(),
                        {"IncrementColocationGroupCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData.AddFusionPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData::*)(::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionPlayer)>(&::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData::AddFusionPlayer)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x9f63db8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData*>(),
                        {"AddFusionPlayer", {}, {::i2c::type_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionPlayer>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData.RemoveFusionPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData::*)(::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionPlayer)>(&::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData::RemoveFusionPlayer)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x9f63ef8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData*>(),
                        {"RemoveFusionPlayer", {}, {::i2c::type_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionPlayer>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData.AddFusionAnchor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData::*)(::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionAnchor)>(&::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData::AddFusionAnchor)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x9f65510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData*>(),
                        {"AddFusionAnchor", {}, {::i2c::type_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionAnchor>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData.RemoveFusionAnchor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData::*)(::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionAnchor)>(&::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData::RemoveFusionAnchor)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x9f6581c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData*>(),
                        {"RemoveFusionAnchor", {}, {::i2c::type_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionAnchor>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData.AddPlayerRpc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData::*)(::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionPlayer)>(&::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData::AddPlayerRpc)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x9f650e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData*>(),
                        {"AddPlayerRpc", {}, {::i2c::type_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionPlayer>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData.RemovePlayerRpc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData::*)(::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionPlayer)>(&::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData::RemovePlayerRpc)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x9f652f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData*>(),
                        {"RemovePlayerRpc", {}, {::i2c::type_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionPlayer>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData.AddAnchorRpc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData::*)(::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionAnchor)>(&::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData::AddAnchorRpc)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x9f65604;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData*>(),
                        {"AddAnchorRpc", {}, {::i2c::type_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionAnchor>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData.RemoveAnchorRpc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData::*)(::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionAnchor)>(&::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData::RemoveAnchorRpc)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x9f65910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData*>(),
                        {"RemoveAnchorRpc", {}, {::i2c::type_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionAnchor>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData.IncrementColocationGroupCountRpc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData::*)()>(&::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData::IncrementColocationGroupCountRpc)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x9f64f5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData*>(),
                        {"IncrementColocationGroupCountRpc", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData::*)()>(&::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f65b28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData.CopyBackingFieldsToState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData::*)(bool)>(&::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData::CopyBackingFieldsToState)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x9f65b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData*>(),
                    {::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData.CopyStateToBackingFields
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData::*)()>(&::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData::CopyStateToBackingFields)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x9f65c58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData*>(),
                    {::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData*>(), 24}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData.AddPlayerRpc@Invoker
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::NetworkBehaviour*, ::Fusion::SimulationMessage*)>(&::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData::AddPlayerRpc@Invoker)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x9f65d44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData*>(),
                        {"AddPlayerRpc@Invoker", {}, {::i2c::type_of<::Fusion::NetworkBehaviour*>(), ::i2c::type_of<::Fusion::SimulationMessage*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData.RemovePlayerRpc@Invoker
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::NetworkBehaviour*, ::Fusion::SimulationMessage*)>(&::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData::RemovePlayerRpc@Invoker)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x9f65e48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData*>(),
                        {"RemovePlayerRpc@Invoker", {}, {::i2c::type_of<::Fusion::NetworkBehaviour*>(), ::i2c::type_of<::Fusion::SimulationMessage*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData.AddAnchorRpc@Invoker
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::NetworkBehaviour*, ::Fusion::SimulationMessage*)>(&::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData::AddAnchorRpc@Invoker)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x9f65f4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData*>(),
                        {"AddAnchorRpc@Invoker", {}, {::i2c::type_of<::Fusion::NetworkBehaviour*>(), ::i2c::type_of<::Fusion::SimulationMessage*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData.RemoveAnchorRpc@Invoker
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::NetworkBehaviour*, ::Fusion::SimulationMessage*)>(&::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData::RemoveAnchorRpc@Invoker)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x9f66050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData*>(),
                        {"RemoveAnchorRpc@Invoker", {}, {::i2c::type_of<::Fusion::NetworkBehaviour*>(), ::i2c::type_of<::Fusion::SimulationMessage*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData.IncrementColocationGroupCountRpc@Invoker
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::NetworkBehaviour*, ::Fusion::SimulationMessage*)>(&::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData::IncrementColocationGroupCountRpc@Invoker)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x9f66154;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData*>(),
                        {"IncrementColocationGroupCountRpc@Invoker", {}, {::i2c::type_of<::Fusion::NetworkBehaviour*>(), ::i2c::type_of<::Fusion::SimulationMessage*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr uint32_t& Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData::__cordl_internal_get__ColocationGroupCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ColocationGroupCount;
}
constexpr uint32_t const& Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData::__cordl_internal_get__ColocationGroupCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ColocationGroupCount;
}
constexpr void Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData::__cordl_internal_set__ColocationGroupCount(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ColocationGroupCount = value;
}
constexpr ::ArrayW<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionAnchor>& Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData::__cordl_internal_get__AnchorList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AnchorList;
}
constexpr ::ArrayW<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionAnchor> const& Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData::__cordl_internal_get__AnchorList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AnchorList;
}
constexpr void Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData::__cordl_internal_set__AnchorList(::ArrayW<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionAnchor>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____AnchorList = value;
}
constexpr ::ArrayW<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionPlayer>& Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData::__cordl_internal_get__PlayerList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PlayerList;
}
constexpr ::ArrayW<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionPlayer> const& Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData::__cordl_internal_get__PlayerList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PlayerList;
}
constexpr void Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData::__cordl_internal_set__PlayerList(::ArrayW<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____PlayerList = value;
}
inline uint32_t Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData::get_ColocationGroupCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData*>(),
                        {"get_ColocationGroupCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData::set_ColocationGroupCount(uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData*>(),
                        {"set_ColocationGroupCount", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Fusion::NetworkLinkedList_1<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionAnchor> Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData::get_AnchorList()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData*>(),
                        {"get_AnchorList", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkLinkedList_1<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionAnchor>>(this, ___internal_method);
}
inline ::Fusion::NetworkLinkedList_1<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionPlayer> Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData::get_PlayerList()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData*>(),
                        {"get_PlayerList", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkLinkedList_1<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionPlayer>>(this, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData::AddPlayer(::Meta::XR::MultiplayerBlocks::Colocation::Player  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData*>(),
                        {"AddPlayer", {}, {::i2c::type_of<::Meta::XR::MultiplayerBlocks::Colocation::Player>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player);
}
inline void Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData::RemovePlayer(::Meta::XR::MultiplayerBlocks::Colocation::Player  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData*>(),
                        {"RemovePlayer", {}, {::i2c::type_of<::Meta::XR::MultiplayerBlocks::Colocation::Player>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player);
}
inline ::System::Nullable_1<::Meta::XR::MultiplayerBlocks::Colocation::Player> Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData::GetPlayerWithPlayerId(uint64_t  playerId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData*>(),
                        {"GetPlayerWithPlayerId", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::Meta::XR::MultiplayerBlocks::Colocation::Player>>(this, ___internal_method, playerId);
}
inline ::System::Nullable_1<::Meta::XR::MultiplayerBlocks::Colocation::Player> Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData::GetPlayerWithOculusId(uint64_t  oculusId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData*>(),
                        {"GetPlayerWithOculusId", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::Meta::XR::MultiplayerBlocks::Colocation::Player>>(this, ___internal_method, oculusId);
}
inline ::System::Collections::Generic::List_1<::Meta::XR::MultiplayerBlocks::Colocation::Player>* Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData::GetAllPlayers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData*>(),
                        {"GetAllPlayers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Meta::XR::MultiplayerBlocks::Colocation::Player>*>(this, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData::AddAnchor(::Meta::XR::MultiplayerBlocks::Colocation::Anchor  anchor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData*>(),
                        {"AddAnchor", {}, {::i2c::type_of<::Meta::XR::MultiplayerBlocks::Colocation::Anchor>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, anchor);
}
inline void Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData::RemoveAnchor(::Meta::XR::MultiplayerBlocks::Colocation::Anchor  anchor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData*>(),
                        {"RemoveAnchor", {}, {::i2c::type_of<::Meta::XR::MultiplayerBlocks::Colocation::Anchor>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, anchor);
}
inline ::System::Nullable_1<::Meta::XR::MultiplayerBlocks::Colocation::Anchor> Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData::GetAnchor(uint64_t  ownerOculusId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData*>(),
                        {"GetAnchor", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::Meta::XR::MultiplayerBlocks::Colocation::Anchor>>(this, ___internal_method, ownerOculusId);
}
inline ::System::Collections::Generic::List_1<::Meta::XR::MultiplayerBlocks::Colocation::Anchor>* Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData::GetAllAnchors()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData*>(),
                        {"GetAllAnchors", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Meta::XR::MultiplayerBlocks::Colocation::Anchor>*>(this, ___internal_method);
}
inline uint32_t Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData::GetColocationGroupCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData*>(),
                        {"GetColocationGroupCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData::IncrementColocationGroupCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData*>(),
                        {"IncrementColocationGroupCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData::AddFusionPlayer(::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionPlayer  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData*>(),
                        {"AddFusionPlayer", {}, {::i2c::type_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionPlayer>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player);
}
inline void Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData::RemoveFusionPlayer(::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionPlayer  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData*>(),
                        {"RemoveFusionPlayer", {}, {::i2c::type_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionPlayer>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player);
}
inline void Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData::AddFusionAnchor(::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionAnchor  anchor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData*>(),
                        {"AddFusionAnchor", {}, {::i2c::type_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionAnchor>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, anchor);
}
inline void Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData::RemoveFusionAnchor(::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionAnchor  anchor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData*>(),
                        {"RemoveFusionAnchor", {}, {::i2c::type_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionAnchor>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, anchor);
}
inline void Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData::AddPlayerRpc(::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionPlayer  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData*>(),
                        {"AddPlayerRpc", {}, {::i2c::type_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionPlayer>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player);
}
inline void Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData::RemovePlayerRpc(::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionPlayer  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData*>(),
                        {"RemovePlayerRpc", {}, {::i2c::type_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionPlayer>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player);
}
inline void Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData::AddAnchorRpc(::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionAnchor  anchor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData*>(),
                        {"AddAnchorRpc", {}, {::i2c::type_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionAnchor>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, anchor);
}
inline void Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData::RemoveAnchorRpc(::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionAnchor  anchor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData*>(),
                        {"RemoveAnchorRpc", {}, {::i2c::type_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionAnchor>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, anchor);
}
inline void Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData::IncrementColocationGroupCountRpc()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData*>(),
                        {"IncrementColocationGroupCountRpc", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData::CopyBackingFieldsToState(bool  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData::CopyStateToBackingFields()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData::AddPlayerRpc@Invoker(::Fusion::NetworkBehaviour*  behaviour, ::Fusion::SimulationMessage*  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData*>(),
                        {"AddPlayerRpc@Invoker", {}, {::i2c::type_of<::Fusion::NetworkBehaviour*>(), ::i2c::type_of<::Fusion::SimulationMessage*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, behaviour, message);
}
inline void Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData::RemovePlayerRpc@Invoker(::Fusion::NetworkBehaviour*  behaviour, ::Fusion::SimulationMessage*  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData*>(),
                        {"RemovePlayerRpc@Invoker", {}, {::i2c::type_of<::Fusion::NetworkBehaviour*>(), ::i2c::type_of<::Fusion::SimulationMessage*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, behaviour, message);
}
inline void Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData::AddAnchorRpc@Invoker(::Fusion::NetworkBehaviour*  behaviour, ::Fusion::SimulationMessage*  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData*>(),
                        {"AddAnchorRpc@Invoker", {}, {::i2c::type_of<::Fusion::NetworkBehaviour*>(), ::i2c::type_of<::Fusion::SimulationMessage*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, behaviour, message);
}
inline void Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData::RemoveAnchorRpc@Invoker(::Fusion::NetworkBehaviour*  behaviour, ::Fusion::SimulationMessage*  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData*>(),
                        {"RemoveAnchorRpc@Invoker", {}, {::i2c::type_of<::Fusion::NetworkBehaviour*>(), ::i2c::type_of<::Fusion::SimulationMessage*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, behaviour, message);
}
inline void Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData::IncrementColocationGroupCountRpc@Invoker(::Fusion::NetworkBehaviour*  behaviour, ::Fusion::SimulationMessage*  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData*>(),
                        {"IncrementColocationGroupCountRpc@Invoker", {}, {::i2c::type_of<::Fusion::NetworkBehaviour*>(), ::i2c::type_of<::Fusion::SimulationMessage*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, behaviour, message);
}
inline ::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData* Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData*>());
}
/// @brief Convert operator to "::Meta::XR::MultiplayerBlocks::Colocation::INetworkData"
constexpr  Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData::operator ::Meta::XR::MultiplayerBlocks::Colocation::INetworkData*() noexcept {
return static_cast<::Meta::XR::MultiplayerBlocks::Colocation::INetworkData*>(static_cast<void*>(this));
}
/// @brief Convert to "::Meta::XR::MultiplayerBlocks::Colocation::INetworkData"
constexpr ::Meta::XR::MultiplayerBlocks::Colocation::INetworkData* Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData::i___Meta__XR__MultiplayerBlocks__Colocation__INetworkData() noexcept {
return static_cast<::Meta::XR::MultiplayerBlocks::Colocation::INetworkData*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData::FusionNetworkData()   {
}
