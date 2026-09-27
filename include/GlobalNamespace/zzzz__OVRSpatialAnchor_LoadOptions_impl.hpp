#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRSpatialAnchor_LoadOptions.hpp"
#include "GlobalNamespace/zzzz__OVRSpace_StorageLocation_impl.hpp"
#include "GlobalNamespace/zzzz__OVRSpatialAnchor_LoadOptions_def.hpp"
#include "GlobalNamespace/zzzz__OVRSpaceQuery_Options_def.hpp"
#include "GlobalNamespace/zzzz__OVRSpace_StorageLocation_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/zzzz__Guid_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor_LoadOptions.get_StorageLocation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRSpace_StorageLocation (::GlobalNamespace::OVRSpatialAnchor_LoadOptions::*)()>(&::GlobalNamespace::OVRSpatialAnchor_LoadOptions::get_StorageLocation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa648180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor_LoadOptions>(),
                        {"get_StorageLocation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor_LoadOptions.set_StorageLocation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSpatialAnchor_LoadOptions::*)(::GlobalNamespace::OVRSpace_StorageLocation)>(&::GlobalNamespace::OVRSpatialAnchor_LoadOptions::set_StorageLocation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa648188;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor_LoadOptions>(),
                        {"set_StorageLocation", {}, {::i2c::type_of<::GlobalNamespace::OVRSpace_StorageLocation>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor_LoadOptions.get_MaxAnchorCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::OVRSpatialAnchor_LoadOptions::*)()>(&::GlobalNamespace::OVRSpatialAnchor_LoadOptions::get_MaxAnchorCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa648190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor_LoadOptions>(),
                        {"get_MaxAnchorCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor_LoadOptions.set_MaxAnchorCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSpatialAnchor_LoadOptions::*)(int32_t)>(&::GlobalNamespace::OVRSpatialAnchor_LoadOptions::set_MaxAnchorCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa648198;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor_LoadOptions>(),
                        {"set_MaxAnchorCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor_LoadOptions.get_Timeout
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::GlobalNamespace::OVRSpatialAnchor_LoadOptions::*)()>(&::GlobalNamespace::OVRSpatialAnchor_LoadOptions::get_Timeout)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6481a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor_LoadOptions>(),
                        {"get_Timeout", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor_LoadOptions.set_Timeout
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSpatialAnchor_LoadOptions::*)(double_t)>(&::GlobalNamespace::OVRSpatialAnchor_LoadOptions::set_Timeout)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6481a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor_LoadOptions>(),
                        {"set_Timeout", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor_LoadOptions.get_Uuids
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::System::Guid>* (::GlobalNamespace::OVRSpatialAnchor_LoadOptions::*)()>(&::GlobalNamespace::OVRSpatialAnchor_LoadOptions::get_Uuids)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6481b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor_LoadOptions>(),
                        {"get_Uuids", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor_LoadOptions.set_Uuids
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSpatialAnchor_LoadOptions::*)(::System::Collections::Generic::IReadOnlyList_1<::System::Guid>*)>(&::GlobalNamespace::OVRSpatialAnchor_LoadOptions::set_Uuids)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0xa6481b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor_LoadOptions>(),
                        {"set_Uuids", {}, {::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::System::Guid>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor_LoadOptions.ToQueryOptions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRSpaceQuery_Options (::GlobalNamespace::OVRSpatialAnchor_LoadOptions::*)()>(&::GlobalNamespace::OVRSpatialAnchor_LoadOptions::ToQueryOptions)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa646d84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor_LoadOptions>(),
                        {"ToQueryOptions", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::OVRSpace_StorageLocation GlobalNamespace::OVRSpatialAnchor_LoadOptions::get_StorageLocation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor_LoadOptions>(),
                        {"get_StorageLocation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRSpace_StorageLocation>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRSpatialAnchor_LoadOptions::set_StorageLocation(::GlobalNamespace::OVRSpace_StorageLocation  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor_LoadOptions>(),
                        {"set_StorageLocation", {}, {::i2c::type_of<::GlobalNamespace::OVRSpace_StorageLocation>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int32_t GlobalNamespace::OVRSpatialAnchor_LoadOptions::get_MaxAnchorCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor_LoadOptions>(),
                        {"get_MaxAnchorCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRSpatialAnchor_LoadOptions::set_MaxAnchorCount(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor_LoadOptions>(),
                        {"set_MaxAnchorCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline double_t GlobalNamespace::OVRSpatialAnchor_LoadOptions::get_Timeout()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor_LoadOptions>(),
                        {"get_Timeout", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRSpatialAnchor_LoadOptions::set_Timeout(double_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor_LoadOptions>(),
                        {"set_Timeout", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::System::Collections::Generic::IReadOnlyList_1<::System::Guid>* GlobalNamespace::OVRSpatialAnchor_LoadOptions::get_Uuids()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor_LoadOptions>(),
                        {"get_Uuids", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::System::Guid>*>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRSpatialAnchor_LoadOptions::set_Uuids(::System::Collections::Generic::IReadOnlyList_1<::System::Guid>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor_LoadOptions>(),
                        {"set_Uuids", {}, {::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::System::Guid>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::GlobalNamespace::OVRSpaceQuery_Options GlobalNamespace::OVRSpatialAnchor_LoadOptions::ToQueryOptions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor_LoadOptions>(),
                        {"ToQueryOptions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRSpaceQuery_Options>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_StorageLocation_k__BackingField", ty: "::GlobalNamespace::OVRSpace_StorageLocation", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_MaxAnchorCount_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_Timeout_k__BackingField", ty: "double_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_uuids", ty: "::System::Collections::Generic::IReadOnlyList_1<::System::Guid>*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRSpatialAnchor_LoadOptions::OVRSpatialAnchor_LoadOptions(::GlobalNamespace::OVRSpace_StorageLocation  _StorageLocation_k__BackingField, int32_t  _MaxAnchorCount_k__BackingField, double_t  _Timeout_k__BackingField, ::System::Collections::Generic::IReadOnlyList_1<::System::Guid>*  _uuids) noexcept  {
this->_StorageLocation_k__BackingField = _StorageLocation_k__BackingField;
this->_MaxAnchorCount_k__BackingField = _MaxAnchorCount_k__BackingField;
this->_Timeout_k__BackingField = _Timeout_k__BackingField;
this->_uuids = _uuids;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRSpatialAnchor_LoadOptions::OVRSpatialAnchor_LoadOptions()   {
}
