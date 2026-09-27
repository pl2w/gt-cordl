#pragma once
// IWYU pragma private; include "GorillaTag/Shared/Scripts/Cosmetics/ActionRestrictions/CosmeticExclusionZoneRegistry.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GorillaTag/Shared/Scripts/Cosmetics/ActionRestrictions/zzzz__CosmeticExclusionZoneRegistry_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
//  Writing Method size for method: ::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionZoneRegistry.Enter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::VRRig*)>(&::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionZoneRegistry::Enter)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5d4e340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionZoneRegistry*>(),
                        {"Enter", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionZoneRegistry.Exit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::VRRig*)>(&::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionZoneRegistry::Exit)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5d4e4cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionZoneRegistry*>(),
                        {"Exit", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionZoneRegistry.IsRestricted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::VRRig*)>(&::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionZoneRegistry::IsRestricted)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5d4dcb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionZoneRegistry*>(),
                        {"IsRestricted", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionZoneRegistry.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionZoneRegistry::Reset)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5d4e598;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionZoneRegistry*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionZoneRegistry::setStaticF_restrictedRigs(::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::VRRig>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::VRRig>>*, "restrictedRigs", ::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionZoneRegistry*>(std::forward<::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::VRRig>>*>(value));
}
inline ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::VRRig>>* GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionZoneRegistry::getStaticF_restrictedRigs()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::VRRig>>*, "restrictedRigs", ::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionZoneRegistry*>();
}
inline void GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionZoneRegistry::Enter(::GlobalNamespace::VRRig*  rig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionZoneRegistry*>(),
                        {"Enter", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, rig);
}
inline void GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionZoneRegistry::Exit(::GlobalNamespace::VRRig*  rig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionZoneRegistry*>(),
                        {"Exit", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, rig);
}
inline bool GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionZoneRegistry::IsRestricted(::GlobalNamespace::VRRig*  rig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionZoneRegistry*>(),
                        {"IsRestricted", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, rig);
}
inline void GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionZoneRegistry::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionZoneRegistry*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionZoneRegistry::CosmeticExclusionZoneRegistry()   {
}
