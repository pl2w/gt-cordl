#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GetSegmentResult.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "PlayFab/ClientModels/zzzz__GetSegmentResult_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::GetSegmentResult._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::GetSegmentResult::*)()>(&::PlayFab::ClientModels::GetSegmentResult::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84de10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GetSegmentResult*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::ClientModels::GetSegmentResult::__cordl_internal_get_ABTestParent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ABTestParent;
}
constexpr ::StringW const& PlayFab::ClientModels::GetSegmentResult::__cordl_internal_get_ABTestParent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ABTestParent;
}
constexpr void PlayFab::ClientModels::GetSegmentResult::__cordl_internal_set_ABTestParent(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ABTestParent = value;
}
constexpr ::StringW& PlayFab::ClientModels::GetSegmentResult::__cordl_internal_get_Id()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Id;
}
constexpr ::StringW const& PlayFab::ClientModels::GetSegmentResult::__cordl_internal_get_Id() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Id;
}
constexpr void PlayFab::ClientModels::GetSegmentResult::__cordl_internal_set_Id(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Id = value;
}
constexpr ::StringW& PlayFab::ClientModels::GetSegmentResult::__cordl_internal_get_Name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Name;
}
constexpr ::StringW const& PlayFab::ClientModels::GetSegmentResult::__cordl_internal_get_Name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Name;
}
constexpr void PlayFab::ClientModels::GetSegmentResult::__cordl_internal_set_Name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Name = value;
}
inline void PlayFab::ClientModels::GetSegmentResult::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GetSegmentResult*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::GetSegmentResult* PlayFab::ClientModels::GetSegmentResult::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::GetSegmentResult*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::GetSegmentResult::GetSegmentResult()   {
}
