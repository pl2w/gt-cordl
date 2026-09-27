#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaScoreBoard.hpp"
#include "GlobalNamespace/zzzz__GTZone_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaScoreBoard_def.hpp"
#include "GlobalNamespace/zzzz__BetterDayNightManager_WeatherType_def.hpp"
#include "GlobalNamespace/zzzz__GorillaPlayerScoreboardLine_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "TMPro/zzzz__TextMeshPro_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GorillaScoreBoard.get_IsDirty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GorillaScoreBoard::*)()>(&::GlobalNamespace::GorillaScoreBoard::get_IsDirty)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x59212f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaScoreBoard*>(),
                        {"get_IsDirty", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaScoreBoard.SetSleepState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaScoreBoard::*)(bool)>(&::GlobalNamespace::GorillaScoreBoard::SetSleepState)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5921310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaScoreBoard*>(),
                        {"SetSleepState", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaScoreBoard.GetBeginningString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GorillaScoreBoard::*)()>(&::GlobalNamespace::GorillaScoreBoard::GetBeginningString)> {
  constexpr static std::size_t size = 0x378;
  constexpr static std::size_t addrs = 0x5921480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaScoreBoard*>(),
                        {"GetBeginningString", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaScoreBoard.RoomType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GorillaScoreBoard::*)()>(&::GlobalNamespace::GorillaScoreBoard::RoomType)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x59217f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaScoreBoard*>(),
                        {"RoomType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaScoreBoard.ToggleRoomControls
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaScoreBoard::*)()>(&::GlobalNamespace::GorillaScoreBoard::ToggleRoomControls)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5921a3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaScoreBoard*>(),
                        {"ToggleRoomControls", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaScoreBoard.CleanupRoomControls
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaScoreBoard::*)()>(&::GlobalNamespace::GorillaScoreBoard::CleanupRoomControls)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5921b48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaScoreBoard*>(),
                        {"CleanupRoomControls", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaScoreBoard.ToggleRoomControlButtons
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaScoreBoard::*)()>(&::GlobalNamespace::GorillaScoreBoard::ToggleRoomControlButtons)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x59213c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaScoreBoard*>(),
                        {"ToggleRoomControlButtons", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaScoreBoard.ToggleWeatherControls
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaScoreBoard::*)()>(&::GlobalNamespace::GorillaScoreBoard::ToggleWeatherControls)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x5921c0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaScoreBoard*>(),
                        {"ToggleWeatherControls", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaScoreBoard.RedrawPlayerLines
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaScoreBoard::*)()>(&::GlobalNamespace::GorillaScoreBoard::RedrawPlayerLines)> {
  constexpr static std::size_t size = 0x8d8;
  constexpr static std::size_t addrs = 0x5921d74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaScoreBoard*>(),
                        {"RedrawPlayerLines", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaScoreBoard.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaScoreBoard::*)()>(&::GlobalNamespace::GorillaScoreBoard::Awake)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x592274c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaScoreBoard*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaScoreBoard.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaScoreBoard::*)()>(&::GlobalNamespace::GorillaScoreBoard::Start)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x59228a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaScoreBoard*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaScoreBoard.CheckZoneForControls
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaScoreBoard::*)()>(&::GlobalNamespace::GorillaScoreBoard::CheckZoneForControls)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5922908;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaScoreBoard*>(),
                        {"CheckZoneForControls", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaScoreBoard.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaScoreBoard::*)()>(&::GlobalNamespace::GorillaScoreBoard::OnEnable)> {
  constexpr static std::size_t size = 0x43c;
  constexpr static std::size_t addrs = 0x59229dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaScoreBoard*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaScoreBoard.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaScoreBoard::*)()>(&::GlobalNamespace::GorillaScoreBoard::OnDisable)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0x5922e18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaScoreBoard*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaScoreBoard.OnSubscribeReady
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaScoreBoard::*)()>(&::GlobalNamespace::GorillaScoreBoard::OnSubscribeReady)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59230bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaScoreBoard*>(),
                        {"OnSubscribeReady", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaScoreBoard.OnMasterClientSwitched
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaScoreBoard::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::GorillaScoreBoard::OnMasterClientSwitched)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5923134;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaScoreBoard*>(),
                        {"OnMasterClientSwitched", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaScoreBoard.OnRoomControlsEnabledChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaScoreBoard::*)(bool)>(&::GlobalNamespace::GorillaScoreBoard::OnRoomControlsEnabledChanged)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5923138;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaScoreBoard*>(),
                        {"OnRoomControlsEnabledChanged", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaScoreBoard.RefreshRoomControlUI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaScoreBoard::*)()>(&::GlobalNamespace::GorillaScoreBoard::RefreshRoomControlUI)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x59230c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaScoreBoard*>(),
                        {"RefreshRoomControlUI", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaScoreBoard.SetTimeOfDay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaScoreBoard::*)(int32_t)>(&::GlobalNamespace::GorillaScoreBoard::SetTimeOfDay)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x592313c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaScoreBoard*>(),
                        {"SetTimeOfDay", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaScoreBoard.SetWeatherClear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaScoreBoard::*)()>(&::GlobalNamespace::GorillaScoreBoard::SetWeatherClear)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59231b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaScoreBoard*>(),
                        {"SetWeatherClear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaScoreBoard.SetWeatherRain
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaScoreBoard::*)()>(&::GlobalNamespace::GorillaScoreBoard::SetWeatherRain)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x592322c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaScoreBoard*>(),
                        {"SetWeatherRain", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaScoreBoard.SetWeather
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaScoreBoard::*)(::GlobalNamespace::BetterDayNightManager_WeatherType)>(&::GlobalNamespace::GorillaScoreBoard::SetWeather)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x59231b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaScoreBoard*>(),
                        {"SetWeather", {}, {::i2c::type_of<::GlobalNamespace::BetterDayNightManager_WeatherType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaScoreBoard.UpdateWeatherText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaScoreBoard::*)()>(&::GlobalNamespace::GorillaScoreBoard::UpdateWeatherText)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x592264c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaScoreBoard*>(),
                        {"UpdateWeatherText", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaScoreBoard.SetDirty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaScoreBoard::*)()>(&::GlobalNamespace::GorillaScoreBoard::SetDirty)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5921b3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaScoreBoard*>(),
                        {"SetDirty", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaScoreBoard._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaScoreBoard::*)()>(&::GlobalNamespace::GorillaScoreBoard::_ctor)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5923234;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaScoreBoard*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::GorillaScoreBoard::__cordl_internal_get_scoreBoardLinePrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scoreBoardLinePrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::GorillaScoreBoard::__cordl_internal_get_scoreBoardLinePrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scoreBoardLinePrefab;
}
constexpr void GlobalNamespace::GorillaScoreBoard::__cordl_internal_set_scoreBoardLinePrefab(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scoreBoardLinePrefab = value;
}
constexpr int32_t& GlobalNamespace::GorillaScoreBoard::__cordl_internal_get_startingYValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startingYValue;
}
constexpr int32_t const& GlobalNamespace::GorillaScoreBoard::__cordl_internal_get_startingYValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startingYValue;
}
constexpr void GlobalNamespace::GorillaScoreBoard::__cordl_internal_set_startingYValue(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startingYValue = value;
}
constexpr int32_t& GlobalNamespace::GorillaScoreBoard::__cordl_internal_get_lineHeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lineHeight;
}
constexpr int32_t const& GlobalNamespace::GorillaScoreBoard::__cordl_internal_get_lineHeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lineHeight;
}
constexpr void GlobalNamespace::GorillaScoreBoard::__cordl_internal_set_lineHeight(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lineHeight = value;
}
constexpr bool& GlobalNamespace::GorillaScoreBoard::__cordl_internal_get_includeMMR()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___includeMMR;
}
constexpr bool const& GlobalNamespace::GorillaScoreBoard::__cordl_internal_get_includeMMR() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___includeMMR;
}
constexpr void GlobalNamespace::GorillaScoreBoard::__cordl_internal_set_includeMMR(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___includeMMR = value;
}
constexpr bool& GlobalNamespace::GorillaScoreBoard::__cordl_internal_get_isActive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isActive;
}
constexpr bool const& GlobalNamespace::GorillaScoreBoard::__cordl_internal_get_isActive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isActive;
}
constexpr void GlobalNamespace::GorillaScoreBoard::__cordl_internal_set_isActive(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isActive = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::GorillaScoreBoard::__cordl_internal_get_leftPanel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftPanel;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::GorillaScoreBoard::__cordl_internal_get_leftPanel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftPanel;
}
constexpr void GlobalNamespace::GorillaScoreBoard::__cordl_internal_set_leftPanel(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftPanel = value;
}
constexpr float_t& GlobalNamespace::GorillaScoreBoard::__cordl_internal_get_leftPanelRoomControlXOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftPanelRoomControlXOffset;
}
constexpr float_t const& GlobalNamespace::GorillaScoreBoard::__cordl_internal_get_leftPanelRoomControlXOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftPanelRoomControlXOffset;
}
constexpr void GlobalNamespace::GorillaScoreBoard::__cordl_internal_set_leftPanelRoomControlXOffset(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftPanelRoomControlXOffset = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::GorillaScoreBoard::__cordl_internal_get_rightPanel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightPanel;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::GorillaScoreBoard::__cordl_internal_get_rightPanel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightPanel;
}
constexpr void GlobalNamespace::GorillaScoreBoard::__cordl_internal_set_rightPanel(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightPanel = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::GorillaScoreBoard::__cordl_internal_get_linesParent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___linesParent;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::GorillaScoreBoard::__cordl_internal_get_linesParent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___linesParent;
}
constexpr void GlobalNamespace::GorillaScoreBoard::__cordl_internal_set_linesParent(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___linesParent = value;
}
constexpr float_t& GlobalNamespace::GorillaScoreBoard::__cordl_internal_get_bigRoomYOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bigRoomYOffset;
}
constexpr float_t const& GlobalNamespace::GorillaScoreBoard::__cordl_internal_get_bigRoomYOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bigRoomYOffset;
}
constexpr void GlobalNamespace::GorillaScoreBoard::__cordl_internal_set_bigRoomYOffset(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bigRoomYOffset = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GorillaPlayerScoreboardLine>>*& GlobalNamespace::GorillaScoreBoard::__cordl_internal_get_lines()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lines;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GorillaPlayerScoreboardLine>>* const& GlobalNamespace::GorillaScoreBoard::__cordl_internal_get_lines() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lines;
}
constexpr void GlobalNamespace::GorillaScoreBoard::__cordl_internal_set_lines(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GorillaPlayerScoreboardLine>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lines = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::RectTransform>>*& GlobalNamespace::GorillaScoreBoard::__cordl_internal_get_linesRTs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___linesRTs;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::RectTransform>>* const& GlobalNamespace::GorillaScoreBoard::__cordl_internal_get_linesRTs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___linesRTs;
}
constexpr void GlobalNamespace::GorillaScoreBoard::__cordl_internal_set_linesRTs(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::RectTransform>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___linesRTs = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::GorillaScoreBoard::__cordl_internal_get_textsParent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textsParent;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::GorillaScoreBoard::__cordl_internal_get_textsParent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textsParent;
}
constexpr void GlobalNamespace::GorillaScoreBoard::__cordl_internal_set_textsParent(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___textsParent = value;
}
constexpr ::ArrayW<::GlobalNamespace::GTZone>& GlobalNamespace::GorillaScoreBoard::__cordl_internal_get_allowedWeatherControlZones()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allowedWeatherControlZones;
}
constexpr ::ArrayW<::GlobalNamespace::GTZone> const& GlobalNamespace::GorillaScoreBoard::__cordl_internal_get_allowedWeatherControlZones() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allowedWeatherControlZones;
}
constexpr void GlobalNamespace::GorillaScoreBoard::__cordl_internal_set_allowedWeatherControlZones(::ArrayW<::GlobalNamespace::GTZone>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___allowedWeatherControlZones = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::GorillaScoreBoard::__cordl_internal_get_weatherControlsParent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___weatherControlsParent;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::GorillaScoreBoard::__cordl_internal_get_weatherControlsParent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___weatherControlsParent;
}
constexpr void GlobalNamespace::GorillaScoreBoard::__cordl_internal_set_weatherControlsParent(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___weatherControlsParent = value;
}
constexpr ::UnityW<::TMPro::TextMeshPro>& GlobalNamespace::GorillaScoreBoard::__cordl_internal_get_boardText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___boardText;
}
constexpr ::UnityW<::TMPro::TextMeshPro> const& GlobalNamespace::GorillaScoreBoard::__cordl_internal_get_boardText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___boardText;
}
constexpr void GlobalNamespace::GorillaScoreBoard::__cordl_internal_set_boardText(::UnityW<::TMPro::TextMeshPro>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___boardText = value;
}
constexpr ::UnityW<::TMPro::TextMeshPro>& GlobalNamespace::GorillaScoreBoard::__cordl_internal_get_buttonText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonText;
}
constexpr ::UnityW<::TMPro::TextMeshPro> const& GlobalNamespace::GorillaScoreBoard::__cordl_internal_get_buttonText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonText;
}
constexpr void GlobalNamespace::GorillaScoreBoard::__cordl_internal_set_buttonText(::UnityW<::TMPro::TextMeshPro>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___buttonText = value;
}
constexpr ::UnityW<::TMPro::TextMeshPro>& GlobalNamespace::GorillaScoreBoard::__cordl_internal_get_roomControlsText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___roomControlsText;
}
constexpr ::UnityW<::TMPro::TextMeshPro> const& GlobalNamespace::GorillaScoreBoard::__cordl_internal_get_roomControlsText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___roomControlsText;
}
constexpr void GlobalNamespace::GorillaScoreBoard::__cordl_internal_set_roomControlsText(::UnityW<::TMPro::TextMeshPro>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___roomControlsText = value;
}
constexpr ::UnityW<::TMPro::TextMeshPro>& GlobalNamespace::GorillaScoreBoard::__cordl_internal_get_weatherControlsText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___weatherControlsText;
}
constexpr ::UnityW<::TMPro::TextMeshPro> const& GlobalNamespace::GorillaScoreBoard::__cordl_internal_get_weatherControlsText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___weatherControlsText;
}
constexpr void GlobalNamespace::GorillaScoreBoard::__cordl_internal_set_weatherControlsText(::UnityW<::TMPro::TextMeshPro>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___weatherControlsText = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::GorillaScoreBoard::__cordl_internal_get_roomControlsToggle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___roomControlsToggle;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::GorillaScoreBoard::__cordl_internal_get_roomControlsToggle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___roomControlsToggle;
}
constexpr void GlobalNamespace::GorillaScoreBoard::__cordl_internal_set_roomControlsToggle(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___roomControlsToggle = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::GorillaScoreBoard::__cordl_internal_get_weatherControlsToggle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___weatherControlsToggle;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::GorillaScoreBoard::__cordl_internal_get_weatherControlsToggle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___weatherControlsToggle;
}
constexpr void GlobalNamespace::GorillaScoreBoard::__cordl_internal_set_weatherControlsToggle(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___weatherControlsToggle = value;
}
constexpr bool& GlobalNamespace::GorillaScoreBoard::__cordl_internal_get_needsUpdate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___needsUpdate;
}
constexpr bool const& GlobalNamespace::GorillaScoreBoard::__cordl_internal_get_needsUpdate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___needsUpdate;
}
constexpr void GlobalNamespace::GorillaScoreBoard::__cordl_internal_set_needsUpdate(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___needsUpdate = value;
}
constexpr ::UnityW<::TMPro::TextMeshPro>& GlobalNamespace::GorillaScoreBoard::__cordl_internal_get_notInRoomText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___notInRoomText;
}
constexpr ::UnityW<::TMPro::TextMeshPro> const& GlobalNamespace::GorillaScoreBoard::__cordl_internal_get_notInRoomText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___notInRoomText;
}
constexpr void GlobalNamespace::GorillaScoreBoard::__cordl_internal_set_notInRoomText(::UnityW<::TMPro::TextMeshPro>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___notInRoomText = value;
}
constexpr ::StringW& GlobalNamespace::GorillaScoreBoard::__cordl_internal_get_initialGameMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialGameMode;
}
constexpr ::StringW const& GlobalNamespace::GorillaScoreBoard::__cordl_internal_get_initialGameMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialGameMode;
}
constexpr void GlobalNamespace::GorillaScoreBoard::__cordl_internal_set_initialGameMode(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___initialGameMode = value;
}
constexpr bool& GlobalNamespace::GorillaScoreBoard::__cordl_internal_get_roomControlsActive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___roomControlsActive;
}
constexpr bool const& GlobalNamespace::GorillaScoreBoard::__cordl_internal_get_roomControlsActive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___roomControlsActive;
}
constexpr void GlobalNamespace::GorillaScoreBoard::__cordl_internal_set_roomControlsActive(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___roomControlsActive = value;
}
constexpr bool& GlobalNamespace::GorillaScoreBoard::__cordl_internal_get_allowWeatherControls()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allowWeatherControls;
}
constexpr bool const& GlobalNamespace::GorillaScoreBoard::__cordl_internal_get_allowWeatherControls() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allowWeatherControls;
}
constexpr void GlobalNamespace::GorillaScoreBoard::__cordl_internal_set_allowWeatherControls(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___allowWeatherControls = value;
}
constexpr bool& GlobalNamespace::GorillaScoreBoard::__cordl_internal_get_weatherControlsActive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___weatherControlsActive;
}
constexpr bool const& GlobalNamespace::GorillaScoreBoard::__cordl_internal_get_weatherControlsActive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___weatherControlsActive;
}
constexpr void GlobalNamespace::GorillaScoreBoard::__cordl_internal_set_weatherControlsActive(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___weatherControlsActive = value;
}
constexpr ::StringW& GlobalNamespace::GorillaScoreBoard::__cordl_internal_get_tempGmName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tempGmName;
}
constexpr ::StringW const& GlobalNamespace::GorillaScoreBoard::__cordl_internal_get_tempGmName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tempGmName;
}
constexpr void GlobalNamespace::GorillaScoreBoard::__cordl_internal_set_tempGmName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tempGmName = value;
}
constexpr ::StringW& GlobalNamespace::GorillaScoreBoard::__cordl_internal_get_gmName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gmName;
}
constexpr ::StringW const& GlobalNamespace::GorillaScoreBoard::__cordl_internal_get_gmName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gmName;
}
constexpr void GlobalNamespace::GorillaScoreBoard::__cordl_internal_set_gmName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gmName = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& GlobalNamespace::GorillaScoreBoard::__cordl_internal_get_gmNames()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gmNames;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& GlobalNamespace::GorillaScoreBoard::__cordl_internal_get_gmNames() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gmNames;
}
constexpr void GlobalNamespace::GorillaScoreBoard::__cordl_internal_set_gmNames(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gmNames = value;
}
constexpr bool& GlobalNamespace::GorillaScoreBoard::__cordl_internal_get__isDirty()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isDirty;
}
constexpr bool const& GlobalNamespace::GorillaScoreBoard::__cordl_internal_get__isDirty() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isDirty;
}
constexpr void GlobalNamespace::GorillaScoreBoard::__cordl_internal_set__isDirty(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isDirty = value;
}
constexpr ::System::Text::StringBuilder*& GlobalNamespace::GorillaScoreBoard::__cordl_internal_get_stringBuilder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stringBuilder;
}
constexpr ::System::Text::StringBuilder* const& GlobalNamespace::GorillaScoreBoard::__cordl_internal_get_stringBuilder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stringBuilder;
}
constexpr void GlobalNamespace::GorillaScoreBoard::__cordl_internal_set_stringBuilder(::System::Text::StringBuilder*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stringBuilder = value;
}
constexpr ::System::Text::StringBuilder*& GlobalNamespace::GorillaScoreBoard::__cordl_internal_get_buttonStringBuilder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonStringBuilder;
}
constexpr ::System::Text::StringBuilder* const& GlobalNamespace::GorillaScoreBoard::__cordl_internal_get_buttonStringBuilder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonStringBuilder;
}
constexpr void GlobalNamespace::GorillaScoreBoard::__cordl_internal_set_buttonStringBuilder(::System::Text::StringBuilder*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___buttonStringBuilder = value;
}
inline bool GlobalNamespace::GorillaScoreBoard::get_IsDirty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaScoreBoard*>(),
                        {"get_IsDirty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaScoreBoard::SetSleepState(bool  awake)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaScoreBoard*>(),
                        {"SetSleepState", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, awake);
}
inline ::StringW GlobalNamespace::GorillaScoreBoard::GetBeginningString()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaScoreBoard*>(),
                        {"GetBeginningString", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::GorillaScoreBoard::RoomType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaScoreBoard*>(),
                        {"RoomType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaScoreBoard::ToggleRoomControls()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaScoreBoard*>(),
                        {"ToggleRoomControls", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaScoreBoard::CleanupRoomControls()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaScoreBoard*>(),
                        {"CleanupRoomControls", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaScoreBoard::ToggleRoomControlButtons()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaScoreBoard*>(),
                        {"ToggleRoomControlButtons", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaScoreBoard::ToggleWeatherControls()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaScoreBoard*>(),
                        {"ToggleWeatherControls", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaScoreBoard::RedrawPlayerLines()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaScoreBoard*>(),
                        {"RedrawPlayerLines", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaScoreBoard::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaScoreBoard*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaScoreBoard::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaScoreBoard*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaScoreBoard::CheckZoneForControls()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaScoreBoard*>(),
                        {"CheckZoneForControls", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaScoreBoard::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaScoreBoard*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaScoreBoard::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaScoreBoard*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaScoreBoard::OnSubscribeReady()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaScoreBoard*>(),
                        {"OnSubscribeReady", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaScoreBoard::OnMasterClientSwitched(::GlobalNamespace::NetPlayer*  newMasterClient)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaScoreBoard*>(),
                        {"OnMasterClientSwitched", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newMasterClient);
}
inline void GlobalNamespace::GorillaScoreBoard::OnRoomControlsEnabledChanged(bool  enabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaScoreBoard*>(),
                        {"OnRoomControlsEnabledChanged", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, enabled);
}
inline void GlobalNamespace::GorillaScoreBoard::RefreshRoomControlUI()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaScoreBoard*>(),
                        {"RefreshRoomControlUI", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaScoreBoard::SetTimeOfDay(int32_t  timeOfDay)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaScoreBoard*>(),
                        {"SetTimeOfDay", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, timeOfDay);
}
inline void GlobalNamespace::GorillaScoreBoard::SetWeatherClear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaScoreBoard*>(),
                        {"SetWeatherClear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaScoreBoard::SetWeatherRain()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaScoreBoard*>(),
                        {"SetWeatherRain", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaScoreBoard::SetWeather(::GlobalNamespace::BetterDayNightManager_WeatherType  weather)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaScoreBoard*>(),
                        {"SetWeather", {}, {::i2c::type_of<::GlobalNamespace::BetterDayNightManager_WeatherType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, weather);
}
inline void GlobalNamespace::GorillaScoreBoard::UpdateWeatherText()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaScoreBoard*>(),
                        {"UpdateWeatherText", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaScoreBoard::SetDirty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaScoreBoard*>(),
                        {"SetDirty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaScoreBoard::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaScoreBoard*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GorillaScoreBoard* GlobalNamespace::GorillaScoreBoard::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaScoreBoard*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaScoreBoard::GorillaScoreBoard()   {
}
