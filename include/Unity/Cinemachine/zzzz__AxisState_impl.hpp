#pragma once
// IWYU pragma private; include "Unity/Cinemachine/AxisState.hpp"
#include "Unity/Cinemachine/zzzz__AxisState_Recentering_impl.hpp"
#include "Unity/Cinemachine/zzzz__AxisState_SpeedMode_impl.hpp"
#include "Unity/Cinemachine/zzzz__AxisState_def.hpp"
#include "Unity/Cinemachine/zzzz__AxisState_Recentering_def.hpp"
#include "Unity/Cinemachine/zzzz__AxisState_SpeedMode_def.hpp"
#include "Unity/Cinemachine/zzzz__AxisState_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::AxisState._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::AxisState::*)(float_t, float_t, bool, bool, float_t, float_t, float_t, ::StringW, bool)>(&::Unity::Cinemachine::AxisState::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xaec2f14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::AxisState>(),
                        {".ctor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::AxisState.Validate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::AxisState::*)()>(&::Unity::Cinemachine::AxisState::Validate)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xaec2fc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::AxisState>(),
                        {"Validate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::AxisState.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::AxisState::*)()>(&::Unity::Cinemachine::AxisState::Reset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xaec3004;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::AxisState>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::AxisState.SetInputAxisProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::AxisState::*)(int32_t, ::Unity::Cinemachine::AxisState_IInputAxisProvider*)>(&::Unity::Cinemachine::AxisState::SetInputAxisProvider)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xaec3014;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::AxisState>(),
                        {"SetInputAxisProvider", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Cinemachine::AxisState_IInputAxisProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::AxisState.get_HasInputProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::AxisState::*)()>(&::Unity::Cinemachine::AxisState::get_HasInputProvider)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xaec3028;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::AxisState>(),
                        {"get_HasInputProvider", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::AxisState.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::AxisState::*)(float_t)>(&::Unity::Cinemachine::AxisState::Update)> {
  constexpr static std::size_t size = 0x450;
  constexpr static std::size_t addrs = 0xaec3038;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::AxisState>(),
                        {"Update", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::AxisState.ClampValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::AxisState::*)(float_t)>(&::Unity::Cinemachine::AxisState::ClampValue)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xaec3624;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::AxisState>(),
                        {"ClampValue", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::AxisState.MaxSpeedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::AxisState::*)(float_t, float_t)>(&::Unity::Cinemachine::AxisState::MaxSpeedUpdate)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0xaec3488;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::AxisState>(),
                        {"MaxSpeedUpdate", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::AxisState.GetMaxSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::AxisState::*)()>(&::Unity::Cinemachine::AxisState::GetMaxSpeed)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xaec3690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::AxisState>(),
                        {"GetMaxSpeed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::AxisState.get_ValueRangeLocked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::AxisState::*)()>(&::Unity::Cinemachine::AxisState::get_ValueRangeLocked)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaec3720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::AxisState>(),
                        {"get_ValueRangeLocked", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::AxisState.set_ValueRangeLocked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::AxisState::*)(bool)>(&::Unity::Cinemachine::AxisState::set_ValueRangeLocked)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaec3728;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::AxisState>(),
                        {"set_ValueRangeLocked", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::AxisState.get_HasRecentering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::AxisState::*)()>(&::Unity::Cinemachine::AxisState::get_HasRecentering)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaec3730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::AxisState>(),
                        {"get_HasRecentering", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::AxisState.set_HasRecentering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::AxisState::*)(bool)>(&::Unity::Cinemachine::AxisState::set_HasRecentering)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaec3738;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::AxisState>(),
                        {"set_HasRecentering", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
inline void Unity::Cinemachine::AxisState::_ctor(float_t  minValue, float_t  maxValue, bool  wrap, bool  rangeLocked, float_t  maxSpeed, float_t  accelTime, float_t  decelTime, ::StringW  name, bool  invert)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::AxisState>(),
                        {".ctor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, minValue, maxValue, wrap, rangeLocked, maxSpeed, accelTime, decelTime, name, invert);
}
inline void Unity::Cinemachine::AxisState::Validate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::AxisState>(),
                        {"Validate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Unity::Cinemachine::AxisState::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::AxisState>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Unity::Cinemachine::AxisState::SetInputAxisProvider(int32_t  axis, ::Unity::Cinemachine::AxisState_IInputAxisProvider*  provider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::AxisState>(),
                        {"SetInputAxisProvider", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Cinemachine::AxisState_IInputAxisProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, axis, provider);
}
inline bool Unity::Cinemachine::AxisState::get_HasInputProvider()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::AxisState>(),
                        {"get_HasInputProvider", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool Unity::Cinemachine::AxisState::Update(float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::AxisState>(),
                        {"Update", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, deltaTime);
}
inline float_t Unity::Cinemachine::AxisState::ClampValue(float_t  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::AxisState>(),
                        {"ClampValue", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method, v);
}
inline bool Unity::Cinemachine::AxisState::MaxSpeedUpdate(float_t  input, float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::AxisState>(),
                        {"MaxSpeedUpdate", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, input, deltaTime);
}
inline float_t Unity::Cinemachine::AxisState::GetMaxSpeed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::AxisState>(),
                        {"GetMaxSpeed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline bool Unity::Cinemachine::AxisState::get_ValueRangeLocked()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::AxisState>(),
                        {"get_ValueRangeLocked", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void Unity::Cinemachine::AxisState::set_ValueRangeLocked(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::AxisState>(),
                        {"set_ValueRangeLocked", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool Unity::Cinemachine::AxisState::get_HasRecentering()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::AxisState>(),
                        {"get_HasRecentering", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void Unity::Cinemachine::AxisState::set_HasRecentering(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::AxisState>(),
                        {"set_HasRecentering", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "Value", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_SpeedMode", ty: "::GlobalNamespace::AxisState_SpeedMode", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_MaxSpeed", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_AccelTime", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_DecelTime", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_InputAxisName", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_InputAxisValue", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_InvertInput", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_MinValue", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_MaxValue", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Wrap", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Recentering", ty: "::GlobalNamespace::AxisState_Recentering", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_CurrentSpeed", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_LastUpdateTime", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_LastUpdateFrame", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_InputAxisProvider", ty: "::Unity::Cinemachine::AxisState_IInputAxisProvider*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_InputAxisIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_ValueRangeLocked_k__BackingField", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_HasRecentering_k__BackingField", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Unity::Cinemachine::AxisState::AxisState(float_t  Value, ::GlobalNamespace::AxisState_SpeedMode  m_SpeedMode, float_t  m_MaxSpeed, float_t  m_AccelTime, float_t  m_DecelTime, ::StringW  m_InputAxisName, float_t  m_InputAxisValue, bool  m_InvertInput, float_t  m_MinValue, float_t  m_MaxValue, bool  m_Wrap, ::GlobalNamespace::AxisState_Recentering  m_Recentering, float_t  m_CurrentSpeed, float_t  m_LastUpdateTime, int32_t  m_LastUpdateFrame, ::Unity::Cinemachine::AxisState_IInputAxisProvider*  m_InputAxisProvider, int32_t  m_InputAxisIndex, bool  _ValueRangeLocked_k__BackingField, bool  _HasRecentering_k__BackingField) noexcept  {
this->Value = Value;
this->m_SpeedMode = m_SpeedMode;
this->m_MaxSpeed = m_MaxSpeed;
this->m_AccelTime = m_AccelTime;
this->m_DecelTime = m_DecelTime;
this->m_InputAxisName = m_InputAxisName;
this->m_InputAxisValue = m_InputAxisValue;
this->m_InvertInput = m_InvertInput;
this->m_MinValue = m_MinValue;
this->m_MaxValue = m_MaxValue;
this->m_Wrap = m_Wrap;
this->m_Recentering = m_Recentering;
this->m_CurrentSpeed = m_CurrentSpeed;
this->m_LastUpdateTime = m_LastUpdateTime;
this->m_LastUpdateFrame = m_LastUpdateFrame;
this->m_InputAxisProvider = m_InputAxisProvider;
this->m_InputAxisIndex = m_InputAxisIndex;
this->_ValueRangeLocked_k__BackingField = _ValueRangeLocked_k__BackingField;
this->_HasRecentering_k__BackingField = _HasRecentering_k__BackingField;
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::AxisState::AxisState()   {
}
//  Writing Method size for method: ::Unity::Cinemachine::AxisState_IRequiresInput.RequiresInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::AxisState_IRequiresInput::*)()>(&::Unity::Cinemachine::AxisState_IRequiresInput::RequiresInput)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::AxisState_IRequiresInput*>(),
                    {::i2c::class_of<::Unity::Cinemachine::AxisState_IRequiresInput*>(), 0}
                ));
    return ___internal_method;
  }
};
inline bool Unity::Cinemachine::AxisState_IRequiresInput::RequiresInput()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::AxisState_IRequiresInput*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
//  Writing Method size for method: ::Unity::Cinemachine::AxisState_IInputAxisProvider.GetAxisValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::AxisState_IInputAxisProvider::*)(int32_t)>(&::Unity::Cinemachine::AxisState_IInputAxisProvider::GetAxisValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::AxisState_IInputAxisProvider*>(),
                    {::i2c::class_of<::Unity::Cinemachine::AxisState_IInputAxisProvider*>(), 0}
                ));
    return ___internal_method;
  }
};
inline float_t Unity::Cinemachine::AxisState_IInputAxisProvider::GetAxisValue(int32_t  axis)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::AxisState_IInputAxisProvider*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, axis);
}
