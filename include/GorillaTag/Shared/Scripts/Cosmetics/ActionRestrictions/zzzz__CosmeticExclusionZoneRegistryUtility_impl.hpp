#pragma once
// IWYU pragma private; include "GorillaTag/Shared/Scripts/Cosmetics/ActionRestrictions/CosmeticExclusionZoneRegistryUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GorillaTag/Shared/Scripts/Cosmetics/ActionRestrictions/zzzz__CosmeticExclusionZoneRegistryUtility_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionZoneRegistryUtility.RegisterZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Collider*)>(&::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionZoneRegistryUtility::RegisterZone)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x5d4e044;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionZoneRegistryUtility*>(),
                        {"RegisterZone", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionZoneRegistryUtility.UnregisterZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Collider*)>(&::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionZoneRegistryUtility::UnregisterZone)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5d4e1f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionZoneRegistryUtility*>(),
                        {"UnregisterZone", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionZoneRegistryUtility.IsPositionRestricted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector3)>(&::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionZoneRegistryUtility::IsPositionRestricted)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x5d4de10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionZoneRegistryUtility*>(),
                        {"IsPositionRestricted", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
inline void GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionZoneRegistryUtility::setStaticF_exclusionZones(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*, "exclusionZones", ::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionZoneRegistryUtility*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionZoneRegistryUtility::getStaticF_exclusionZones()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*, "exclusionZones", ::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionZoneRegistryUtility*>();
}
inline void GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionZoneRegistryUtility::RegisterZone(::UnityEngine::Collider*  zone)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionZoneRegistryUtility*>(),
                        {"RegisterZone", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, zone);
}
inline void GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionZoneRegistryUtility::UnregisterZone(::UnityEngine::Collider*  zone)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionZoneRegistryUtility*>(),
                        {"UnregisterZone", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, zone);
}
inline bool GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionZoneRegistryUtility::IsPositionRestricted(::UnityEngine::Vector3  worldPos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionZoneRegistryUtility*>(),
                        {"IsPositionRestricted", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, worldPos);
}
// Ctor Parameters []
constexpr ::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionZoneRegistryUtility::CosmeticExclusionZoneRegistryUtility()   {
}
