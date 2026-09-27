#pragma once
// IWYU pragma private; include "PlayFab/DataModels/ObjectResult.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "PlayFab/DataModels/zzzz__ObjectResult_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::PlayFab::DataModels::ObjectResult._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::DataModels::ObjectResult::*)()>(&::PlayFab::DataModels::ObjectResult::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa842ee4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::DataModels::ObjectResult*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Object*& PlayFab::DataModels::ObjectResult::__cordl_internal_get_DataObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DataObject;
}
constexpr ::System::Object* const& PlayFab::DataModels::ObjectResult::__cordl_internal_get_DataObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DataObject;
}
constexpr void PlayFab::DataModels::ObjectResult::__cordl_internal_set_DataObject(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DataObject = value;
}
constexpr ::StringW& PlayFab::DataModels::ObjectResult::__cordl_internal_get_EscapedDataObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EscapedDataObject;
}
constexpr ::StringW const& PlayFab::DataModels::ObjectResult::__cordl_internal_get_EscapedDataObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EscapedDataObject;
}
constexpr void PlayFab::DataModels::ObjectResult::__cordl_internal_set_EscapedDataObject(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___EscapedDataObject = value;
}
constexpr ::StringW& PlayFab::DataModels::ObjectResult::__cordl_internal_get_ObjectName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ObjectName;
}
constexpr ::StringW const& PlayFab::DataModels::ObjectResult::__cordl_internal_get_ObjectName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ObjectName;
}
constexpr void PlayFab::DataModels::ObjectResult::__cordl_internal_set_ObjectName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ObjectName = value;
}
inline void PlayFab::DataModels::ObjectResult::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::DataModels::ObjectResult*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::DataModels::ObjectResult* PlayFab::DataModels::ObjectResult::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::DataModels::ObjectResult*>());
}
// Ctor Parameters []
constexpr ::PlayFab::DataModels::ObjectResult::ObjectResult()   {
}
