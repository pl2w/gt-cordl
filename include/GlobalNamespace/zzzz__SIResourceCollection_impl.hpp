#pragma once
// IWYU pragma private; include "GlobalNamespace/SIResourceCollection.hpp"
#include "GlobalNamespace/zzzz__SIResourceCollection_FailReason_impl.hpp"
#include "GlobalNamespace/zzzz__SIResourceCollection_ResourceCollectorTerminalState_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__GameObject_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Sprite_impl.hpp"
#include "GlobalNamespace/zzzz__SIResourceCollection_def.hpp"
#include "GlobalNamespace/zzzz__DestroyIfNotBeta_def.hpp"
#include "GlobalNamespace/zzzz__ITouchScreenStation_def.hpp"
#include "GlobalNamespace/zzzz__ProgressionManager_def.hpp"
#include "GlobalNamespace/zzzz__SICombinedTerminal_def.hpp"
#include "GlobalNamespace/zzzz__SIPlayer_def.hpp"
#include "GlobalNamespace/zzzz__SIResourceCollection_FailReason_def.hpp"
#include "GlobalNamespace/zzzz__SIResourceCollection_ResourceCollectorTerminalState_def.hpp"
#include "GlobalNamespace/zzzz__SIResourceCollection___c__DisplayClass45_0_def.hpp"
#include "GlobalNamespace/zzzz__SIResourceCollection_def.hpp"
#include "GlobalNamespace/zzzz__SIResource_ResourceType_def.hpp"
#include "GlobalNamespace/zzzz__SIScreenRegion_def.hpp"
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
#include "System/zzzz__Func_2_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SIResourceCollection.get_ScreenRegion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::SIScreenRegion> (::GlobalNamespace::SIResourceCollection::*)()>(&::GlobalNamespace::SIResourceCollection::get_ScreenRegion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ae9cb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResourceCollection*>(),
                        {"get_ScreenRegion", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIResourceCollection.get_IsAuthority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SIResourceCollection::*)()>(&::GlobalNamespace::SIResourceCollection::get_IsAuthority)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5ae9cc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResourceCollection*>(),
                        {"get_IsAuthority", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIResourceCollection.get_ActivePlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::SIPlayer> (::GlobalNamespace::SIResourceCollection::*)()>(&::GlobalNamespace::SIResourceCollection::get_ActivePlayer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5ae9d10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResourceCollection*>(),
                        {"get_ActivePlayer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIResourceCollection.get_SIManager
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::SuperInfectionManager> (::GlobalNamespace::SIResourceCollection::*)()>(&::GlobalNamespace::SIResourceCollection::get_SIManager)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5ae9cec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResourceCollection*>(),
                        {"get_SIManager", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIResourceCollection.CollectButtonColliders
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIResourceCollection::*)()>(&::GlobalNamespace::SIResourceCollection::CollectButtonColliders)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0x5ae9d28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResourceCollection*>(),
                        {"CollectButtonColliders", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIResourceCollection.SetNonPopupButtonsEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIResourceCollection::*)(bool)>(&::GlobalNamespace::SIResourceCollection::SetNonPopupButtonsEnabled)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x5aea118;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResourceCollection*>(),
                        {"SetNonPopupButtonsEnabled", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIResourceCollection.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIResourceCollection::*)()>(&::GlobalNamespace::SIResourceCollection::Initialize)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x5aea258;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResourceCollection*>(),
                        {"Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIResourceCollection.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIResourceCollection::*)()>(&::GlobalNamespace::SIResourceCollection::Reset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5aea448;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResourceCollection*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIResourceCollection.WriteDataPUN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIResourceCollection::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::SIResourceCollection::WriteDataPUN)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5aea78c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResourceCollection*>(),
                        {"WriteDataPUN", {}, {::i2c::type_of<::Photon::Pun::PhotonStream*>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIResourceCollection.ReadDataPUN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIResourceCollection::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::SIResourceCollection::ReadDataPUN)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0x5aea8d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResourceCollection*>(),
                        {"ReadDataPUN", {}, {::i2c::type_of<::Photon::Pun::PhotonStream*>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIResourceCollection.ZoneDataSerializeWrite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIResourceCollection::*)(::System::IO::BinaryWriter*)>(&::GlobalNamespace::SIResourceCollection::ZoneDataSerializeWrite)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5aeac9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResourceCollection*>(),
                        {"ZoneDataSerializeWrite", {}, {::i2c::type_of<::System::IO::BinaryWriter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIResourceCollection.ZoneDataSerializeRead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIResourceCollection::*)(::System::IO::BinaryReader*)>(&::GlobalNamespace::SIResourceCollection::ZoneDataSerializeRead)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x5aead04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResourceCollection*>(),
                        {"ZoneDataSerializeRead", {}, {::i2c::type_of<::System::IO::BinaryReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIResourceCollection.PopupActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SIResourceCollection::*)()>(&::GlobalNamespace::SIResourceCollection::PopupActive)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5aeb014;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResourceCollection*>(),
                        {"PopupActive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIResourceCollection.IsPopupState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SIResourceCollection::*)(::GlobalNamespace::SIResourceCollection_ResourceCollectorTerminalState)>(&::GlobalNamespace::SIResourceCollection::IsPopupState)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5aeb028;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResourceCollection*>(),
                        {"IsPopupState", {}, {::i2c::type_of<::GlobalNamespace::SIResourceCollection_ResourceCollectorTerminalState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIResourceCollection.HasHelpButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SIResourceCollection::*)(::GlobalNamespace::SIResourceCollection_ResourceCollectorTerminalState)>(&::GlobalNamespace::SIResourceCollection::HasHelpButton)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5aeb038;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResourceCollection*>(),
                        {"HasHelpButton", {}, {::i2c::type_of<::GlobalNamespace::SIResourceCollection_ResourceCollectorTerminalState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIResourceCollection.UpdateState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIResourceCollection::*)(::GlobalNamespace::SIResourceCollection_ResourceCollectorTerminalState, ::GlobalNamespace::SIResourceCollection_ResourceCollectorTerminalState)>(&::GlobalNamespace::SIResourceCollection::UpdateState)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5aea8bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResourceCollection*>(),
                        {"UpdateState", {}, {::i2c::type_of<::GlobalNamespace::SIResourceCollection_ResourceCollectorTerminalState>(), ::i2c::type_of<::GlobalNamespace::SIResourceCollection_ResourceCollectorTerminalState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIResourceCollection.UpdateState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIResourceCollection::*)(::GlobalNamespace::SIResourceCollection_ResourceCollectorTerminalState)>(&::GlobalNamespace::SIResourceCollection::UpdateState)> {
  constexpr static std::size_t size = 0x3d8;
  constexpr static std::size_t addrs = 0x5aeb044;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResourceCollection*>(),
                        {"UpdateState", {}, {::i2c::type_of<::GlobalNamespace::SIResourceCollection_ResourceCollectorTerminalState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIResourceCollection.FormattedPlayerResourceCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::SIResourceCollection::*)(::GlobalNamespace::SIPlayer*)>(&::GlobalNamespace::SIResourceCollection::FormattedPlayerResourceCount)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x5aeb41c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResourceCollection*>(),
                        {"FormattedPlayerResourceCount", {}, {::i2c::type_of<::GlobalNamespace::SIPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIResourceCollection.FormattedPlayerResourceCountWithMax
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::SIResourceCollection::*)(::GlobalNamespace::SIPlayer*)>(&::GlobalNamespace::SIResourceCollection::FormattedPlayerResourceCountWithMax)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x5aeb63c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResourceCollection*>(),
                        {"FormattedPlayerResourceCountWithMax", {}, {::i2c::type_of<::GlobalNamespace::SIPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIResourceCollection.GetFormattedResource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::SIResourceCollection::*)(::GlobalNamespace::SIPlayer*, ::GlobalNamespace::SIResource_ResourceType)>(&::GlobalNamespace::SIResourceCollection::GetFormattedResource)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x5aeb844;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResourceCollection*>(),
                        {"GetFormattedResource", {}, {::i2c::type_of<::GlobalNamespace::SIPlayer*>(), ::i2c::type_of<::GlobalNamespace::SIResource_ResourceType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIResourceCollection.UpdateHelpButtonPage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIResourceCollection::*)(int32_t)>(&::GlobalNamespace::SIResourceCollection::UpdateHelpButtonPage)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5aeac30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResourceCollection*>(),
                        {"UpdateHelpButtonPage", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIResourceCollection.SetScreenVisibility
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIResourceCollection::*)(::GlobalNamespace::SIResourceCollection_ResourceCollectorTerminalState, ::GlobalNamespace::SIResourceCollection_ResourceCollectorTerminalState)>(&::GlobalNamespace::SIResourceCollection::SetScreenVisibility)> {
  constexpr static std::size_t size = 0x334;
  constexpr static std::size_t addrs = 0x5aea458;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResourceCollection*>(),
                        {"SetScreenVisibility", {}, {::i2c::type_of<::GlobalNamespace::SIResourceCollection_ResourceCollectorTerminalState>(), ::i2c::type_of<::GlobalNamespace::SIResourceCollection_ResourceCollectorTerminalState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIResourceCollection.PlayerHandScanned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIResourceCollection::*)(int32_t)>(&::GlobalNamespace::SIResourceCollection::PlayerHandScanned)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aeb984;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResourceCollection*>(),
                        {"PlayerHandScanned", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIResourceCollection.TouchscreenButtonPressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIResourceCollection::*)(::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType, int32_t, int32_t)>(&::GlobalNamespace::SIResourceCollection::TouchscreenButtonPressed)> {
  constexpr static std::size_t size = 0x530;
  constexpr static std::size_t addrs = 0x5aeb98c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResourceCollection*>(),
                        {"TouchscreenButtonPressed", {}, {::i2c::type_of<::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIResourceCollection.TouchscreenToggleButtonPressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIResourceCollection::*)(::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType, int32_t, int32_t, bool)>(&::GlobalNamespace::SIResourceCollection::TouchscreenToggleButtonPressed)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5aebebc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResourceCollection*>(),
                        {"TouchscreenToggleButtonPressed", {}, {::i2c::type_of<::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIResourceCollection.AddButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIResourceCollection::*)(::GlobalNamespace::SITouchscreenButton*, bool)>(&::GlobalNamespace::SIResourceCollection::AddButton)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5aebec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResourceCollection*>(),
                        {"AddButton", {}, {::i2c::type_of<::GlobalNamespace::SITouchscreenButton*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIResourceCollection._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIResourceCollection::*)()>(&::GlobalNamespace::SIResourceCollection::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aebec4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResourceCollection*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIResourceCollection.ITouchScreenStation_get_gameObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::GlobalNamespace::SIResourceCollection::*)()>(&::GlobalNamespace::SIResourceCollection::ITouchScreenStation_get_gameObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aebecc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResourceCollection*>(),
                        {"ITouchScreenStation.get_gameObject", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIResourceCollection._CollectButtonColliders_g__RemoveButtonsInside_45_2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::UnityEngine::GameObject*>, ::by_ref<::GlobalNamespace::SIResourceCollection___c__DisplayClass45_0>)>(&::GlobalNamespace::SIResourceCollection::_CollectButtonColliders_g__RemoveButtonsInside_45_2)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5aea010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResourceCollection*>(),
                        {"<CollectButtonColliders>g__RemoveButtonsInside|45_2", {}, {::i2c::type_of<::ArrayW<::UnityEngine::GameObject*>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::SIResourceCollection___c__DisplayClass45_0>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIResourceCollection._TouchscreenButtonPressed_b__66_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIResourceCollection::*)(::GlobalNamespace::ProgressionManager_UserInventory*)>(&::GlobalNamespace::SIResourceCollection::_TouchscreenButtonPressed_b__66_0)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5aebed4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResourceCollection*>(),
                        {"<TouchscreenButtonPressed>b__66_0", {}, {::i2c::type_of<::GlobalNamespace::ProgressionManager_UserInventory*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIResourceCollection._TouchscreenButtonPressed_b__66_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIResourceCollection::*)(::StringW)>(&::GlobalNamespace::SIResourceCollection::_TouchscreenButtonPressed_b__66_1)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5aebfcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResourceCollection*>(),
                        {"<TouchscreenButtonPressed>b__66_1", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::SIResourceCollection_ResourceCollectorTerminalState& GlobalNamespace::SIResourceCollection::__cordl_internal_get_currentState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentState;
}
constexpr ::GlobalNamespace::SIResourceCollection_ResourceCollectorTerminalState const& GlobalNamespace::SIResourceCollection::__cordl_internal_get_currentState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentState;
}
constexpr void GlobalNamespace::SIResourceCollection::__cordl_internal_set_currentState(::GlobalNamespace::SIResourceCollection_ResourceCollectorTerminalState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentState = value;
}
constexpr ::GlobalNamespace::SIResourceCollection_ResourceCollectorTerminalState& GlobalNamespace::SIResourceCollection::__cordl_internal_get_lastState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastState;
}
constexpr ::GlobalNamespace::SIResourceCollection_ResourceCollectorTerminalState const& GlobalNamespace::SIResourceCollection::__cordl_internal_get_lastState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastState;
}
constexpr void GlobalNamespace::SIResourceCollection::__cordl_internal_set_lastState(::GlobalNamespace::SIResourceCollection_ResourceCollectorTerminalState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastState = value;
}
constexpr int32_t& GlobalNamespace::SIResourceCollection::__cordl_internal_get_resourceDepositedCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resourceDepositedCount;
}
constexpr int32_t const& GlobalNamespace::SIResourceCollection::__cordl_internal_get_resourceDepositedCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resourceDepositedCount;
}
constexpr void GlobalNamespace::SIResourceCollection::__cordl_internal_set_resourceDepositedCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___resourceDepositedCount = value;
}
constexpr int32_t& GlobalNamespace::SIResourceCollection::__cordl_internal_get_currentHelpButtonPageIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentHelpButtonPageIndex;
}
constexpr int32_t const& GlobalNamespace::SIResourceCollection::__cordl_internal_get_currentHelpButtonPageIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentHelpButtonPageIndex;
}
constexpr void GlobalNamespace::SIResourceCollection::__cordl_internal_set_currentHelpButtonPageIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentHelpButtonPageIndex = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::SIResourceCollection::__cordl_internal_get_waitingForScanScreen()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waitingForScanScreen;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::SIResourceCollection::__cordl_internal_get_waitingForScanScreen() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waitingForScanScreen;
}
constexpr void GlobalNamespace::SIResourceCollection::__cordl_internal_set_waitingForScanScreen(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___waitingForScanScreen = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::SIResourceCollection::__cordl_internal_get_currentResourcesScreen()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentResourcesScreen;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::SIResourceCollection::__cordl_internal_get_currentResourcesScreen() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentResourcesScreen;
}
constexpr void GlobalNamespace::SIResourceCollection::__cordl_internal_set_currentResourcesScreen(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentResourcesScreen = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::SIResourceCollection::__cordl_internal_get_helpScreen()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___helpScreen;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::SIResourceCollection::__cordl_internal_get_helpScreen() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___helpScreen;
}
constexpr void GlobalNamespace::SIResourceCollection::__cordl_internal_set_helpScreen(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___helpScreen = value;
}
constexpr ::UnityW<::GlobalNamespace::SICombinedTerminal>& GlobalNamespace::SIResourceCollection::__cordl_internal_get_parentTerminal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parentTerminal;
}
constexpr ::UnityW<::GlobalNamespace::SICombinedTerminal> const& GlobalNamespace::SIResourceCollection::__cordl_internal_get_parentTerminal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parentTerminal;
}
constexpr void GlobalNamespace::SIResourceCollection::__cordl_internal_set_parentTerminal(::UnityW<::GlobalNamespace::SICombinedTerminal>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___parentTerminal = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Sprite>>& GlobalNamespace::SIResourceCollection::__cordl_internal_get_resourceImageSprites()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resourceImageSprites;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Sprite>> const& GlobalNamespace::SIResourceCollection::__cordl_internal_get_resourceImageSprites() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resourceImageSprites;
}
constexpr void GlobalNamespace::SIResourceCollection::__cordl_internal_set_resourceImageSprites(::ArrayW<::UnityW<::UnityEngine::Sprite>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___resourceImageSprites = value;
}
constexpr ::UnityW<::GlobalNamespace::SIScreenRegion>& GlobalNamespace::SIResourceCollection::__cordl_internal_get_screenRegion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___screenRegion;
}
constexpr ::UnityW<::GlobalNamespace::SIScreenRegion> const& GlobalNamespace::SIResourceCollection::__cordl_internal_get_screenRegion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___screenRegion;
}
constexpr void GlobalNamespace::SIResourceCollection::__cordl_internal_set_screenRegion(::UnityW<::GlobalNamespace::SIScreenRegion>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___screenRegion = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& GlobalNamespace::SIResourceCollection::__cordl_internal_get_helpPopupScreens()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___helpPopupScreens;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& GlobalNamespace::SIResourceCollection::__cordl_internal_get_helpPopupScreens() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___helpPopupScreens;
}
constexpr void GlobalNamespace::SIResourceCollection::__cordl_internal_set_helpPopupScreens(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___helpPopupScreens = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::SIResourceCollection::__cordl_internal_get_purchasingRemote()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___purchasingRemote;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::SIResourceCollection::__cordl_internal_get_purchasingRemote() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___purchasingRemote;
}
constexpr void GlobalNamespace::SIResourceCollection::__cordl_internal_set_purchasingRemote(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___purchasingRemote = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::SIResourceCollection::__cordl_internal_get_purchasingStart()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___purchasingStart;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::SIResourceCollection::__cordl_internal_get_purchasingStart() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___purchasingStart;
}
constexpr void GlobalNamespace::SIResourceCollection::__cordl_internal_set_purchasingStart(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___purchasingStart = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::SIResourceCollection::__cordl_internal_get_purchaseInProgress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___purchaseInProgress;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::SIResourceCollection::__cordl_internal_get_purchaseInProgress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___purchaseInProgress;
}
constexpr void GlobalNamespace::SIResourceCollection::__cordl_internal_set_purchaseInProgress(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___purchaseInProgress = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::SIResourceCollection::__cordl_internal_get_purchasingSuccess()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___purchasingSuccess;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::SIResourceCollection::__cordl_internal_get_purchasingSuccess() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___purchasingSuccess;
}
constexpr void GlobalNamespace::SIResourceCollection::__cordl_internal_set_purchasingSuccess(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___purchasingSuccess = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::SIResourceCollection::__cordl_internal_get_purchasingFailure()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___purchasingFailure;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::SIResourceCollection::__cordl_internal_get_purchasingFailure() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___purchasingFailure;
}
constexpr void GlobalNamespace::SIResourceCollection::__cordl_internal_set_purchasingFailure(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___purchasingFailure = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::SIResourceCollection::__cordl_internal_get_popupScreen()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___popupScreen;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::SIResourceCollection::__cordl_internal_get_popupScreen() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___popupScreen;
}
constexpr void GlobalNamespace::SIResourceCollection::__cordl_internal_set_popupScreen(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___popupScreen = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::SIResourceCollection::__cordl_internal_get_uiCenter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uiCenter;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::SIResourceCollection::__cordl_internal_get_uiCenter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uiCenter;
}
constexpr void GlobalNamespace::SIResourceCollection::__cordl_internal_set_uiCenter(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___uiCenter = value;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& GlobalNamespace::SIResourceCollection::__cordl_internal_get_shinyRockInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shinyRockInfo;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& GlobalNamespace::SIResourceCollection::__cordl_internal_get_shinyRockInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shinyRockInfo;
}
constexpr void GlobalNamespace::SIResourceCollection::__cordl_internal_set_shinyRockInfo(::UnityW<::TMPro::TextMeshProUGUI>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shinyRockInfo = value;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& GlobalNamespace::SIResourceCollection::__cordl_internal_get_currentResourceCountsLocal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentResourceCountsLocal;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& GlobalNamespace::SIResourceCollection::__cordl_internal_get_currentResourceCountsLocal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentResourceCountsLocal;
}
constexpr void GlobalNamespace::SIResourceCollection::__cordl_internal_set_currentResourceCountsLocal(::UnityW<::TMPro::TextMeshProUGUI>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentResourceCountsLocal = value;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& GlobalNamespace::SIResourceCollection::__cordl_internal_get_currentResourceCountsRemote()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentResourceCountsRemote;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& GlobalNamespace::SIResourceCollection::__cordl_internal_get_currentResourceCountsRemote() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentResourceCountsRemote;
}
constexpr void GlobalNamespace::SIResourceCollection::__cordl_internal_set_currentResourceCountsRemote(::UnityW<::TMPro::TextMeshProUGUI>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentResourceCountsRemote = value;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& GlobalNamespace::SIResourceCollection::__cordl_internal_get_failureReasonText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___failureReasonText;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& GlobalNamespace::SIResourceCollection::__cordl_internal_get_failureReasonText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___failureReasonText;
}
constexpr void GlobalNamespace::SIResourceCollection::__cordl_internal_set_failureReasonText(::UnityW<::TMPro::TextMeshProUGUI>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___failureReasonText = value;
}
constexpr ::GlobalNamespace::SIResourceCollection_FailReason& GlobalNamespace::SIResourceCollection::__cordl_internal_get_failureReason()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___failureReason;
}
constexpr ::GlobalNamespace::SIResourceCollection_FailReason const& GlobalNamespace::SIResourceCollection::__cordl_internal_get_failureReason() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___failureReason;
}
constexpr void GlobalNamespace::SIResourceCollection::__cordl_internal_set_failureReason(::GlobalNamespace::SIResourceCollection_FailReason  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___failureReason = value;
}
constexpr ::UnityW<::UnityEngine::UI::Image>& GlobalNamespace::SIResourceCollection::__cordl_internal_get_background()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___background;
}
constexpr ::UnityW<::UnityEngine::UI::Image> const& GlobalNamespace::SIResourceCollection::__cordl_internal_get_background() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___background;
}
constexpr void GlobalNamespace::SIResourceCollection::__cordl_internal_set_background(::UnityW<::UnityEngine::UI::Image>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___background = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::SIResourceCollection::__cordl_internal_get_active()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___active;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::SIResourceCollection::__cordl_internal_get_active() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___active;
}
constexpr void GlobalNamespace::SIResourceCollection::__cordl_internal_set_active(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___active = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::SIResourceCollection::__cordl_internal_get_notActive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___notActive;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::SIResourceCollection::__cordl_internal_get_notActive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___notActive;
}
constexpr void GlobalNamespace::SIResourceCollection::__cordl_internal_set_notActive(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___notActive = value;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& GlobalNamespace::SIResourceCollection::__cordl_internal_get_currentResourcesResourceCounts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentResourcesResourceCounts;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& GlobalNamespace::SIResourceCollection::__cordl_internal_get_currentResourcesResourceCounts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentResourcesResourceCounts;
}
constexpr void GlobalNamespace::SIResourceCollection::__cordl_internal_set_currentResourcesResourceCounts(::UnityW<::TMPro::TextMeshProUGUI>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentResourcesResourceCounts = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SIResourceCollection_ResourceCollectorTerminalState,::UnityW<::UnityEngine::GameObject>>*& GlobalNamespace::SIResourceCollection::__cordl_internal_get_screenData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___screenData;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SIResourceCollection_ResourceCollectorTerminalState,::UnityW<::UnityEngine::GameObject>>* const& GlobalNamespace::SIResourceCollection::__cordl_internal_get_screenData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___screenData;
}
constexpr void GlobalNamespace::SIResourceCollection::__cordl_internal_set_screenData(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SIResourceCollection_ResourceCollectorTerminalState,::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___screenData = value;
}
constexpr bool& GlobalNamespace::SIResourceCollection::__cordl_internal_get_initialized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialized;
}
constexpr bool const& GlobalNamespace::SIResourceCollection::__cordl_internal_get_initialized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialized;
}
constexpr void GlobalNamespace::SIResourceCollection::__cordl_internal_set_initialized(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___initialized = value;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& GlobalNamespace::SIResourceCollection::__cordl_internal_get_soundBankPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___soundBankPlayer;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& GlobalNamespace::SIResourceCollection::__cordl_internal_get_soundBankPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___soundBankPlayer;
}
constexpr void GlobalNamespace::SIResourceCollection::__cordl_internal_set_soundBankPlayer(::UnityW<::GlobalNamespace::SoundBankPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___soundBankPlayer = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*& GlobalNamespace::SIResourceCollection::__cordl_internal_get__nonPopupButtonColliders()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nonPopupButtonColliders;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* const& GlobalNamespace::SIResourceCollection::__cordl_internal_get__nonPopupButtonColliders() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nonPopupButtonColliders;
}
constexpr void GlobalNamespace::SIResourceCollection::__cordl_internal_set__nonPopupButtonColliders(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____nonPopupButtonColliders = value;
}
inline ::UnityW<::GlobalNamespace::SIScreenRegion> GlobalNamespace::SIResourceCollection::get_ScreenRegion()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResourceCollection*>(),
                        {"get_ScreenRegion", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::SIScreenRegion>>(this, ___internal_method);
}
inline bool GlobalNamespace::SIResourceCollection::get_IsAuthority()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResourceCollection*>(),
                        {"get_IsAuthority", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::SIPlayer> GlobalNamespace::SIResourceCollection::get_ActivePlayer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResourceCollection*>(),
                        {"get_ActivePlayer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::SIPlayer>>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::SuperInfectionManager> GlobalNamespace::SIResourceCollection::get_SIManager()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResourceCollection*>(),
                        {"get_SIManager", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::SuperInfectionManager>>(this, ___internal_method);
}
inline void GlobalNamespace::SIResourceCollection::CollectButtonColliders()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResourceCollection*>(),
                        {"CollectButtonColliders", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIResourceCollection::SetNonPopupButtonsEnabled(bool  enable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResourceCollection*>(),
                        {"SetNonPopupButtonsEnabled", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, enable);
}
inline void GlobalNamespace::SIResourceCollection::Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResourceCollection*>(),
                        {"Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIResourceCollection::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResourceCollection*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIResourceCollection::WriteDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResourceCollection*>(),
                        {"WriteDataPUN", {}, {::i2c::type_of<::Photon::Pun::PhotonStream*>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline void GlobalNamespace::SIResourceCollection::ReadDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResourceCollection*>(),
                        {"ReadDataPUN", {}, {::i2c::type_of<::Photon::Pun::PhotonStream*>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline void GlobalNamespace::SIResourceCollection::ZoneDataSerializeWrite(::System::IO::BinaryWriter*  writer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResourceCollection*>(),
                        {"ZoneDataSerializeWrite", {}, {::i2c::type_of<::System::IO::BinaryWriter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer);
}
inline void GlobalNamespace::SIResourceCollection::ZoneDataSerializeRead(::System::IO::BinaryReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResourceCollection*>(),
                        {"ZoneDataSerializeRead", {}, {::i2c::type_of<::System::IO::BinaryReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader);
}
inline bool GlobalNamespace::SIResourceCollection::PopupActive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResourceCollection*>(),
                        {"PopupActive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::SIResourceCollection::IsPopupState(::GlobalNamespace::SIResourceCollection_ResourceCollectorTerminalState  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResourceCollection*>(),
                        {"IsPopupState", {}, {::i2c::type_of<::GlobalNamespace::SIResourceCollection_ResourceCollectorTerminalState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, state);
}
inline bool GlobalNamespace::SIResourceCollection::HasHelpButton(::GlobalNamespace::SIResourceCollection_ResourceCollectorTerminalState  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResourceCollection*>(),
                        {"HasHelpButton", {}, {::i2c::type_of<::GlobalNamespace::SIResourceCollection_ResourceCollectorTerminalState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, state);
}
inline void GlobalNamespace::SIResourceCollection::UpdateState(::GlobalNamespace::SIResourceCollection_ResourceCollectorTerminalState  newState, ::GlobalNamespace::SIResourceCollection_ResourceCollectorTerminalState  newLastState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResourceCollection*>(),
                        {"UpdateState", {}, {::i2c::type_of<::GlobalNamespace::SIResourceCollection_ResourceCollectorTerminalState>(), ::i2c::type_of<::GlobalNamespace::SIResourceCollection_ResourceCollectorTerminalState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState, newLastState);
}
inline void GlobalNamespace::SIResourceCollection::UpdateState(::GlobalNamespace::SIResourceCollection_ResourceCollectorTerminalState  newState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResourceCollection*>(),
                        {"UpdateState", {}, {::i2c::type_of<::GlobalNamespace::SIResourceCollection_ResourceCollectorTerminalState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState);
}
inline ::StringW GlobalNamespace::SIResourceCollection::FormattedPlayerResourceCount(::GlobalNamespace::SIPlayer*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResourceCollection*>(),
                        {"FormattedPlayerResourceCount", {}, {::i2c::type_of<::GlobalNamespace::SIPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, player);
}
inline ::StringW GlobalNamespace::SIResourceCollection::FormattedPlayerResourceCountWithMax(::GlobalNamespace::SIPlayer*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResourceCollection*>(),
                        {"FormattedPlayerResourceCountWithMax", {}, {::i2c::type_of<::GlobalNamespace::SIPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, player);
}
inline ::StringW GlobalNamespace::SIResourceCollection::GetFormattedResource(::GlobalNamespace::SIPlayer*  player, ::GlobalNamespace::SIResource_ResourceType  resource)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResourceCollection*>(),
                        {"GetFormattedResource", {}, {::i2c::type_of<::GlobalNamespace::SIPlayer*>(), ::i2c::type_of<::GlobalNamespace::SIResource_ResourceType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, player, resource);
}
inline void GlobalNamespace::SIResourceCollection::UpdateHelpButtonPage(int32_t  helpButtonPageIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResourceCollection*>(),
                        {"UpdateHelpButtonPage", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, helpButtonPageIndex);
}
inline void GlobalNamespace::SIResourceCollection::SetScreenVisibility(::GlobalNamespace::SIResourceCollection_ResourceCollectorTerminalState  currentState, ::GlobalNamespace::SIResourceCollection_ResourceCollectorTerminalState  lastState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResourceCollection*>(),
                        {"SetScreenVisibility", {}, {::i2c::type_of<::GlobalNamespace::SIResourceCollection_ResourceCollectorTerminalState>(), ::i2c::type_of<::GlobalNamespace::SIResourceCollection_ResourceCollectorTerminalState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, currentState, lastState);
}
inline void GlobalNamespace::SIResourceCollection::PlayerHandScanned(int32_t  actorNr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResourceCollection*>(),
                        {"PlayerHandScanned", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, actorNr);
}
inline void GlobalNamespace::SIResourceCollection::TouchscreenButtonPressed(::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType  buttonType, int32_t  data, int32_t  actorNr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResourceCollection*>(),
                        {"TouchscreenButtonPressed", {}, {::i2c::type_of<::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buttonType, data, actorNr);
}
inline void GlobalNamespace::SIResourceCollection::TouchscreenToggleButtonPressed(::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType  buttonType, int32_t  data, int32_t  actorNr, bool  isToggledOn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResourceCollection*>(),
                        {"TouchscreenToggleButtonPressed", {}, {::i2c::type_of<::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buttonType, data, actorNr, isToggledOn);
}
inline void GlobalNamespace::SIResourceCollection::AddButton(::GlobalNamespace::SITouchscreenButton*  button, bool  isPopupButton)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResourceCollection*>(),
                        {"AddButton", {}, {::i2c::type_of<::GlobalNamespace::SITouchscreenButton*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, button, isPopupButton);
}
inline void GlobalNamespace::SIResourceCollection::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResourceCollection*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::GameObject> GlobalNamespace::SIResourceCollection::ITouchScreenStation_get_gameObject()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResourceCollection*>(),
                        {"ITouchScreenStation.get_gameObject", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method);
}
inline void GlobalNamespace::SIResourceCollection::_CollectButtonColliders_g__RemoveButtonsInside_45_2(::ArrayW<::UnityEngine::GameObject*>  roots, ::by_ref<::GlobalNamespace::SIResourceCollection___c__DisplayClass45_0>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResourceCollection*>(),
                        {"<CollectButtonColliders>g__RemoveButtonsInside|45_2", {}, {::i2c::type_of<::ArrayW<::UnityEngine::GameObject*>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::SIResourceCollection___c__DisplayClass45_0>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, roots, _cordl_fixed_empty_name_whitespace);
}
inline void GlobalNamespace::SIResourceCollection::_TouchscreenButtonPressed_b__66_0(::GlobalNamespace::ProgressionManager_UserInventory*  userInventoryResponse)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResourceCollection*>(),
                        {"<TouchscreenButtonPressed>b__66_0", {}, {::i2c::type_of<::GlobalNamespace::ProgressionManager_UserInventory*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userInventoryResponse);
}
inline void GlobalNamespace::SIResourceCollection::_TouchscreenButtonPressed_b__66_1(::StringW  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResourceCollection*>(),
                        {"<TouchscreenButtonPressed>b__66_1", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error);
}
inline ::GlobalNamespace::SIResourceCollection* GlobalNamespace::SIResourceCollection::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SIResourceCollection*>());
}
/// @brief Convert operator to "::GlobalNamespace::ITouchScreenStation"
constexpr  GlobalNamespace::SIResourceCollection::operator ::GlobalNamespace::ITouchScreenStation*() noexcept {
return static_cast<::GlobalNamespace::ITouchScreenStation*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ITouchScreenStation"
constexpr ::GlobalNamespace::ITouchScreenStation* GlobalNamespace::SIResourceCollection::i___GlobalNamespace__ITouchScreenStation() noexcept {
return static_cast<::GlobalNamespace::ITouchScreenStation*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SIResourceCollection::SIResourceCollection()   {
}
//  Writing Method size for method: ::GlobalNamespace::SIResourceCollection___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIResourceCollection___c::*)()>(&::GlobalNamespace::SIResourceCollection___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aec118;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResourceCollection___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIResourceCollection___c._CollectButtonColliders_b__45_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::GlobalNamespace::SIResourceCollection___c::*)(::GlobalNamespace::DestroyIfNotBeta*)>(&::GlobalNamespace::SIResourceCollection___c::_CollectButtonColliders_b__45_0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5aec120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResourceCollection___c*>(),
                        {"<CollectButtonColliders>b__45_0", {}, {::i2c::type_of<::GlobalNamespace::DestroyIfNotBeta*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIResourceCollection___c._CollectButtonColliders_b__45_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Collider> (::GlobalNamespace::SIResourceCollection___c::*)(::GlobalNamespace::SITouchscreenButton*)>(&::GlobalNamespace::SIResourceCollection___c::_CollectButtonColliders_b__45_1)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5aec138;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResourceCollection___c*>(),
                        {"<CollectButtonColliders>b__45_1", {}, {::i2c::type_of<::GlobalNamespace::SITouchscreenButton*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::SIResourceCollection___c::setStaticF___9(::GlobalNamespace::SIResourceCollection___c*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::SIResourceCollection___c*, "<>9", ::GlobalNamespace::SIResourceCollection___c*>(std::forward<::GlobalNamespace::SIResourceCollection___c*>(value));
}
inline ::GlobalNamespace::SIResourceCollection___c* GlobalNamespace::SIResourceCollection___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::SIResourceCollection___c*, "<>9", ::GlobalNamespace::SIResourceCollection___c*>();
}
inline void GlobalNamespace::SIResourceCollection___c::setStaticF___9__45_0(::System::Func_2<::UnityW<::GlobalNamespace::DestroyIfNotBeta>,::UnityW<::UnityEngine::GameObject>>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::UnityW<::GlobalNamespace::DestroyIfNotBeta>,::UnityW<::UnityEngine::GameObject>>*, "<>9__45_0", ::GlobalNamespace::SIResourceCollection___c*>(std::forward<::System::Func_2<::UnityW<::GlobalNamespace::DestroyIfNotBeta>,::UnityW<::UnityEngine::GameObject>>*>(value));
}
inline ::System::Func_2<::UnityW<::GlobalNamespace::DestroyIfNotBeta>,::UnityW<::UnityEngine::GameObject>>* GlobalNamespace::SIResourceCollection___c::getStaticF___9__45_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::UnityW<::GlobalNamespace::DestroyIfNotBeta>,::UnityW<::UnityEngine::GameObject>>*, "<>9__45_0", ::GlobalNamespace::SIResourceCollection___c*>();
}
inline void GlobalNamespace::SIResourceCollection___c::setStaticF___9__45_1(::System::Func_2<::UnityW<::GlobalNamespace::SITouchscreenButton>,::UnityW<::UnityEngine::Collider>>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::UnityW<::GlobalNamespace::SITouchscreenButton>,::UnityW<::UnityEngine::Collider>>*, "<>9__45_1", ::GlobalNamespace::SIResourceCollection___c*>(std::forward<::System::Func_2<::UnityW<::GlobalNamespace::SITouchscreenButton>,::UnityW<::UnityEngine::Collider>>*>(value));
}
inline ::System::Func_2<::UnityW<::GlobalNamespace::SITouchscreenButton>,::UnityW<::UnityEngine::Collider>>* GlobalNamespace::SIResourceCollection___c::getStaticF___9__45_1()  {
return ::cordl_internals::getStaticField<::System::Func_2<::UnityW<::GlobalNamespace::SITouchscreenButton>,::UnityW<::UnityEngine::Collider>>*, "<>9__45_1", ::GlobalNamespace::SIResourceCollection___c*>();
}
inline void GlobalNamespace::SIResourceCollection___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResourceCollection___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::GameObject> GlobalNamespace::SIResourceCollection___c::_CollectButtonColliders_b__45_0(::GlobalNamespace::DestroyIfNotBeta*  d)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResourceCollection___c*>(),
                        {"<CollectButtonColliders>b__45_0", {}, {::i2c::type_of<::GlobalNamespace::DestroyIfNotBeta*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method, d);
}
inline ::UnityW<::UnityEngine::Collider> GlobalNamespace::SIResourceCollection___c::_CollectButtonColliders_b__45_1(::GlobalNamespace::SITouchscreenButton*  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResourceCollection___c*>(),
                        {"<CollectButtonColliders>b__45_1", {}, {::i2c::type_of<::GlobalNamespace::SITouchscreenButton*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Collider>>(this, ___internal_method, b);
}
inline ::GlobalNamespace::SIResourceCollection___c* GlobalNamespace::SIResourceCollection___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SIResourceCollection___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SIResourceCollection___c::SIResourceCollection___c()   {
}
