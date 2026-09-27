#pragma once
// IWYU pragma private; include "GlobalNamespace/SITechTreeStation.hpp"
#include "GlobalNamespace/zzzz__SITechTreeStation_NodePopupState_impl.hpp"
#include "GlobalNamespace/zzzz__SITechTreeStation_TechTreeStationTerminalState_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__GameObject_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SITechTreeStation_def.hpp"
#include "GlobalNamespace/zzzz__DestroyIfNotBeta_def.hpp"
#include "GlobalNamespace/zzzz__GameEntityManager_def.hpp"
#include "GlobalNamespace/zzzz__ITouchScreenStation_def.hpp"
#include "GlobalNamespace/zzzz__SICombinedTerminal_def.hpp"
#include "GlobalNamespace/zzzz__SIGadgetListEntry_def.hpp"
#include "GlobalNamespace/zzzz__SIPlayer_def.hpp"
#include "GlobalNamespace/zzzz__SIResource_ResourceCost_def.hpp"
#include "GlobalNamespace/zzzz__SIResource_ResourceType_def.hpp"
#include "GlobalNamespace/zzzz__SIScreenRegion_def.hpp"
#include "GlobalNamespace/zzzz__SITechTreeNode_def.hpp"
#include "GlobalNamespace/zzzz__SITechTreePageId_def.hpp"
#include "GlobalNamespace/zzzz__SITechTreePage_def.hpp"
#include "GlobalNamespace/zzzz__SITechTreeSO_def.hpp"
#include "GlobalNamespace/zzzz__SITechTreeStation_NodePopupState_def.hpp"
#include "GlobalNamespace/zzzz__SITechTreeStation_TechTreeStationTerminalState_def.hpp"
#include "GlobalNamespace/zzzz__SITechTreeStation___c__DisplayClass75_0_def.hpp"
#include "GlobalNamespace/zzzz__SITechTreeStation_def.hpp"
#include "GlobalNamespace/zzzz__SITechTreeUIPage_def.hpp"
#include "GlobalNamespace/zzzz__SITouchscreenButton_SITouchscreenButtonType_def.hpp"
#include "GlobalNamespace/zzzz__SITouchscreenButton_def.hpp"
#include "GlobalNamespace/zzzz__SIUpgradeType_def.hpp"
#include "GlobalNamespace/zzzz__SoundBankPlayer_def.hpp"
#include "GlobalNamespace/zzzz__SuperInfectionManager_def.hpp"
#include "Photon/Pun/zzzz__PhotonMessageInfo_def.hpp"
#include "Photon/Pun/zzzz__PhotonStream_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/IO/zzzz__BinaryReader_def.hpp"
#include "System/IO/zzzz__BinaryWriter_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__SpriteRenderer_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SITechTreeStation.get_ScreenRegion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::SIScreenRegion> (::GlobalNamespace::SITechTreeStation::*)()>(&::GlobalNamespace::SITechTreeStation::get_ScreenRegion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5af00ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeStation*>(),
                        {"get_ScreenRegion", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SITechTreeStation.get_CurrentNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SITechTreeNode* (::GlobalNamespace::SITechTreeStation::*)()>(&::GlobalNamespace::SITechTreeStation::get_CurrentNode)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5af00f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeStation*>(),
                        {"get_CurrentNode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SITechTreeStation.get_CurrentPage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SITechTreePage* (::GlobalNamespace::SITechTreeStation::*)()>(&::GlobalNamespace::SITechTreeStation::get_CurrentPage)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5af012c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeStation*>(),
                        {"get_CurrentPage", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SITechTreeStation.get_ActivePlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::SIPlayer> (::GlobalNamespace::SITechTreeStation::*)()>(&::GlobalNamespace::SITechTreeStation::get_ActivePlayer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5af0170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeStation*>(),
                        {"get_ActivePlayer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SITechTreeStation.get_ActivePlayerName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::SITechTreeStation::*)()>(&::GlobalNamespace::SITechTreeStation::get_ActivePlayerName)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5af0188;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeStation*>(),
                        {"get_ActivePlayerName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SITechTreeStation.get_IsAuthority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SITechTreeStation::*)()>(&::GlobalNamespace::SITechTreeStation::get_IsAuthority)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5af01d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeStation*>(),
                        {"get_IsAuthority", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SITechTreeStation.get_GameEntityManager
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::GameEntityManager> (::GlobalNamespace::SITechTreeStation::*)()>(&::GlobalNamespace::SITechTreeStation::get_GameEntityManager)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5af0210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeStation*>(),
                        {"get_GameEntityManager", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SITechTreeStation.get_SIManager
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::SuperInfectionManager> (::GlobalNamespace::SITechTreeStation::*)()>(&::GlobalNamespace::SITechTreeStation::get_SIManager)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5af023c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeStation*>(),
                        {"get_SIManager", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SITechTreeStation.CollectButtonColliders
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SITechTreeStation::*)()>(&::GlobalNamespace::SITechTreeStation::CollectButtonColliders)> {
  constexpr static std::size_t size = 0x308;
  constexpr static std::size_t addrs = 0x5af0260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeStation*>(),
                        {"CollectButtonColliders", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SITechTreeStation.SetNonPopupButtonsEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SITechTreeStation::*)(bool)>(&::GlobalNamespace::SITechTreeStation::SetNonPopupButtonsEnabled)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x5af0670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeStation*>(),
                        {"SetNonPopupButtonsEnabled", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SITechTreeStation.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SITechTreeStation::*)()>(&::GlobalNamespace::SITechTreeStation::OnEnable)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x5af07b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeStation*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SITechTreeStation.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SITechTreeStation::*)()>(&::GlobalNamespace::SITechTreeStation::OnDisable)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x5af0bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeStation*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SITechTreeStation.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SITechTreeStation::*)()>(&::GlobalNamespace::SITechTreeStation::Initialize)> {
  constexpr static std::size_t size = 0x604;
  constexpr static std::size_t addrs = 0x5af0e50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeStation*>(),
                        {"Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SITechTreeStation._RefreshButtonsUsableState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SITechTreeStation::*)()>(&::GlobalNamespace::SITechTreeStation::_RefreshButtonsUsableState)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x5af0a38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeStation*>(),
                        {"_RefreshButtonsUsableState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SITechTreeStation.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SITechTreeStation::*)()>(&::GlobalNamespace::SITechTreeStation::Reset)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5af17d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeStation*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SITechTreeStation.WriteDataPUN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SITechTreeStation::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::SITechTreeStation::WriteDataPUN)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x5af1c60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeStation*>(),
                        {"WriteDataPUN", {}, {::i2c::type_of<::Photon::Pun::PhotonStream*>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SITechTreeStation.ReadDataPUN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SITechTreeStation::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::SITechTreeStation::ReadDataPUN)> {
  constexpr static std::size_t size = 0x3f4;
  constexpr static std::size_t addrs = 0x5af1dec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeStation*>(),
                        {"ReadDataPUN", {}, {::i2c::type_of<::Photon::Pun::PhotonStream*>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SITechTreeStation.ZoneDataSerializeWrite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SITechTreeStation::*)(::System::IO::BinaryWriter*)>(&::GlobalNamespace::SITechTreeStation::ZoneDataSerializeWrite)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5af21e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeStation*>(),
                        {"ZoneDataSerializeWrite", {}, {::i2c::type_of<::System::IO::BinaryWriter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SITechTreeStation.ZoneDataSerializeRead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SITechTreeStation::*)(::System::IO::BinaryReader*)>(&::GlobalNamespace::SITechTreeStation::ZoneDataSerializeRead)> {
  constexpr static std::size_t size = 0x4a8;
  constexpr static std::size_t addrs = 0x5af2278;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeStation*>(),
                        {"ZoneDataSerializeRead", {}, {::i2c::type_of<::System::IO::BinaryReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SITechTreeStation.UpdateState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SITechTreeStation::*)(::GlobalNamespace::SITechTreeStation_TechTreeStationTerminalState, ::GlobalNamespace::SITechTreeStation_TechTreeStationTerminalState)>(&::GlobalNamespace::SITechTreeStation::UpdateState)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5af1dd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeStation*>(),
                        {"UpdateState", {}, {::i2c::type_of<::GlobalNamespace::SITechTreeStation_TechTreeStationTerminalState>(), ::i2c::type_of<::GlobalNamespace::SITechTreeStation_TechTreeStationTerminalState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SITechTreeStation.UpdateState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SITechTreeStation::*)(::GlobalNamespace::SITechTreeStation_TechTreeStationTerminalState)>(&::GlobalNamespace::SITechTreeStation::UpdateState)> {
  constexpr static std::size_t size = 0x800;
  constexpr static std::size_t addrs = 0x5af2730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeStation*>(),
                        {"UpdateState", {}, {::i2c::type_of<::GlobalNamespace::SITechTreeStation_TechTreeStationTerminalState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SITechTreeStation.SetScreenVisibility
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SITechTreeStation::*)(::GlobalNamespace::SITechTreeStation_TechTreeStationTerminalState, ::GlobalNamespace::SITechTreeStation_TechTreeStationTerminalState)>(&::GlobalNamespace::SITechTreeStation::SetScreenVisibility)> {
  constexpr static std::size_t size = 0x3cc;
  constexpr static std::size_t addrs = 0x5af1894;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeStation*>(),
                        {"SetScreenVisibility", {}, {::i2c::type_of<::GlobalNamespace::SITechTreeStation_TechTreeStationTerminalState>(), ::i2c::type_of<::GlobalNamespace::SITechTreeStation_TechTreeStationTerminalState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SITechTreeStation.IsPopupState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SITechTreeStation::*)(::GlobalNamespace::SITechTreeStation_TechTreeStationTerminalState)>(&::GlobalNamespace::SITechTreeStation::IsPopupState)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5af2720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeStation*>(),
                        {"IsPopupState", {}, {::i2c::type_of<::GlobalNamespace::SITechTreeStation_TechTreeStationTerminalState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SITechTreeStation.PlayerHandScanned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SITechTreeStation::*)(int32_t)>(&::GlobalNamespace::SITechTreeStation::PlayerHandScanned)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5af3b94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeStation*>(),
                        {"PlayerHandScanned", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SITechTreeStation.AddButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SITechTreeStation::*)(::GlobalNamespace::SITouchscreenButton*, bool)>(&::GlobalNamespace::SITechTreeStation::AddButton)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5af3be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeStation*>(),
                        {"AddButton", {}, {::i2c::type_of<::GlobalNamespace::SITouchscreenButton*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SITechTreeStation.TouchscreenButtonPressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SITechTreeStation::*)(::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType, int32_t, int32_t)>(&::GlobalNamespace::SITechTreeStation::TouchscreenButtonPressed)> {
  constexpr static std::size_t size = 0x528;
  constexpr static std::size_t addrs = 0x5af3cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeStation*>(),
                        {"TouchscreenButtonPressed", {}, {::i2c::type_of<::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SITechTreeStation.TouchscreenToggleButtonPressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SITechTreeStation::*)(::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType, int32_t, int32_t, bool)>(&::GlobalNamespace::SITechTreeStation::TouchscreenToggleButtonPressed)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5af41f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeStation*>(),
                        {"TouchscreenToggleButtonPressed", {}, {::i2c::type_of<::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SITechTreeStation.UpdateHelpButtonPage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SITechTreeStation::*)(int32_t)>(&::GlobalNamespace::SITechTreeStation::UpdateHelpButtonPage)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5af3b28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeStation*>(),
                        {"UpdateHelpButtonPage", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SITechTreeStation.UpdateNodePopupPage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SITechTreeStation::*)()>(&::GlobalNamespace::SITechTreeStation::UpdateNodePopupPage)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5af3a34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeStation*>(),
                        {"UpdateNodePopupPage", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SITechTreeStation.UpdateNodeData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SITechTreeStation::*)(::GlobalNamespace::SIPlayer*)>(&::GlobalNamespace::SITechTreeStation::UpdateNodeData)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5af2f30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeStation*>(),
                        {"UpdateNodeData", {}, {::i2c::type_of<::GlobalNamespace::SIPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SITechTreeStation.FormattedResearchCost
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::SITechTreeStation::*)(::GlobalNamespace::SITechTreeNode*)>(&::GlobalNamespace::SITechTreeStation::FormattedResearchCost)> {
  constexpr static std::size_t size = 0x368;
  constexpr static std::size_t addrs = 0x5af33b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeStation*>(),
                        {"FormattedResearchCost", {}, {::i2c::type_of<::GlobalNamespace::SITechTreeNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SITechTreeStation.FormattedCurrentResourceAmountsForNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::SITechTreeStation::*)(::GlobalNamespace::SITechTreeNode*)>(&::GlobalNamespace::SITechTreeStation::FormattedCurrentResourceAmountsForNode)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0x5af3720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeStation*>(),
                        {"FormattedCurrentResourceAmountsForNode", {}, {::i2c::type_of<::GlobalNamespace::SITechTreeNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SITechTreeStation.FormattedCurrentResourceTypesForNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::SITechTreeStation::*)(::GlobalNamespace::SITechTreeNode*)>(&::GlobalNamespace::SITechTreeStation::FormattedCurrentResourceTypesForNode)> {
  constexpr static std::size_t size = 0x374;
  constexpr static std::size_t addrs = 0x5af3044;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeStation*>(),
                        {"FormattedCurrentResourceTypesForNode", {}, {::i2c::type_of<::GlobalNamespace::SITechTreeNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SITechTreeStation.OnProgressionUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SITechTreeStation::*)()>(&::GlobalNamespace::SITechTreeStation::OnProgressionUpdate)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5af44d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeStation*>(),
                        {"OnProgressionUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SITechTreeStation.OnProgressionUpdateNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SITechTreeStation::*)(::GlobalNamespace::SIUpgradeType)>(&::GlobalNamespace::SITechTreeStation::OnProgressionUpdateNode)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5af4500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeStation*>(),
                        {"OnProgressionUpdateNode", {}, {::i2c::type_of<::GlobalNamespace::SIUpgradeType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SITechTreeStation.SetActivePage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SITechTreeStation::*)()>(&::GlobalNamespace::SITechTreeStation::SetActivePage)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5af4504;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeStation*>(),
                        {"SetActivePage", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SITechTreeStation.IsValidPage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SITechTreeStation::*)(int32_t)>(&::GlobalNamespace::SITechTreeStation::IsValidPage)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x5af45ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeStation*>(),
                        {"IsValidPage", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SITechTreeStation._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SITechTreeStation::*)()>(&::GlobalNamespace::SITechTreeStation::_ctor)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x5af4738;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeStation*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SITechTreeStation.ITouchScreenStation_get_gameObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::GlobalNamespace::SITechTreeStation::*)()>(&::GlobalNamespace::SITechTreeStation::ITouchScreenStation_get_gameObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5af48c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeStation*>(),
                        {"ITouchScreenStation.get_gameObject", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SITechTreeStation._CollectButtonColliders_g__RemoveButtonsInside_75_2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::UnityEngine::GameObject*>, ::by_ref<::GlobalNamespace::SITechTreeStation___c__DisplayClass75_0>)>(&::GlobalNamespace::SITechTreeStation::_CollectButtonColliders_g__RemoveButtonsInside_75_2)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5af0568;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeStation*>(),
                        {"<CollectButtonColliders>g__RemoveButtonsInside|75_2", {}, {::i2c::type_of<::ArrayW<::UnityEngine::GameObject*>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::SITechTreeStation___c__DisplayClass75_0>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SITechTreeStation_TechTreeStationTerminalState,::UnityW<::UnityEngine::GameObject>>*& GlobalNamespace::SITechTreeStation::__cordl_internal_get_screenData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___screenData;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SITechTreeStation_TechTreeStationTerminalState,::UnityW<::UnityEngine::GameObject>>* const& GlobalNamespace::SITechTreeStation::__cordl_internal_get_screenData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___screenData;
}
constexpr void GlobalNamespace::SITechTreeStation::__cordl_internal_set_screenData(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SITechTreeStation_TechTreeStationTerminalState,::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___screenData = value;
}
constexpr ::GlobalNamespace::SITechTreeStation_TechTreeStationTerminalState& GlobalNamespace::SITechTreeStation::__cordl_internal_get_currentState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentState;
}
constexpr ::GlobalNamespace::SITechTreeStation_TechTreeStationTerminalState const& GlobalNamespace::SITechTreeStation::__cordl_internal_get_currentState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentState;
}
constexpr void GlobalNamespace::SITechTreeStation::__cordl_internal_set_currentState(::GlobalNamespace::SITechTreeStation_TechTreeStationTerminalState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentState = value;
}
constexpr ::GlobalNamespace::SITechTreeStation_TechTreeStationTerminalState& GlobalNamespace::SITechTreeStation::__cordl_internal_get_lastState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastState;
}
constexpr ::GlobalNamespace::SITechTreeStation_TechTreeStationTerminalState const& GlobalNamespace::SITechTreeStation::__cordl_internal_get_lastState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastState;
}
constexpr void GlobalNamespace::SITechTreeStation::__cordl_internal_set_lastState(::GlobalNamespace::SITechTreeStation_TechTreeStationTerminalState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastState = value;
}
constexpr ::UnityW<::GlobalNamespace::SICombinedTerminal>& GlobalNamespace::SITechTreeStation::__cordl_internal_get_parentTerminal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parentTerminal;
}
constexpr ::UnityW<::GlobalNamespace::SICombinedTerminal> const& GlobalNamespace::SITechTreeStation::__cordl_internal_get_parentTerminal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parentTerminal;
}
constexpr void GlobalNamespace::SITechTreeStation::__cordl_internal_set_parentTerminal(::UnityW<::GlobalNamespace::SICombinedTerminal>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___parentTerminal = value;
}
constexpr ::UnityW<::UnityEngine::Sprite>& GlobalNamespace::SITechTreeStation::__cordl_internal_get_techPointSprite()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___techPointSprite;
}
constexpr ::UnityW<::UnityEngine::Sprite> const& GlobalNamespace::SITechTreeStation::__cordl_internal_get_techPointSprite() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___techPointSprite;
}
constexpr void GlobalNamespace::SITechTreeStation::__cordl_internal_set_techPointSprite(::UnityW<::UnityEngine::Sprite>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___techPointSprite = value;
}
constexpr ::UnityW<::UnityEngine::Sprite>& GlobalNamespace::SITechTreeStation::__cordl_internal_get_strangeWoodSprite()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___strangeWoodSprite;
}
constexpr ::UnityW<::UnityEngine::Sprite> const& GlobalNamespace::SITechTreeStation::__cordl_internal_get_strangeWoodSprite() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___strangeWoodSprite;
}
constexpr void GlobalNamespace::SITechTreeStation::__cordl_internal_set_strangeWoodSprite(::UnityW<::UnityEngine::Sprite>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___strangeWoodSprite = value;
}
constexpr ::UnityW<::UnityEngine::Sprite>& GlobalNamespace::SITechTreeStation::__cordl_internal_get_weirdGearSprite()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___weirdGearSprite;
}
constexpr ::UnityW<::UnityEngine::Sprite> const& GlobalNamespace::SITechTreeStation::__cordl_internal_get_weirdGearSprite() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___weirdGearSprite;
}
constexpr void GlobalNamespace::SITechTreeStation::__cordl_internal_set_weirdGearSprite(::UnityW<::UnityEngine::Sprite>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___weirdGearSprite = value;
}
constexpr ::UnityW<::UnityEngine::Sprite>& GlobalNamespace::SITechTreeStation::__cordl_internal_get_vibratingSpringSprite()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vibratingSpringSprite;
}
constexpr ::UnityW<::UnityEngine::Sprite> const& GlobalNamespace::SITechTreeStation::__cordl_internal_get_vibratingSpringSprite() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vibratingSpringSprite;
}
constexpr void GlobalNamespace::SITechTreeStation::__cordl_internal_set_vibratingSpringSprite(::UnityW<::UnityEngine::Sprite>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___vibratingSpringSprite = value;
}
constexpr ::UnityW<::UnityEngine::Sprite>& GlobalNamespace::SITechTreeStation::__cordl_internal_get_bouncySandSprite()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bouncySandSprite;
}
constexpr ::UnityW<::UnityEngine::Sprite> const& GlobalNamespace::SITechTreeStation::__cordl_internal_get_bouncySandSprite() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bouncySandSprite;
}
constexpr void GlobalNamespace::SITechTreeStation::__cordl_internal_set_bouncySandSprite(::UnityW<::UnityEngine::Sprite>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bouncySandSprite = value;
}
constexpr ::UnityW<::UnityEngine::Sprite>& GlobalNamespace::SITechTreeStation::__cordl_internal_get_floppyMetalSprite()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___floppyMetalSprite;
}
constexpr ::UnityW<::UnityEngine::Sprite> const& GlobalNamespace::SITechTreeStation::__cordl_internal_get_floppyMetalSprite() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___floppyMetalSprite;
}
constexpr void GlobalNamespace::SITechTreeStation::__cordl_internal_set_floppyMetalSprite(::UnityW<::UnityEngine::Sprite>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___floppyMetalSprite = value;
}
constexpr int32_t& GlobalNamespace::SITechTreeStation::__cordl_internal_get_currentNodeId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentNodeId;
}
constexpr int32_t const& GlobalNamespace::SITechTreeStation::__cordl_internal_get_currentNodeId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentNodeId;
}
constexpr void GlobalNamespace::SITechTreeStation::__cordl_internal_set_currentNodeId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentNodeId = value;
}
constexpr ::UnityW<::GlobalNamespace::SITechTreeSO>& GlobalNamespace::SITechTreeStation::__cordl_internal_get_techTreeSO()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___techTreeSO;
}
constexpr ::UnityW<::GlobalNamespace::SITechTreeSO> const& GlobalNamespace::SITechTreeStation::__cordl_internal_get_techTreeSO() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___techTreeSO;
}
constexpr void GlobalNamespace::SITechTreeStation::__cordl_internal_set_techTreeSO(::UnityW<::GlobalNamespace::SITechTreeSO>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___techTreeSO = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::SITechTreeStation::__cordl_internal_get_waitingForScanScreen()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waitingForScanScreen;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::SITechTreeStation::__cordl_internal_get_waitingForScanScreen() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waitingForScanScreen;
}
constexpr void GlobalNamespace::SITechTreeStation::__cordl_internal_set_waitingForScanScreen(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___waitingForScanScreen = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::SITechTreeStation::__cordl_internal_get_pagesListScreen()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pagesListScreen;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::SITechTreeStation::__cordl_internal_get_pagesListScreen() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pagesListScreen;
}
constexpr void GlobalNamespace::SITechTreeStation::__cordl_internal_set_pagesListScreen(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pagesListScreen = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::SITechTreeStation::__cordl_internal_get_pageScreen()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pageScreen;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::SITechTreeStation::__cordl_internal_get_pageScreen() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pageScreen;
}
constexpr void GlobalNamespace::SITechTreeStation::__cordl_internal_set_pageScreen(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pageScreen = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::SITechTreeStation::__cordl_internal_get_nodePopupScreen()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nodePopupScreen;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::SITechTreeStation::__cordl_internal_get_nodePopupScreen() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nodePopupScreen;
}
constexpr void GlobalNamespace::SITechTreeStation::__cordl_internal_set_nodePopupScreen(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nodePopupScreen = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::SITechTreeStation::__cordl_internal_get_techTreeHelpScreen()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___techTreeHelpScreen;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::SITechTreeStation::__cordl_internal_get_techTreeHelpScreen() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___techTreeHelpScreen;
}
constexpr void GlobalNamespace::SITechTreeStation::__cordl_internal_set_techTreeHelpScreen(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___techTreeHelpScreen = value;
}
constexpr ::UnityW<::GlobalNamespace::SIScreenRegion>& GlobalNamespace::SITechTreeStation::__cordl_internal_get_screenRegion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___screenRegion;
}
constexpr ::UnityW<::GlobalNamespace::SIScreenRegion> const& GlobalNamespace::SITechTreeStation::__cordl_internal_get_screenRegion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___screenRegion;
}
constexpr void GlobalNamespace::SITechTreeStation::__cordl_internal_set_screenRegion(::UnityW<::GlobalNamespace::SIScreenRegion>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___screenRegion = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::SITechTreeStation::__cordl_internal_get_active()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___active;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::SITechTreeStation::__cordl_internal_get_active() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___active;
}
constexpr void GlobalNamespace::SITechTreeStation::__cordl_internal_set_active(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___active = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::SITechTreeStation::__cordl_internal_get_notActive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___notActive;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::SITechTreeStation::__cordl_internal_get_notActive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___notActive;
}
constexpr void GlobalNamespace::SITechTreeStation::__cordl_internal_set_notActive(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___notActive = value;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& GlobalNamespace::SITechTreeStation::__cordl_internal_get_screenDescriptionText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___screenDescriptionText;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& GlobalNamespace::SITechTreeStation::__cordl_internal_get_screenDescriptionText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___screenDescriptionText;
}
constexpr void GlobalNamespace::SITechTreeStation::__cordl_internal_set_screenDescriptionText(::UnityW<::TMPro::TextMeshProUGUI>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___screenDescriptionText = value;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& GlobalNamespace::SITechTreeStation::__cordl_internal_get_playerNameText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerNameText;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& GlobalNamespace::SITechTreeStation::__cordl_internal_get_playerNameText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerNameText;
}
constexpr void GlobalNamespace::SITechTreeStation::__cordl_internal_set_playerNameText(::UnityW<::TMPro::TextMeshProUGUI>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerNameText = value;
}
constexpr ::UnityW<::UnityEngine::UI::Image>& GlobalNamespace::SITechTreeStation::__cordl_internal_get_background()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___background;
}
constexpr ::UnityW<::UnityEngine::UI::Image> const& GlobalNamespace::SITechTreeStation::__cordl_internal_get_background() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___background;
}
constexpr void GlobalNamespace::SITechTreeStation::__cordl_internal_set_background(::UnityW<::UnityEngine::UI::Image>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___background = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::SITechTreeStation::__cordl_internal_get_uiCenter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uiCenter;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::SITechTreeStation::__cordl_internal_get_uiCenter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uiCenter;
}
constexpr void GlobalNamespace::SITechTreeStation::__cordl_internal_set_uiCenter(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___uiCenter = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::SITechTreeStation::__cordl_internal_get_popupScreen()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___popupScreen;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::SITechTreeStation::__cordl_internal_get_popupScreen() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___popupScreen;
}
constexpr void GlobalNamespace::SITechTreeStation::__cordl_internal_set_popupScreen(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___popupScreen = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::SITechTreeStation::__cordl_internal_get_pageListParent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pageListParent;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::SITechTreeStation::__cordl_internal_get_pageListParent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pageListParent;
}
constexpr void GlobalNamespace::SITechTreeStation::__cordl_internal_set_pageListParent(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pageListParent = value;
}
constexpr ::UnityW<::GlobalNamespace::SIGadgetListEntry>& GlobalNamespace::SITechTreeStation::__cordl_internal_get_pageListEntryPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pageListEntryPrefab;
}
constexpr ::UnityW<::GlobalNamespace::SIGadgetListEntry> const& GlobalNamespace::SITechTreeStation::__cordl_internal_get_pageListEntryPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pageListEntryPrefab;
}
constexpr void GlobalNamespace::SITechTreeStation::__cordl_internal_set_pageListEntryPrefab(::UnityW<::GlobalNamespace::SIGadgetListEntry>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pageListEntryPrefab = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SIGadgetListEntry>>*& GlobalNamespace::SITechTreeStation::__cordl_internal_get_pageButtons()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pageButtons;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SIGadgetListEntry>>* const& GlobalNamespace::SITechTreeStation::__cordl_internal_get_pageButtons() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pageButtons;
}
constexpr void GlobalNamespace::SITechTreeStation::__cordl_internal_set_pageButtons(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SIGadgetListEntry>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pageButtons = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::SITechTreeStation::__cordl_internal_get_pageParent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pageParent;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::SITechTreeStation::__cordl_internal_get_pageParent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pageParent;
}
constexpr void GlobalNamespace::SITechTreeStation::__cordl_internal_set_pageParent(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pageParent = value;
}
constexpr ::UnityW<::GlobalNamespace::SITechTreeUIPage>& GlobalNamespace::SITechTreeStation::__cordl_internal_get_pagePrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pagePrefab;
}
constexpr ::UnityW<::GlobalNamespace::SITechTreeUIPage> const& GlobalNamespace::SITechTreeStation::__cordl_internal_get_pagePrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pagePrefab;
}
constexpr void GlobalNamespace::SITechTreeStation::__cordl_internal_set_pagePrefab(::UnityW<::GlobalNamespace::SITechTreeUIPage>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pagePrefab = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SITechTreeUIPage>>*& GlobalNamespace::SITechTreeStation::__cordl_internal_get_techTreePages()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___techTreePages;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SITechTreeUIPage>>* const& GlobalNamespace::SITechTreeStation::__cordl_internal_get_techTreePages() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___techTreePages;
}
constexpr void GlobalNamespace::SITechTreeStation::__cordl_internal_set_techTreePages(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SITechTreeUIPage>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___techTreePages = value;
}
constexpr ::UnityW<::UnityEngine::SpriteRenderer>& GlobalNamespace::SITechTreeStation::__cordl_internal_get_techTreeIcon()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___techTreeIcon;
}
constexpr ::UnityW<::UnityEngine::SpriteRenderer> const& GlobalNamespace::SITechTreeStation::__cordl_internal_get_techTreeIcon() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___techTreeIcon;
}
constexpr void GlobalNamespace::SITechTreeStation::__cordl_internal_set_techTreeIcon(::UnityW<::UnityEngine::SpriteRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___techTreeIcon = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& GlobalNamespace::SITechTreeStation::__cordl_internal_get_nodePopupScreens()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nodePopupScreens;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& GlobalNamespace::SITechTreeStation::__cordl_internal_get_nodePopupScreens() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nodePopupScreens;
}
constexpr void GlobalNamespace::SITechTreeStation::__cordl_internal_set_nodePopupScreens(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nodePopupScreens = value;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& GlobalNamespace::SITechTreeStation::__cordl_internal_get_nodeNameText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nodeNameText;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& GlobalNamespace::SITechTreeStation::__cordl_internal_get_nodeNameText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nodeNameText;
}
constexpr void GlobalNamespace::SITechTreeStation::__cordl_internal_set_nodeNameText(::UnityW<::TMPro::TextMeshProUGUI>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nodeNameText = value;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& GlobalNamespace::SITechTreeStation::__cordl_internal_get_nodeDescriptionText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nodeDescriptionText;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& GlobalNamespace::SITechTreeStation::__cordl_internal_get_nodeDescriptionText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nodeDescriptionText;
}
constexpr void GlobalNamespace::SITechTreeStation::__cordl_internal_set_nodeDescriptionText(::UnityW<::TMPro::TextMeshProUGUI>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nodeDescriptionText = value;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& GlobalNamespace::SITechTreeStation::__cordl_internal_get_nodeResourceTypeText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nodeResourceTypeText;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& GlobalNamespace::SITechTreeStation::__cordl_internal_get_nodeResourceTypeText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nodeResourceTypeText;
}
constexpr void GlobalNamespace::SITechTreeStation::__cordl_internal_set_nodeResourceTypeText(::UnityW<::TMPro::TextMeshProUGUI>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nodeResourceTypeText = value;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& GlobalNamespace::SITechTreeStation::__cordl_internal_get_nodeResourceCostText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nodeResourceCostText;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& GlobalNamespace::SITechTreeStation::__cordl_internal_get_nodeResourceCostText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nodeResourceCostText;
}
constexpr void GlobalNamespace::SITechTreeStation::__cordl_internal_set_nodeResourceCostText(::UnityW<::TMPro::TextMeshProUGUI>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nodeResourceCostText = value;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& GlobalNamespace::SITechTreeStation::__cordl_internal_get_playerCurrentResourceAmountsText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerCurrentResourceAmountsText;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& GlobalNamespace::SITechTreeStation::__cordl_internal_get_playerCurrentResourceAmountsText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerCurrentResourceAmountsText;
}
constexpr void GlobalNamespace::SITechTreeStation::__cordl_internal_set_playerCurrentResourceAmountsText(::UnityW<::TMPro::TextMeshProUGUI>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerCurrentResourceAmountsText = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::SITechTreeStation::__cordl_internal_get_nodeAvailable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nodeAvailable;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::SITechTreeStation::__cordl_internal_get_nodeAvailable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nodeAvailable;
}
constexpr void GlobalNamespace::SITechTreeStation::__cordl_internal_set_nodeAvailable(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nodeAvailable = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::SITechTreeStation::__cordl_internal_get_nodeLocked()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nodeLocked;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::SITechTreeStation::__cordl_internal_get_nodeLocked() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nodeLocked;
}
constexpr void GlobalNamespace::SITechTreeStation::__cordl_internal_set_nodeLocked(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nodeLocked = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::SITechTreeStation::__cordl_internal_get_nodeResearched()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nodeResearched;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::SITechTreeStation::__cordl_internal_get_nodeResearched() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nodeResearched;
}
constexpr void GlobalNamespace::SITechTreeStation::__cordl_internal_set_nodeResearched(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nodeResearched = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::SITechTreeStation::__cordl_internal_get_canAffordNode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___canAffordNode;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::SITechTreeStation::__cordl_internal_get_canAffordNode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___canAffordNode;
}
constexpr void GlobalNamespace::SITechTreeStation::__cordl_internal_set_canAffordNode(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___canAffordNode = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::SITechTreeStation::__cordl_internal_get_cantAffordNode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cantAffordNode;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::SITechTreeStation::__cordl_internal_get_cantAffordNode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cantAffordNode;
}
constexpr void GlobalNamespace::SITechTreeStation::__cordl_internal_set_cantAffordNode(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cantAffordNode = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::SITechTreeStation::__cordl_internal_get_nodeResearchButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nodeResearchButton;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::SITechTreeStation::__cordl_internal_get_nodeResearchButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nodeResearchButton;
}
constexpr void GlobalNamespace::SITechTreeStation::__cordl_internal_set_nodeResearchButton(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nodeResearchButton = value;
}
constexpr ::UnityW<::UnityEngine::SpriteRenderer>& GlobalNamespace::SITechTreeStation::__cordl_internal_get_techPointCost()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___techPointCost;
}
constexpr ::UnityW<::UnityEngine::SpriteRenderer> const& GlobalNamespace::SITechTreeStation::__cordl_internal_get_techPointCost() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___techPointCost;
}
constexpr void GlobalNamespace::SITechTreeStation::__cordl_internal_set_techPointCost(::UnityW<::UnityEngine::SpriteRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___techPointCost = value;
}
constexpr ::UnityW<::UnityEngine::SpriteRenderer>& GlobalNamespace::SITechTreeStation::__cordl_internal_get_resourceCost()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resourceCost;
}
constexpr ::UnityW<::UnityEngine::SpriteRenderer> const& GlobalNamespace::SITechTreeStation::__cordl_internal_get_resourceCost() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resourceCost;
}
constexpr void GlobalNamespace::SITechTreeStation::__cordl_internal_set_resourceCost(::UnityW<::UnityEngine::SpriteRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___resourceCost = value;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& GlobalNamespace::SITechTreeStation::__cordl_internal_get_nodeNameResearchMessageText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nodeNameResearchMessageText;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& GlobalNamespace::SITechTreeStation::__cordl_internal_get_nodeNameResearchMessageText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nodeNameResearchMessageText;
}
constexpr void GlobalNamespace::SITechTreeStation::__cordl_internal_set_nodeNameResearchMessageText(::UnityW<::TMPro::TextMeshProUGUI>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nodeNameResearchMessageText = value;
}
constexpr ::GlobalNamespace::SITechTreeStation_NodePopupState& GlobalNamespace::SITechTreeStation::__cordl_internal_get_nodePopupState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nodePopupState;
}
constexpr ::GlobalNamespace::SITechTreeStation_NodePopupState const& GlobalNamespace::SITechTreeStation::__cordl_internal_get_nodePopupState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nodePopupState;
}
constexpr void GlobalNamespace::SITechTreeStation::__cordl_internal_set_nodePopupState(::GlobalNamespace::SITechTreeStation_NodePopupState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nodePopupState = value;
}
constexpr int32_t& GlobalNamespace::SITechTreeStation::__cordl_internal_get_helpScreenIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___helpScreenIndex;
}
constexpr int32_t const& GlobalNamespace::SITechTreeStation::__cordl_internal_get_helpScreenIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___helpScreenIndex;
}
constexpr void GlobalNamespace::SITechTreeStation::__cordl_internal_set_helpScreenIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___helpScreenIndex = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& GlobalNamespace::SITechTreeStation::__cordl_internal_get_helpPopupScreens()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___helpPopupScreens;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& GlobalNamespace::SITechTreeStation::__cordl_internal_get_helpPopupScreens() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___helpPopupScreens;
}
constexpr void GlobalNamespace::SITechTreeStation::__cordl_internal_set_helpPopupScreens(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___helpPopupScreens = value;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& GlobalNamespace::SITechTreeStation::__cordl_internal_get_soundBankPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___soundBankPlayer;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& GlobalNamespace::SITechTreeStation::__cordl_internal_get_soundBankPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___soundBankPlayer;
}
constexpr void GlobalNamespace::SITechTreeStation::__cordl_internal_set_soundBankPlayer(::UnityW<::GlobalNamespace::SoundBankPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___soundBankPlayer = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*& GlobalNamespace::SITechTreeStation::__cordl_internal_get__nonPopupButtonColliders()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nonPopupButtonColliders;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* const& GlobalNamespace::SITechTreeStation::__cordl_internal_get__nonPopupButtonColliders() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nonPopupButtonColliders;
}
constexpr void GlobalNamespace::SITechTreeStation::__cordl_internal_set__nonPopupButtonColliders(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____nonPopupButtonColliders = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SIResource_ResourceType,::UnityW<::UnityEngine::Sprite>>*& GlobalNamespace::SITechTreeStation::__cordl_internal_get_spriteByType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spriteByType;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SIResource_ResourceType,::UnityW<::UnityEngine::Sprite>>* const& GlobalNamespace::SITechTreeStation::__cordl_internal_get_spriteByType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spriteByType;
}
constexpr void GlobalNamespace::SITechTreeStation::__cordl_internal_set_spriteByType(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SIResource_ResourceType,::UnityW<::UnityEngine::Sprite>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spriteByType = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SITechTreePageId,::UnityW<::UnityEngine::Sprite>>*& GlobalNamespace::SITechTreeStation::__cordl_internal_get_techTreeIconById()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___techTreeIconById;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SITechTreePageId,::UnityW<::UnityEngine::Sprite>>* const& GlobalNamespace::SITechTreeStation::__cordl_internal_get_techTreeIconById() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___techTreeIconById;
}
constexpr void GlobalNamespace::SITechTreeStation::__cordl_internal_set_techTreeIconById(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SITechTreePageId,::UnityW<::UnityEngine::Sprite>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___techTreeIconById = value;
}
constexpr bool& GlobalNamespace::SITechTreeStation::__cordl_internal_get_initialized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialized;
}
constexpr bool const& GlobalNamespace::SITechTreeStation::__cordl_internal_get_initialized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialized;
}
constexpr void GlobalNamespace::SITechTreeStation::__cordl_internal_set_initialized(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___initialized = value;
}
inline ::UnityW<::GlobalNamespace::SIScreenRegion> GlobalNamespace::SITechTreeStation::get_ScreenRegion()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeStation*>(),
                        {"get_ScreenRegion", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::SIScreenRegion>>(this, ___internal_method);
}
inline ::GlobalNamespace::SITechTreeNode* GlobalNamespace::SITechTreeStation::get_CurrentNode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeStation*>(),
                        {"get_CurrentNode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SITechTreeNode*>(this, ___internal_method);
}
inline ::GlobalNamespace::SITechTreePage* GlobalNamespace::SITechTreeStation::get_CurrentPage()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeStation*>(),
                        {"get_CurrentPage", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SITechTreePage*>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::SIPlayer> GlobalNamespace::SITechTreeStation::get_ActivePlayer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeStation*>(),
                        {"get_ActivePlayer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::SIPlayer>>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::SITechTreeStation::get_ActivePlayerName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeStation*>(),
                        {"get_ActivePlayerName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool GlobalNamespace::SITechTreeStation::get_IsAuthority()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeStation*>(),
                        {"get_IsAuthority", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::GameEntityManager> GlobalNamespace::SITechTreeStation::get_GameEntityManager()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeStation*>(),
                        {"get_GameEntityManager", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::GameEntityManager>>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::SuperInfectionManager> GlobalNamespace::SITechTreeStation::get_SIManager()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeStation*>(),
                        {"get_SIManager", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::SuperInfectionManager>>(this, ___internal_method);
}
inline void GlobalNamespace::SITechTreeStation::CollectButtonColliders()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeStation*>(),
                        {"CollectButtonColliders", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SITechTreeStation::SetNonPopupButtonsEnabled(bool  enable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeStation*>(),
                        {"SetNonPopupButtonsEnabled", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, enable);
}
inline void GlobalNamespace::SITechTreeStation::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeStation*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SITechTreeStation::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeStation*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SITechTreeStation::Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeStation*>(),
                        {"Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SITechTreeStation::_RefreshButtonsUsableState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeStation*>(),
                        {"_RefreshButtonsUsableState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SITechTreeStation::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeStation*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SITechTreeStation::WriteDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeStation*>(),
                        {"WriteDataPUN", {}, {::i2c::type_of<::Photon::Pun::PhotonStream*>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline void GlobalNamespace::SITechTreeStation::ReadDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeStation*>(),
                        {"ReadDataPUN", {}, {::i2c::type_of<::Photon::Pun::PhotonStream*>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline void GlobalNamespace::SITechTreeStation::ZoneDataSerializeWrite(::System::IO::BinaryWriter*  writer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeStation*>(),
                        {"ZoneDataSerializeWrite", {}, {::i2c::type_of<::System::IO::BinaryWriter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer);
}
inline void GlobalNamespace::SITechTreeStation::ZoneDataSerializeRead(::System::IO::BinaryReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeStation*>(),
                        {"ZoneDataSerializeRead", {}, {::i2c::type_of<::System::IO::BinaryReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader);
}
inline void GlobalNamespace::SITechTreeStation::UpdateState(::GlobalNamespace::SITechTreeStation_TechTreeStationTerminalState  newState, ::GlobalNamespace::SITechTreeStation_TechTreeStationTerminalState  newLastState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeStation*>(),
                        {"UpdateState", {}, {::i2c::type_of<::GlobalNamespace::SITechTreeStation_TechTreeStationTerminalState>(), ::i2c::type_of<::GlobalNamespace::SITechTreeStation_TechTreeStationTerminalState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState, newLastState);
}
inline void GlobalNamespace::SITechTreeStation::UpdateState(::GlobalNamespace::SITechTreeStation_TechTreeStationTerminalState  newState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeStation*>(),
                        {"UpdateState", {}, {::i2c::type_of<::GlobalNamespace::SITechTreeStation_TechTreeStationTerminalState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState);
}
inline void GlobalNamespace::SITechTreeStation::SetScreenVisibility(::GlobalNamespace::SITechTreeStation_TechTreeStationTerminalState  currentState, ::GlobalNamespace::SITechTreeStation_TechTreeStationTerminalState  lastState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeStation*>(),
                        {"SetScreenVisibility", {}, {::i2c::type_of<::GlobalNamespace::SITechTreeStation_TechTreeStationTerminalState>(), ::i2c::type_of<::GlobalNamespace::SITechTreeStation_TechTreeStationTerminalState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, currentState, lastState);
}
inline bool GlobalNamespace::SITechTreeStation::IsPopupState(::GlobalNamespace::SITechTreeStation_TechTreeStationTerminalState  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeStation*>(),
                        {"IsPopupState", {}, {::i2c::type_of<::GlobalNamespace::SITechTreeStation_TechTreeStationTerminalState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, state);
}
inline void GlobalNamespace::SITechTreeStation::PlayerHandScanned(int32_t  actorNr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeStation*>(),
                        {"PlayerHandScanned", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, actorNr);
}
inline void GlobalNamespace::SITechTreeStation::AddButton(::GlobalNamespace::SITouchscreenButton*  button, bool  isPopupButton)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeStation*>(),
                        {"AddButton", {}, {::i2c::type_of<::GlobalNamespace::SITouchscreenButton*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, button, isPopupButton);
}
inline void GlobalNamespace::SITechTreeStation::TouchscreenButtonPressed(::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType  buttonType, int32_t  data, int32_t  actorNr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeStation*>(),
                        {"TouchscreenButtonPressed", {}, {::i2c::type_of<::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buttonType, data, actorNr);
}
inline void GlobalNamespace::SITechTreeStation::TouchscreenToggleButtonPressed(::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType  buttonType, int32_t  data, int32_t  actorNr, bool  isToggledOn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeStation*>(),
                        {"TouchscreenToggleButtonPressed", {}, {::i2c::type_of<::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buttonType, data, actorNr, isToggledOn);
}
inline void GlobalNamespace::SITechTreeStation::UpdateHelpButtonPage(int32_t  helpButtonPageIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeStation*>(),
                        {"UpdateHelpButtonPage", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, helpButtonPageIndex);
}
inline void GlobalNamespace::SITechTreeStation::UpdateNodePopupPage()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeStation*>(),
                        {"UpdateNodePopupPage", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SITechTreeStation::UpdateNodeData(::GlobalNamespace::SIPlayer*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeStation*>(),
                        {"UpdateNodeData", {}, {::i2c::type_of<::GlobalNamespace::SIPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player);
}
inline ::StringW GlobalNamespace::SITechTreeStation::FormattedResearchCost(::GlobalNamespace::SITechTreeNode*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeStation*>(),
                        {"FormattedResearchCost", {}, {::i2c::type_of<::GlobalNamespace::SITechTreeNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, node);
}
inline ::StringW GlobalNamespace::SITechTreeStation::FormattedCurrentResourceAmountsForNode(::GlobalNamespace::SITechTreeNode*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeStation*>(),
                        {"FormattedCurrentResourceAmountsForNode", {}, {::i2c::type_of<::GlobalNamespace::SITechTreeNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, node);
}
inline ::StringW GlobalNamespace::SITechTreeStation::FormattedCurrentResourceTypesForNode(::GlobalNamespace::SITechTreeNode*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeStation*>(),
                        {"FormattedCurrentResourceTypesForNode", {}, {::i2c::type_of<::GlobalNamespace::SITechTreeNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, node);
}
inline void GlobalNamespace::SITechTreeStation::OnProgressionUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeStation*>(),
                        {"OnProgressionUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SITechTreeStation::OnProgressionUpdateNode(::GlobalNamespace::SIUpgradeType  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeStation*>(),
                        {"OnProgressionUpdateNode", {}, {::i2c::type_of<::GlobalNamespace::SIUpgradeType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type);
}
inline void GlobalNamespace::SITechTreeStation::SetActivePage()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeStation*>(),
                        {"SetActivePage", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::SITechTreeStation::IsValidPage(int32_t  pageId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeStation*>(),
                        {"IsValidPage", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pageId);
}
inline void GlobalNamespace::SITechTreeStation::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeStation*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::GameObject> GlobalNamespace::SITechTreeStation::ITouchScreenStation_get_gameObject()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeStation*>(),
                        {"ITouchScreenStation.get_gameObject", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method);
}
inline void GlobalNamespace::SITechTreeStation::_CollectButtonColliders_g__RemoveButtonsInside_75_2(::ArrayW<::UnityEngine::GameObject*>  roots, ::by_ref<::GlobalNamespace::SITechTreeStation___c__DisplayClass75_0>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeStation*>(),
                        {"<CollectButtonColliders>g__RemoveButtonsInside|75_2", {}, {::i2c::type_of<::ArrayW<::UnityEngine::GameObject*>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::SITechTreeStation___c__DisplayClass75_0>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, roots, _cordl_fixed_empty_name_whitespace);
}
inline ::GlobalNamespace::SITechTreeStation* GlobalNamespace::SITechTreeStation::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SITechTreeStation*>());
}
/// @brief Convert operator to "::GlobalNamespace::ITouchScreenStation"
constexpr  GlobalNamespace::SITechTreeStation::operator ::GlobalNamespace::ITouchScreenStation*() noexcept {
return static_cast<::GlobalNamespace::ITouchScreenStation*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ITouchScreenStation"
constexpr ::GlobalNamespace::ITouchScreenStation* GlobalNamespace::SITechTreeStation::i___GlobalNamespace__ITouchScreenStation() noexcept {
return static_cast<::GlobalNamespace::ITouchScreenStation*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SITechTreeStation::SITechTreeStation()   {
}
//  Writing Method size for method: ::GlobalNamespace::SITechTreeStation___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SITechTreeStation___c::*)()>(&::GlobalNamespace::SITechTreeStation___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5af4934;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeStation___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SITechTreeStation___c._CollectButtonColliders_b__75_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::GlobalNamespace::SITechTreeStation___c::*)(::GlobalNamespace::DestroyIfNotBeta*)>(&::GlobalNamespace::SITechTreeStation___c::_CollectButtonColliders_b__75_0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5af493c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeStation___c*>(),
                        {"<CollectButtonColliders>b__75_0", {}, {::i2c::type_of<::GlobalNamespace::DestroyIfNotBeta*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SITechTreeStation___c._CollectButtonColliders_b__75_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Collider> (::GlobalNamespace::SITechTreeStation___c::*)(::GlobalNamespace::SITouchscreenButton*)>(&::GlobalNamespace::SITechTreeStation___c::_CollectButtonColliders_b__75_1)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5af4954;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeStation___c*>(),
                        {"<CollectButtonColliders>b__75_1", {}, {::i2c::type_of<::GlobalNamespace::SITouchscreenButton*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SITechTreeStation___c._FormattedResearchCost_b__97_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::SITechTreeStation___c::*)(::GlobalNamespace::SIResource_ResourceCost)>(&::GlobalNamespace::SITechTreeStation___c::_FormattedResearchCost_b__97_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5af49a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeStation___c*>(),
                        {"<FormattedResearchCost>b__97_0", {}, {::i2c::type_of<::GlobalNamespace::SIResource_ResourceCost>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::SITechTreeStation___c::setStaticF___9(::GlobalNamespace::SITechTreeStation___c*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::SITechTreeStation___c*, "<>9", ::GlobalNamespace::SITechTreeStation___c*>(std::forward<::GlobalNamespace::SITechTreeStation___c*>(value));
}
inline ::GlobalNamespace::SITechTreeStation___c* GlobalNamespace::SITechTreeStation___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::SITechTreeStation___c*, "<>9", ::GlobalNamespace::SITechTreeStation___c*>();
}
inline void GlobalNamespace::SITechTreeStation___c::setStaticF___9__75_0(::System::Func_2<::UnityW<::GlobalNamespace::DestroyIfNotBeta>,::UnityW<::UnityEngine::GameObject>>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::UnityW<::GlobalNamespace::DestroyIfNotBeta>,::UnityW<::UnityEngine::GameObject>>*, "<>9__75_0", ::GlobalNamespace::SITechTreeStation___c*>(std::forward<::System::Func_2<::UnityW<::GlobalNamespace::DestroyIfNotBeta>,::UnityW<::UnityEngine::GameObject>>*>(value));
}
inline ::System::Func_2<::UnityW<::GlobalNamespace::DestroyIfNotBeta>,::UnityW<::UnityEngine::GameObject>>* GlobalNamespace::SITechTreeStation___c::getStaticF___9__75_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::UnityW<::GlobalNamespace::DestroyIfNotBeta>,::UnityW<::UnityEngine::GameObject>>*, "<>9__75_0", ::GlobalNamespace::SITechTreeStation___c*>();
}
inline void GlobalNamespace::SITechTreeStation___c::setStaticF___9__75_1(::System::Func_2<::UnityW<::GlobalNamespace::SITouchscreenButton>,::UnityW<::UnityEngine::Collider>>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::UnityW<::GlobalNamespace::SITouchscreenButton>,::UnityW<::UnityEngine::Collider>>*, "<>9__75_1", ::GlobalNamespace::SITechTreeStation___c*>(std::forward<::System::Func_2<::UnityW<::GlobalNamespace::SITouchscreenButton>,::UnityW<::UnityEngine::Collider>>*>(value));
}
inline ::System::Func_2<::UnityW<::GlobalNamespace::SITouchscreenButton>,::UnityW<::UnityEngine::Collider>>* GlobalNamespace::SITechTreeStation___c::getStaticF___9__75_1()  {
return ::cordl_internals::getStaticField<::System::Func_2<::UnityW<::GlobalNamespace::SITouchscreenButton>,::UnityW<::UnityEngine::Collider>>*, "<>9__75_1", ::GlobalNamespace::SITechTreeStation___c*>();
}
inline void GlobalNamespace::SITechTreeStation___c::setStaticF___9__97_0(::System::Func_2<::GlobalNamespace::SIResource_ResourceCost,int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::GlobalNamespace::SIResource_ResourceCost,int32_t>*, "<>9__97_0", ::GlobalNamespace::SITechTreeStation___c*>(std::forward<::System::Func_2<::GlobalNamespace::SIResource_ResourceCost,int32_t>*>(value));
}
inline ::System::Func_2<::GlobalNamespace::SIResource_ResourceCost,int32_t>* GlobalNamespace::SITechTreeStation___c::getStaticF___9__97_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::GlobalNamespace::SIResource_ResourceCost,int32_t>*, "<>9__97_0", ::GlobalNamespace::SITechTreeStation___c*>();
}
inline void GlobalNamespace::SITechTreeStation___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeStation___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::GameObject> GlobalNamespace::SITechTreeStation___c::_CollectButtonColliders_b__75_0(::GlobalNamespace::DestroyIfNotBeta*  d)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeStation___c*>(),
                        {"<CollectButtonColliders>b__75_0", {}, {::i2c::type_of<::GlobalNamespace::DestroyIfNotBeta*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method, d);
}
inline ::UnityW<::UnityEngine::Collider> GlobalNamespace::SITechTreeStation___c::_CollectButtonColliders_b__75_1(::GlobalNamespace::SITouchscreenButton*  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeStation___c*>(),
                        {"<CollectButtonColliders>b__75_1", {}, {::i2c::type_of<::GlobalNamespace::SITouchscreenButton*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Collider>>(this, ___internal_method, b);
}
inline int32_t GlobalNamespace::SITechTreeStation___c::_FormattedResearchCost_b__97_0(::GlobalNamespace::SIResource_ResourceCost  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITechTreeStation___c*>(),
                        {"<FormattedResearchCost>b__97_0", {}, {::i2c::type_of<::GlobalNamespace::SIResource_ResourceCost>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, c);
}
inline ::GlobalNamespace::SITechTreeStation___c* GlobalNamespace::SITechTreeStation___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SITechTreeStation___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SITechTreeStation___c::SITechTreeStation___c()   {
}
