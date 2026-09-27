#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRColocationSession_Data.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "GlobalNamespace/zzzz__OVRColocationSession_Data_def.hpp"
#include "System/zzzz__Guid_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRColocationSession_Data.get_AdvertisementUuid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Guid (::GlobalNamespace::OVRColocationSession_Data::*)()>(&::GlobalNamespace::OVRColocationSession_Data::get_AdvertisementUuid)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa582b0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRColocationSession_Data>(),
                        {"get_AdvertisementUuid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRColocationSession_Data.set_AdvertisementUuid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRColocationSession_Data::*)(::System::Guid)>(&::GlobalNamespace::OVRColocationSession_Data::set_AdvertisementUuid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa582b18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRColocationSession_Data>(),
                        {"set_AdvertisementUuid", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRColocationSession_Data.get_Metadata
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::GlobalNamespace::OVRColocationSession_Data::*)()>(&::GlobalNamespace::OVRColocationSession_Data::get_Metadata)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa582b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRColocationSession_Data>(),
                        {"get_Metadata", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRColocationSession_Data.set_Metadata
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRColocationSession_Data::*)(::ArrayW<uint8_t>)>(&::GlobalNamespace::OVRColocationSession_Data::set_Metadata)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa582b28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRColocationSession_Data>(),
                        {"set_Metadata", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::Guid GlobalNamespace::OVRColocationSession_Data::get_AdvertisementUuid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRColocationSession_Data>(),
                        {"get_AdvertisementUuid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Guid>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRColocationSession_Data::set_AdvertisementUuid(::System::Guid  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRColocationSession_Data>(),
                        {"set_AdvertisementUuid", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::ArrayW<uint8_t> GlobalNamespace::OVRColocationSession_Data::get_Metadata()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRColocationSession_Data>(),
                        {"get_Metadata", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRColocationSession_Data::set_Metadata(::ArrayW<uint8_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRColocationSession_Data>(),
                        {"set_Metadata", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_AdvertisementUuid_k__BackingField", ty: "::System::Guid", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_Metadata_k__BackingField", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRColocationSession_Data::OVRColocationSession_Data(::System::Guid  _AdvertisementUuid_k__BackingField, ::ArrayW<uint8_t>  _Metadata_k__BackingField) noexcept  {
this->_AdvertisementUuid_k__BackingField = _AdvertisementUuid_k__BackingField;
this->_Metadata_k__BackingField = _Metadata_k__BackingField;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRColocationSession_Data::OVRColocationSession_Data()   {
}
