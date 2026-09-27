#pragma once
// IWYU pragma private; include "GlobalNamespace/GetRequirementsResponse.hpp"
#include "KID/Model/zzzz__GetAgeGateRequirementsResponse_impl.hpp"
#include "GlobalNamespace/zzzz__GetRequirementsResponse_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GetRequirementsResponse.get_PlatformMinimumAge
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GetRequirementsResponse::*)()>(&::GlobalNamespace::GetRequirementsResponse::get_PlatformMinimumAge)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a262b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GetRequirementsResponse*>(),
                        {"get_PlatformMinimumAge", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GetRequirementsResponse.set_PlatformMinimumAge
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GetRequirementsResponse::*)(int32_t)>(&::GlobalNamespace::GetRequirementsResponse::set_PlatformMinimumAge)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a262bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GetRequirementsResponse*>(),
                        {"set_PlatformMinimumAge", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GetRequirementsResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GetRequirementsResponse::*)()>(&::GlobalNamespace::GetRequirementsResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a262c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GetRequirementsResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::GetRequirementsResponse::__cordl_internal_get__PlatformMinimumAge_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PlatformMinimumAge_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::GetRequirementsResponse::__cordl_internal_get__PlatformMinimumAge_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PlatformMinimumAge_k__BackingField;
}
constexpr void GlobalNamespace::GetRequirementsResponse::__cordl_internal_set__PlatformMinimumAge_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____PlatformMinimumAge_k__BackingField = value;
}
inline int32_t GlobalNamespace::GetRequirementsResponse::get_PlatformMinimumAge()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GetRequirementsResponse*>(),
                        {"get_PlatformMinimumAge", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::GetRequirementsResponse::set_PlatformMinimumAge(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GetRequirementsResponse*>(),
                        {"set_PlatformMinimumAge", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GetRequirementsResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GetRequirementsResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GetRequirementsResponse* GlobalNamespace::GetRequirementsResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GetRequirementsResponse*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GetRequirementsResponse::GetRequirementsResponse()   {
}
