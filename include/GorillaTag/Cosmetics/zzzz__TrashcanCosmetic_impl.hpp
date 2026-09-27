#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/TrashcanCosmetic.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaTag/Cosmetics/zzzz__TrashcanCosmetic_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
//  Writing Method size for method: ::GorillaTag::Cosmetics::TrashcanCosmetic.OnBasket
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::TrashcanCosmetic::*)(bool, ::UnityEngine::Collider*)>(&::GorillaTag::Cosmetics::TrashcanCosmetic::OnBasket)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5d7b420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::TrashcanCosmetic*>(),
                        {"OnBasket", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::TrashcanCosmetic._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::TrashcanCosmetic::*)()>(&::GorillaTag::Cosmetics::TrashcanCosmetic::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5d7b4c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::TrashcanCosmetic*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GorillaTag::Cosmetics::TrashcanCosmetic::__cordl_internal_get_minScoringDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minScoringDistance;
}
constexpr float_t const& GorillaTag::Cosmetics::TrashcanCosmetic::__cordl_internal_get_minScoringDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minScoringDistance;
}
constexpr void GorillaTag::Cosmetics::TrashcanCosmetic::__cordl_internal_set_minScoringDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minScoringDistance = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GorillaTag::Cosmetics::TrashcanCosmetic::__cordl_internal_get_OnScored()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnScored;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GorillaTag::Cosmetics::TrashcanCosmetic::__cordl_internal_get_OnScored() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnScored;
}
constexpr void GorillaTag::Cosmetics::TrashcanCosmetic::__cordl_internal_set_OnScored(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnScored = value;
}
inline void GorillaTag::Cosmetics::TrashcanCosmetic::OnBasket(bool  isLeftHand, ::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::TrashcanCosmetic*>(),
                        {"OnBasket", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isLeftHand, other);
}
inline void GorillaTag::Cosmetics::TrashcanCosmetic::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::TrashcanCosmetic*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::Cosmetics::TrashcanCosmetic* GorillaTag::Cosmetics::TrashcanCosmetic::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Cosmetics::TrashcanCosmetic*>());
}
// Ctor Parameters []
constexpr ::GorillaTag::Cosmetics::TrashcanCosmetic::TrashcanCosmetic()   {
}
