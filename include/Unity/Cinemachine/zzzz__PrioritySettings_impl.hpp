#pragma once
// IWYU pragma private; include "Unity/Cinemachine/PrioritySettings.hpp"
#include "Unity/Cinemachine/zzzz__PrioritySettings_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::PrioritySettings.get_Value
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Cinemachine::PrioritySettings::*)()>(&::Unity::Cinemachine::PrioritySettings::get_Value)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xaeb46dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::PrioritySettings>(),
                        {"get_Value", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::PrioritySettings.set_Value
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::PrioritySettings::*)(int32_t)>(&::Unity::Cinemachine::PrioritySettings::set_Value)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xaeb37e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::PrioritySettings>(),
                        {"set_Value", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::PrioritySettings.op_Implicit_int32_t
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Unity::Cinemachine::PrioritySettings)>(&::Unity::Cinemachine::PrioritySettings::op_Implicit_int32_t)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xaeb9cb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::PrioritySettings>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Unity::Cinemachine::PrioritySettings>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::PrioritySettings.op_Implicit___Unity__Cinemachine__PrioritySettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Cinemachine::PrioritySettings (*)(int32_t)>(&::Unity::Cinemachine::PrioritySettings::op_Implicit___Unity__Cinemachine__PrioritySettings)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xaeb9cc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::PrioritySettings>(),
                        {"op_Implicit", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline int32_t Unity::Cinemachine::PrioritySettings::get_Value()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::PrioritySettings>(),
                        {"get_Value", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void Unity::Cinemachine::PrioritySettings::set_Value(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::PrioritySettings>(),
                        {"set_Value", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int32_t Unity::Cinemachine::PrioritySettings::op_Implicit_int32_t(::Unity::Cinemachine::PrioritySettings  prioritySettings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::PrioritySettings>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Unity::Cinemachine::PrioritySettings>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, prioritySettings);
}
inline ::Unity::Cinemachine::PrioritySettings Unity::Cinemachine::PrioritySettings::op_Implicit___Unity__Cinemachine__PrioritySettings(int32_t  priority)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::PrioritySettings>(),
                        {"op_Implicit", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Cinemachine::PrioritySettings>(nullptr, ___internal_method, priority);
}
// Ctor Parameters [CppParam { name: "Enabled", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Value", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Unity::Cinemachine::PrioritySettings::PrioritySettings(bool  Enabled, int32_t  m_Value) noexcept  {
this->Enabled = Enabled;
this->m_Value = m_Value;
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::PrioritySettings::PrioritySettings()   {
}
