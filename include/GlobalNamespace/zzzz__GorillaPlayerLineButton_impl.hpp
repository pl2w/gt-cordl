#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaPlayerLineButton.hpp"
#include "GlobalNamespace/zzzz__GorillaPlayerLineButton_ButtonType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaPlayerLineButton_def.hpp"
#include "GlobalNamespace/zzzz__GorillaPlayerLineButton_ButtonType_def.hpp"
#include "GlobalNamespace/zzzz__GorillaPlayerLineButton_def.hpp"
#include "GlobalNamespace/zzzz__GorillaPlayerScoreboardLine_def.hpp"
#include "GlobalNamespace/zzzz__IClickable_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UI/zzzz__Text_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GorillaPlayerLineButton.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaPlayerLineButton::*)()>(&::GlobalNamespace::GorillaPlayerLineButton::OnEnable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5999b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPlayerLineButton*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPlayerLineButton.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaPlayerLineButton::*)()>(&::GlobalNamespace::GorillaPlayerLineButton::OnDisable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5999b54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPlayerLineButton*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPlayerLineButton.TestPressCheck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::GorillaPlayerLineButton::*)()>(&::GlobalNamespace::GorillaPlayerLineButton::TestPressCheck)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5999b58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPlayerLineButton*>(),
                        {"TestPressCheck", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPlayerLineButton.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaPlayerLineButton::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::GorillaPlayerLineButton::OnTriggerEnter)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5999bec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPlayerLineButton*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPlayerLineButton.SetTouchTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaPlayerLineButton::*)(float_t)>(&::GlobalNamespace::GorillaPlayerLineButton::SetTouchTime)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5999ce4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPlayerLineButton*>(),
                        {"SetTouchTime", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPlayerLineButton.Click
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaPlayerLineButton::*)(bool)>(&::GlobalNamespace::GorillaPlayerLineButton::Click)> {
  constexpr static std::size_t size = 0x478;
  constexpr static std::size_t addrs = 0x5999d10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPlayerLineButton*>(),
                        {"Click", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPlayerLineButton.OnTriggerExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaPlayerLineButton::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::GorillaPlayerLineButton::OnTriggerExit)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x599a610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPlayerLineButton*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPlayerLineButton.UpdateColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaPlayerLineButton::*)()>(&::GlobalNamespace::GorillaPlayerLineButton::UpdateColor)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x599a6c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPlayerLineButton*>(),
                        {"UpdateColor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPlayerLineButton._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaPlayerLineButton::*)()>(&::GlobalNamespace::GorillaPlayerLineButton::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x599a7a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPlayerLineButton*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GorillaPlayerScoreboardLine>& GlobalNamespace::GorillaPlayerLineButton::__cordl_internal_get_parentLine()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parentLine;
}
constexpr ::UnityW<::GlobalNamespace::GorillaPlayerScoreboardLine> const& GlobalNamespace::GorillaPlayerLineButton::__cordl_internal_get_parentLine() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parentLine;
}
constexpr void GlobalNamespace::GorillaPlayerLineButton::__cordl_internal_set_parentLine(::UnityW<::GlobalNamespace::GorillaPlayerScoreboardLine>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___parentLine = value;
}
constexpr ::GlobalNamespace::GorillaPlayerLineButton_ButtonType& GlobalNamespace::GorillaPlayerLineButton::__cordl_internal_get_buttonType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonType;
}
constexpr ::GlobalNamespace::GorillaPlayerLineButton_ButtonType const& GlobalNamespace::GorillaPlayerLineButton::__cordl_internal_get_buttonType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonType;
}
constexpr void GlobalNamespace::GorillaPlayerLineButton::__cordl_internal_set_buttonType(::GlobalNamespace::GorillaPlayerLineButton_ButtonType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___buttonType = value;
}
constexpr bool& GlobalNamespace::GorillaPlayerLineButton::__cordl_internal_get_isOn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isOn;
}
constexpr bool const& GlobalNamespace::GorillaPlayerLineButton::__cordl_internal_get_isOn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isOn;
}
constexpr void GlobalNamespace::GorillaPlayerLineButton::__cordl_internal_set_isOn(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isOn = value;
}
constexpr bool& GlobalNamespace::GorillaPlayerLineButton::__cordl_internal_get_isAutoOn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isAutoOn;
}
constexpr bool const& GlobalNamespace::GorillaPlayerLineButton::__cordl_internal_get_isAutoOn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isAutoOn;
}
constexpr void GlobalNamespace::GorillaPlayerLineButton::__cordl_internal_set_isAutoOn(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isAutoOn = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::GorillaPlayerLineButton::__cordl_internal_get_offMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::GorillaPlayerLineButton::__cordl_internal_get_offMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offMaterial;
}
constexpr void GlobalNamespace::GorillaPlayerLineButton::__cordl_internal_set_offMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___offMaterial = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::GorillaPlayerLineButton::__cordl_internal_get_onMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::GorillaPlayerLineButton::__cordl_internal_get_onMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onMaterial;
}
constexpr void GlobalNamespace::GorillaPlayerLineButton::__cordl_internal_set_onMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onMaterial = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::GorillaPlayerLineButton::__cordl_internal_get_autoOnMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___autoOnMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::GorillaPlayerLineButton::__cordl_internal_get_autoOnMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___autoOnMaterial;
}
constexpr void GlobalNamespace::GorillaPlayerLineButton::__cordl_internal_set_autoOnMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___autoOnMaterial = value;
}
constexpr ::StringW& GlobalNamespace::GorillaPlayerLineButton::__cordl_internal_get_offText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offText;
}
constexpr ::StringW const& GlobalNamespace::GorillaPlayerLineButton::__cordl_internal_get_offText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offText;
}
constexpr void GlobalNamespace::GorillaPlayerLineButton::__cordl_internal_set_offText(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___offText = value;
}
constexpr ::StringW& GlobalNamespace::GorillaPlayerLineButton::__cordl_internal_get_onText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onText;
}
constexpr ::StringW const& GlobalNamespace::GorillaPlayerLineButton::__cordl_internal_get_onText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onText;
}
constexpr void GlobalNamespace::GorillaPlayerLineButton::__cordl_internal_set_onText(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onText = value;
}
constexpr ::StringW& GlobalNamespace::GorillaPlayerLineButton::__cordl_internal_get_autoOnText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___autoOnText;
}
constexpr ::StringW const& GlobalNamespace::GorillaPlayerLineButton::__cordl_internal_get_autoOnText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___autoOnText;
}
constexpr void GlobalNamespace::GorillaPlayerLineButton::__cordl_internal_set_autoOnText(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___autoOnText = value;
}
constexpr ::UnityW<::UnityEngine::UI::Text>& GlobalNamespace::GorillaPlayerLineButton::__cordl_internal_get_myText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myText;
}
constexpr ::UnityW<::UnityEngine::UI::Text> const& GlobalNamespace::GorillaPlayerLineButton::__cordl_internal_get_myText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myText;
}
constexpr void GlobalNamespace::GorillaPlayerLineButton::__cordl_internal_set_myText(::UnityW<::UnityEngine::UI::Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___myText = value;
}
constexpr float_t& GlobalNamespace::GorillaPlayerLineButton::__cordl_internal_get_debounceTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debounceTime;
}
constexpr float_t const& GlobalNamespace::GorillaPlayerLineButton::__cordl_internal_get_debounceTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debounceTime;
}
constexpr void GlobalNamespace::GorillaPlayerLineButton::__cordl_internal_set_debounceTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debounceTime = value;
}
constexpr float_t& GlobalNamespace::GorillaPlayerLineButton::__cordl_internal_get_touchTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___touchTime;
}
constexpr float_t const& GlobalNamespace::GorillaPlayerLineButton::__cordl_internal_get_touchTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___touchTime;
}
constexpr void GlobalNamespace::GorillaPlayerLineButton::__cordl_internal_set_touchTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___touchTime = value;
}
constexpr bool& GlobalNamespace::GorillaPlayerLineButton::__cordl_internal_get_testPress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___testPress;
}
constexpr bool const& GlobalNamespace::GorillaPlayerLineButton::__cordl_internal_get_testPress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___testPress;
}
constexpr void GlobalNamespace::GorillaPlayerLineButton::__cordl_internal_set_testPress(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___testPress = value;
}
inline void GlobalNamespace::GorillaPlayerLineButton::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPlayerLineButton*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaPlayerLineButton::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPlayerLineButton*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::GorillaPlayerLineButton::TestPressCheck()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPlayerLineButton*>(),
                        {"TestPressCheck", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaPlayerLineButton::OnTriggerEnter(::UnityEngine::Collider*  collider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPlayerLineButton*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collider);
}
inline void GlobalNamespace::GorillaPlayerLineButton::SetTouchTime(float_t  add)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPlayerLineButton*>(),
                        {"SetTouchTime", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, add);
}
inline void GlobalNamespace::GorillaPlayerLineButton::Click(bool  leftHand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPlayerLineButton*>(),
                        {"Click", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, leftHand);
}
inline void GlobalNamespace::GorillaPlayerLineButton::OnTriggerExit(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPlayerLineButton*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GlobalNamespace::GorillaPlayerLineButton::UpdateColor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPlayerLineButton*>(),
                        {"UpdateColor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaPlayerLineButton::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPlayerLineButton*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GorillaPlayerLineButton* GlobalNamespace::GorillaPlayerLineButton::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaPlayerLineButton*>());
}
/// @brief Convert operator to "::GlobalNamespace::IClickable"
constexpr  GlobalNamespace::GorillaPlayerLineButton::operator ::GlobalNamespace::IClickable*() noexcept {
return static_cast<::GlobalNamespace::IClickable*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IClickable"
constexpr ::GlobalNamespace::IClickable* GlobalNamespace::GorillaPlayerLineButton::i___GlobalNamespace__IClickable() noexcept {
return static_cast<::GlobalNamespace::IClickable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaPlayerLineButton::GorillaPlayerLineButton()   {
}
//  Writing Method size for method: ::GlobalNamespace::GorillaPlayerLineButton__TestPressCheck_d__17._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaPlayerLineButton__TestPressCheck_d__17::*)(int32_t)>(&::GlobalNamespace::GorillaPlayerLineButton__TestPressCheck_d__17::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5999bc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPlayerLineButton__TestPressCheck_d__17*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPlayerLineButton__TestPressCheck_d__17.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaPlayerLineButton__TestPressCheck_d__17::*)()>(&::GlobalNamespace::GorillaPlayerLineButton__TestPressCheck_d__17::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x599a7b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPlayerLineButton__TestPressCheck_d__17*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPlayerLineButton__TestPressCheck_d__17.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GorillaPlayerLineButton__TestPressCheck_d__17::*)()>(&::GlobalNamespace::GorillaPlayerLineButton__TestPressCheck_d__17::MoveNext)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x599a7b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPlayerLineButton__TestPressCheck_d__17*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPlayerLineButton__TestPressCheck_d__17.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::GorillaPlayerLineButton__TestPressCheck_d__17::*)()>(&::GlobalNamespace::GorillaPlayerLineButton__TestPressCheck_d__17::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x599a880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPlayerLineButton__TestPressCheck_d__17*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPlayerLineButton__TestPressCheck_d__17.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaPlayerLineButton__TestPressCheck_d__17::*)()>(&::GlobalNamespace::GorillaPlayerLineButton__TestPressCheck_d__17::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x599a888;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPlayerLineButton__TestPressCheck_d__17*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPlayerLineButton__TestPressCheck_d__17.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::GorillaPlayerLineButton__TestPressCheck_d__17::*)()>(&::GlobalNamespace::GorillaPlayerLineButton__TestPressCheck_d__17::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x599a8c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPlayerLineButton__TestPressCheck_d__17*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::GorillaPlayerLineButton__TestPressCheck_d__17::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::GorillaPlayerLineButton__TestPressCheck_d__17::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::GorillaPlayerLineButton__TestPressCheck_d__17::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::GorillaPlayerLineButton__TestPressCheck_d__17::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::GorillaPlayerLineButton__TestPressCheck_d__17::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::GorillaPlayerLineButton__TestPressCheck_d__17::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::GorillaPlayerLineButton>& GlobalNamespace::GorillaPlayerLineButton__TestPressCheck_d__17::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::GorillaPlayerLineButton> const& GlobalNamespace::GorillaPlayerLineButton__TestPressCheck_d__17::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::GorillaPlayerLineButton__TestPressCheck_d__17::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GorillaPlayerLineButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void GlobalNamespace::GorillaPlayerLineButton__TestPressCheck_d__17::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPlayerLineButton__TestPressCheck_d__17*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::GorillaPlayerLineButton__TestPressCheck_d__17::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPlayerLineButton__TestPressCheck_d__17*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::GorillaPlayerLineButton__TestPressCheck_d__17::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPlayerLineButton__TestPressCheck_d__17*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::GorillaPlayerLineButton__TestPressCheck_d__17::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPlayerLineButton__TestPressCheck_d__17*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaPlayerLineButton__TestPressCheck_d__17::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPlayerLineButton__TestPressCheck_d__17*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::GorillaPlayerLineButton__TestPressCheck_d__17::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPlayerLineButton__TestPressCheck_d__17*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::GorillaPlayerLineButton__TestPressCheck_d__17* GlobalNamespace::GorillaPlayerLineButton__TestPressCheck_d__17::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaPlayerLineButton__TestPressCheck_d__17*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::GorillaPlayerLineButton__TestPressCheck_d__17::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::GorillaPlayerLineButton__TestPressCheck_d__17::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::GorillaPlayerLineButton__TestPressCheck_d__17::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::GorillaPlayerLineButton__TestPressCheck_d__17::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::GorillaPlayerLineButton__TestPressCheck_d__17::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::GorillaPlayerLineButton__TestPressCheck_d__17::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaPlayerLineButton__TestPressCheck_d__17::GorillaPlayerLineButton__TestPressCheck_d__17()   {
}
