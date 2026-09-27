#pragma once
// IWYU pragma private; include "Pathfinding/Examples/MineBotAnimation.hpp"
#include "Pathfinding/zzzz__VersionedMonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Pathfinding/Examples/zzzz__MineBotAnimation_def.hpp"
#include "Pathfinding/zzzz__IAstarAI_def.hpp"
#include "UnityEngine/zzzz__Animator_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::Pathfinding::Examples::MineBotAnimation.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Examples::MineBotAnimation::*)()>(&::Pathfinding::Examples::MineBotAnimation::Awake)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5efa9b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Examples::MineBotAnimation*>(),
                    {::i2c::class_of<::Pathfinding::Examples::MineBotAnimation*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Examples::MineBotAnimation.OnTargetReached
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Examples::MineBotAnimation::*)()>(&::Pathfinding::Examples::MineBotAnimation::OnTargetReached)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x5efaa50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::MineBotAnimation*>(),
                        {"OnTargetReached", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Examples::MineBotAnimation.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Examples::MineBotAnimation::*)()>(&::Pathfinding::Examples::MineBotAnimation::Update)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x5efac0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::MineBotAnimation*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Examples::MineBotAnimation._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Examples::MineBotAnimation::*)()>(&::Pathfinding::Examples::MineBotAnimation::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5efadf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::MineBotAnimation*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Animator>& Pathfinding::Examples::MineBotAnimation::__cordl_internal_get_anim()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anim;
}
constexpr ::UnityW<::UnityEngine::Animator> const& Pathfinding::Examples::MineBotAnimation::__cordl_internal_get_anim() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anim;
}
constexpr void Pathfinding::Examples::MineBotAnimation::__cordl_internal_set_anim(::UnityW<::UnityEngine::Animator>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___anim = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& Pathfinding::Examples::MineBotAnimation::__cordl_internal_get_endOfPathEffect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endOfPathEffect;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Pathfinding::Examples::MineBotAnimation::__cordl_internal_get_endOfPathEffect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endOfPathEffect;
}
constexpr void Pathfinding::Examples::MineBotAnimation::__cordl_internal_set_endOfPathEffect(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___endOfPathEffect = value;
}
constexpr bool& Pathfinding::Examples::MineBotAnimation::__cordl_internal_get_isAtDestination()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isAtDestination;
}
constexpr bool const& Pathfinding::Examples::MineBotAnimation::__cordl_internal_get_isAtDestination() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isAtDestination;
}
constexpr void Pathfinding::Examples::MineBotAnimation::__cordl_internal_set_isAtDestination(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isAtDestination = value;
}
constexpr ::Pathfinding::IAstarAI*& Pathfinding::Examples::MineBotAnimation::__cordl_internal_get_ai()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ai;
}
constexpr ::Pathfinding::IAstarAI* const& Pathfinding::Examples::MineBotAnimation::__cordl_internal_get_ai() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ai;
}
constexpr void Pathfinding::Examples::MineBotAnimation::__cordl_internal_set_ai(::Pathfinding::IAstarAI*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ai = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Pathfinding::Examples::MineBotAnimation::__cordl_internal_get_tr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tr;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Pathfinding::Examples::MineBotAnimation::__cordl_internal_get_tr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tr;
}
constexpr void Pathfinding::Examples::MineBotAnimation::__cordl_internal_set_tr(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tr = value;
}
constexpr ::UnityEngine::Vector3& Pathfinding::Examples::MineBotAnimation::__cordl_internal_get_lastTarget()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastTarget;
}
constexpr ::UnityEngine::Vector3 const& Pathfinding::Examples::MineBotAnimation::__cordl_internal_get_lastTarget() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastTarget;
}
constexpr void Pathfinding::Examples::MineBotAnimation::__cordl_internal_set_lastTarget(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastTarget = value;
}
inline void Pathfinding::Examples::MineBotAnimation::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Examples::MineBotAnimation*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::Examples::MineBotAnimation::OnTargetReached()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::MineBotAnimation*>(),
                        {"OnTargetReached", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::Examples::MineBotAnimation::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::MineBotAnimation*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::Examples::MineBotAnimation::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::MineBotAnimation*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::Examples::MineBotAnimation* Pathfinding::Examples::MineBotAnimation::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::Examples::MineBotAnimation*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::Examples::MineBotAnimation::MineBotAnimation()   {
}
