#pragma once
// IWYU pragma private; include "GlobalNamespace/CallbackPair_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__CallbackPair_1_def.hpp"
#include "GlobalNamespace/zzzz__MothershipError_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
template<typename T>
constexpr ::System::Action_1<T>*& GlobalNamespace::CallbackPair_1<T>::__cordl_internal_get_successCallback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___successCallback;
}
template<typename T>
constexpr ::System::Action_1<T>* const& GlobalNamespace::CallbackPair_1<T>::__cordl_internal_get_successCallback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___successCallback;
}
template<typename T>
constexpr void GlobalNamespace::CallbackPair_1<T>::__cordl_internal_set_successCallback(::System::Action_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___successCallback = value;
}
template<typename T>
constexpr ::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*& GlobalNamespace::CallbackPair_1<T>::__cordl_internal_get_errorCallback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___errorCallback;
}
template<typename T>
constexpr ::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>* const& GlobalNamespace::CallbackPair_1<T>::__cordl_internal_get_errorCallback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___errorCallback;
}
template<typename T>
constexpr void GlobalNamespace::CallbackPair_1<T>::__cordl_internal_set_errorCallback(::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___errorCallback = value;
}
template<typename T>
inline void GlobalNamespace::CallbackPair_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CallbackPair_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::GlobalNamespace::CallbackPair_1<T>* GlobalNamespace::CallbackPair_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CallbackPair_1<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::GlobalNamespace::CallbackPair_1<T>::CallbackPair_1()   {
}
