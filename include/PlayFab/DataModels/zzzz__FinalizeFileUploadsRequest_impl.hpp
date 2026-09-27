#pragma once
// IWYU pragma private; include "PlayFab/DataModels/FinalizeFileUploadsRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "PlayFab/DataModels/zzzz__FinalizeFileUploadsRequest_def.hpp"
#include "PlayFab/DataModels/zzzz__EntityKey_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::PlayFab::DataModels::FinalizeFileUploadsRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::DataModels::FinalizeFileUploadsRequest::*)()>(&::PlayFab::DataModels::FinalizeFileUploadsRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa842e94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::DataModels::FinalizeFileUploadsRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::PlayFab::DataModels::EntityKey*& PlayFab::DataModels::FinalizeFileUploadsRequest::__cordl_internal_get_Entity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Entity;
}
constexpr ::PlayFab::DataModels::EntityKey* const& PlayFab::DataModels::FinalizeFileUploadsRequest::__cordl_internal_get_Entity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Entity;
}
constexpr void PlayFab::DataModels::FinalizeFileUploadsRequest::__cordl_internal_set_Entity(::PlayFab::DataModels::EntityKey*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Entity = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& PlayFab::DataModels::FinalizeFileUploadsRequest::__cordl_internal_get_FileNames()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FileNames;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& PlayFab::DataModels::FinalizeFileUploadsRequest::__cordl_internal_get_FileNames() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FileNames;
}
constexpr void PlayFab::DataModels::FinalizeFileUploadsRequest::__cordl_internal_set_FileNames(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FileNames = value;
}
inline void PlayFab::DataModels::FinalizeFileUploadsRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::DataModels::FinalizeFileUploadsRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::DataModels::FinalizeFileUploadsRequest* PlayFab::DataModels::FinalizeFileUploadsRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::DataModels::FinalizeFileUploadsRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::DataModels::FinalizeFileUploadsRequest::FinalizeFileUploadsRequest()   {
}
