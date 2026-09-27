#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/PickupableVariant.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaTag/Cosmetics/zzzz__PickupableVariant_def.hpp"
#include "GlobalNamespace/zzzz__HoldableObject_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GorillaTag::Cosmetics::PickupableVariant.Release
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::PickupableVariant::*)(::GlobalNamespace::HoldableObject*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t)>(&::GorillaTag::Cosmetics::PickupableVariant::Release)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d7589c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::Cosmetics::PickupableVariant*>(),
                    {::i2c::class_of<::GorillaTag::Cosmetics::PickupableVariant*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::PickupableVariant.Pickup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::PickupableVariant::*)(bool)>(&::GorillaTag::Cosmetics::PickupableVariant::Pickup)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d758a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::Cosmetics::PickupableVariant*>(),
                    {::i2c::class_of<::GorillaTag::Cosmetics::PickupableVariant*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::PickupableVariant.DelayedPickup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::PickupableVariant::*)()>(&::GorillaTag::Cosmetics::PickupableVariant::DelayedPickup)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d758a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::Cosmetics::PickupableVariant*>(),
                    {::i2c::class_of<::GorillaTag::Cosmetics::PickupableVariant*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::PickupableVariant._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::PickupableVariant::*)()>(&::GorillaTag::Cosmetics::PickupableVariant::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d758a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::PickupableVariant*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GorillaTag::Cosmetics::PickupableVariant::Release(::GlobalNamespace::HoldableObject*  holdable, ::UnityEngine::Vector3  startPosition, ::UnityEngine::Vector3  releaseVelocity, float_t  playerScale)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::Cosmetics::PickupableVariant*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, holdable, startPosition, releaseVelocity, playerScale);
}
inline void GorillaTag::Cosmetics::PickupableVariant::Pickup(bool  isAutoPickup)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::Cosmetics::PickupableVariant*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isAutoPickup);
}
inline void GorillaTag::Cosmetics::PickupableVariant::DelayedPickup()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::Cosmetics::PickupableVariant*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::PickupableVariant::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::PickupableVariant*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::Cosmetics::PickupableVariant* GorillaTag::Cosmetics::PickupableVariant::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Cosmetics::PickupableVariant*>());
}
// Ctor Parameters []
constexpr ::GorillaTag::Cosmetics::PickupableVariant::PickupableVariant()   {
}
