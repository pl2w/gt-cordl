#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/DreidelHoldable.hpp"
#include "GlobalNamespace/zzzz__TransferrableObject_impl.hpp"
#include "GorillaTag/Cosmetics/zzzz__DreidelHoldable_def.hpp"
#include "GlobalNamespace/zzzz__DropZone_def.hpp"
#include "GlobalNamespace/zzzz__InteractionPoint_def.hpp"
#include "GlobalNamespace/zzzz__PhotonMessageInfoWrapped_def.hpp"
#include "GlobalNamespace/zzzz__RubberDuckEvents_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__Dreidel_Side_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__Dreidel_Variation_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__Dreidel_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GorillaTag::Cosmetics::DreidelHoldable.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::DreidelHoldable::*)()>(&::GorillaTag::Cosmetics::DreidelHoldable::OnEnable)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x5d70e8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::Cosmetics::DreidelHoldable*>(),
                    {::i2c::class_of<::GorillaTag::Cosmetics::DreidelHoldable*>(), 35}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::DreidelHoldable.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::DreidelHoldable::*)()>(&::GorillaTag::Cosmetics::DreidelHoldable::OnDisable)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5d7115c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::Cosmetics::DreidelHoldable*>(),
                    {::i2c::class_of<::GorillaTag::Cosmetics::DreidelHoldable*>(), 37}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::DreidelHoldable.OnDreidelSpin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::DreidelHoldable::*)(int32_t, int32_t, ::ArrayW<::System::Object*>, ::GlobalNamespace::PhotonMessageInfoWrapped)>(&::GorillaTag::Cosmetics::DreidelHoldable::OnDreidelSpin)> {
  constexpr static std::size_t size = 0x4e0;
  constexpr static std::size_t addrs = 0x5d712a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::DreidelHoldable*>(),
                        {"OnDreidelSpin", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::DreidelHoldable.OnGrab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::DreidelHoldable::*)(::GlobalNamespace::InteractionPoint*, ::UnityEngine::GameObject*)>(&::GorillaTag::Cosmetics::DreidelHoldable::OnGrab)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5d718b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::Cosmetics::DreidelHoldable*>(),
                    {::i2c::class_of<::GorillaTag::Cosmetics::DreidelHoldable*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::DreidelHoldable.OnRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::DreidelHoldable::*)(::GlobalNamespace::DropZone*, ::UnityEngine::GameObject*)>(&::GorillaTag::Cosmetics::DreidelHoldable::OnRelease)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5d71960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::Cosmetics::DreidelHoldable*>(),
                    {::i2c::class_of<::GorillaTag::Cosmetics::DreidelHoldable*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::DreidelHoldable.OnActivate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::DreidelHoldable::*)()>(&::GorillaTag::Cosmetics::DreidelHoldable::OnActivate)> {
  constexpr static std::size_t size = 0x37c;
  constexpr static std::size_t addrs = 0x5d71a0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::Cosmetics::DreidelHoldable*>(),
                    {::i2c::class_of<::GorillaTag::Cosmetics::DreidelHoldable*>(), 62}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::DreidelHoldable.StartSpinLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::DreidelHoldable::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, bool, ::GlobalNamespace::Dreidel_Side, ::GlobalNamespace::Dreidel_Variation, double_t)>(&::GorillaTag::Cosmetics::DreidelHoldable::StartSpinLocal)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x5d71780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::DreidelHoldable*>(),
                        {"StartSpinLocal", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::Dreidel_Side>(), ::i2c::type_of<::GlobalNamespace::Dreidel_Variation>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::DreidelHoldable.DebugSpinDreidel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::DreidelHoldable::*)()>(&::GorillaTag::Cosmetics::DreidelHoldable::DebugSpinDreidel)> {
  constexpr static std::size_t size = 0x620;
  constexpr static std::size_t addrs = 0x5d71d88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::DreidelHoldable*>(),
                        {"DebugSpinDreidel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::DreidelHoldable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::DreidelHoldable::*)()>(&::GorillaTag::Cosmetics::DreidelHoldable::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5d723a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::DreidelHoldable*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GorillaTag::Cosmetics::Dreidel>& GorillaTag::Cosmetics::DreidelHoldable::__cordl_internal_get_dreidelAnimation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dreidelAnimation;
}
constexpr ::UnityW<::GorillaTag::Cosmetics::Dreidel> const& GorillaTag::Cosmetics::DreidelHoldable::__cordl_internal_get_dreidelAnimation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dreidelAnimation;
}
constexpr void GorillaTag::Cosmetics::DreidelHoldable::__cordl_internal_set_dreidelAnimation(::UnityW<::GorillaTag::Cosmetics::Dreidel>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dreidelAnimation = value;
}
constexpr ::UnityW<::GlobalNamespace::RubberDuckEvents>& GorillaTag::Cosmetics::DreidelHoldable::__cordl_internal_get__events()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____events;
}
constexpr ::UnityW<::GlobalNamespace::RubberDuckEvents> const& GorillaTag::Cosmetics::DreidelHoldable::__cordl_internal_get__events() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____events;
}
constexpr void GorillaTag::Cosmetics::DreidelHoldable::__cordl_internal_set__events(::UnityW<::GlobalNamespace::RubberDuckEvents>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____events = value;
}
inline void GorillaTag::Cosmetics::DreidelHoldable::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::Cosmetics::DreidelHoldable*>(), 35}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::DreidelHoldable::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::Cosmetics::DreidelHoldable*>(), 37}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::DreidelHoldable::OnDreidelSpin(int32_t  sender, int32_t  target, ::ArrayW<::System::Object*>  args, ::GlobalNamespace::PhotonMessageInfoWrapped  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::DreidelHoldable*>(),
                        {"OnDreidelSpin", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender, target, args, info);
}
inline void GorillaTag::Cosmetics::DreidelHoldable::OnGrab(::GlobalNamespace::InteractionPoint*  pointGrabbed, ::UnityEngine::GameObject*  grabbingHand)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::Cosmetics::DreidelHoldable*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pointGrabbed, grabbingHand);
}
inline bool GorillaTag::Cosmetics::DreidelHoldable::OnRelease(::GlobalNamespace::DropZone*  zoneReleased, ::UnityEngine::GameObject*  releasingHand)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::Cosmetics::DreidelHoldable*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, zoneReleased, releasingHand);
}
inline void GorillaTag::Cosmetics::DreidelHoldable::OnActivate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::Cosmetics::DreidelHoldable*>(), 62}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::DreidelHoldable::StartSpinLocal(::UnityEngine::Vector3  surfacePoint, ::UnityEngine::Vector3  surfaceNormal, float_t  duration, bool  counterClockwise, ::GlobalNamespace::Dreidel_Side  side, ::GlobalNamespace::Dreidel_Variation  variation, double_t  startTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::DreidelHoldable*>(),
                        {"StartSpinLocal", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::Dreidel_Side>(), ::i2c::type_of<::GlobalNamespace::Dreidel_Variation>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, surfacePoint, surfaceNormal, duration, counterClockwise, side, variation, startTime);
}
inline void GorillaTag::Cosmetics::DreidelHoldable::DebugSpinDreidel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::DreidelHoldable*>(),
                        {"DebugSpinDreidel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::DreidelHoldable::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::DreidelHoldable*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::Cosmetics::DreidelHoldable* GorillaTag::Cosmetics::DreidelHoldable::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Cosmetics::DreidelHoldable*>());
}
// Ctor Parameters []
constexpr ::GorillaTag::Cosmetics::DreidelHoldable::DreidelHoldable()   {
}
