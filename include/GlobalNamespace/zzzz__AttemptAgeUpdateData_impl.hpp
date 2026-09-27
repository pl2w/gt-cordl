#pragma once
// IWYU pragma private; include "GlobalNamespace/AttemptAgeUpdateData.hpp"
#include "GlobalNamespace/zzzz__SessionStatus_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__AttemptAgeUpdateData_def.hpp"
#include "GlobalNamespace/zzzz__SessionStatus_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AttemptAgeUpdateData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AttemptAgeUpdateData::*)(::GlobalNamespace::SessionStatus)>(&::GlobalNamespace::AttemptAgeUpdateData::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5a257a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AttemptAgeUpdateData*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::SessionStatus>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::SessionStatus& GlobalNamespace::AttemptAgeUpdateData::__cordl_internal_get_status()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___status;
}
constexpr ::GlobalNamespace::SessionStatus const& GlobalNamespace::AttemptAgeUpdateData::__cordl_internal_get_status() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___status;
}
constexpr void GlobalNamespace::AttemptAgeUpdateData::__cordl_internal_set_status(::GlobalNamespace::SessionStatus  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___status = value;
}
inline void GlobalNamespace::AttemptAgeUpdateData::_ctor(::GlobalNamespace::SessionStatus  status)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AttemptAgeUpdateData*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::SessionStatus>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, status);
}
inline ::GlobalNamespace::AttemptAgeUpdateData* GlobalNamespace::AttemptAgeUpdateData::New_ctor(::GlobalNamespace::SessionStatus  status)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AttemptAgeUpdateData*>(status));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AttemptAgeUpdateData::AttemptAgeUpdateData()   {
}
