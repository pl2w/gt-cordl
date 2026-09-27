#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/DiceHoldable.hpp"
#include "GlobalNamespace/zzzz__TransferrableObject_impl.hpp"
#include "GorillaTag/Cosmetics/zzzz__DiceHoldable_def.hpp"
#include "GlobalNamespace/zzzz__DropZone_def.hpp"
#include "GlobalNamespace/zzzz__InteractionPoint_def.hpp"
#include "GlobalNamespace/zzzz__PhotonMessageInfoWrapped_def.hpp"
#include "GlobalNamespace/zzzz__RubberDuckEvents_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__DicePhysics_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GorillaTag::Cosmetics::DiceHoldable.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::DiceHoldable::*)()>(&::GorillaTag::Cosmetics::DiceHoldable::OnEnable)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x5d60e20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::Cosmetics::DiceHoldable*>(),
                    {::i2c::class_of<::GorillaTag::Cosmetics::DiceHoldable*>(), 35}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::DiceHoldable.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::DiceHoldable::*)()>(&::GorillaTag::Cosmetics::DiceHoldable::OnDisable)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x5d610e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::Cosmetics::DiceHoldable*>(),
                    {::i2c::class_of<::GorillaTag::Cosmetics::DiceHoldable*>(), 37}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::DiceHoldable.OnDiceEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::DiceHoldable::*)(int32_t, int32_t, ::ArrayW<::System::Object*>, ::GlobalNamespace::PhotonMessageInfoWrapped)>(&::GorillaTag::Cosmetics::DiceHoldable::OnDiceEvent)> {
  constexpr static std::size_t size = 0x608;
  constexpr static std::size_t addrs = 0x5d61244;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::DiceHoldable*>(),
                        {"OnDiceEvent", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::DiceHoldable.OnGrab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::DiceHoldable::*)(::GlobalNamespace::InteractionPoint*, ::UnityEngine::GameObject*)>(&::GorillaTag::Cosmetics::DiceHoldable::OnGrab)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x5d61ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::Cosmetics::DiceHoldable*>(),
                    {::i2c::class_of<::GorillaTag::Cosmetics::DiceHoldable*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::DiceHoldable.OnRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::DiceHoldable::*)(::GlobalNamespace::DropZone*, ::UnityEngine::GameObject*)>(&::GorillaTag::Cosmetics::DiceHoldable::OnRelease)> {
  constexpr static std::size_t size = 0x570;
  constexpr static std::size_t addrs = 0x5d61de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::Cosmetics::DiceHoldable*>(),
                    {::i2c::class_of<::GorillaTag::Cosmetics::DiceHoldable*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::DiceHoldable.ThrowDiceLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::DiceHoldable::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, int32_t, double_t)>(&::GorillaTag::Cosmetics::DiceHoldable::ThrowDiceLocal)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5d6184c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::DiceHoldable*>(),
                        {"ThrowDiceLocal", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::DiceHoldable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::DiceHoldable::*)()>(&::GorillaTag::Cosmetics::DiceHoldable::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5d62630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::DiceHoldable*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GorillaTag::Cosmetics::DicePhysics>& GorillaTag::Cosmetics::DiceHoldable::__cordl_internal_get_dicePhysics()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dicePhysics;
}
constexpr ::UnityW<::GorillaTag::Cosmetics::DicePhysics> const& GorillaTag::Cosmetics::DiceHoldable::__cordl_internal_get_dicePhysics() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dicePhysics;
}
constexpr void GorillaTag::Cosmetics::DiceHoldable::__cordl_internal_set_dicePhysics(::UnityW<::GorillaTag::Cosmetics::DicePhysics>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dicePhysics = value;
}
constexpr ::UnityW<::GlobalNamespace::RubberDuckEvents>& GorillaTag::Cosmetics::DiceHoldable::__cordl_internal_get__events()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____events;
}
constexpr ::UnityW<::GlobalNamespace::RubberDuckEvents> const& GorillaTag::Cosmetics::DiceHoldable::__cordl_internal_get__events() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____events;
}
constexpr void GorillaTag::Cosmetics::DiceHoldable::__cordl_internal_set__events(::UnityW<::GlobalNamespace::RubberDuckEvents>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____events = value;
}
inline void GorillaTag::Cosmetics::DiceHoldable::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::Cosmetics::DiceHoldable*>(), 35}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::DiceHoldable::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::Cosmetics::DiceHoldable*>(), 37}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::DiceHoldable::OnDiceEvent(int32_t  sender, int32_t  target, ::ArrayW<::System::Object*>  args, ::GlobalNamespace::PhotonMessageInfoWrapped  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::DiceHoldable*>(),
                        {"OnDiceEvent", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender, target, args, info);
}
inline void GorillaTag::Cosmetics::DiceHoldable::OnGrab(::GlobalNamespace::InteractionPoint*  pointGrabbed, ::UnityEngine::GameObject*  grabbingHand)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::Cosmetics::DiceHoldable*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pointGrabbed, grabbingHand);
}
inline bool GorillaTag::Cosmetics::DiceHoldable::OnRelease(::GlobalNamespace::DropZone*  zoneReleased, ::UnityEngine::GameObject*  releasingHand)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::Cosmetics::DiceHoldable*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, zoneReleased, releasingHand);
}
inline void GorillaTag::Cosmetics::DiceHoldable::ThrowDiceLocal(::UnityEngine::Vector3  startPosition, ::UnityEngine::Vector3  throwVelocity, float_t  playerScale, int32_t  landingSide, double_t  startTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::DiceHoldable*>(),
                        {"ThrowDiceLocal", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, startPosition, throwVelocity, playerScale, landingSide, startTime);
}
inline void GorillaTag::Cosmetics::DiceHoldable::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::DiceHoldable*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::Cosmetics::DiceHoldable* GorillaTag::Cosmetics::DiceHoldable::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Cosmetics::DiceHoldable*>());
}
// Ctor Parameters []
constexpr ::GorillaTag::Cosmetics::DiceHoldable::DiceHoldable()   {
}
