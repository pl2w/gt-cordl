#pragma once
// IWYU pragma private; include "PlayFab/ProfilesModels/EntityDataObject.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "PlayFab/ProfilesModels/zzzz__EntityDataObject_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::PlayFab::ProfilesModels::EntityDataObject._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ProfilesModels::EntityDataObject::*)()>(&::PlayFab::ProfilesModels::EntityDataObject::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa8406e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ProfilesModels::EntityDataObject*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Object*& PlayFab::ProfilesModels::EntityDataObject::__cordl_internal_get_DataObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DataObject;
}
constexpr ::System::Object* const& PlayFab::ProfilesModels::EntityDataObject::__cordl_internal_get_DataObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DataObject;
}
constexpr void PlayFab::ProfilesModels::EntityDataObject::__cordl_internal_set_DataObject(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DataObject = value;
}
constexpr ::StringW& PlayFab::ProfilesModels::EntityDataObject::__cordl_internal_get_EscapedDataObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EscapedDataObject;
}
constexpr ::StringW const& PlayFab::ProfilesModels::EntityDataObject::__cordl_internal_get_EscapedDataObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EscapedDataObject;
}
constexpr void PlayFab::ProfilesModels::EntityDataObject::__cordl_internal_set_EscapedDataObject(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___EscapedDataObject = value;
}
constexpr ::StringW& PlayFab::ProfilesModels::EntityDataObject::__cordl_internal_get_ObjectName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ObjectName;
}
constexpr ::StringW const& PlayFab::ProfilesModels::EntityDataObject::__cordl_internal_get_ObjectName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ObjectName;
}
constexpr void PlayFab::ProfilesModels::EntityDataObject::__cordl_internal_set_ObjectName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ObjectName = value;
}
inline void PlayFab::ProfilesModels::EntityDataObject::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ProfilesModels::EntityDataObject*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ProfilesModels::EntityDataObject* PlayFab::ProfilesModels::EntityDataObject::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ProfilesModels::EntityDataObject*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ProfilesModels::EntityDataObject::EntityDataObject()   {
}
