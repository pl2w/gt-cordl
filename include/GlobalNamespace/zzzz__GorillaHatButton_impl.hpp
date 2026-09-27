#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaHatButton.hpp"
#include "GlobalNamespace/zzzz__GorillaHatButton_HatButtonType_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaHatButton_def.hpp"
#include "GlobalNamespace/zzzz__GorillaHatButtonParent_def.hpp"
#include "GlobalNamespace/zzzz__GorillaHatButton_HatButtonType_def.hpp"
#include "UnityEngine/UI/zzzz__Text_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GorillaHatButton.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaHatButton::*)()>(&::GlobalNamespace::GorillaHatButton::Update)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x590e278;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHatButton*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaHatButton.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaHatButton::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::GorillaHatButton::OnTriggerEnter)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x590e538;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHatButton*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaHatButton.UpdateColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaHatButton::*)()>(&::GlobalNamespace::GorillaHatButton::UpdateColor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x590e780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHatButton*>(),
                        {"UpdateColor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaHatButton._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaHatButton::*)()>(&::GlobalNamespace::GorillaHatButton::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x590e824;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHatButton*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GorillaHatButtonParent>& GlobalNamespace::GorillaHatButton::__cordl_internal_get_buttonParent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonParent;
}
constexpr ::UnityW<::GlobalNamespace::GorillaHatButtonParent> const& GlobalNamespace::GorillaHatButton::__cordl_internal_get_buttonParent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonParent;
}
constexpr void GlobalNamespace::GorillaHatButton::__cordl_internal_set_buttonParent(::UnityW<::GlobalNamespace::GorillaHatButtonParent>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___buttonParent = value;
}
constexpr ::GlobalNamespace::GorillaHatButton_HatButtonType& GlobalNamespace::GorillaHatButton::__cordl_internal_get_buttonType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonType;
}
constexpr ::GlobalNamespace::GorillaHatButton_HatButtonType const& GlobalNamespace::GorillaHatButton::__cordl_internal_get_buttonType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonType;
}
constexpr void GlobalNamespace::GorillaHatButton::__cordl_internal_set_buttonType(::GlobalNamespace::GorillaHatButton_HatButtonType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___buttonType = value;
}
constexpr bool& GlobalNamespace::GorillaHatButton::__cordl_internal_get_isOn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isOn;
}
constexpr bool const& GlobalNamespace::GorillaHatButton::__cordl_internal_get_isOn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isOn;
}
constexpr void GlobalNamespace::GorillaHatButton::__cordl_internal_set_isOn(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isOn = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::GorillaHatButton::__cordl_internal_get_offMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::GorillaHatButton::__cordl_internal_get_offMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offMaterial;
}
constexpr void GlobalNamespace::GorillaHatButton::__cordl_internal_set_offMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___offMaterial = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::GorillaHatButton::__cordl_internal_get_onMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::GorillaHatButton::__cordl_internal_get_onMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onMaterial;
}
constexpr void GlobalNamespace::GorillaHatButton::__cordl_internal_set_onMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onMaterial = value;
}
constexpr ::StringW& GlobalNamespace::GorillaHatButton::__cordl_internal_get_offText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offText;
}
constexpr ::StringW const& GlobalNamespace::GorillaHatButton::__cordl_internal_get_offText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offText;
}
constexpr void GlobalNamespace::GorillaHatButton::__cordl_internal_set_offText(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___offText = value;
}
constexpr ::StringW& GlobalNamespace::GorillaHatButton::__cordl_internal_get_onText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onText;
}
constexpr ::StringW const& GlobalNamespace::GorillaHatButton::__cordl_internal_get_onText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onText;
}
constexpr void GlobalNamespace::GorillaHatButton::__cordl_internal_set_onText(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onText = value;
}
constexpr ::UnityW<::UnityEngine::UI::Text>& GlobalNamespace::GorillaHatButton::__cordl_internal_get_myText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myText;
}
constexpr ::UnityW<::UnityEngine::UI::Text> const& GlobalNamespace::GorillaHatButton::__cordl_internal_get_myText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myText;
}
constexpr void GlobalNamespace::GorillaHatButton::__cordl_internal_set_myText(::UnityW<::UnityEngine::UI::Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___myText = value;
}
constexpr float_t& GlobalNamespace::GorillaHatButton::__cordl_internal_get_debounceTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debounceTime;
}
constexpr float_t const& GlobalNamespace::GorillaHatButton::__cordl_internal_get_debounceTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debounceTime;
}
constexpr void GlobalNamespace::GorillaHatButton::__cordl_internal_set_debounceTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debounceTime = value;
}
constexpr float_t& GlobalNamespace::GorillaHatButton::__cordl_internal_get_touchTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___touchTime;
}
constexpr float_t const& GlobalNamespace::GorillaHatButton::__cordl_internal_get_touchTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___touchTime;
}
constexpr void GlobalNamespace::GorillaHatButton::__cordl_internal_set_touchTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___touchTime = value;
}
constexpr ::StringW& GlobalNamespace::GorillaHatButton::__cordl_internal_get_cosmeticName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cosmeticName;
}
constexpr ::StringW const& GlobalNamespace::GorillaHatButton::__cordl_internal_get_cosmeticName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cosmeticName;
}
constexpr void GlobalNamespace::GorillaHatButton::__cordl_internal_set_cosmeticName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cosmeticName = value;
}
constexpr bool& GlobalNamespace::GorillaHatButton::__cordl_internal_get_testPress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___testPress;
}
constexpr bool const& GlobalNamespace::GorillaHatButton::__cordl_internal_get_testPress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___testPress;
}
constexpr void GlobalNamespace::GorillaHatButton::__cordl_internal_set_testPress(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___testPress = value;
}
inline void GlobalNamespace::GorillaHatButton::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHatButton*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaHatButton::OnTriggerEnter(::UnityEngine::Collider*  collider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHatButton*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collider);
}
inline void GlobalNamespace::GorillaHatButton::UpdateColor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHatButton*>(),
                        {"UpdateColor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaHatButton::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHatButton*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GorillaHatButton* GlobalNamespace::GorillaHatButton::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaHatButton*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaHatButton::GorillaHatButton()   {
}
