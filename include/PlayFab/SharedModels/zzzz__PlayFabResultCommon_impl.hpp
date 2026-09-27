#pragma once
// IWYU pragma private; include "PlayFab/SharedModels/PlayFabResultCommon.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::PlayFab::SharedModels::PlayFabResultCommon._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::SharedModels::PlayFabResultCommon::*)()>(&::PlayFab::SharedModels::PlayFabResultCommon::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa7def60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::SharedModels::PlayFabResultCommon*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::PlayFab::SharedModels::PlayFabRequestCommon*& PlayFab::SharedModels::PlayFabResultCommon::__cordl_internal_get_Request()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Request;
}
constexpr ::PlayFab::SharedModels::PlayFabRequestCommon* const& PlayFab::SharedModels::PlayFabResultCommon::__cordl_internal_get_Request() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Request;
}
constexpr void PlayFab::SharedModels::PlayFabResultCommon::__cordl_internal_set_Request(::PlayFab::SharedModels::PlayFabRequestCommon*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Request = value;
}
constexpr ::System::Object*& PlayFab::SharedModels::PlayFabResultCommon::__cordl_internal_get_CustomData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CustomData;
}
constexpr ::System::Object* const& PlayFab::SharedModels::PlayFabResultCommon::__cordl_internal_get_CustomData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CustomData;
}
constexpr void PlayFab::SharedModels::PlayFabResultCommon::__cordl_internal_set_CustomData(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CustomData = value;
}
inline void PlayFab::SharedModels::PlayFabResultCommon::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::SharedModels::PlayFabResultCommon*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::SharedModels::PlayFabResultCommon* PlayFab::SharedModels::PlayFabResultCommon::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::SharedModels::PlayFabResultCommon*>());
}
// Ctor Parameters []
constexpr ::PlayFab::SharedModels::PlayFabResultCommon::PlayFabResultCommon()   {
}
