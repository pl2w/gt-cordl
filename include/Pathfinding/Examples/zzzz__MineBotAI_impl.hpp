#pragma once
// IWYU pragma private; include "Pathfinding/Examples/MineBotAI.hpp"
#include "Pathfinding/zzzz__AIPath_impl.hpp"
#include "Pathfinding/Examples/zzzz__MineBotAI_def.hpp"
#include "UnityEngine/zzzz__Animation_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::Pathfinding::Examples::MineBotAI._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Examples::MineBotAI::*)()>(&::Pathfinding::Examples::MineBotAI::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5efa950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::MineBotAI*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Animation>& Pathfinding::Examples::MineBotAI::__cordl_internal_get_anim()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anim;
}
constexpr ::UnityW<::UnityEngine::Animation> const& Pathfinding::Examples::MineBotAI::__cordl_internal_get_anim() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anim;
}
constexpr void Pathfinding::Examples::MineBotAI::__cordl_internal_set_anim(::UnityW<::UnityEngine::Animation>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___anim = value;
}
constexpr float_t& Pathfinding::Examples::MineBotAI::__cordl_internal_get_sleepVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sleepVelocity;
}
constexpr float_t const& Pathfinding::Examples::MineBotAI::__cordl_internal_get_sleepVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sleepVelocity;
}
constexpr void Pathfinding::Examples::MineBotAI::__cordl_internal_set_sleepVelocity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sleepVelocity = value;
}
constexpr float_t& Pathfinding::Examples::MineBotAI::__cordl_internal_get_animationSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animationSpeed;
}
constexpr float_t const& Pathfinding::Examples::MineBotAI::__cordl_internal_get_animationSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animationSpeed;
}
constexpr void Pathfinding::Examples::MineBotAI::__cordl_internal_set_animationSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___animationSpeed = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& Pathfinding::Examples::MineBotAI::__cordl_internal_get_endOfPathEffect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endOfPathEffect;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Pathfinding::Examples::MineBotAI::__cordl_internal_get_endOfPathEffect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endOfPathEffect;
}
constexpr void Pathfinding::Examples::MineBotAI::__cordl_internal_set_endOfPathEffect(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___endOfPathEffect = value;
}
inline void Pathfinding::Examples::MineBotAI::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::MineBotAI*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::Examples::MineBotAI* Pathfinding::Examples::MineBotAI::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::Examples::MineBotAI*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::Examples::MineBotAI::MineBotAI()   {
}
