#pragma once
// IWYU pragma private; include "GlobalNamespace/GameButtonActivatable.hpp"
#include "GlobalNamespace/zzzz__GameButtonActivatable_InputButton_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GameButtonActivatable_def.hpp"
#include "GlobalNamespace/zzzz__GameButtonActivatable_InputButton_def.hpp"
#include "GlobalNamespace/zzzz__GameEntity_def.hpp"
#include "GlobalNamespace/zzzz__IGameActivatable_def.hpp"
#include "UnityEngine/XR/zzzz__XRNode_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GameButtonActivatable.CheckInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameButtonActivatable::*)(::UnityEngine::XR::XRNode, float_t)>(&::GlobalNamespace::GameButtonActivatable::CheckInput)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x581142c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameButtonActivatable*>(),
                        {"CheckInput", {}, {::i2c::type_of<::UnityEngine::XR::XRNode>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameButtonActivatable.CheckInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameButtonActivatable::*)(float_t)>(&::GlobalNamespace::GameButtonActivatable::CheckInput)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x5811560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameButtonActivatable*>(),
                        {"CheckInput", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameButtonActivatable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameButtonActivatable::*)()>(&::GlobalNamespace::GameButtonActivatable::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5811910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameButtonActivatable*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::GameButtonActivatable_InputButton& GlobalNamespace::GameButtonActivatable::__cordl_internal_get_inputButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inputButton;
}
constexpr ::GlobalNamespace::GameButtonActivatable_InputButton const& GlobalNamespace::GameButtonActivatable::__cordl_internal_get_inputButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inputButton;
}
constexpr void GlobalNamespace::GameButtonActivatable::__cordl_internal_set_inputButton(::GlobalNamespace::GameButtonActivatable_InputButton  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inputButton = value;
}
constexpr ::UnityW<::GlobalNamespace::GameEntity>& GlobalNamespace::GameButtonActivatable::__cordl_internal_get_gameEntity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameEntity;
}
constexpr ::UnityW<::GlobalNamespace::GameEntity> const& GlobalNamespace::GameButtonActivatable::__cordl_internal_get_gameEntity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameEntity;
}
constexpr void GlobalNamespace::GameButtonActivatable::__cordl_internal_set_gameEntity(::UnityW<::GlobalNamespace::GameEntity>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gameEntity = value;
}
inline bool GlobalNamespace::GameButtonActivatable::CheckInput(::UnityEngine::XR::XRNode  xrNode, float_t  sensitivity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameButtonActivatable*>(),
                        {"CheckInput", {}, {::i2c::type_of<::UnityEngine::XR::XRNode>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, xrNode, sensitivity);
}
inline bool GlobalNamespace::GameButtonActivatable::CheckInput(float_t  sensitivity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameButtonActivatable*>(),
                        {"CheckInput", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, sensitivity);
}
inline void GlobalNamespace::GameButtonActivatable::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameButtonActivatable*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GameButtonActivatable* GlobalNamespace::GameButtonActivatable::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameButtonActivatable*>());
}
/// @brief Convert operator to "::GlobalNamespace::IGameActivatable"
constexpr  GlobalNamespace::GameButtonActivatable::operator ::GlobalNamespace::IGameActivatable*() noexcept {
return static_cast<::GlobalNamespace::IGameActivatable*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGameActivatable"
constexpr ::GlobalNamespace::IGameActivatable* GlobalNamespace::GameButtonActivatable::i___GlobalNamespace__IGameActivatable() noexcept {
return static_cast<::GlobalNamespace::IGameActivatable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameButtonActivatable::GameButtonActivatable()   {
}
