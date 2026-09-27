#pragma once
// IWYU pragma private; include "Unity/Cinemachine/LookaheadSettings.hpp"
#include "Unity/Cinemachine/zzzz__LookaheadSettings_def.hpp"
// Ctor Parameters [CppParam { name: "Enabled", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Time", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Smoothing", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "IgnoreY", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Unity::Cinemachine::LookaheadSettings::LookaheadSettings(bool  Enabled, float_t  Time, float_t  Smoothing, bool  IgnoreY) noexcept  {
this->Enabled = Enabled;
this->Time = Time;
this->Smoothing = Smoothing;
this->IgnoreY = IgnoreY;
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::LookaheadSettings::LookaheadSettings()   {
}
