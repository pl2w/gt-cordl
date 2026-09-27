#pragma once
// IWYU pragma private; include "GlobalNamespace/KIDUI_InputFieldController.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__KIDUI_InputFieldController_def.hpp"
#include "GlobalNamespace/zzzz__UXSettings_def.hpp"
#include "TMPro/zzzz__TMP_InputField_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__XRUIInputModule_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::KIDUI_InputFieldController.get_InputModule
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule> (::GlobalNamespace::KIDUI_InputFieldController::*)()>(&::GlobalNamespace::KIDUI_InputFieldController::get_InputModule)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5a56608;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_InputFieldController*>(),
                        {"get_InputModule", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUI_InputFieldController.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUI_InputFieldController::*)()>(&::GlobalNamespace::KIDUI_InputFieldController::Awake)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5a566b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_InputFieldController*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUI_InputFieldController._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUI_InputFieldController::*)()>(&::GlobalNamespace::KIDUI_InputFieldController::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5a56750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_InputFieldController*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::KIDUI_InputFieldController::__cordl_internal_get__highlightedVibrationStrength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____highlightedVibrationStrength;
}
constexpr float_t const& GlobalNamespace::KIDUI_InputFieldController::__cordl_internal_get__highlightedVibrationStrength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____highlightedVibrationStrength;
}
constexpr void GlobalNamespace::KIDUI_InputFieldController::__cordl_internal_set__highlightedVibrationStrength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____highlightedVibrationStrength = value;
}
constexpr float_t& GlobalNamespace::KIDUI_InputFieldController::__cordl_internal_get__highlightedVibrationDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____highlightedVibrationDuration;
}
constexpr float_t const& GlobalNamespace::KIDUI_InputFieldController::__cordl_internal_get__highlightedVibrationDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____highlightedVibrationDuration;
}
constexpr void GlobalNamespace::KIDUI_InputFieldController::__cordl_internal_set__highlightedVibrationDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____highlightedVibrationDuration = value;
}
constexpr ::UnityW<::TMPro::TMP_InputField>& GlobalNamespace::KIDUI_InputFieldController::__cordl_internal_get__inputField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inputField;
}
constexpr ::UnityW<::TMPro::TMP_InputField> const& GlobalNamespace::KIDUI_InputFieldController::__cordl_internal_get__inputField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inputField;
}
constexpr void GlobalNamespace::KIDUI_InputFieldController::__cordl_internal_set__inputField(::UnityW<::TMPro::TMP_InputField>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____inputField = value;
}
constexpr ::UnityW<::GlobalNamespace::UXSettings>& GlobalNamespace::KIDUI_InputFieldController::__cordl_internal_get__cbUXSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cbUXSettings;
}
constexpr ::UnityW<::GlobalNamespace::UXSettings> const& GlobalNamespace::KIDUI_InputFieldController::__cordl_internal_get__cbUXSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cbUXSettings;
}
constexpr void GlobalNamespace::KIDUI_InputFieldController::__cordl_internal_set__cbUXSettings(::UnityW<::GlobalNamespace::UXSettings>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cbUXSettings = value;
}
inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule> GlobalNamespace::KIDUI_InputFieldController::get_InputModule()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_InputFieldController*>(),
                        {"get_InputModule", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule>>(this, ___internal_method);
}
inline void GlobalNamespace::KIDUI_InputFieldController::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_InputFieldController*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::KIDUI_InputFieldController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_InputFieldController*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::KIDUI_InputFieldController* GlobalNamespace::KIDUI_InputFieldController::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::KIDUI_InputFieldController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::KIDUI_InputFieldController::KIDUI_InputFieldController()   {
}
