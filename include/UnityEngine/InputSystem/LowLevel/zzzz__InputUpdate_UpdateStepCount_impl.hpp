#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/LowLevel/InputUpdate_UpdateStepCount.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputUpdate_UpdateStepCount_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::InputUpdate_UpdateStepCount.get_value
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::GlobalNamespace::InputUpdate_UpdateStepCount::*)()>(&::GlobalNamespace::InputUpdate_UpdateStepCount::get_value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaff61e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputUpdate_UpdateStepCount>(),
                        {"get_value", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputUpdate_UpdateStepCount.set_value
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InputUpdate_UpdateStepCount::*)(uint32_t)>(&::GlobalNamespace::InputUpdate_UpdateStepCount::set_value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaff61ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputUpdate_UpdateStepCount>(),
                        {"set_value", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputUpdate_UpdateStepCount.OnBeforeUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InputUpdate_UpdateStepCount::*)()>(&::GlobalNamespace::InputUpdate_UpdateStepCount::OnBeforeUpdate)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xaff6000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputUpdate_UpdateStepCount>(),
                        {"OnBeforeUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputUpdate_UpdateStepCount.OnUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InputUpdate_UpdateStepCount::*)()>(&::GlobalNamespace::InputUpdate_UpdateStepCount::OnUpdate)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xaff60a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputUpdate_UpdateStepCount>(),
                        {"OnUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline uint32_t GlobalNamespace::InputUpdate_UpdateStepCount::get_value()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputUpdate_UpdateStepCount>(),
                        {"get_value", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline void GlobalNamespace::InputUpdate_UpdateStepCount::set_value(uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputUpdate_UpdateStepCount>(),
                        {"set_value", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void GlobalNamespace::InputUpdate_UpdateStepCount::OnBeforeUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputUpdate_UpdateStepCount>(),
                        {"OnBeforeUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::InputUpdate_UpdateStepCount::OnUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputUpdate_UpdateStepCount>(),
                        {"OnUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_WasUpdated", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_value_k__BackingField", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::InputUpdate_UpdateStepCount::InputUpdate_UpdateStepCount(bool  m_WasUpdated, uint32_t  _value_k__BackingField) noexcept  {
this->m_WasUpdated = m_WasUpdated;
this->_value_k__BackingField = _value_k__BackingField;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InputUpdate_UpdateStepCount::InputUpdate_UpdateStepCount()   {
}
