#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRAnchor_FetchOptions.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_FetchOptions_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Result_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_SpaceComponentType_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor_FetchOptions.DiscoverSpaces
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRPlugin_Result (::GlobalNamespace::OVRAnchor_FetchOptions::*)(::by_ref<uint64_t>)>(&::GlobalNamespace::OVRAnchor_FetchOptions::DiscoverSpaces)> {
  constexpr static std::size_t size = 0x8f0;
  constexpr static std::size_t addrs = 0xa5671e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor_FetchOptions>(),
                        {"DiscoverSpaces", {}, {::i2c::type_of<::by_ref<uint64_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor_FetchOptions.GetSpaceComponentType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRPlugin_SpaceComponentType (*)(::System::Type*)>(&::GlobalNamespace::OVRAnchor_FetchOptions::GetSpaceComponentType)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0xa56d20c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor_FetchOptions>(),
                        {"GetSpaceComponentType", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::OVRPlugin_Result GlobalNamespace::OVRAnchor_FetchOptions::DiscoverSpaces(::by_ref<uint64_t>  requestId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor_FetchOptions>(),
                        {"DiscoverSpaces", {}, {::i2c::type_of<::by_ref<uint64_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPlugin_Result>(*this, ___internal_method, requestId);
}
inline ::GlobalNamespace::OVRPlugin_SpaceComponentType GlobalNamespace::OVRAnchor_FetchOptions::GetSpaceComponentType(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor_FetchOptions>(),
                        {"GetSpaceComponentType", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPlugin_SpaceComponentType>(nullptr, ___internal_method, type);
}
// Ctor Parameters [CppParam { name: "SingleUuid", ty: "::System::Nullable_1<::System::Guid>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Uuids", ty: "::System::Collections::Generic::IEnumerable_1<::System::Guid>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "SingleComponentType", ty: "::System::Type*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ComponentTypes", ty: "::System::Collections::Generic::IEnumerable_1<::System::Type*>*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRAnchor_FetchOptions::OVRAnchor_FetchOptions(::System::Nullable_1<::System::Guid>  SingleUuid, ::System::Collections::Generic::IEnumerable_1<::System::Guid>*  Uuids, ::System::Type*  SingleComponentType, ::System::Collections::Generic::IEnumerable_1<::System::Type*>*  ComponentTypes) noexcept  {
this->SingleUuid = SingleUuid;
this->Uuids = Uuids;
this->SingleComponentType = SingleComponentType;
this->ComponentTypes = ComponentTypes;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRAnchor_FetchOptions::OVRAnchor_FetchOptions()   {
}
