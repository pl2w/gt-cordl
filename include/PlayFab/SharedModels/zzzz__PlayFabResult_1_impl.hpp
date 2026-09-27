#pragma once
// IWYU pragma private; include "PlayFab/SharedModels/PlayFabResult_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResult_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
template<typename TResult>
constexpr TResult& PlayFab::SharedModels::PlayFabResult_1<TResult>::__cordl_internal_get_Result()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Result;
}
template<typename TResult>
constexpr TResult const& PlayFab::SharedModels::PlayFabResult_1<TResult>::__cordl_internal_get_Result() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Result;
}
template<typename TResult>
constexpr void PlayFab::SharedModels::PlayFabResult_1<TResult>::__cordl_internal_set_Result(TResult  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Result = value;
}
template<typename TResult>
constexpr ::System::Object*& PlayFab::SharedModels::PlayFabResult_1<TResult>::__cordl_internal_get_CustomData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CustomData;
}
template<typename TResult>
constexpr ::System::Object* const& PlayFab::SharedModels::PlayFabResult_1<TResult>::__cordl_internal_get_CustomData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CustomData;
}
template<typename TResult>
constexpr void PlayFab::SharedModels::PlayFabResult_1<TResult>::__cordl_internal_set_CustomData(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CustomData = value;
}
template<typename TResult>
inline void PlayFab::SharedModels::PlayFabResult_1<TResult>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::SharedModels::PlayFabResult_1<TResult>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TResult>
inline ::PlayFab::SharedModels::PlayFabResult_1<TResult>* PlayFab::SharedModels::PlayFabResult_1<TResult>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::SharedModels::PlayFabResult_1<TResult>*>());
}
// Ctor Parameters []
template<typename TResult>
constexpr ::PlayFab::SharedModels::PlayFabResult_1<TResult>::PlayFabResult_1()   {
}
