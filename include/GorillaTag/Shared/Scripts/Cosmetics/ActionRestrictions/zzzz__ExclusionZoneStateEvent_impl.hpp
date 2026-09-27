#pragma once
// IWYU pragma private; include "GorillaTag/Shared/Scripts/Cosmetics/ActionRestrictions/ExclusionZoneStateEvent.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GorillaTag/Shared/Scripts/Cosmetics/ActionRestrictions/zzzz__ExclusionZoneStateEvent_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
//  Writing Method size for method: ::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::ExclusionZoneStateEvent.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::ExclusionZoneStateEvent::*)(::GlobalNamespace::VRRig*)>(&::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::ExclusionZoneStateEvent::Invoke)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5d4e79c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::ExclusionZoneStateEvent*>(),
                        {"Invoke", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::ExclusionZoneStateEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::ExclusionZoneStateEvent::*)()>(&::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::ExclusionZoneStateEvent::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d4e828;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::ExclusionZoneStateEvent*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Events::UnityEvent*& GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::ExclusionZoneStateEvent::__cordl_internal_get_OnNormal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnNormal;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::ExclusionZoneStateEvent::__cordl_internal_get_OnNormal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnNormal;
}
constexpr void GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::ExclusionZoneStateEvent::__cordl_internal_set_OnNormal(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnNormal = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::ExclusionZoneStateEvent::__cordl_internal_get_OnRestricted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnRestricted;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::ExclusionZoneStateEvent::__cordl_internal_get_OnRestricted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnRestricted;
}
constexpr void GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::ExclusionZoneStateEvent::__cordl_internal_set_OnRestricted(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnRestricted = value;
}
inline void GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::ExclusionZoneStateEvent::Invoke(::GlobalNamespace::VRRig*  vrRig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::ExclusionZoneStateEvent*>(),
                        {"Invoke", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, vrRig);
}
inline void GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::ExclusionZoneStateEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::ExclusionZoneStateEvent*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::ExclusionZoneStateEvent* GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::ExclusionZoneStateEvent::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::ExclusionZoneStateEvent*>());
}
// Ctor Parameters []
constexpr ::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::ExclusionZoneStateEvent::ExclusionZoneStateEvent()   {
}
