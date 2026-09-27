#pragma once
// IWYU pragma private; include "Unity/Cinemachine/InputAxis.hpp"
#include "Unity/Cinemachine/zzzz__InputAxis_RecenteringSettings_impl.hpp"
#include "Unity/Cinemachine/zzzz__InputAxis_RecenteringState_impl.hpp"
#include "Unity/Cinemachine/zzzz__InputAxis_RestrictionFlags_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "Unity/Cinemachine/zzzz__InputAxis_def.hpp"
#include "Unity/Cinemachine/zzzz__InputAxis_RecenteringSettings_def.hpp"
#include "Unity/Cinemachine/zzzz__InputAxis_RecenteringState_def.hpp"
#include "Unity/Cinemachine/zzzz__InputAxis_RestrictionFlags_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::InputAxis.ClampValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::InputAxis::*)(float_t)>(&::Unity::Cinemachine::InputAxis::ClampValue)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xaeb7bd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::InputAxis>(),
                        {"ClampValue", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::InputAxis.GetNormalizedValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::InputAxis::*)()>(&::Unity::Cinemachine::InputAxis::GetNormalizedValue)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xaeb7c40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::InputAxis>(),
                        {"GetNormalizedValue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::InputAxis.GetClampedValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::InputAxis::*)()>(&::Unity::Cinemachine::InputAxis::GetClampedValue)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xaeb7cc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::InputAxis>(),
                        {"GetClampedValue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::InputAxis.Validate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::InputAxis::*)()>(&::Unity::Cinemachine::InputAxis::Validate)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xaeb7d30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::InputAxis>(),
                        {"Validate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::InputAxis.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::InputAxis::*)()>(&::Unity::Cinemachine::InputAxis::Reset)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xaeb7e10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::InputAxis>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::InputAxis.get_DefaultMomentary
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Cinemachine::InputAxis (*)()>(&::Unity::Cinemachine::InputAxis::get_DefaultMomentary)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xaeb7f1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::InputAxis>(),
                        {"get_DefaultMomentary", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::InputAxis.TrackValueChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::InputAxis::*)()>(&::Unity::Cinemachine::InputAxis::TrackValueChange)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xaeb7f44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::InputAxis>(),
                        {"TrackValueChange", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::InputAxis.SetValueAndLastValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::InputAxis::*)(float_t)>(&::Unity::Cinemachine::InputAxis::SetValueAndLastValue)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xaeb801c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::InputAxis>(),
                        {"SetValueAndLastValue", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::InputAxis.UpdateRecentering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::InputAxis::*)(float_t, bool)>(&::Unity::Cinemachine::InputAxis::UpdateRecentering)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaeb8028;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::InputAxis>(),
                        {"UpdateRecentering", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::InputAxis.UpdateRecentering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::InputAxis::*)(float_t, bool, float_t)>(&::Unity::Cinemachine::InputAxis::UpdateRecentering)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0xaeb8030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::InputAxis>(),
                        {"UpdateRecentering", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::InputAxis.TriggerRecentering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::InputAxis::*)()>(&::Unity::Cinemachine::InputAxis::TriggerRecentering)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xaeb826c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::InputAxis>(),
                        {"TriggerRecentering", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::InputAxis.CancelRecentering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::InputAxis::*)()>(&::Unity::Cinemachine::InputAxis::CancelRecentering)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xaeb7e98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::InputAxis>(),
                        {"CancelRecentering", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline float_t Unity::Cinemachine::InputAxis::ClampValue(float_t  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::InputAxis>(),
                        {"ClampValue", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method, v);
}
inline float_t Unity::Cinemachine::InputAxis::GetNormalizedValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::InputAxis>(),
                        {"GetNormalizedValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline float_t Unity::Cinemachine::InputAxis::GetClampedValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::InputAxis>(),
                        {"GetClampedValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void Unity::Cinemachine::InputAxis::Validate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::InputAxis>(),
                        {"Validate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Unity::Cinemachine::InputAxis::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::InputAxis>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline ::Unity::Cinemachine::InputAxis Unity::Cinemachine::InputAxis::get_DefaultMomentary()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::InputAxis>(),
                        {"get_DefaultMomentary", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Cinemachine::InputAxis>(nullptr, ___internal_method);
}
inline bool Unity::Cinemachine::InputAxis::TrackValueChange()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::InputAxis>(),
                        {"TrackValueChange", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void Unity::Cinemachine::InputAxis::SetValueAndLastValue(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::InputAxis>(),
                        {"SetValueAndLastValue", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void Unity::Cinemachine::InputAxis::UpdateRecentering(float_t  deltaTime, bool  forceCancel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::InputAxis>(),
                        {"UpdateRecentering", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, deltaTime, forceCancel);
}
inline void Unity::Cinemachine::InputAxis::UpdateRecentering(float_t  deltaTime, bool  forceCancel, float_t  center)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::InputAxis>(),
                        {"UpdateRecentering", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, deltaTime, forceCancel, center);
}
inline void Unity::Cinemachine::InputAxis::TriggerRecentering()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::InputAxis>(),
                        {"TriggerRecentering", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Unity::Cinemachine::InputAxis::CancelRecentering()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::InputAxis>(),
                        {"CancelRecentering", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "Value", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Center", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Range", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Wrap", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Recentering", ty: "::GlobalNamespace::InputAxis_RecenteringSettings", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Restrictions", ty: "::GlobalNamespace::InputAxis_RestrictionFlags", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_RecenteringState", ty: "::GlobalNamespace::InputAxis_RecenteringState", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Unity::Cinemachine::InputAxis::InputAxis(float_t  Value, float_t  Center, ::UnityEngine::Vector2  Range, bool  Wrap, ::GlobalNamespace::InputAxis_RecenteringSettings  Recentering, ::GlobalNamespace::InputAxis_RestrictionFlags  Restrictions, ::GlobalNamespace::InputAxis_RecenteringState  m_RecenteringState) noexcept  {
this->Value = Value;
this->Center = Center;
this->Range = Range;
this->Wrap = Wrap;
this->Recentering = Recentering;
this->Restrictions = Restrictions;
this->m_RecenteringState = m_RecenteringState;
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::InputAxis::InputAxis()   {
}
