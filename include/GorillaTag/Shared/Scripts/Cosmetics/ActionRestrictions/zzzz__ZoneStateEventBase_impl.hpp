#pragma once
// IWYU pragma private; include "GorillaTag/Shared/Scripts/Cosmetics/ActionRestrictions/ZoneStateEventBase.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GorillaTag/Shared/Scripts/Cosmetics/ActionRestrictions/zzzz__ZoneStateEventBase_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
//  Writing Method size for method: ::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::ZoneStateEventBase.IsRestricted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::ZoneStateEventBase::*)(::GlobalNamespace::VRRig*)>(&::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::ZoneStateEventBase::IsRestricted)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5d4e740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::ZoneStateEventBase*>(),
                        {"IsRestricted", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::ZoneStateEventBase._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::ZoneStateEventBase::*)()>(&::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::ZoneStateEventBase::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d4e794;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::ZoneStateEventBase*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline bool GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::ZoneStateEventBase::IsRestricted(::GlobalNamespace::VRRig*  vrRig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::ZoneStateEventBase*>(),
                        {"IsRestricted", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, vrRig);
}
inline void GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::ZoneStateEventBase::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::ZoneStateEventBase*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::ZoneStateEventBase* GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::ZoneStateEventBase::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::ZoneStateEventBase*>());
}
// Ctor Parameters []
constexpr ::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::ZoneStateEventBase::ZoneStateEventBase()   {
}
