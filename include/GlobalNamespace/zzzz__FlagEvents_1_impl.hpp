#pragma once
// IWYU pragma private; include "GlobalNamespace/FlagEvents_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__FlagEvents_1_def.hpp"
#include "GlobalNamespace/zzzz__FlagEvents_1_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
#include "UnityEngine/zzzz__ISerializationCallbackReceiver_def.hpp"
template<typename T>
constexpr ::ArrayW<::GlobalNamespace::FlagEvents_1_FlagEvent<T>*>& GlobalNamespace::FlagEvents_1<T>::__cordl_internal_get_list()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___list;
}
template<typename T>
constexpr ::ArrayW<::GlobalNamespace::FlagEvents_1_FlagEvent<T>*> const& GlobalNamespace::FlagEvents_1<T>::__cordl_internal_get_list() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___list;
}
template<typename T>
constexpr void GlobalNamespace::FlagEvents_1<T>::__cordl_internal_set_list(::ArrayW<::GlobalNamespace::FlagEvents_1_FlagEvent<T>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___list = value;
}
template<typename T>
inline void GlobalNamespace::FlagEvents_1<T>::InvokeAll(T  test, bool  isLocal)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FlagEvents_1<T>*>(),
                        {"InvokeAll", {}, {::i2c::type_of<T>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, test, isLocal);
}
template<typename T>
inline void GlobalNamespace::FlagEvents_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FlagEvents_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::GlobalNamespace::FlagEvents_1<T>* GlobalNamespace::FlagEvents_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FlagEvents_1<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::GlobalNamespace::FlagEvents_1<T>::FlagEvents_1()   {
}
template<typename T>
constexpr ::StringW& GlobalNamespace::FlagEvents_1_FlagEvent<T>::__cordl_internal_get_debugName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugName;
}
template<typename T>
constexpr ::StringW const& GlobalNamespace::FlagEvents_1_FlagEvent<T>::__cordl_internal_get_debugName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugName;
}
template<typename T>
constexpr void GlobalNamespace::FlagEvents_1_FlagEvent<T>::__cordl_internal_set_debugName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debugName = value;
}
template<typename T>
constexpr bool& GlobalNamespace::FlagEvents_1_FlagEvent<T>::__cordl_internal_get_runOnlyLocally()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___runOnlyLocally;
}
template<typename T>
constexpr bool const& GlobalNamespace::FlagEvents_1_FlagEvent<T>::__cordl_internal_get_runOnlyLocally() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___runOnlyLocally;
}
template<typename T>
constexpr void GlobalNamespace::FlagEvents_1_FlagEvent<T>::__cordl_internal_set_runOnlyLocally(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___runOnlyLocally = value;
}
template<typename T>
constexpr T& GlobalNamespace::FlagEvents_1_FlagEvent<T>::__cordl_internal_get_flags()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flags;
}
template<typename T>
constexpr T const& GlobalNamespace::FlagEvents_1_FlagEvent<T>::__cordl_internal_get_flags() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flags;
}
template<typename T>
constexpr void GlobalNamespace::FlagEvents_1_FlagEvent<T>::__cordl_internal_set_flags(T  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___flags = value;
}
template<typename T>
constexpr int32_t& GlobalNamespace::FlagEvents_1_FlagEvent<T>::__cordl_internal_get_flagsAsInt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flagsAsInt;
}
template<typename T>
constexpr int32_t const& GlobalNamespace::FlagEvents_1_FlagEvent<T>::__cordl_internal_get_flagsAsInt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flagsAsInt;
}
template<typename T>
constexpr void GlobalNamespace::FlagEvents_1_FlagEvent<T>::__cordl_internal_set_flagsAsInt(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___flagsAsInt = value;
}
template<typename T>
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::FlagEvents_1_FlagEvent<T>::__cordl_internal_get_anyFlagTrue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anyFlagTrue;
}
template<typename T>
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::FlagEvents_1_FlagEvent<T>::__cordl_internal_get_anyFlagTrue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anyFlagTrue;
}
template<typename T>
constexpr void GlobalNamespace::FlagEvents_1_FlagEvent<T>::__cordl_internal_set_anyFlagTrue(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___anyFlagTrue = value;
}
template<typename T>
inline ::StringW GlobalNamespace::FlagEvents_1_FlagEvent<T>::get_FlagsLabel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FlagEvents_1_FlagEvent<T>*>(),
                        {"get_FlagsLabel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
template<typename T>
inline void GlobalNamespace::FlagEvents_1_FlagEvent<T>::OnBeforeSerialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FlagEvents_1_FlagEvent<T>*>(),
                        {"OnBeforeSerialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void GlobalNamespace::FlagEvents_1_FlagEvent<T>::OnAfterDeserialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FlagEvents_1_FlagEvent<T>*>(),
                        {"OnAfterDeserialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void GlobalNamespace::FlagEvents_1_FlagEvent<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FlagEvents_1_FlagEvent<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::GlobalNamespace::FlagEvents_1_FlagEvent<T>* GlobalNamespace::FlagEvents_1_FlagEvent<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FlagEvents_1_FlagEvent<T>*>());
}
/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
template<typename T>
constexpr  GlobalNamespace::FlagEvents_1_FlagEvent<T>::operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept {
return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
template<typename T>
constexpr ::UnityEngine::ISerializationCallbackReceiver* GlobalNamespace::FlagEvents_1_FlagEvent<T>::i___UnityEngine__ISerializationCallbackReceiver() noexcept {
return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T>
constexpr ::GlobalNamespace::FlagEvents_1_FlagEvent<T>::FlagEvents_1_FlagEvent()   {
}
