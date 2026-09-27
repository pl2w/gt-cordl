#pragma once
// IWYU pragma private; include "GorillaTag/Shared/Scripts/Cosmetics/ActionRestrictions/CosmeticExclusionEventGate.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaTag/Shared/Scripts/Cosmetics/ActionRestrictions/zzzz__CosmeticExclusionEventGate_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionEventGate.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionEventGate::*)()>(&::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionEventGate::Awake)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5d4db04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionEventGate*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionEventGate.InvokeEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionEventGate::*)()>(&::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionEventGate::InvokeEvent)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5d4db5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionEventGate*>(),
                        {"InvokeEvent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionEventGate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionEventGate::*)()>(&::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionEventGate::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d4dcac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionEventGate*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionEventGate::__cordl_internal_get_effectSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___effectSource;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionEventGate::__cordl_internal_get_effectSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___effectSource;
}
constexpr void GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionEventGate::__cordl_internal_set_effectSource(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___effectSource = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionEventGate::__cordl_internal_get_onNormal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onNormal;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionEventGate::__cordl_internal_get_onNormal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onNormal;
}
constexpr void GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionEventGate::__cordl_internal_set_onNormal(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onNormal = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionEventGate::__cordl_internal_get_onRestricted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onRestricted;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionEventGate::__cordl_internal_get_onRestricted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onRestricted;
}
constexpr void GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionEventGate::__cordl_internal_set_onRestricted(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onRestricted = value;
}
constexpr ::UnityW<::GlobalNamespace::VRRig>& GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionEventGate::__cordl_internal_get_ownerRig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ownerRig;
}
constexpr ::UnityW<::GlobalNamespace::VRRig> const& GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionEventGate::__cordl_internal_get_ownerRig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ownerRig;
}
constexpr void GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionEventGate::__cordl_internal_set_ownerRig(::UnityW<::GlobalNamespace::VRRig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ownerRig = value;
}
inline void GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionEventGate::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionEventGate*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionEventGate::InvokeEvent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionEventGate*>(),
                        {"InvokeEvent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionEventGate::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionEventGate*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionEventGate* GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionEventGate::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionEventGate*>());
}
// Ctor Parameters []
constexpr ::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionEventGate::CosmeticExclusionEventGate()   {
}
