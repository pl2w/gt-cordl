#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaReportButton.hpp"
#include "GlobalNamespace/zzzz__GorillaPlayerLineButton_ButtonType_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaReportButton_MetaReportReason_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaReportButton_def.hpp"
#include "GlobalNamespace/zzzz__GorillaPlayerScoreboardLine_def.hpp"
#include "GlobalNamespace/zzzz__GorillaReportButton_MetaReportReason_def.hpp"
#include "UnityEngine/UI/zzzz__Text_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GorillaReportButton.AssignParentLine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaReportButton::*)(::GlobalNamespace::GorillaPlayerScoreboardLine*)>(&::GlobalNamespace::GorillaReportButton::AssignParentLine)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5714c10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaReportButton*>(),
                        {"AssignParentLine", {}, {::i2c::type_of<::GlobalNamespace::GorillaPlayerScoreboardLine*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaReportButton.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaReportButton::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::GorillaReportButton::OnTriggerEnter)> {
  constexpr static std::size_t size = 0x480;
  constexpr static std::size_t addrs = 0x5714c18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaReportButton*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaReportButton.OnTriggerExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaReportButton::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::GorillaReportButton::OnTriggerExit)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5715098;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaReportButton*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaReportButton.UpdateColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaReportButton::*)()>(&::GlobalNamespace::GorillaReportButton::UpdateColor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5714084;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaReportButton*>(),
                        {"UpdateColor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaReportButton._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaReportButton::*)()>(&::GlobalNamespace::GorillaReportButton::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5715140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaReportButton*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::GorillaReportButton_MetaReportReason& GlobalNamespace::GorillaReportButton::__cordl_internal_get_metaReportType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___metaReportType;
}
constexpr ::GlobalNamespace::GorillaReportButton_MetaReportReason const& GlobalNamespace::GorillaReportButton::__cordl_internal_get_metaReportType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___metaReportType;
}
constexpr void GlobalNamespace::GorillaReportButton::__cordl_internal_set_metaReportType(::GlobalNamespace::GorillaReportButton_MetaReportReason  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___metaReportType = value;
}
constexpr ::GlobalNamespace::GorillaPlayerLineButton_ButtonType& GlobalNamespace::GorillaReportButton::__cordl_internal_get_buttonType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonType;
}
constexpr ::GlobalNamespace::GorillaPlayerLineButton_ButtonType const& GlobalNamespace::GorillaReportButton::__cordl_internal_get_buttonType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonType;
}
constexpr void GlobalNamespace::GorillaReportButton::__cordl_internal_set_buttonType(::GlobalNamespace::GorillaPlayerLineButton_ButtonType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___buttonType = value;
}
constexpr ::UnityW<::GlobalNamespace::GorillaPlayerScoreboardLine>& GlobalNamespace::GorillaReportButton::__cordl_internal_get_parentLine()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parentLine;
}
constexpr ::UnityW<::GlobalNamespace::GorillaPlayerScoreboardLine> const& GlobalNamespace::GorillaReportButton::__cordl_internal_get_parentLine() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parentLine;
}
constexpr void GlobalNamespace::GorillaReportButton::__cordl_internal_set_parentLine(::UnityW<::GlobalNamespace::GorillaPlayerScoreboardLine>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___parentLine = value;
}
constexpr bool& GlobalNamespace::GorillaReportButton::__cordl_internal_get_isOn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isOn;
}
constexpr bool const& GlobalNamespace::GorillaReportButton::__cordl_internal_get_isOn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isOn;
}
constexpr void GlobalNamespace::GorillaReportButton::__cordl_internal_set_isOn(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isOn = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::GorillaReportButton::__cordl_internal_get_offMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::GorillaReportButton::__cordl_internal_get_offMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offMaterial;
}
constexpr void GlobalNamespace::GorillaReportButton::__cordl_internal_set_offMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___offMaterial = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::GorillaReportButton::__cordl_internal_get_onMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::GorillaReportButton::__cordl_internal_get_onMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onMaterial;
}
constexpr void GlobalNamespace::GorillaReportButton::__cordl_internal_set_onMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onMaterial = value;
}
constexpr ::StringW& GlobalNamespace::GorillaReportButton::__cordl_internal_get_offText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offText;
}
constexpr ::StringW const& GlobalNamespace::GorillaReportButton::__cordl_internal_get_offText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offText;
}
constexpr void GlobalNamespace::GorillaReportButton::__cordl_internal_set_offText(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___offText = value;
}
constexpr ::StringW& GlobalNamespace::GorillaReportButton::__cordl_internal_get_onText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onText;
}
constexpr ::StringW const& GlobalNamespace::GorillaReportButton::__cordl_internal_get_onText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onText;
}
constexpr void GlobalNamespace::GorillaReportButton::__cordl_internal_set_onText(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onText = value;
}
constexpr ::UnityW<::UnityEngine::UI::Text>& GlobalNamespace::GorillaReportButton::__cordl_internal_get_myText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myText;
}
constexpr ::UnityW<::UnityEngine::UI::Text> const& GlobalNamespace::GorillaReportButton::__cordl_internal_get_myText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myText;
}
constexpr void GlobalNamespace::GorillaReportButton::__cordl_internal_set_myText(::UnityW<::UnityEngine::UI::Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___myText = value;
}
constexpr float_t& GlobalNamespace::GorillaReportButton::__cordl_internal_get_debounceTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debounceTime;
}
constexpr float_t const& GlobalNamespace::GorillaReportButton::__cordl_internal_get_debounceTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debounceTime;
}
constexpr void GlobalNamespace::GorillaReportButton::__cordl_internal_set_debounceTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debounceTime = value;
}
constexpr float_t& GlobalNamespace::GorillaReportButton::__cordl_internal_get_touchTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___touchTime;
}
constexpr float_t const& GlobalNamespace::GorillaReportButton::__cordl_internal_get_touchTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___touchTime;
}
constexpr void GlobalNamespace::GorillaReportButton::__cordl_internal_set_touchTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___touchTime = value;
}
constexpr bool& GlobalNamespace::GorillaReportButton::__cordl_internal_get_testPress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___testPress;
}
constexpr bool const& GlobalNamespace::GorillaReportButton::__cordl_internal_get_testPress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___testPress;
}
constexpr void GlobalNamespace::GorillaReportButton::__cordl_internal_set_testPress(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___testPress = value;
}
constexpr bool& GlobalNamespace::GorillaReportButton::__cordl_internal_get_selected()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selected;
}
constexpr bool const& GlobalNamespace::GorillaReportButton::__cordl_internal_get_selected() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selected;
}
constexpr void GlobalNamespace::GorillaReportButton::__cordl_internal_set_selected(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___selected = value;
}
inline void GlobalNamespace::GorillaReportButton::AssignParentLine(::GlobalNamespace::GorillaPlayerScoreboardLine*  parent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaReportButton*>(),
                        {"AssignParentLine", {}, {::i2c::type_of<::GlobalNamespace::GorillaPlayerScoreboardLine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parent);
}
inline void GlobalNamespace::GorillaReportButton::OnTriggerEnter(::UnityEngine::Collider*  collider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaReportButton*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collider);
}
inline void GlobalNamespace::GorillaReportButton::OnTriggerExit(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaReportButton*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GlobalNamespace::GorillaReportButton::UpdateColor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaReportButton*>(),
                        {"UpdateColor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaReportButton::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaReportButton*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GorillaReportButton* GlobalNamespace::GorillaReportButton::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaReportButton*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaReportButton::GorillaReportButton()   {
}
