#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaDebugUI.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaDebugUI_def.hpp"
#include "TMPro/zzzz__TMP_Dropdown_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GorillaDebugUI._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaDebugUI::*)()>(&::GlobalNamespace::GorillaDebugUI::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5799300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaDebugUI*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::GorillaDebugUI::__cordl_internal_get_Delay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Delay;
}
constexpr float_t const& GlobalNamespace::GorillaDebugUI::__cordl_internal_get_Delay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Delay;
}
constexpr void GlobalNamespace::GorillaDebugUI::__cordl_internal_set_Delay(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Delay = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::GorillaDebugUI::__cordl_internal_get_parentCanvas()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parentCanvas;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::GorillaDebugUI::__cordl_internal_get_parentCanvas() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parentCanvas;
}
constexpr void GlobalNamespace::GorillaDebugUI::__cordl_internal_set_parentCanvas(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___parentCanvas = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::GorillaDebugUI::__cordl_internal_get_rayInteractorLeft()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rayInteractorLeft;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::GorillaDebugUI::__cordl_internal_get_rayInteractorLeft() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rayInteractorLeft;
}
constexpr void GlobalNamespace::GorillaDebugUI::__cordl_internal_set_rayInteractorLeft(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rayInteractorLeft = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::GorillaDebugUI::__cordl_internal_get_rayInteractorRight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rayInteractorRight;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::GorillaDebugUI::__cordl_internal_get_rayInteractorRight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rayInteractorRight;
}
constexpr void GlobalNamespace::GorillaDebugUI::__cordl_internal_set_rayInteractorRight(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rayInteractorRight = value;
}
constexpr ::UnityW<::TMPro::TMP_Dropdown>& GlobalNamespace::GorillaDebugUI::__cordl_internal_get_playfabIdDropdown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playfabIdDropdown;
}
constexpr ::UnityW<::TMPro::TMP_Dropdown> const& GlobalNamespace::GorillaDebugUI::__cordl_internal_get_playfabIdDropdown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playfabIdDropdown;
}
constexpr void GlobalNamespace::GorillaDebugUI::__cordl_internal_set_playfabIdDropdown(::UnityW<::TMPro::TMP_Dropdown>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playfabIdDropdown = value;
}
constexpr ::UnityW<::TMPro::TMP_Dropdown>& GlobalNamespace::GorillaDebugUI::__cordl_internal_get_roomIdDropdown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___roomIdDropdown;
}
constexpr ::UnityW<::TMPro::TMP_Dropdown> const& GlobalNamespace::GorillaDebugUI::__cordl_internal_get_roomIdDropdown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___roomIdDropdown;
}
constexpr void GlobalNamespace::GorillaDebugUI::__cordl_internal_set_roomIdDropdown(::UnityW<::TMPro::TMP_Dropdown>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___roomIdDropdown = value;
}
constexpr ::UnityW<::TMPro::TMP_Dropdown>& GlobalNamespace::GorillaDebugUI::__cordl_internal_get_locationDropdown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___locationDropdown;
}
constexpr ::UnityW<::TMPro::TMP_Dropdown> const& GlobalNamespace::GorillaDebugUI::__cordl_internal_get_locationDropdown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___locationDropdown;
}
constexpr void GlobalNamespace::GorillaDebugUI::__cordl_internal_set_locationDropdown(::UnityW<::TMPro::TMP_Dropdown>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___locationDropdown = value;
}
constexpr ::UnityW<::TMPro::TMP_Dropdown>& GlobalNamespace::GorillaDebugUI::__cordl_internal_get_playerNameDropdown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerNameDropdown;
}
constexpr ::UnityW<::TMPro::TMP_Dropdown> const& GlobalNamespace::GorillaDebugUI::__cordl_internal_get_playerNameDropdown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerNameDropdown;
}
constexpr void GlobalNamespace::GorillaDebugUI::__cordl_internal_set_playerNameDropdown(::UnityW<::TMPro::TMP_Dropdown>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerNameDropdown = value;
}
constexpr ::UnityW<::TMPro::TMP_Dropdown>& GlobalNamespace::GorillaDebugUI::__cordl_internal_get_gameModeDropdown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameModeDropdown;
}
constexpr ::UnityW<::TMPro::TMP_Dropdown> const& GlobalNamespace::GorillaDebugUI::__cordl_internal_get_gameModeDropdown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameModeDropdown;
}
constexpr void GlobalNamespace::GorillaDebugUI::__cordl_internal_set_gameModeDropdown(::UnityW<::TMPro::TMP_Dropdown>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gameModeDropdown = value;
}
constexpr ::UnityW<::TMPro::TMP_Dropdown>& GlobalNamespace::GorillaDebugUI::__cordl_internal_get_timeOfDayDropdown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeOfDayDropdown;
}
constexpr ::UnityW<::TMPro::TMP_Dropdown> const& GlobalNamespace::GorillaDebugUI::__cordl_internal_get_timeOfDayDropdown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeOfDayDropdown;
}
constexpr void GlobalNamespace::GorillaDebugUI::__cordl_internal_set_timeOfDayDropdown(::UnityW<::TMPro::TMP_Dropdown>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeOfDayDropdown = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::GorillaDebugUI::__cordl_internal_get_networkStateTextBox()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___networkStateTextBox;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::GorillaDebugUI::__cordl_internal_get_networkStateTextBox() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___networkStateTextBox;
}
constexpr void GlobalNamespace::GorillaDebugUI::__cordl_internal_set_networkStateTextBox(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___networkStateTextBox = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::GorillaDebugUI::__cordl_internal_get_gameModeTextBox()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameModeTextBox;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::GorillaDebugUI::__cordl_internal_get_gameModeTextBox() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameModeTextBox;
}
constexpr void GlobalNamespace::GorillaDebugUI::__cordl_internal_set_gameModeTextBox(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gameModeTextBox = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::GorillaDebugUI::__cordl_internal_get_currentRoomTextBox()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentRoomTextBox;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::GorillaDebugUI::__cordl_internal_get_currentRoomTextBox() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentRoomTextBox;
}
constexpr void GlobalNamespace::GorillaDebugUI::__cordl_internal_set_currentRoomTextBox(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentRoomTextBox = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::GorillaDebugUI::__cordl_internal_get_playerCountTextBox()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerCountTextBox;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::GorillaDebugUI::__cordl_internal_get_playerCountTextBox() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerCountTextBox;
}
constexpr void GlobalNamespace::GorillaDebugUI::__cordl_internal_set_playerCountTextBox(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerCountTextBox = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::GorillaDebugUI::__cordl_internal_get_roomVisibilityTextBox()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___roomVisibilityTextBox;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::GorillaDebugUI::__cordl_internal_get_roomVisibilityTextBox() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___roomVisibilityTextBox;
}
constexpr void GlobalNamespace::GorillaDebugUI::__cordl_internal_set_roomVisibilityTextBox(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___roomVisibilityTextBox = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::GorillaDebugUI::__cordl_internal_get_timeMultiplierTextBox()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeMultiplierTextBox;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::GorillaDebugUI::__cordl_internal_get_timeMultiplierTextBox() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeMultiplierTextBox;
}
constexpr void GlobalNamespace::GorillaDebugUI::__cordl_internal_set_timeMultiplierTextBox(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeMultiplierTextBox = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::GorillaDebugUI::__cordl_internal_get_versionTextBox()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___versionTextBox;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::GorillaDebugUI::__cordl_internal_get_versionTextBox() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___versionTextBox;
}
constexpr void GlobalNamespace::GorillaDebugUI::__cordl_internal_set_versionTextBox(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___versionTextBox = value;
}
inline void GlobalNamespace::GorillaDebugUI::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaDebugUI*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GorillaDebugUI* GlobalNamespace::GorillaDebugUI::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaDebugUI*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaDebugUI::GorillaDebugUI()   {
}
