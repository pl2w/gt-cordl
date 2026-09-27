#pragma once
// IWYU pragma private; include "PlayFab/SharedModels/HttpResponseObject.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "PlayFab/SharedModels/zzzz__HttpResponseObject_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::PlayFab::SharedModels::HttpResponseObject._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::SharedModels::HttpResponseObject::*)()>(&::PlayFab::SharedModels::HttpResponseObject::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa7dee44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::SharedModels::HttpResponseObject*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& PlayFab::SharedModels::HttpResponseObject::__cordl_internal_get_code()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___code;
}
constexpr int32_t const& PlayFab::SharedModels::HttpResponseObject::__cordl_internal_get_code() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___code;
}
constexpr void PlayFab::SharedModels::HttpResponseObject::__cordl_internal_set_code(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___code = value;
}
constexpr ::StringW& PlayFab::SharedModels::HttpResponseObject::__cordl_internal_get_status()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___status;
}
constexpr ::StringW const& PlayFab::SharedModels::HttpResponseObject::__cordl_internal_get_status() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___status;
}
constexpr void PlayFab::SharedModels::HttpResponseObject::__cordl_internal_set_status(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___status = value;
}
constexpr ::System::Object*& PlayFab::SharedModels::HttpResponseObject::__cordl_internal_get_data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr ::System::Object* const& PlayFab::SharedModels::HttpResponseObject::__cordl_internal_get_data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr void PlayFab::SharedModels::HttpResponseObject::__cordl_internal_set_data(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___data = value;
}
inline void PlayFab::SharedModels::HttpResponseObject::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::SharedModels::HttpResponseObject*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::SharedModels::HttpResponseObject* PlayFab::SharedModels::HttpResponseObject::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::SharedModels::HttpResponseObject*>());
}
// Ctor Parameters []
constexpr ::PlayFab::SharedModels::HttpResponseObject::HttpResponseObject()   {
}
