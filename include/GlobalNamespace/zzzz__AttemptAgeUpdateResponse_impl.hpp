#pragma once
// IWYU pragma private; include "GlobalNamespace/AttemptAgeUpdateResponse.hpp"
#include "GlobalNamespace/zzzz__SessionStatus_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__AttemptAgeUpdateResponse_def.hpp"
#include "GlobalNamespace/zzzz__SessionStatus_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AttemptAgeUpdateResponse.get_Status
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SessionStatus (::GlobalNamespace::AttemptAgeUpdateResponse::*)()>(&::GlobalNamespace::AttemptAgeUpdateResponse::get_Status)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a261f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AttemptAgeUpdateResponse*>(),
                        {"get_Status", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AttemptAgeUpdateResponse.set_Status
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AttemptAgeUpdateResponse::*)(::GlobalNamespace::SessionStatus)>(&::GlobalNamespace::AttemptAgeUpdateResponse::set_Status)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a26200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AttemptAgeUpdateResponse*>(),
                        {"set_Status", {}, {::i2c::type_of<::GlobalNamespace::SessionStatus>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AttemptAgeUpdateResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AttemptAgeUpdateResponse::*)()>(&::GlobalNamespace::AttemptAgeUpdateResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a26208;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AttemptAgeUpdateResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::SessionStatus& GlobalNamespace::AttemptAgeUpdateResponse::__cordl_internal_get__Status_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Status_k__BackingField;
}
constexpr ::GlobalNamespace::SessionStatus const& GlobalNamespace::AttemptAgeUpdateResponse::__cordl_internal_get__Status_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Status_k__BackingField;
}
constexpr void GlobalNamespace::AttemptAgeUpdateResponse::__cordl_internal_set__Status_k__BackingField(::GlobalNamespace::SessionStatus  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Status_k__BackingField = value;
}
inline ::GlobalNamespace::SessionStatus GlobalNamespace::AttemptAgeUpdateResponse::get_Status()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AttemptAgeUpdateResponse*>(),
                        {"get_Status", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SessionStatus>(this, ___internal_method);
}
inline void GlobalNamespace::AttemptAgeUpdateResponse::set_Status(::GlobalNamespace::SessionStatus  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AttemptAgeUpdateResponse*>(),
                        {"set_Status", {}, {::i2c::type_of<::GlobalNamespace::SessionStatus>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::AttemptAgeUpdateResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AttemptAgeUpdateResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::AttemptAgeUpdateResponse* GlobalNamespace::AttemptAgeUpdateResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AttemptAgeUpdateResponse*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AttemptAgeUpdateResponse::AttemptAgeUpdateResponse()   {
}
