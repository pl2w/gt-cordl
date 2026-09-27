#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaPlayerScoreboardLine.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UI/zzzz__Image_impl.hpp"
#include "UnityEngine/UI/zzzz__Text_impl.hpp"
#include "UnityEngine/zzzz__MeshRenderer_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__SpriteRenderer_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaPlayerScoreboardLine_def.hpp"
#include "GlobalNamespace/zzzz__GorillaPlayerLineButton_ButtonType_def.hpp"
#include "GlobalNamespace/zzzz__GorillaPlayerLineButton_def.hpp"
#include "GlobalNamespace/zzzz__GorillaPlayerScoreboardLine_def.hpp"
#include "GlobalNamespace/zzzz__GorillaScoreBoard_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "GlobalNamespace/zzzz__RigContainer_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "Photon/Voice/Unity/zzzz__Recorder_def.hpp"
#include "System/zzzz__Predicate_1_def.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
#include "UnityEngine/UI/zzzz__Text_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__SpriteRenderer_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GorillaPlayerScoreboardLine.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaPlayerScoreboardLine::*)()>(&::GlobalNamespace::GorillaPlayerScoreboardLine::Start)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x599a8c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPlayerScoreboardLine*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPlayerScoreboardLine.InitializeLine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaPlayerScoreboardLine::*)()>(&::GlobalNamespace::GorillaPlayerScoreboardLine::InitializeLine)> {
  constexpr static std::size_t size = 0x374;
  constexpr static std::size_t addrs = 0x599a8d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPlayerScoreboardLine*>(),
                        {"InitializeLine", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPlayerScoreboardLine.SetLineData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaPlayerScoreboardLine::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::GorillaPlayerScoreboardLine::SetLineData)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x599b140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPlayerScoreboardLine*>(),
                        {"SetLineData", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPlayerScoreboardLine.UpdateLine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaPlayerScoreboardLine::*)()>(&::GlobalNamespace::GorillaPlayerScoreboardLine::UpdateLine)> {
  constexpr static std::size_t size = 0x75c;
  constexpr static std::size_t addrs = 0x599b2dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPlayerScoreboardLine*>(),
                        {"UpdateLine", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPlayerScoreboardLine.UpdatePlayerText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaPlayerScoreboardLine::*)()>(&::GlobalNamespace::GorillaPlayerScoreboardLine::UpdatePlayerText)> {
  constexpr static std::size_t size = 0x4a0;
  constexpr static std::size_t addrs = 0x599ac4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPlayerScoreboardLine*>(),
                        {"UpdatePlayerText", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPlayerScoreboardLine.IsLineActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GorillaPlayerScoreboardLine::*)()>(&::GlobalNamespace::GorillaPlayerScoreboardLine::IsLineActive)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x599bcd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPlayerScoreboardLine*>(),
                        {"IsLineActive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPlayerScoreboardLine.IsPlayerInRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GorillaPlayerScoreboardLine::*)()>(&::GlobalNamespace::GorillaPlayerScoreboardLine::IsPlayerInRoom)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x599bcf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPlayerScoreboardLine*>(),
                        {"IsPlayerInRoom", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPlayerScoreboardLine.IsReportButtonActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GorillaPlayerScoreboardLine::*)()>(&::GlobalNamespace::GorillaPlayerScoreboardLine::IsReportButtonActive)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x599bd14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPlayerScoreboardLine*>(),
                        {"IsReportButtonActive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPlayerScoreboardLine.IsConfirmButtonsActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GorillaPlayerScoreboardLine::*)()>(&::GlobalNamespace::GorillaPlayerScoreboardLine::IsConfirmButtonsActive)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x599bd2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPlayerScoreboardLine*>(),
                        {"IsConfirmButtonsActive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPlayerScoreboardLine.IsConfirmParentKick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GorillaPlayerScoreboardLine::*)()>(&::GlobalNamespace::GorillaPlayerScoreboardLine::IsConfirmParentKick)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x599bd44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPlayerScoreboardLine*>(),
                        {"IsConfirmParentKick", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPlayerScoreboardLine.IsConfirmParentBan
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GorillaPlayerScoreboardLine::*)()>(&::GlobalNamespace::GorillaPlayerScoreboardLine::IsConfirmParentBan)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x599bda8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPlayerScoreboardLine*>(),
                        {"IsConfirmParentBan", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPlayerScoreboardLine.PressButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaPlayerScoreboardLine::*)(bool, ::GlobalNamespace::GorillaPlayerLineButton_ButtonType)>(&::GlobalNamespace::GorillaPlayerScoreboardLine::PressButton)> {
  constexpr static std::size_t size = 0x488;
  constexpr static std::size_t addrs = 0x599a188;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPlayerScoreboardLine*>(),
                        {"PressButton", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::GorillaPlayerLineButton_ButtonType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPlayerScoreboardLine.SetReportState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaPlayerScoreboardLine::*)(bool, ::GlobalNamespace::GorillaPlayerLineButton_ButtonType)>(&::GlobalNamespace::GorillaPlayerScoreboardLine::SetReportState)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x599bfd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPlayerScoreboardLine*>(),
                        {"SetReportState", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::GorillaPlayerLineButton_ButtonType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPlayerScoreboardLine.ReportPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::GlobalNamespace::GorillaPlayerLineButton_ButtonType, ::StringW)>(&::GlobalNamespace::GorillaPlayerScoreboardLine::ReportPlayer)> {
  constexpr static std::size_t size = 0x398;
  constexpr static std::size_t addrs = 0x599c9a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPlayerScoreboardLine*>(),
                        {"ReportPlayer", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::GorillaPlayerLineButton_ButtonType>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPlayerScoreboardLine.ToggleRoomControlButtons
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaPlayerScoreboardLine::*)(bool, bool)>(&::GlobalNamespace::GorillaPlayerScoreboardLine::ToggleRoomControlButtons)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x599ce64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPlayerScoreboardLine*>(),
                        {"ToggleRoomControlButtons", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPlayerScoreboardLine.ShowConfirmButtons
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaPlayerScoreboardLine::*)(::GlobalNamespace::GorillaPlayerLineButton*)>(&::GlobalNamespace::GorillaPlayerScoreboardLine::ShowConfirmButtons)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x599c4dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPlayerScoreboardLine*>(),
                        {"ShowConfirmButtons", {}, {::i2c::type_of<::GlobalNamespace::GorillaPlayerLineButton*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPlayerScoreboardLine.HideConfirmButtons
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaPlayerScoreboardLine::*)()>(&::GlobalNamespace::GorillaPlayerScoreboardLine::HideConfirmButtons)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x599c788;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPlayerScoreboardLine*>(),
                        {"HideConfirmButtons", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPlayerScoreboardLine.NormalizeName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GorillaPlayerScoreboardLine::*)(bool, ::StringW)>(&::GlobalNamespace::GorillaPlayerScoreboardLine::NormalizeName)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x599ba38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPlayerScoreboardLine*>(),
                        {"NormalizeName", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPlayerScoreboardLine.ResetData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaPlayerScoreboardLine::*)()>(&::GlobalNamespace::GorillaPlayerScoreboardLine::ResetData)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x599cec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPlayerScoreboardLine*>(),
                        {"ResetData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPlayerScoreboardLine.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaPlayerScoreboardLine::*)()>(&::GlobalNamespace::GorillaPlayerScoreboardLine::OnEnable)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x599cf24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPlayerScoreboardLine*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPlayerScoreboardLine.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaPlayerScoreboardLine::*)()>(&::GlobalNamespace::GorillaPlayerScoreboardLine::OnDisable)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x599d09c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPlayerScoreboardLine*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPlayerScoreboardLine.SwapToReportState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaPlayerScoreboardLine::*)(bool)>(&::GlobalNamespace::GorillaPlayerScoreboardLine::SwapToReportState)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x599b0ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPlayerScoreboardLine*>(),
                        {"SwapToReportState", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPlayerScoreboardLine.AttemptRoomControlMute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GorillaPlayerScoreboardLine::*)()>(&::GlobalNamespace::GorillaPlayerScoreboardLine::AttemptRoomControlMute)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x599c1bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPlayerScoreboardLine*>(),
                        {"AttemptRoomControlMute", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPlayerScoreboardLine.AttemptRoomControlKick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GorillaPlayerScoreboardLine::*)()>(&::GlobalNamespace::GorillaPlayerScoreboardLine::AttemptRoomControlKick)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x599c5f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPlayerScoreboardLine*>(),
                        {"AttemptRoomControlKick", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPlayerScoreboardLine.AttemptRoomControlBan
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GorillaPlayerScoreboardLine::*)()>(&::GlobalNamespace::GorillaPlayerScoreboardLine::AttemptRoomControlBan)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x599c80c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPlayerScoreboardLine*>(),
                        {"AttemptRoomControlBan", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPlayerScoreboardLine._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaPlayerScoreboardLine::*)()>(&::GlobalNamespace::GorillaPlayerScoreboardLine::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x599d1c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPlayerScoreboardLine*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::UI::Text>& GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_get_playerName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerName;
}
constexpr ::UnityW<::UnityEngine::UI::Text> const& GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_get_playerName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerName;
}
constexpr void GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_set_playerName(::UnityW<::UnityEngine::UI::Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerName = value;
}
constexpr ::UnityW<::UnityEngine::UI::Text>& GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_get_playerLevel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerLevel;
}
constexpr ::UnityW<::UnityEngine::UI::Text> const& GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_get_playerLevel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerLevel;
}
constexpr void GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_set_playerLevel(::UnityW<::UnityEngine::UI::Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerLevel = value;
}
constexpr ::UnityW<::UnityEngine::UI::Text>& GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_get_playerMMR()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerMMR;
}
constexpr ::UnityW<::UnityEngine::UI::Text> const& GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_get_playerMMR() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerMMR;
}
constexpr void GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_set_playerMMR(::UnityW<::UnityEngine::UI::Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerMMR = value;
}
constexpr ::UnityW<::UnityEngine::UI::Image>& GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_get_playerSwatch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerSwatch;
}
constexpr ::UnityW<::UnityEngine::UI::Image> const& GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_get_playerSwatch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerSwatch;
}
constexpr void GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_set_playerSwatch(::UnityW<::UnityEngine::UI::Image>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerSwatch = value;
}
constexpr ::UnityW<::UnityEngine::Texture>& GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_get_infectedTexture()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___infectedTexture;
}
constexpr ::UnityW<::UnityEngine::Texture> const& GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_get_infectedTexture() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___infectedTexture;
}
constexpr void GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_set_infectedTexture(::UnityW<::UnityEngine::Texture>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___infectedTexture = value;
}
constexpr ::GlobalNamespace::NetPlayer*& GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_get_linePlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___linePlayer;
}
constexpr ::GlobalNamespace::NetPlayer* const& GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_get_linePlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___linePlayer;
}
constexpr void GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_set_linePlayer(::GlobalNamespace::NetPlayer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___linePlayer = value;
}
constexpr ::UnityW<::GlobalNamespace::VRRig>& GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_get_playerVRRig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerVRRig;
}
constexpr ::UnityW<::GlobalNamespace::VRRig> const& GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_get_playerVRRig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerVRRig;
}
constexpr void GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_set_playerVRRig(::UnityW<::GlobalNamespace::VRRig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerVRRig = value;
}
constexpr ::StringW& GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_get_playerLevelValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerLevelValue;
}
constexpr ::StringW const& GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_get_playerLevelValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerLevelValue;
}
constexpr void GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_set_playerLevelValue(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerLevelValue = value;
}
constexpr ::StringW& GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_get_playerMMRValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerMMRValue;
}
constexpr ::StringW const& GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_get_playerMMRValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerMMRValue;
}
constexpr void GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_set_playerMMRValue(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerMMRValue = value;
}
constexpr ::StringW& GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_get_playerNameValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerNameValue;
}
constexpr ::StringW const& GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_get_playerNameValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerNameValue;
}
constexpr void GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_set_playerNameValue(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerNameValue = value;
}
constexpr ::StringW& GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_get_playerNameVisible()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerNameVisible;
}
constexpr ::StringW const& GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_get_playerNameVisible() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerNameVisible;
}
constexpr void GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_set_playerNameVisible(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerNameVisible = value;
}
constexpr int32_t& GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_get_playerActorNumber()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerActorNumber;
}
constexpr int32_t const& GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_get_playerActorNumber() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerActorNumber;
}
constexpr void GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_set_playerActorNumber(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerActorNumber = value;
}
constexpr ::UnityW<::GlobalNamespace::GorillaPlayerLineButton>& GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_get_muteButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___muteButton;
}
constexpr ::UnityW<::GlobalNamespace::GorillaPlayerLineButton> const& GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_get_muteButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___muteButton;
}
constexpr void GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_set_muteButton(::UnityW<::GlobalNamespace::GorillaPlayerLineButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___muteButton = value;
}
constexpr ::UnityW<::GlobalNamespace::GorillaPlayerLineButton>& GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_get_reportButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reportButton;
}
constexpr ::UnityW<::GlobalNamespace::GorillaPlayerLineButton> const& GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_get_reportButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reportButton;
}
constexpr void GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_set_reportButton(::UnityW<::GlobalNamespace::GorillaPlayerLineButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reportButton = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_get_reportButtons()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reportButtons;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_get_reportButtons() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reportButtons;
}
constexpr void GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_set_reportButtons(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reportButtons = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_get_hateSpeechButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hateSpeechButton;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_get_hateSpeechButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hateSpeechButton;
}
constexpr void GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_set_hateSpeechButton(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hateSpeechButton = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_get_toxicityButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toxicityButton;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_get_toxicityButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toxicityButton;
}
constexpr void GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_set_toxicityButton(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___toxicityButton = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_get_cheatingButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cheatingButton;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_get_cheatingButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cheatingButton;
}
constexpr void GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_set_cheatingButton(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cheatingButton = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_get_cancelButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancelButton;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_get_cancelButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancelButton;
}
constexpr void GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_set_cancelButton(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cancelButton = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_get_roomControlButtons()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___roomControlButtons;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_get_roomControlButtons() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___roomControlButtons;
}
constexpr void GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_set_roomControlButtons(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___roomControlButtons = value;
}
constexpr ::UnityW<::GlobalNamespace::GorillaPlayerLineButton>& GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_get_muteForRoomButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___muteForRoomButton;
}
constexpr ::UnityW<::GlobalNamespace::GorillaPlayerLineButton> const& GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_get_muteForRoomButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___muteForRoomButton;
}
constexpr void GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_set_muteForRoomButton(::UnityW<::GlobalNamespace::GorillaPlayerLineButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___muteForRoomButton = value;
}
constexpr ::UnityW<::GlobalNamespace::GorillaPlayerLineButton>& GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_get_kickButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___kickButton;
}
constexpr ::UnityW<::GlobalNamespace::GorillaPlayerLineButton> const& GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_get_kickButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___kickButton;
}
constexpr void GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_set_kickButton(::UnityW<::GlobalNamespace::GorillaPlayerLineButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___kickButton = value;
}
constexpr ::UnityW<::GlobalNamespace::GorillaPlayerLineButton>& GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_get_banButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___banButton;
}
constexpr ::UnityW<::GlobalNamespace::GorillaPlayerLineButton> const& GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_get_banButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___banButton;
}
constexpr void GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_set_banButton(::UnityW<::GlobalNamespace::GorillaPlayerLineButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___banButton = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_get_confirmRoomControlButtons()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___confirmRoomControlButtons;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_get_confirmRoomControlButtons() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___confirmRoomControlButtons;
}
constexpr void GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_set_confirmRoomControlButtons(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___confirmRoomControlButtons = value;
}
constexpr ::UnityW<::GlobalNamespace::GorillaPlayerLineButton>& GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_get_confirmRoomControlButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___confirmRoomControlButton;
}
constexpr ::UnityW<::GlobalNamespace::GorillaPlayerLineButton> const& GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_get_confirmRoomControlButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___confirmRoomControlButton;
}
constexpr void GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_set_confirmRoomControlButton(::UnityW<::GlobalNamespace::GorillaPlayerLineButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___confirmRoomControlButton = value;
}
constexpr ::UnityW<::GlobalNamespace::GorillaPlayerLineButton>& GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_get_cancelRoomControlButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancelRoomControlButton;
}
constexpr ::UnityW<::GlobalNamespace::GorillaPlayerLineButton> const& GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_get_cancelRoomControlButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancelRoomControlButton;
}
constexpr void GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_set_cancelRoomControlButton(::UnityW<::GlobalNamespace::GorillaPlayerLineButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cancelRoomControlButton = value;
}
constexpr ::UnityW<::UnityEngine::SpriteRenderer>& GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_get_speakerIcon()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___speakerIcon;
}
constexpr ::UnityW<::UnityEngine::SpriteRenderer> const& GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_get_speakerIcon() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___speakerIcon;
}
constexpr void GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_set_speakerIcon(::UnityW<::UnityEngine::SpriteRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___speakerIcon = value;
}
constexpr bool& GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_get_canPressNextReportButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___canPressNextReportButton;
}
constexpr bool const& GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_get_canPressNextReportButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___canPressNextReportButton;
}
constexpr void GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_set_canPressNextReportButton(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___canPressNextReportButton = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::UI::Text>>& GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_get_texts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___texts;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::UI::Text>> const& GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_get_texts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___texts;
}
constexpr void GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_set_texts(::ArrayW<::UnityW<::UnityEngine::UI::Text>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___texts = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::SpriteRenderer>>& GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_get_sprites()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sprites;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::SpriteRenderer>> const& GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_get_sprites() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sprites;
}
constexpr void GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_set_sprites(::ArrayW<::UnityW<::UnityEngine::SpriteRenderer>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sprites = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>& GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_get_meshes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meshes;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>> const& GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_get_meshes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meshes;
}
constexpr void GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_set_meshes(::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___meshes = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::UI::Image>>& GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_get_images()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___images;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::UI::Image>> const& GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_get_images() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___images;
}
constexpr void GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_set_images(::ArrayW<::UnityW<::UnityEngine::UI::Image>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___images = value;
}
constexpr ::UnityW<::Photon::Voice::Unity::Recorder>& GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_get_myRecorder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myRecorder;
}
constexpr ::UnityW<::Photon::Voice::Unity::Recorder> const& GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_get_myRecorder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myRecorder;
}
constexpr void GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_set_myRecorder(::UnityW<::Photon::Voice::Unity::Recorder>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___myRecorder = value;
}
constexpr bool& GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_get_isMuteManual()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isMuteManual;
}
constexpr bool const& GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_get_isMuteManual() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isMuteManual;
}
constexpr void GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_set_isMuteManual(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isMuteManual = value;
}
constexpr int32_t& GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_get_mute()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mute;
}
constexpr int32_t const& GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_get_mute() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mute;
}
constexpr void GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_set_mute(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mute = value;
}
constexpr int32_t& GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_get_emptyRigCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___emptyRigCount;
}
constexpr int32_t const& GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_get_emptyRigCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___emptyRigCount;
}
constexpr void GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_set_emptyRigCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___emptyRigCount = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_get_myRig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myRig;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_get_myRig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myRig;
}
constexpr void GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_set_myRig(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___myRig = value;
}
constexpr bool& GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_get_reportedCheating()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reportedCheating;
}
constexpr bool const& GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_get_reportedCheating() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reportedCheating;
}
constexpr void GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_set_reportedCheating(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reportedCheating = value;
}
constexpr bool& GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_get_reportedToxicity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reportedToxicity;
}
constexpr bool const& GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_get_reportedToxicity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reportedToxicity;
}
constexpr void GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_set_reportedToxicity(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reportedToxicity = value;
}
constexpr bool& GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_get_reportedHateSpeech()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reportedHateSpeech;
}
constexpr bool const& GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_get_reportedHateSpeech() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reportedHateSpeech;
}
constexpr void GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_set_reportedHateSpeech(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reportedHateSpeech = value;
}
constexpr bool& GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_get_reportInProgress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reportInProgress;
}
constexpr bool const& GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_get_reportInProgress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reportInProgress;
}
constexpr void GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_set_reportInProgress(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reportInProgress = value;
}
constexpr ::StringW& GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_get_currentNickname()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentNickname;
}
constexpr ::StringW const& GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_get_currentNickname() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentNickname;
}
constexpr void GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_set_currentNickname(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentNickname = value;
}
constexpr bool& GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_get_doneReporting()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doneReporting;
}
constexpr bool const& GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_get_doneReporting() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doneReporting;
}
constexpr void GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_set_doneReporting(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___doneReporting = value;
}
constexpr bool& GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_get_lastVisible()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastVisible;
}
constexpr bool const& GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_get_lastVisible() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastVisible;
}
constexpr void GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_set_lastVisible(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastVisible = value;
}
constexpr ::UnityW<::GlobalNamespace::GorillaPlayerLineButton>& GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_get__parentConfirmButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____parentConfirmButton;
}
constexpr ::UnityW<::GlobalNamespace::GorillaPlayerLineButton> const& GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_get__parentConfirmButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____parentConfirmButton;
}
constexpr void GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_set__parentConfirmButton(::UnityW<::GlobalNamespace::GorillaPlayerLineButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____parentConfirmButton = value;
}
constexpr bool& GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_get__attemptingKick()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____attemptingKick;
}
constexpr bool const& GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_get__attemptingKick() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____attemptingKick;
}
constexpr void GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_set__attemptingKick(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____attemptingKick = value;
}
constexpr bool& GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_get__attemptingBan()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____attemptingBan;
}
constexpr bool const& GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_get__attemptingBan() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____attemptingBan;
}
constexpr void GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_set__attemptingBan(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____attemptingBan = value;
}
constexpr ::UnityW<::GlobalNamespace::GorillaScoreBoard>& GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_get_parentScoreboard()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parentScoreboard;
}
constexpr ::UnityW<::GlobalNamespace::GorillaScoreBoard> const& GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_get_parentScoreboard() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parentScoreboard;
}
constexpr void GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_set_parentScoreboard(::UnityW<::GlobalNamespace::GorillaScoreBoard>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___parentScoreboard = value;
}
constexpr float_t& GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_get_initTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initTime;
}
constexpr float_t const& GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_get_initTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initTime;
}
constexpr void GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_set_initTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___initTime = value;
}
constexpr float_t& GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_get_emptyRigCooldown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___emptyRigCooldown;
}
constexpr float_t const& GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_get_emptyRigCooldown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___emptyRigCooldown;
}
constexpr void GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_set_emptyRigCooldown(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___emptyRigCooldown = value;
}
constexpr ::UnityW<::GlobalNamespace::RigContainer>& GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_get_rigContainer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rigContainer;
}
constexpr ::UnityW<::GlobalNamespace::RigContainer> const& GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_get_rigContainer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rigContainer;
}
constexpr void GlobalNamespace::GorillaPlayerScoreboardLine::__cordl_internal_set_rigContainer(::UnityW<::GlobalNamespace::RigContainer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rigContainer = value;
}
inline void GlobalNamespace::GorillaPlayerScoreboardLine::setStaticF_targetActors(::ArrayW<int32_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<int32_t>, "targetActors", ::GlobalNamespace::GorillaPlayerScoreboardLine*>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> GlobalNamespace::GorillaPlayerScoreboardLine::getStaticF_targetActors()  {
return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "targetActors", ::GlobalNamespace::GorillaPlayerScoreboardLine*>();
}
inline void GlobalNamespace::GorillaPlayerScoreboardLine::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPlayerScoreboardLine*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaPlayerScoreboardLine::InitializeLine()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPlayerScoreboardLine*>(),
                        {"InitializeLine", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaPlayerScoreboardLine::SetLineData(::GlobalNamespace::NetPlayer*  netPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPlayerScoreboardLine*>(),
                        {"SetLineData", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, netPlayer);
}
inline void GlobalNamespace::GorillaPlayerScoreboardLine::UpdateLine()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPlayerScoreboardLine*>(),
                        {"UpdateLine", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaPlayerScoreboardLine::UpdatePlayerText()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPlayerScoreboardLine*>(),
                        {"UpdatePlayerText", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::GorillaPlayerScoreboardLine::IsLineActive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPlayerScoreboardLine*>(),
                        {"IsLineActive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::GorillaPlayerScoreboardLine::IsPlayerInRoom()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPlayerScoreboardLine*>(),
                        {"IsPlayerInRoom", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::GorillaPlayerScoreboardLine::IsReportButtonActive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPlayerScoreboardLine*>(),
                        {"IsReportButtonActive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::GorillaPlayerScoreboardLine::IsConfirmButtonsActive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPlayerScoreboardLine*>(),
                        {"IsConfirmButtonsActive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::GorillaPlayerScoreboardLine::IsConfirmParentKick()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPlayerScoreboardLine*>(),
                        {"IsConfirmParentKick", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::GorillaPlayerScoreboardLine::IsConfirmParentBan()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPlayerScoreboardLine*>(),
                        {"IsConfirmParentBan", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaPlayerScoreboardLine::PressButton(bool  isOn, ::GlobalNamespace::GorillaPlayerLineButton_ButtonType  buttonType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPlayerScoreboardLine*>(),
                        {"PressButton", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::GorillaPlayerLineButton_ButtonType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isOn, buttonType);
}
inline void GlobalNamespace::GorillaPlayerScoreboardLine::SetReportState(bool  reportState, ::GlobalNamespace::GorillaPlayerLineButton_ButtonType  buttonType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPlayerScoreboardLine*>(),
                        {"SetReportState", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::GorillaPlayerLineButton_ButtonType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reportState, buttonType);
}
inline void GlobalNamespace::GorillaPlayerScoreboardLine::ReportPlayer(::StringW  PlayerID, ::GlobalNamespace::GorillaPlayerLineButton_ButtonType  buttonType, ::StringW  OtherPlayerNickName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPlayerScoreboardLine*>(),
                        {"ReportPlayer", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::GorillaPlayerLineButton_ButtonType>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, PlayerID, buttonType, OtherPlayerNickName);
}
inline void GlobalNamespace::GorillaPlayerScoreboardLine::ToggleRoomControlButtons(bool  toggle, bool  hideConfirm)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPlayerScoreboardLine*>(),
                        {"ToggleRoomControlButtons", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, toggle, hideConfirm);
}
inline void GlobalNamespace::GorillaPlayerScoreboardLine::ShowConfirmButtons(::GlobalNamespace::GorillaPlayerLineButton*  parentButton)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPlayerScoreboardLine*>(),
                        {"ShowConfirmButtons", {}, {::i2c::type_of<::GlobalNamespace::GorillaPlayerLineButton*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parentButton);
}
inline void GlobalNamespace::GorillaPlayerScoreboardLine::HideConfirmButtons()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPlayerScoreboardLine*>(),
                        {"HideConfirmButtons", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::GorillaPlayerScoreboardLine::NormalizeName(bool  doIt, ::StringW  text)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPlayerScoreboardLine*>(),
                        {"NormalizeName", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, doIt, text);
}
inline void GlobalNamespace::GorillaPlayerScoreboardLine::ResetData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPlayerScoreboardLine*>(),
                        {"ResetData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaPlayerScoreboardLine::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPlayerScoreboardLine*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaPlayerScoreboardLine::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPlayerScoreboardLine*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaPlayerScoreboardLine::SwapToReportState(bool  reportInProgress)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPlayerScoreboardLine*>(),
                        {"SwapToReportState", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reportInProgress);
}
inline bool GlobalNamespace::GorillaPlayerScoreboardLine::AttemptRoomControlMute()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPlayerScoreboardLine*>(),
                        {"AttemptRoomControlMute", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::GorillaPlayerScoreboardLine::AttemptRoomControlKick()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPlayerScoreboardLine*>(),
                        {"AttemptRoomControlKick", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::GorillaPlayerScoreboardLine::AttemptRoomControlBan()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPlayerScoreboardLine*>(),
                        {"AttemptRoomControlBan", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaPlayerScoreboardLine::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPlayerScoreboardLine*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GorillaPlayerScoreboardLine* GlobalNamespace::GorillaPlayerScoreboardLine::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaPlayerScoreboardLine*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaPlayerScoreboardLine::GorillaPlayerScoreboardLine()   {
}
//  Writing Method size for method: ::GlobalNamespace::GorillaPlayerScoreboardLine___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaPlayerScoreboardLine___c::*)()>(&::GlobalNamespace::GorillaPlayerScoreboardLine___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x599d2d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPlayerScoreboardLine___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPlayerScoreboardLine___c._NormalizeName_b__69_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GorillaPlayerScoreboardLine___c::*)(char16_t)>(&::GlobalNamespace::GorillaPlayerScoreboardLine___c::_NormalizeName_b__69_0)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x599d2dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPlayerScoreboardLine___c*>(),
                        {"<NormalizeName>b__69_0", {}, {::i2c::type_of<char16_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::GorillaPlayerScoreboardLine___c::setStaticF___9(::GlobalNamespace::GorillaPlayerScoreboardLine___c*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::GorillaPlayerScoreboardLine___c*, "<>9", ::GlobalNamespace::GorillaPlayerScoreboardLine___c*>(std::forward<::GlobalNamespace::GorillaPlayerScoreboardLine___c*>(value));
}
inline ::GlobalNamespace::GorillaPlayerScoreboardLine___c* GlobalNamespace::GorillaPlayerScoreboardLine___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::GorillaPlayerScoreboardLine___c*, "<>9", ::GlobalNamespace::GorillaPlayerScoreboardLine___c*>();
}
inline void GlobalNamespace::GorillaPlayerScoreboardLine___c::setStaticF___9__69_0(::System::Predicate_1<char16_t>*  value)  {
::cordl_internals::setStaticField<::System::Predicate_1<char16_t>*, "<>9__69_0", ::GlobalNamespace::GorillaPlayerScoreboardLine___c*>(std::forward<::System::Predicate_1<char16_t>*>(value));
}
inline ::System::Predicate_1<char16_t>* GlobalNamespace::GorillaPlayerScoreboardLine___c::getStaticF___9__69_0()  {
return ::cordl_internals::getStaticField<::System::Predicate_1<char16_t>*, "<>9__69_0", ::GlobalNamespace::GorillaPlayerScoreboardLine___c*>();
}
inline void GlobalNamespace::GorillaPlayerScoreboardLine___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPlayerScoreboardLine___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::GorillaPlayerScoreboardLine___c::_NormalizeName_b__69_0(char16_t  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPlayerScoreboardLine___c*>(),
                        {"<NormalizeName>b__69_0", {}, {::i2c::type_of<char16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, c);
}
inline ::GlobalNamespace::GorillaPlayerScoreboardLine___c* GlobalNamespace::GorillaPlayerScoreboardLine___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaPlayerScoreboardLine___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaPlayerScoreboardLine___c::GorillaPlayerScoreboardLine___c()   {
}
