#pragma once
// IWYU pragma private; include "GlobalNamespace/AnimationEventController.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__AnimationEventController_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AnimationEventController.TriggerAttackVFX
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AnimationEventController::*)()>(&::GlobalNamespace::AnimationEventController::TriggerAttackVFX)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5c06dac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnimationEventController*>(),
                        {"TriggerAttackVFX", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AnimationEventController._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AnimationEventController::*)()>(&::GlobalNamespace::AnimationEventController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c06de4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnimationEventController*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::AnimationEventController::__cordl_internal_get_fxAttack()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fxAttack;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::AnimationEventController::__cordl_internal_get_fxAttack() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fxAttack;
}
constexpr void GlobalNamespace::AnimationEventController::__cordl_internal_set_fxAttack(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fxAttack = value;
}
inline void GlobalNamespace::AnimationEventController::TriggerAttackVFX()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnimationEventController*>(),
                        {"TriggerAttackVFX", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AnimationEventController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnimationEventController*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::AnimationEventController* GlobalNamespace::AnimationEventController::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AnimationEventController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AnimationEventController::AnimationEventController()   {
}
