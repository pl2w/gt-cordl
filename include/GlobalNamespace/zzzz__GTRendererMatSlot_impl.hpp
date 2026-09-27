#pragma once
// IWYU pragma private; include "GlobalNamespace/GTRendererMatSlot.hpp"
#include "GlobalNamespace/zzzz__GTRendererMatSlot_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GTRendererMatSlot.get_isValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GTRendererMatSlot::*)()>(&::GlobalNamespace::GTRendererMatSlot::get_isValid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5694240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTRendererMatSlot>(),
                        {"get_isValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTRendererMatSlot.set_isValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GTRendererMatSlot::*)(bool)>(&::GlobalNamespace::GTRendererMatSlot::set_isValid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5694248;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTRendererMatSlot>(),
                        {"set_isValid", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTRendererMatSlot.TryInitialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GTRendererMatSlot::*)()>(&::GlobalNamespace::GTRendererMatSlot::TryInitialize)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x5694250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTRendererMatSlot>(),
                        {"TryInitialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline bool GlobalNamespace::GTRendererMatSlot::get_isValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTRendererMatSlot>(),
                        {"get_isValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void GlobalNamespace::GTRendererMatSlot::set_isValid(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTRendererMatSlot>(),
                        {"set_isValid", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool GlobalNamespace::GTRendererMatSlot::TryInitialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTRendererMatSlot>(),
                        {"TryInitialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_isValid_k__BackingField", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "renderer", ty: "::UnityW<::UnityEngine::Renderer>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "slot", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GTRendererMatSlot::GTRendererMatSlot(bool  _isValid_k__BackingField, ::UnityW<::UnityEngine::Renderer>  renderer, int32_t  slot) noexcept  {
this->_isValid_k__BackingField = _isValid_k__BackingField;
this->renderer = renderer;
this->slot = slot;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GTRendererMatSlot::GTRendererMatSlot()   {
}
