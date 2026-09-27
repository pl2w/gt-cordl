#pragma once
// IWYU pragma private; include "PlayFab/DataModels/SetObjectInfo.hpp"
#include "PlayFab/DataModels/zzzz__OperationTypes_impl.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "PlayFab/DataModels/zzzz__SetObjectInfo_def.hpp"
//  Writing Method size for method: ::PlayFab::DataModels::SetObjectInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::DataModels::SetObjectInfo::*)()>(&::PlayFab::DataModels::SetObjectInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa842ef4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::DataModels::SetObjectInfo*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::DataModels::SetObjectInfo::__cordl_internal_get_ObjectName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ObjectName;
}
constexpr ::StringW const& PlayFab::DataModels::SetObjectInfo::__cordl_internal_get_ObjectName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ObjectName;
}
constexpr void PlayFab::DataModels::SetObjectInfo::__cordl_internal_set_ObjectName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ObjectName = value;
}
constexpr ::StringW& PlayFab::DataModels::SetObjectInfo::__cordl_internal_get_OperationReason()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OperationReason;
}
constexpr ::StringW const& PlayFab::DataModels::SetObjectInfo::__cordl_internal_get_OperationReason() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OperationReason;
}
constexpr void PlayFab::DataModels::SetObjectInfo::__cordl_internal_set_OperationReason(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OperationReason = value;
}
constexpr ::System::Nullable_1<::PlayFab::DataModels::OperationTypes>& PlayFab::DataModels::SetObjectInfo::__cordl_internal_get_SetResult()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SetResult;
}
constexpr ::System::Nullable_1<::PlayFab::DataModels::OperationTypes> const& PlayFab::DataModels::SetObjectInfo::__cordl_internal_get_SetResult() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SetResult;
}
constexpr void PlayFab::DataModels::SetObjectInfo::__cordl_internal_set_SetResult(::System::Nullable_1<::PlayFab::DataModels::OperationTypes>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SetResult = value;
}
inline void PlayFab::DataModels::SetObjectInfo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::DataModels::SetObjectInfo*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::DataModels::SetObjectInfo* PlayFab::DataModels::SetObjectInfo::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::DataModels::SetObjectInfo*>());
}
// Ctor Parameters []
constexpr ::PlayFab::DataModels::SetObjectInfo::SetObjectInfo()   {
}
