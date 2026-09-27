#pragma once
// IWYU pragma private; include "GorillaTagScripts/Flower.hpp"
#include "GorillaTagScripts/zzzz__Flower_FlowerState_impl.hpp"
#include "UnityEngine/zzzz__GameObject_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaTagScripts/zzzz__Flower_def.hpp"
#include "GlobalNamespace/zzzz__BeePerchPoint_def.hpp"
#include "GorillaTagScripts/zzzz__Flower_FlowerState_def.hpp"
#include "GorillaTagScripts/zzzz__GorillaTimer_def.hpp"
#include "UnityEngine/zzzz__Animator_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
#include "UnityEngine/zzzz__SkinnedMeshRenderer_def.hpp"
//  Writing Method size for method: ::GorillaTagScripts::Flower.get_IsWatered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::Flower::*)()>(&::GorillaTagScripts::Flower::get_IsWatered)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bb941c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Flower*>(),
                        {"get_IsWatered", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Flower.set_IsWatered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Flower::*)(bool)>(&::GorillaTagScripts::Flower::set_IsWatered)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bb9424;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Flower*>(),
                        {"set_IsWatered", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Flower.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Flower::*)()>(&::GorillaTagScripts::Flower::Awake)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x5bb942c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Flower*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Flower.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Flower::*)()>(&::GorillaTagScripts::Flower::OnDestroy)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5bb9614;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Flower*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Flower.WaterFlower
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Flower::*)(bool)>(&::GorillaTagScripts::Flower::WaterFlower)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5bb96b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Flower*>(),
                        {"WaterFlower", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Flower.UpdateFlowerState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Flower::*)(::GlobalNamespace::Flower_FlowerState, bool, bool)>(&::GorillaTagScripts::Flower::UpdateFlowerState)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5bb9728;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Flower*>(),
                        {"UpdateFlowerState", {}, {::i2c::type_of<::GlobalNamespace::Flower_FlowerState>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Flower.LocalUpdateFlowers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Flower::*)(::GlobalNamespace::Flower_FlowerState, bool)>(&::GorillaTagScripts::Flower::LocalUpdateFlowers)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x5bb9850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Flower*>(),
                        {"LocalUpdateFlowers", {}, {::i2c::type_of<::GlobalNamespace::Flower_FlowerState>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Flower.HandleOnFlowerTimerEnded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Flower::*)(::GorillaTagScripts::GorillaTimer*)>(&::GorillaTagScripts::Flower::HandleOnFlowerTimerEnded)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5bb9a90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Flower*>(),
                        {"HandleOnFlowerTimerEnded", {}, {::i2c::type_of<::GorillaTagScripts::GorillaTimer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Flower.ChangeState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Flower::*)(::GlobalNamespace::Flower_FlowerState)>(&::GorillaTagScripts::Flower::ChangeState)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5bb9840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Flower*>(),
                        {"ChangeState", {}, {::i2c::type_of<::GlobalNamespace::Flower_FlowerState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Flower.GetCurrentState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::Flower_FlowerState (::GorillaTagScripts::Flower::*)()>(&::GorillaTagScripts::Flower::GetCurrentState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bb9b58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Flower*>(),
                        {"GetCurrentState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Flower.OnAnimationIsDone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Flower::*)(int32_t)>(&::GorillaTagScripts::Flower::OnAnimationIsDone)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5bb9b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Flower*>(),
                        {"OnAnimationIsDone", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Flower.UpdateVisuals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Flower::*)(bool)>(&::GorillaTagScripts::Flower::UpdateVisuals)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5bb9c10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Flower*>(),
                        {"UpdateVisuals", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Flower.AnimCatch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Flower::*)()>(&::GorillaTagScripts::Flower::AnimCatch)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5bb9c34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Flower*>(),
                        {"AnimCatch", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Flower._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Flower::*)()>(&::GorillaTagScripts::Flower::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bb9ca8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Flower*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Animator>& GorillaTagScripts::Flower::__cordl_internal_get_anim()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anim;
}
constexpr ::UnityW<::UnityEngine::Animator> const& GorillaTagScripts::Flower::__cordl_internal_get_anim() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anim;
}
constexpr void GorillaTagScripts::Flower::__cordl_internal_set_anim(::UnityW<::UnityEngine::Animator>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___anim = value;
}
constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer>& GorillaTagScripts::Flower::__cordl_internal_get_meshRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meshRenderer;
}
constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer> const& GorillaTagScripts::Flower::__cordl_internal_get_meshRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meshRenderer;
}
constexpr void GorillaTagScripts::Flower::__cordl_internal_set_meshRenderer(::UnityW<::UnityEngine::SkinnedMeshRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___meshRenderer = value;
}
constexpr ::UnityW<::GorillaTagScripts::GorillaTimer>& GorillaTagScripts::Flower::__cordl_internal_get_timer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timer;
}
constexpr ::UnityW<::GorillaTagScripts::GorillaTimer> const& GorillaTagScripts::Flower::__cordl_internal_get_timer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timer;
}
constexpr void GorillaTagScripts::Flower::__cordl_internal_set_timer(::UnityW<::GorillaTagScripts::GorillaTimer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timer = value;
}
constexpr ::UnityW<::GlobalNamespace::BeePerchPoint>& GorillaTagScripts::Flower::__cordl_internal_get_perchPoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___perchPoint;
}
constexpr ::UnityW<::GlobalNamespace::BeePerchPoint> const& GorillaTagScripts::Flower::__cordl_internal_get_perchPoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___perchPoint;
}
constexpr void GorillaTagScripts::Flower::__cordl_internal_set_perchPoint(::UnityW<::GlobalNamespace::BeePerchPoint>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___perchPoint = value;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem>& GorillaTagScripts::Flower::__cordl_internal_get_wateredFx()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wateredFx;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem> const& GorillaTagScripts::Flower::__cordl_internal_get_wateredFx() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wateredFx;
}
constexpr void GorillaTagScripts::Flower::__cordl_internal_set_wateredFx(::UnityW<::UnityEngine::ParticleSystem>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wateredFx = value;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem>& GorillaTagScripts::Flower::__cordl_internal_get_sparkleFx()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sparkleFx;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem> const& GorillaTagScripts::Flower::__cordl_internal_get_sparkleFx() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sparkleFx;
}
constexpr void GorillaTagScripts::Flower::__cordl_internal_set_sparkleFx(::UnityW<::UnityEngine::ParticleSystem>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sparkleFx = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GorillaTagScripts::Flower::__cordl_internal_get_meshStatesGameObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meshStatesGameObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GorillaTagScripts::Flower::__cordl_internal_get_meshStatesGameObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meshStatesGameObject;
}
constexpr void GorillaTagScripts::Flower::__cordl_internal_set_meshStatesGameObject(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___meshStatesGameObject = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& GorillaTagScripts::Flower::__cordl_internal_get_meshStates()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meshStates;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& GorillaTagScripts::Flower::__cordl_internal_get_meshStates() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meshStates;
}
constexpr void GorillaTagScripts::Flower::__cordl_internal_set_meshStates(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___meshStates = value;
}
constexpr ::GlobalNamespace::Flower_FlowerState& GorillaTagScripts::Flower::__cordl_internal_get_currentState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentState;
}
constexpr ::GlobalNamespace::Flower_FlowerState const& GorillaTagScripts::Flower::__cordl_internal_get_currentState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentState;
}
constexpr void GorillaTagScripts::Flower::__cordl_internal_set_currentState(::GlobalNamespace::Flower_FlowerState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentState = value;
}
constexpr ::StringW& GorillaTagScripts::Flower::__cordl_internal_get_id()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___id;
}
constexpr ::StringW const& GorillaTagScripts::Flower::__cordl_internal_get_id() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___id;
}
constexpr void GorillaTagScripts::Flower::__cordl_internal_set_id(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___id = value;
}
constexpr bool& GorillaTagScripts::Flower::__cordl_internal_get_shouldUpdateVisuals()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shouldUpdateVisuals;
}
constexpr bool const& GorillaTagScripts::Flower::__cordl_internal_get_shouldUpdateVisuals() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shouldUpdateVisuals;
}
constexpr void GorillaTagScripts::Flower::__cordl_internal_set_shouldUpdateVisuals(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shouldUpdateVisuals = value;
}
constexpr ::GlobalNamespace::Flower_FlowerState& GorillaTagScripts::Flower::__cordl_internal_get_lastState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastState;
}
constexpr ::GlobalNamespace::Flower_FlowerState const& GorillaTagScripts::Flower::__cordl_internal_get_lastState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastState;
}
constexpr void GorillaTagScripts::Flower::__cordl_internal_set_lastState(::GlobalNamespace::Flower_FlowerState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastState = value;
}
constexpr bool& GorillaTagScripts::Flower::__cordl_internal_get__IsWatered_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsWatered_k__BackingField;
}
constexpr bool const& GorillaTagScripts::Flower::__cordl_internal_get__IsWatered_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsWatered_k__BackingField;
}
constexpr void GorillaTagScripts::Flower::__cordl_internal_set__IsWatered_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsWatered_k__BackingField = value;
}
inline void GorillaTagScripts::Flower::setStaticF_healthy_to_middle(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "healthy_to_middle", ::GorillaTagScripts::Flower*>(std::forward<int32_t>(value));
}
inline int32_t GorillaTagScripts::Flower::getStaticF_healthy_to_middle()  {
return ::cordl_internals::getStaticField<int32_t, "healthy_to_middle", ::GorillaTagScripts::Flower*>();
}
inline void GorillaTagScripts::Flower::setStaticF_middle_to_healthy(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "middle_to_healthy", ::GorillaTagScripts::Flower*>(std::forward<int32_t>(value));
}
inline int32_t GorillaTagScripts::Flower::getStaticF_middle_to_healthy()  {
return ::cordl_internals::getStaticField<int32_t, "middle_to_healthy", ::GorillaTagScripts::Flower*>();
}
inline void GorillaTagScripts::Flower::setStaticF_wilted_to_middle(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "wilted_to_middle", ::GorillaTagScripts::Flower*>(std::forward<int32_t>(value));
}
inline int32_t GorillaTagScripts::Flower::getStaticF_wilted_to_middle()  {
return ::cordl_internals::getStaticField<int32_t, "wilted_to_middle", ::GorillaTagScripts::Flower*>();
}
inline void GorillaTagScripts::Flower::setStaticF_middle_to_wilted(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "middle_to_wilted", ::GorillaTagScripts::Flower*>(std::forward<int32_t>(value));
}
inline int32_t GorillaTagScripts::Flower::getStaticF_middle_to_wilted()  {
return ::cordl_internals::getStaticField<int32_t, "middle_to_wilted", ::GorillaTagScripts::Flower*>();
}
inline bool GorillaTagScripts::Flower::get_IsWatered()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Flower*>(),
                        {"get_IsWatered", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaTagScripts::Flower::set_IsWatered(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Flower*>(),
                        {"set_IsWatered", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GorillaTagScripts::Flower::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Flower*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Flower::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Flower*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Flower::WaterFlower(bool  isWatered)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Flower*>(),
                        {"WaterFlower", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isWatered);
}
inline void GorillaTagScripts::Flower::UpdateFlowerState(::GlobalNamespace::Flower_FlowerState  newState, bool  isWatered, bool  updateVisual)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Flower*>(),
                        {"UpdateFlowerState", {}, {::i2c::type_of<::GlobalNamespace::Flower_FlowerState>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState, isWatered, updateVisual);
}
inline void GorillaTagScripts::Flower::LocalUpdateFlowers(::GlobalNamespace::Flower_FlowerState  state, bool  isWatered)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Flower*>(),
                        {"LocalUpdateFlowers", {}, {::i2c::type_of<::GlobalNamespace::Flower_FlowerState>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state, isWatered);
}
inline void GorillaTagScripts::Flower::HandleOnFlowerTimerEnded(::GorillaTagScripts::GorillaTimer*  _timer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Flower*>(),
                        {"HandleOnFlowerTimerEnded", {}, {::i2c::type_of<::GorillaTagScripts::GorillaTimer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _timer);
}
inline void GorillaTagScripts::Flower::ChangeState(::GlobalNamespace::Flower_FlowerState  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Flower*>(),
                        {"ChangeState", {}, {::i2c::type_of<::GlobalNamespace::Flower_FlowerState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline ::GlobalNamespace::Flower_FlowerState GorillaTagScripts::Flower::GetCurrentState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Flower*>(),
                        {"GetCurrentState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::Flower_FlowerState>(this, ___internal_method);
}
inline void GorillaTagScripts::Flower::OnAnimationIsDone(int32_t  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Flower*>(),
                        {"OnAnimationIsDone", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline void GorillaTagScripts::Flower::UpdateVisuals(bool  enable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Flower*>(),
                        {"UpdateVisuals", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, enable);
}
inline void GorillaTagScripts::Flower::AnimCatch()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Flower*>(),
                        {"AnimCatch", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Flower::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Flower*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTagScripts::Flower* GorillaTagScripts::Flower::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::Flower*>());
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::Flower::Flower()   {
}
