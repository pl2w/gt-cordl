#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputBindingCompositeContext_PartBinding.hpp"
#include "UnityEngine/InputSystem/zzzz__InputBindingCompositeContext_PartBinding_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::InputBindingCompositeContext_PartBinding.get_part
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::InputBindingCompositeContext_PartBinding::*)()>(&::GlobalNamespace::InputBindingCompositeContext_PartBinding::get_part)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaf483fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputBindingCompositeContext_PartBinding>(),
                        {"get_part", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputBindingCompositeContext_PartBinding.set_part
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InputBindingCompositeContext_PartBinding::*)(int32_t)>(&::GlobalNamespace::InputBindingCompositeContext_PartBinding::set_part)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaf48404;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputBindingCompositeContext_PartBinding>(),
                        {"set_part", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputBindingCompositeContext_PartBinding.get_control
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputControl* (::GlobalNamespace::InputBindingCompositeContext_PartBinding::*)()>(&::GlobalNamespace::InputBindingCompositeContext_PartBinding::get_control)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaf4840c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputBindingCompositeContext_PartBinding>(),
                        {"get_control", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputBindingCompositeContext_PartBinding.set_control
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InputBindingCompositeContext_PartBinding::*)(::UnityEngine::InputSystem::InputControl*)>(&::GlobalNamespace::InputBindingCompositeContext_PartBinding::set_control)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaf48414;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputBindingCompositeContext_PartBinding>(),
                        {"set_control", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputControl*>()}}
                    )));
    return ___internal_method;
  }
};
inline int32_t GlobalNamespace::InputBindingCompositeContext_PartBinding::get_part()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputBindingCompositeContext_PartBinding>(),
                        {"get_part", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void GlobalNamespace::InputBindingCompositeContext_PartBinding::set_part(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputBindingCompositeContext_PartBinding>(),
                        {"set_part", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::InputControl* GlobalNamespace::InputBindingCompositeContext_PartBinding::get_control()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputBindingCompositeContext_PartBinding>(),
                        {"get_control", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputControl*>(*this, ___internal_method);
}
inline void GlobalNamespace::InputBindingCompositeContext_PartBinding::set_control(::UnityEngine::InputSystem::InputControl*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputBindingCompositeContext_PartBinding>(),
                        {"set_control", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputControl*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_part_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_control_k__BackingField", ty: "::UnityEngine::InputSystem::InputControl*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::InputBindingCompositeContext_PartBinding::InputBindingCompositeContext_PartBinding(int32_t  _part_k__BackingField, ::UnityEngine::InputSystem::InputControl*  _control_k__BackingField) noexcept  {
this->_part_k__BackingField = _part_k__BackingField;
this->_control_k__BackingField = _control_k__BackingField;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InputBindingCompositeContext_PartBinding::InputBindingCompositeContext_PartBinding()   {
}
