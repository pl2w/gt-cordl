#pragma once
// IWYU pragma private; include "GlobalNamespace/SIGadgetDispenser.hpp"
#include "GlobalNamespace/zzzz__GameEntityDelayedDestroy_Options_impl.hpp"
#include "GlobalNamespace/zzzz__SIGadgetDispenser_GadgetDispenserTerminalState_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__GameObject_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SIGadgetDispenser_def.hpp"
#include "GlobalNamespace/zzzz__GameEntityManager_def.hpp"
#include "GlobalNamespace/zzzz__ITouchScreenStation_def.hpp"
#include "GlobalNamespace/zzzz__SICombinedTerminal_def.hpp"
#include "GlobalNamespace/zzzz__SIDispenserGadgetListEntry_def.hpp"
#include "GlobalNamespace/zzzz__SIGadgetDispenser_GadgetDispenserTerminalState_def.hpp"
#include "GlobalNamespace/zzzz__SIGadgetListEntry_def.hpp"
#include "GlobalNamespace/zzzz__SIPlayer_def.hpp"
#include "GlobalNamespace/zzzz__SIScreenRegion_def.hpp"
#include "GlobalNamespace/zzzz__SITechTreeNode_def.hpp"
#include "GlobalNamespace/zzzz__SITechTreePage_def.hpp"
#include "GlobalNamespace/zzzz__SITechTreeSO_def.hpp"
#include "GlobalNamespace/zzzz__SITouchscreenButton_SITouchscreenButtonType_def.hpp"
#include "GlobalNamespace/zzzz__SITouchscreenButton_def.hpp"
#include "GlobalNamespace/zzzz__SoundBankPlayer_def.hpp"
#include "GlobalNamespace/zzzz__SuperInfectionManager_def.hpp"
#include "Photon/Pun/zzzz__PhotonMessageInfo_def.hpp"
#include "Photon/Pun/zzzz__PhotonStream_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/IO/zzzz__BinaryReader_def.hpp"
#include "System/IO/zzzz__BinaryWriter_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SIGadgetDispenser.get_isTryOn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SIGadgetDispenser::*)()>(&::GlobalNamespace::SIGadgetDispenser::get_isTryOn)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59dd008;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetDispenser*>(),
                        {"get_isTryOn", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetDispenser.get_ScreenRegion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::SIScreenRegion> (::GlobalNamespace::SIGadgetDispenser::*)()>(&::GlobalNamespace::SIGadgetDispenser::get_ScreenRegion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59dd010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetDispenser*>(),
                        {"get_ScreenRegion", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetDispenser.get_ActivePlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::SIPlayer> (::GlobalNamespace::SIGadgetDispenser::*)()>(&::GlobalNamespace::SIGadgetDispenser::get_ActivePlayer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x59dd018;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetDispenser*>(),
                        {"get_ActivePlayer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetDispenser.get_ActivePlayerName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::SIGadgetDispenser::*)()>(&::GlobalNamespace::SIGadgetDispenser::get_ActivePlayerName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x59dd030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetDispenser*>(),
                        {"get_ActivePlayerName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetDispenser.get_IsAuthority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SIGadgetDispenser::*)()>(&::GlobalNamespace::SIGadgetDispenser::get_IsAuthority)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x59dd074;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetDispenser*>(),
                        {"get_IsAuthority", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetDispenser.get_SIManager
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::SuperInfectionManager> (::GlobalNamespace::SIGadgetDispenser::*)()>(&::GlobalNamespace::SIGadgetDispenser::get_SIManager)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x59dd0b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetDispenser*>(),
                        {"get_SIManager", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetDispenser.get_GameEntityManager
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::GameEntityManager> (::GlobalNamespace::SIGadgetDispenser::*)()>(&::GlobalNamespace::SIGadgetDispenser::get_GameEntityManager)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x59dd0d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetDispenser*>(),
                        {"get_GameEntityManager", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetDispenser.get_CurrentNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SITechTreeNode* (::GlobalNamespace::SIGadgetDispenser::*)()>(&::GlobalNamespace::SIGadgetDispenser::get_CurrentNode)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x59dd100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetDispenser*>(),
                        {"get_CurrentNode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetDispenser.get_CurrentPage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SITechTreePage* (::GlobalNamespace::SIGadgetDispenser::*)()>(&::GlobalNamespace::SIGadgetDispenser::get_CurrentPage)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x59dd138;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetDispenser*>(),
                        {"get_CurrentPage", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetDispenser.get_TechTreeSO
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::SITechTreeSO> (::GlobalNamespace::SIGadgetDispenser::*)()>(&::GlobalNamespace::SIGadgetDispenser::get_TechTreeSO)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x59dd168;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetDispenser*>(),
                        {"get_TechTreeSO", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetDispenser.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetDispenser::*)()>(&::GlobalNamespace::SIGadgetDispenser::OnEnable)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x59dd18c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetDispenser*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetDispenser._RefreshButtonsUsableState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetDispenser::*)()>(&::GlobalNamespace::SIGadgetDispenser::_RefreshButtonsUsableState)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x59dd22c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetDispenser*>(),
                        {"_RefreshButtonsUsableState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetDispenser.SetNonPopupButtonsEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetDispenser::*)(bool)>(&::GlobalNamespace::SIGadgetDispenser::SetNonPopupButtonsEnabled)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x59dd3dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetDispenser*>(),
                        {"SetNonPopupButtonsEnabled", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetDispenser.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetDispenser::*)()>(&::GlobalNamespace::SIGadgetDispenser::Initialize)> {
  constexpr static std::size_t size = 0x640;
  constexpr static std::size_t addrs = 0x59da300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetDispenser*>(),
                        {"Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetDispenser.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetDispenser::*)()>(&::GlobalNamespace::SIGadgetDispenser::Reset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x59da940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetDispenser*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetDispenser.WriteDataPUN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetDispenser::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::SIGadgetDispenser::WriteDataPUN)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x59dab78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetDispenser*>(),
                        {"WriteDataPUN", {}, {::i2c::type_of<::Photon::Pun::PhotonStream*>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetDispenser.ReadDataPUN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetDispenser::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::SIGadgetDispenser::ReadDataPUN)> {
  constexpr static std::size_t size = 0x38c;
  constexpr static std::size_t addrs = 0x59daf8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetDispenser*>(),
                        {"ReadDataPUN", {}, {::i2c::type_of<::Photon::Pun::PhotonStream*>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetDispenser.ZoneDataSerializeWrite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetDispenser::*)(::System::IO::BinaryWriter*)>(&::GlobalNamespace::SIGadgetDispenser::ZoneDataSerializeWrite)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x59db388;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetDispenser*>(),
                        {"ZoneDataSerializeWrite", {}, {::i2c::type_of<::System::IO::BinaryWriter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetDispenser.ZoneDataSerializeRead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetDispenser::*)(::System::IO::BinaryReader*)>(&::GlobalNamespace::SIGadgetDispenser::ZoneDataSerializeRead)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0x59db484;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetDispenser*>(),
                        {"ZoneDataSerializeRead", {}, {::i2c::type_of<::System::IO::BinaryReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetDispenser.UpdateState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetDispenser::*)(::GlobalNamespace::SIGadgetDispenser_GadgetDispenserTerminalState, ::GlobalNamespace::SIGadgetDispenser_GadgetDispenserTerminalState)>(&::GlobalNamespace::SIGadgetDispenser::UpdateState)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x59ddb48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetDispenser*>(),
                        {"UpdateState", {}, {::i2c::type_of<::GlobalNamespace::SIGadgetDispenser_GadgetDispenserTerminalState>(), ::i2c::type_of<::GlobalNamespace::SIGadgetDispenser_GadgetDispenserTerminalState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetDispenser.UpdateState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetDispenser::*)(::GlobalNamespace::SIGadgetDispenser_GadgetDispenserTerminalState)>(&::GlobalNamespace::SIGadgetDispenser::UpdateState)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x59ddb6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetDispenser*>(),
                        {"UpdateState", {}, {::i2c::type_of<::GlobalNamespace::SIGadgetDispenser_GadgetDispenserTerminalState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetDispenser.SetScreenVisibility
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetDispenser::*)(::GlobalNamespace::SIGadgetDispenser_GadgetDispenserTerminalState, ::GlobalNamespace::SIGadgetDispenser_GadgetDispenserTerminalState)>(&::GlobalNamespace::SIGadgetDispenser::SetScreenVisibility)> {
  constexpr static std::size_t size = 0x35c;
  constexpr static std::size_t addrs = 0x59dd7ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetDispenser*>(),
                        {"SetScreenVisibility", {}, {::i2c::type_of<::GlobalNamespace::SIGadgetDispenser_GadgetDispenserTerminalState>(), ::i2c::type_of<::GlobalNamespace::SIGadgetDispenser_GadgetDispenserTerminalState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetDispenser.UpdateGadgetListVisibility
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetDispenser::*)()>(&::GlobalNamespace::SIGadgetDispenser::UpdateGadgetListVisibility)> {
  constexpr static std::size_t size = 0x3a8;
  constexpr static std::size_t addrs = 0x59ddd88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetDispenser*>(),
                        {"UpdateGadgetListVisibility", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetDispenser.IsPopupState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SIGadgetDispenser::*)(::GlobalNamespace::SIGadgetDispenser_GadgetDispenserTerminalState)>(&::GlobalNamespace::SIGadgetDispenser::IsPopupState)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x59ddb5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetDispenser*>(),
                        {"IsPopupState", {}, {::i2c::type_of<::GlobalNamespace::SIGadgetDispenser_GadgetDispenserTerminalState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetDispenser.PlayerHandScanned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetDispenser::*)(int32_t)>(&::GlobalNamespace::SIGadgetDispenser::PlayerHandScanned)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59db994;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetDispenser*>(),
                        {"PlayerHandScanned", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetDispenser.AddButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetDispenser::*)(::GlobalNamespace::SITouchscreenButton*, bool)>(&::GlobalNamespace::SIGadgetDispenser::AddButton)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x59de204;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetDispenser*>(),
                        {"AddButton", {}, {::i2c::type_of<::GlobalNamespace::SITouchscreenButton*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetDispenser.TouchscreenButtonPressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetDispenser::*)(::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType, int32_t, int32_t)>(&::GlobalNamespace::SIGadgetDispenser::TouchscreenButtonPressed)> {
  constexpr static std::size_t size = 0x3c4;
  constexpr static std::size_t addrs = 0x59dbc24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetDispenser*>(),
                        {"TouchscreenButtonPressed", {}, {::i2c::type_of<::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetDispenser.TouchscreenToggleButtonPressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetDispenser::*)(::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType, int32_t, int32_t, bool)>(&::GlobalNamespace::SIGadgetDispenser::TouchscreenToggleButtonPressed)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59de848;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetDispenser*>(),
                        {"TouchscreenToggleButtonPressed", {}, {::i2c::type_of<::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetDispenser.UpdateHelpButtonPage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetDispenser::*)(int32_t)>(&::GlobalNamespace::SIGadgetDispenser::UpdateHelpButtonPage)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x59de130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetDispenser*>(),
                        {"UpdateHelpButtonPage", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetDispenser.AuthorityDispenseGadgetForPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetDispenser::*)(::GlobalNamespace::SIPlayer*)>(&::GlobalNamespace::SIGadgetDispenser::AuthorityDispenseGadgetForPlayer)> {
  constexpr static std::size_t size = 0x554;
  constexpr static std::size_t addrs = 0x59de2f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetDispenser*>(),
                        {"AuthorityDispenseGadgetForPlayer", {}, {::i2c::type_of<::GlobalNamespace::SIPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetDispenser.SetActivePage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetDispenser::*)()>(&::GlobalNamespace::SIGadgetDispenser::SetActivePage)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x59dc134;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetDispenser*>(),
                        {"SetActivePage", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetDispenser.IsValidPage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SIGadgetDispenser::*)(int32_t)>(&::GlobalNamespace::SIGadgetDispenser::IsValidPage)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x59dbfe8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetDispenser*>(),
                        {"IsValidPage", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetDispenser._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetDispenser::*)()>(&::GlobalNamespace::SIGadgetDispenser::_ctor)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x59de904;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetDispenser*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetDispenser.ITouchScreenStation_get_gameObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::GlobalNamespace::SIGadgetDispenser::*)()>(&::GlobalNamespace::SIGadgetDispenser::ITouchScreenStation_get_gameObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59deac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetDispenser*>(),
                        {"ITouchScreenStation.get_gameObject", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::SIGadgetDispenser_GadgetDispenserTerminalState& GlobalNamespace::SIGadgetDispenser::__cordl_internal_get_handScannedState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handScannedState;
}
constexpr ::GlobalNamespace::SIGadgetDispenser_GadgetDispenserTerminalState const& GlobalNamespace::SIGadgetDispenser::__cordl_internal_get_handScannedState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handScannedState;
}
constexpr void GlobalNamespace::SIGadgetDispenser::__cordl_internal_set_handScannedState(::GlobalNamespace::SIGadgetDispenser_GadgetDispenserTerminalState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___handScannedState = value;
}
constexpr ::GlobalNamespace::SIGadgetDispenser_GadgetDispenserTerminalState& GlobalNamespace::SIGadgetDispenser::__cordl_internal_get_currentState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentState;
}
constexpr ::GlobalNamespace::SIGadgetDispenser_GadgetDispenserTerminalState const& GlobalNamespace::SIGadgetDispenser::__cordl_internal_get_currentState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentState;
}
constexpr void GlobalNamespace::SIGadgetDispenser::__cordl_internal_set_currentState(::GlobalNamespace::SIGadgetDispenser_GadgetDispenserTerminalState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentState = value;
}
constexpr ::GlobalNamespace::SIGadgetDispenser_GadgetDispenserTerminalState& GlobalNamespace::SIGadgetDispenser::__cordl_internal_get_lastState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastState;
}
constexpr ::GlobalNamespace::SIGadgetDispenser_GadgetDispenserTerminalState const& GlobalNamespace::SIGadgetDispenser::__cordl_internal_get_lastState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastState;
}
constexpr void GlobalNamespace::SIGadgetDispenser::__cordl_internal_set_lastState(::GlobalNamespace::SIGadgetDispenser_GadgetDispenserTerminalState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastState = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::SIGadgetDispenser::__cordl_internal_get_gadgetDispensePosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gadgetDispensePosition;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::SIGadgetDispenser::__cordl_internal_get_gadgetDispensePosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gadgetDispensePosition;
}
constexpr void GlobalNamespace::SIGadgetDispenser::__cordl_internal_set_gadgetDispensePosition(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gadgetDispensePosition = value;
}
constexpr int32_t& GlobalNamespace::SIGadgetDispenser::__cordl_internal_get__currentNode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentNode;
}
constexpr int32_t const& GlobalNamespace::SIGadgetDispenser::__cordl_internal_get__currentNode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentNode;
}
constexpr void GlobalNamespace::SIGadgetDispenser::__cordl_internal_set__currentNode(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentNode = value;
}
constexpr ::UnityW<::GlobalNamespace::SICombinedTerminal>& GlobalNamespace::SIGadgetDispenser::__cordl_internal_get_parentTerminal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parentTerminal;
}
constexpr ::UnityW<::GlobalNamespace::SICombinedTerminal> const& GlobalNamespace::SIGadgetDispenser::__cordl_internal_get_parentTerminal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parentTerminal;
}
constexpr void GlobalNamespace::SIGadgetDispenser::__cordl_internal_set_parentTerminal(::UnityW<::GlobalNamespace::SICombinedTerminal>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___parentTerminal = value;
}
constexpr bool& GlobalNamespace::SIGadgetDispenser::__cordl_internal_get_m_isTryOn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_isTryOn;
}
constexpr bool const& GlobalNamespace::SIGadgetDispenser::__cordl_internal_get_m_isTryOn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_isTryOn;
}
constexpr void GlobalNamespace::SIGadgetDispenser::__cordl_internal_set_m_isTryOn(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_isTryOn = value;
}
constexpr ::GlobalNamespace::GameEntityDelayedDestroy_Options& GlobalNamespace::SIGadgetDispenser::__cordl_internal_get_m_tryOnOptions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_tryOnOptions;
}
constexpr ::GlobalNamespace::GameEntityDelayedDestroy_Options const& GlobalNamespace::SIGadgetDispenser::__cordl_internal_get_m_tryOnOptions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_tryOnOptions;
}
constexpr void GlobalNamespace::SIGadgetDispenser::__cordl_internal_set_m_tryOnOptions(::GlobalNamespace::GameEntityDelayedDestroy_Options  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_tryOnOptions = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::SIGadgetDispenser::__cordl_internal_get_waitingForScanScreen()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waitingForScanScreen;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::SIGadgetDispenser::__cordl_internal_get_waitingForScanScreen() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waitingForScanScreen;
}
constexpr void GlobalNamespace::SIGadgetDispenser::__cordl_internal_set_waitingForScanScreen(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___waitingForScanScreen = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::SIGadgetDispenser::__cordl_internal_get_gadgetTypeScreen()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gadgetTypeScreen;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::SIGadgetDispenser::__cordl_internal_get_gadgetTypeScreen() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gadgetTypeScreen;
}
constexpr void GlobalNamespace::SIGadgetDispenser::__cordl_internal_set_gadgetTypeScreen(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gadgetTypeScreen = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::SIGadgetDispenser::__cordl_internal_get_gadgetListScreen()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gadgetListScreen;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::SIGadgetDispenser::__cordl_internal_get_gadgetListScreen() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gadgetListScreen;
}
constexpr void GlobalNamespace::SIGadgetDispenser::__cordl_internal_set_gadgetListScreen(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gadgetListScreen = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::SIGadgetDispenser::__cordl_internal_get_gadgetInformationScreen()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gadgetInformationScreen;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::SIGadgetDispenser::__cordl_internal_get_gadgetInformationScreen() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gadgetInformationScreen;
}
constexpr void GlobalNamespace::SIGadgetDispenser::__cordl_internal_set_gadgetInformationScreen(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gadgetInformationScreen = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::SIGadgetDispenser::__cordl_internal_get_gadgetDispensedScreen()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gadgetDispensedScreen;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::SIGadgetDispenser::__cordl_internal_get_gadgetDispensedScreen() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gadgetDispensedScreen;
}
constexpr void GlobalNamespace::SIGadgetDispenser::__cordl_internal_set_gadgetDispensedScreen(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gadgetDispensedScreen = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::SIGadgetDispenser::__cordl_internal_get_gadgetsHelpScreen()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gadgetsHelpScreen;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::SIGadgetDispenser::__cordl_internal_get_gadgetsHelpScreen() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gadgetsHelpScreen;
}
constexpr void GlobalNamespace::SIGadgetDispenser::__cordl_internal_set_gadgetsHelpScreen(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gadgetsHelpScreen = value;
}
constexpr ::UnityW<::GlobalNamespace::SIScreenRegion>& GlobalNamespace::SIGadgetDispenser::__cordl_internal_get_screenRegion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___screenRegion;
}
constexpr ::UnityW<::GlobalNamespace::SIScreenRegion> const& GlobalNamespace::SIGadgetDispenser::__cordl_internal_get_screenRegion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___screenRegion;
}
constexpr void GlobalNamespace::SIGadgetDispenser::__cordl_internal_set_screenRegion(::UnityW<::GlobalNamespace::SIScreenRegion>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___screenRegion = value;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& GlobalNamespace::SIGadgetDispenser::__cordl_internal_get_screenDescription()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___screenDescription;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& GlobalNamespace::SIGadgetDispenser::__cordl_internal_get_screenDescription() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___screenDescription;
}
constexpr void GlobalNamespace::SIGadgetDispenser::__cordl_internal_set_screenDescription(::UnityW<::TMPro::TextMeshProUGUI>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___screenDescription = value;
}
constexpr ::UnityW<::UnityEngine::UI::Image>& GlobalNamespace::SIGadgetDispenser::__cordl_internal_get_background()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___background;
}
constexpr ::UnityW<::UnityEngine::UI::Image> const& GlobalNamespace::SIGadgetDispenser::__cordl_internal_get_background() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___background;
}
constexpr void GlobalNamespace::SIGadgetDispenser::__cordl_internal_set_background(::UnityW<::UnityEngine::UI::Image>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___background = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::SIGadgetDispenser::__cordl_internal_get_active()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___active;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::SIGadgetDispenser::__cordl_internal_get_active() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___active;
}
constexpr void GlobalNamespace::SIGadgetDispenser::__cordl_internal_set_active(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___active = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::SIGadgetDispenser::__cordl_internal_get_notActive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___notActive;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::SIGadgetDispenser::__cordl_internal_get_notActive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___notActive;
}
constexpr void GlobalNamespace::SIGadgetDispenser::__cordl_internal_set_notActive(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___notActive = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::SIGadgetDispenser::__cordl_internal_get_uiCenter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uiCenter;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::SIGadgetDispenser::__cordl_internal_get_uiCenter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uiCenter;
}
constexpr void GlobalNamespace::SIGadgetDispenser::__cordl_internal_set_uiCenter(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___uiCenter = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::SIGadgetDispenser::__cordl_internal_get_popupScreen()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___popupScreen;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::SIGadgetDispenser::__cordl_internal_get_popupScreen() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___popupScreen;
}
constexpr void GlobalNamespace::SIGadgetDispenser::__cordl_internal_set_popupScreen(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___popupScreen = value;
}
constexpr ::UnityW<::UnityEngine::RectTransform>& GlobalNamespace::SIGadgetDispenser::__cordl_internal_get_pageListParent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pageListParent;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& GlobalNamespace::SIGadgetDispenser::__cordl_internal_get_pageListParent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pageListParent;
}
constexpr void GlobalNamespace::SIGadgetDispenser::__cordl_internal_set_pageListParent(::UnityW<::UnityEngine::RectTransform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pageListParent = value;
}
constexpr ::UnityW<::GlobalNamespace::SIGadgetListEntry>& GlobalNamespace::SIGadgetDispenser::__cordl_internal_get_pageListEntryPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pageListEntryPrefab;
}
constexpr ::UnityW<::GlobalNamespace::SIGadgetListEntry> const& GlobalNamespace::SIGadgetDispenser::__cordl_internal_get_pageListEntryPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pageListEntryPrefab;
}
constexpr void GlobalNamespace::SIGadgetDispenser::__cordl_internal_set_pageListEntryPrefab(::UnityW<::GlobalNamespace::SIGadgetListEntry>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pageListEntryPrefab = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SIGadgetListEntry>>*& GlobalNamespace::SIGadgetDispenser::__cordl_internal_get_gadgetPages()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gadgetPages;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SIGadgetListEntry>>* const& GlobalNamespace::SIGadgetDispenser::__cordl_internal_get_gadgetPages() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gadgetPages;
}
constexpr void GlobalNamespace::SIGadgetDispenser::__cordl_internal_set_gadgetPages(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SIGadgetListEntry>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gadgetPages = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::SIGadgetDispenser::__cordl_internal_get_noDispensableGadgetsMessage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noDispensableGadgetsMessage;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::SIGadgetDispenser::__cordl_internal_get_noDispensableGadgetsMessage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noDispensableGadgetsMessage;
}
constexpr void GlobalNamespace::SIGadgetDispenser::__cordl_internal_set_noDispensableGadgetsMessage(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___noDispensableGadgetsMessage = value;
}
constexpr ::UnityW<::UnityEngine::RectTransform>& GlobalNamespace::SIGadgetDispenser::__cordl_internal_get_gadgetListParent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gadgetListParent;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& GlobalNamespace::SIGadgetDispenser::__cordl_internal_get_gadgetListParent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gadgetListParent;
}
constexpr void GlobalNamespace::SIGadgetDispenser::__cordl_internal_set_gadgetListParent(::UnityW<::UnityEngine::RectTransform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gadgetListParent = value;
}
constexpr ::UnityW<::GlobalNamespace::SIDispenserGadgetListEntry>& GlobalNamespace::SIGadgetDispenser::__cordl_internal_get_gadgetListEntryPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gadgetListEntryPrefab;
}
constexpr ::UnityW<::GlobalNamespace::SIDispenserGadgetListEntry> const& GlobalNamespace::SIGadgetDispenser::__cordl_internal_get_gadgetListEntryPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gadgetListEntryPrefab;
}
constexpr void GlobalNamespace::SIGadgetDispenser::__cordl_internal_set_gadgetListEntryPrefab(::UnityW<::GlobalNamespace::SIDispenserGadgetListEntry>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gadgetListEntryPrefab = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SIDispenserGadgetListEntry>>*& GlobalNamespace::SIGadgetDispenser::__cordl_internal_get_gadgetEntries()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gadgetEntries;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SIDispenserGadgetListEntry>>* const& GlobalNamespace::SIGadgetDispenser::__cordl_internal_get_gadgetEntries() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gadgetEntries;
}
constexpr void GlobalNamespace::SIGadgetDispenser::__cordl_internal_set_gadgetEntries(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SIDispenserGadgetListEntry>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gadgetEntries = value;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& GlobalNamespace::SIGadgetDispenser::__cordl_internal_get_gadgetDescriptionText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gadgetDescriptionText;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& GlobalNamespace::SIGadgetDispenser::__cordl_internal_get_gadgetDescriptionText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gadgetDescriptionText;
}
constexpr void GlobalNamespace::SIGadgetDispenser::__cordl_internal_set_gadgetDescriptionText(::UnityW<::TMPro::TextMeshProUGUI>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gadgetDescriptionText = value;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& GlobalNamespace::SIGadgetDispenser::__cordl_internal_get_gadgetDispensedText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gadgetDispensedText;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& GlobalNamespace::SIGadgetDispenser::__cordl_internal_get_gadgetDispensedText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gadgetDispensedText;
}
constexpr void GlobalNamespace::SIGadgetDispenser::__cordl_internal_set_gadgetDispensedText(::UnityW<::TMPro::TextMeshProUGUI>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gadgetDispensedText = value;
}
constexpr int32_t& GlobalNamespace::SIGadgetDispenser::__cordl_internal_get_helpScreenIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___helpScreenIndex;
}
constexpr int32_t const& GlobalNamespace::SIGadgetDispenser::__cordl_internal_get_helpScreenIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___helpScreenIndex;
}
constexpr void GlobalNamespace::SIGadgetDispenser::__cordl_internal_set_helpScreenIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___helpScreenIndex = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& GlobalNamespace::SIGadgetDispenser::__cordl_internal_get_helpPopupScreens()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___helpPopupScreens;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& GlobalNamespace::SIGadgetDispenser::__cordl_internal_get_helpPopupScreens() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___helpPopupScreens;
}
constexpr void GlobalNamespace::SIGadgetDispenser::__cordl_internal_set_helpPopupScreens(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___helpPopupScreens = value;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& GlobalNamespace::SIGadgetDispenser::__cordl_internal_get_touchSoundBankPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___touchSoundBankPlayer;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& GlobalNamespace::SIGadgetDispenser::__cordl_internal_get_touchSoundBankPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___touchSoundBankPlayer;
}
constexpr void GlobalNamespace::SIGadgetDispenser::__cordl_internal_set_touchSoundBankPlayer(::UnityW<::GlobalNamespace::SoundBankPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___touchSoundBankPlayer = value;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& GlobalNamespace::SIGadgetDispenser::__cordl_internal_get_dispenseSoundBankPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dispenseSoundBankPlayer;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& GlobalNamespace::SIGadgetDispenser::__cordl_internal_get_dispenseSoundBankPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dispenseSoundBankPlayer;
}
constexpr void GlobalNamespace::SIGadgetDispenser::__cordl_internal_set_dispenseSoundBankPlayer(::UnityW<::GlobalNamespace::SoundBankPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dispenseSoundBankPlayer = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*& GlobalNamespace::SIGadgetDispenser::__cordl_internal_get__nonPopupButtonColliders()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nonPopupButtonColliders;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* const& GlobalNamespace::SIGadgetDispenser::__cordl_internal_get__nonPopupButtonColliders() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nonPopupButtonColliders;
}
constexpr void GlobalNamespace::SIGadgetDispenser::__cordl_internal_set__nonPopupButtonColliders(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____nonPopupButtonColliders = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SIGadgetDispenser_GadgetDispenserTerminalState,::UnityW<::UnityEngine::GameObject>>*& GlobalNamespace::SIGadgetDispenser::__cordl_internal_get_screenData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___screenData;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SIGadgetDispenser_GadgetDispenserTerminalState,::UnityW<::UnityEngine::GameObject>>* const& GlobalNamespace::SIGadgetDispenser::__cordl_internal_get_screenData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___screenData;
}
constexpr void GlobalNamespace::SIGadgetDispenser::__cordl_internal_set_screenData(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SIGadgetDispenser_GadgetDispenserTerminalState,::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___screenData = value;
}
constexpr bool& GlobalNamespace::SIGadgetDispenser::__cordl_internal_get_initialized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialized;
}
constexpr bool const& GlobalNamespace::SIGadgetDispenser::__cordl_internal_get_initialized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialized;
}
constexpr void GlobalNamespace::SIGadgetDispenser::__cordl_internal_set_initialized(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___initialized = value;
}
inline void GlobalNamespace::SIGadgetDispenser::setStaticF_g_tryOnOptions(::GlobalNamespace::GameEntityDelayedDestroy_Options  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::GameEntityDelayedDestroy_Options, "g_tryOnOptions", ::GlobalNamespace::SIGadgetDispenser*>(std::forward<::GlobalNamespace::GameEntityDelayedDestroy_Options>(value));
}
inline ::GlobalNamespace::GameEntityDelayedDestroy_Options GlobalNamespace::SIGadgetDispenser::getStaticF_g_tryOnOptions()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::GameEntityDelayedDestroy_Options, "g_tryOnOptions", ::GlobalNamespace::SIGadgetDispenser*>();
}
inline bool GlobalNamespace::SIGadgetDispenser::get_isTryOn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetDispenser*>(),
                        {"get_isTryOn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::SIScreenRegion> GlobalNamespace::SIGadgetDispenser::get_ScreenRegion()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetDispenser*>(),
                        {"get_ScreenRegion", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::SIScreenRegion>>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::SIPlayer> GlobalNamespace::SIGadgetDispenser::get_ActivePlayer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetDispenser*>(),
                        {"get_ActivePlayer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::SIPlayer>>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::SIGadgetDispenser::get_ActivePlayerName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetDispenser*>(),
                        {"get_ActivePlayerName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool GlobalNamespace::SIGadgetDispenser::get_IsAuthority()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetDispenser*>(),
                        {"get_IsAuthority", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::SuperInfectionManager> GlobalNamespace::SIGadgetDispenser::get_SIManager()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetDispenser*>(),
                        {"get_SIManager", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::SuperInfectionManager>>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::GameEntityManager> GlobalNamespace::SIGadgetDispenser::get_GameEntityManager()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetDispenser*>(),
                        {"get_GameEntityManager", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::GameEntityManager>>(this, ___internal_method);
}
inline ::GlobalNamespace::SITechTreeNode* GlobalNamespace::SIGadgetDispenser::get_CurrentNode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetDispenser*>(),
                        {"get_CurrentNode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SITechTreeNode*>(this, ___internal_method);
}
inline ::GlobalNamespace::SITechTreePage* GlobalNamespace::SIGadgetDispenser::get_CurrentPage()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetDispenser*>(),
                        {"get_CurrentPage", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SITechTreePage*>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::SITechTreeSO> GlobalNamespace::SIGadgetDispenser::get_TechTreeSO()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetDispenser*>(),
                        {"get_TechTreeSO", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::SITechTreeSO>>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetDispenser::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetDispenser*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetDispenser::_RefreshButtonsUsableState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetDispenser*>(),
                        {"_RefreshButtonsUsableState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetDispenser::SetNonPopupButtonsEnabled(bool  enable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetDispenser*>(),
                        {"SetNonPopupButtonsEnabled", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, enable);
}
inline void GlobalNamespace::SIGadgetDispenser::Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetDispenser*>(),
                        {"Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetDispenser::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetDispenser*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetDispenser::WriteDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetDispenser*>(),
                        {"WriteDataPUN", {}, {::i2c::type_of<::Photon::Pun::PhotonStream*>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline void GlobalNamespace::SIGadgetDispenser::ReadDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetDispenser*>(),
                        {"ReadDataPUN", {}, {::i2c::type_of<::Photon::Pun::PhotonStream*>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline void GlobalNamespace::SIGadgetDispenser::ZoneDataSerializeWrite(::System::IO::BinaryWriter*  writer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetDispenser*>(),
                        {"ZoneDataSerializeWrite", {}, {::i2c::type_of<::System::IO::BinaryWriter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer);
}
inline void GlobalNamespace::SIGadgetDispenser::ZoneDataSerializeRead(::System::IO::BinaryReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetDispenser*>(),
                        {"ZoneDataSerializeRead", {}, {::i2c::type_of<::System::IO::BinaryReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader);
}
inline void GlobalNamespace::SIGadgetDispenser::UpdateState(::GlobalNamespace::SIGadgetDispenser_GadgetDispenserTerminalState  newState, ::GlobalNamespace::SIGadgetDispenser_GadgetDispenserTerminalState  newLastState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetDispenser*>(),
                        {"UpdateState", {}, {::i2c::type_of<::GlobalNamespace::SIGadgetDispenser_GadgetDispenserTerminalState>(), ::i2c::type_of<::GlobalNamespace::SIGadgetDispenser_GadgetDispenserTerminalState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState, newLastState);
}
inline void GlobalNamespace::SIGadgetDispenser::UpdateState(::GlobalNamespace::SIGadgetDispenser_GadgetDispenserTerminalState  newState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetDispenser*>(),
                        {"UpdateState", {}, {::i2c::type_of<::GlobalNamespace::SIGadgetDispenser_GadgetDispenserTerminalState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState);
}
inline void GlobalNamespace::SIGadgetDispenser::SetScreenVisibility(::GlobalNamespace::SIGadgetDispenser_GadgetDispenserTerminalState  currentState, ::GlobalNamespace::SIGadgetDispenser_GadgetDispenserTerminalState  lastState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetDispenser*>(),
                        {"SetScreenVisibility", {}, {::i2c::type_of<::GlobalNamespace::SIGadgetDispenser_GadgetDispenserTerminalState>(), ::i2c::type_of<::GlobalNamespace::SIGadgetDispenser_GadgetDispenserTerminalState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, currentState, lastState);
}
inline void GlobalNamespace::SIGadgetDispenser::UpdateGadgetListVisibility()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetDispenser*>(),
                        {"UpdateGadgetListVisibility", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::SIGadgetDispenser::IsPopupState(::GlobalNamespace::SIGadgetDispenser_GadgetDispenserTerminalState  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetDispenser*>(),
                        {"IsPopupState", {}, {::i2c::type_of<::GlobalNamespace::SIGadgetDispenser_GadgetDispenserTerminalState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, state);
}
inline void GlobalNamespace::SIGadgetDispenser::PlayerHandScanned(int32_t  actorNr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetDispenser*>(),
                        {"PlayerHandScanned", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, actorNr);
}
inline void GlobalNamespace::SIGadgetDispenser::AddButton(::GlobalNamespace::SITouchscreenButton*  button, bool  isPopupButton)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetDispenser*>(),
                        {"AddButton", {}, {::i2c::type_of<::GlobalNamespace::SITouchscreenButton*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, button, isPopupButton);
}
inline void GlobalNamespace::SIGadgetDispenser::TouchscreenButtonPressed(::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType  buttonType, int32_t  data, int32_t  actorNr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetDispenser*>(),
                        {"TouchscreenButtonPressed", {}, {::i2c::type_of<::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buttonType, data, actorNr);
}
inline void GlobalNamespace::SIGadgetDispenser::TouchscreenToggleButtonPressed(::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType  buttonType, int32_t  data, int32_t  actorNr, bool  isToggledOn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetDispenser*>(),
                        {"TouchscreenToggleButtonPressed", {}, {::i2c::type_of<::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buttonType, data, actorNr, isToggledOn);
}
inline void GlobalNamespace::SIGadgetDispenser::UpdateHelpButtonPage(int32_t  helpButtonPageIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetDispenser*>(),
                        {"UpdateHelpButtonPage", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, helpButtonPageIndex);
}
inline void GlobalNamespace::SIGadgetDispenser::AuthorityDispenseGadgetForPlayer(::GlobalNamespace::SIPlayer*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetDispenser*>(),
                        {"AuthorityDispenseGadgetForPlayer", {}, {::i2c::type_of<::GlobalNamespace::SIPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player);
}
inline void GlobalNamespace::SIGadgetDispenser::SetActivePage()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetDispenser*>(),
                        {"SetActivePage", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::SIGadgetDispenser::IsValidPage(int32_t  pageId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetDispenser*>(),
                        {"IsValidPage", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pageId);
}
inline void GlobalNamespace::SIGadgetDispenser::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetDispenser*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::GameObject> GlobalNamespace::SIGadgetDispenser::ITouchScreenStation_get_gameObject()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetDispenser*>(),
                        {"ITouchScreenStation.get_gameObject", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method);
}
inline ::GlobalNamespace::SIGadgetDispenser* GlobalNamespace::SIGadgetDispenser::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SIGadgetDispenser*>());
}
/// @brief Convert operator to "::GlobalNamespace::ITouchScreenStation"
constexpr  GlobalNamespace::SIGadgetDispenser::operator ::GlobalNamespace::ITouchScreenStation*() noexcept {
return static_cast<::GlobalNamespace::ITouchScreenStation*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ITouchScreenStation"
constexpr ::GlobalNamespace::ITouchScreenStation* GlobalNamespace::SIGadgetDispenser::i___GlobalNamespace__ITouchScreenStation() noexcept {
return static_cast<::GlobalNamespace::ITouchScreenStation*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SIGadgetDispenser::SIGadgetDispenser()   {
}
