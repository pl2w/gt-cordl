#pragma once
// IWYU pragma private; include "GlobalNamespace/ZoneExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__ZoneExtensions_def.hpp"
#include "GlobalNamespace/zzzz__GTZone_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ZoneExtensions.IsAnyPlayerInZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::GTZone)>(&::GlobalNamespace::ZoneExtensions::IsAnyPlayerInZone)> {
  constexpr static std::size_t size = 0x338;
  constexpr static std::size_t addrs = 0x56b8f28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneExtensions*>(),
                        {"IsAnyPlayerInZone", {}, {::i2c::type_of<::GlobalNamespace::GTZone>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ZoneExtensions.IsAnyPlayerInZones
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Collections::Generic::IList_1<::GlobalNamespace::GTZone>*)>(&::GlobalNamespace::ZoneExtensions::IsAnyPlayerInZones)> {
  constexpr static std::size_t size = 0x3bc;
  constexpr static std::size_t addrs = 0x56b9260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneExtensions*>(),
                        {"IsAnyPlayerInZones", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::GlobalNamespace::GTZone>*>()}}
                    )));
    return ___internal_method;
  }
};
inline bool GlobalNamespace::ZoneExtensions::IsAnyPlayerInZone(::GlobalNamespace::GTZone  zone)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneExtensions*>(),
                        {"IsAnyPlayerInZone", {}, {::i2c::type_of<::GlobalNamespace::GTZone>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, zone);
}
inline bool GlobalNamespace::ZoneExtensions::IsAnyPlayerInZones(::System::Collections::Generic::IList_1<::GlobalNamespace::GTZone>*  zones)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneExtensions*>(),
                        {"IsAnyPlayerInZones", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::GlobalNamespace::GTZone>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, zones);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ZoneExtensions::ZoneExtensions()   {
}
