#pragma once
// IWYU pragma private; include "GorillaTag/Shared/Scripts/Cosmetics/ActionRestrictions/CosmeticExclusionZone.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaTag/Shared/Scripts/Cosmetics/ActionRestrictions/zzzz__CosmeticExclusionZone_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
//  Writing Method size for method: ::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionZone.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionZone::*)()>(&::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionZone::Awake)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5d4dfa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionZone*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionZone.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionZone::*)()>(&::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionZone::OnDestroy)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5d4e1a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionZone*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionZone.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionZone::*)(::UnityEngine::Collider*)>(&::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionZone::OnTriggerEnter)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5d4e278;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionZone*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionZone.OnTriggerExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionZone::*)(::UnityEngine::Collider*)>(&::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionZone::OnTriggerExit)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5d4e404;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionZone*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionZone._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionZone::*)()>(&::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionZone::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d4e590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionZone*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Collider>& GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionZone::__cordl_internal_get_zoneCollider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zoneCollider;
}
constexpr ::UnityW<::UnityEngine::Collider> const& GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionZone::__cordl_internal_get_zoneCollider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zoneCollider;
}
constexpr void GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionZone::__cordl_internal_set_zoneCollider(::UnityW<::UnityEngine::Collider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___zoneCollider = value;
}
inline void GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionZone::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionZone*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionZone::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionZone*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionZone::OnTriggerEnter(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionZone*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionZone::OnTriggerExit(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionZone*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionZone::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionZone*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionZone* GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionZone::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionZone*>());
}
// Ctor Parameters []
constexpr ::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionZone::CosmeticExclusionZone()   {
}
