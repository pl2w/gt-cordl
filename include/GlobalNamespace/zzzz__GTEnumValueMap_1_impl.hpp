#pragma once
// IWYU pragma private; include "GlobalNamespace/GTEnumValueMap_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__GTEnumValueMap_1_def.hpp"
#include "GlobalNamespace/zzzz__GTEnumValueMap`1_EnumValueToUnityObject_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__ISerializationCallbackReceiver_def.hpp"
template<typename T>
constexpr ::System::Collections::Generic::Dictionary_2<int64_t,T>*& GlobalNamespace::GTEnumValueMap_1<T>::__cordl_internal_get__enumValue_to_unityObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____enumValue_to_unityObject;
}
template<typename T>
constexpr ::System::Collections::Generic::Dictionary_2<int64_t,T>* const& GlobalNamespace::GTEnumValueMap_1<T>::__cordl_internal_get__enumValue_to_unityObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____enumValue_to_unityObject;
}
template<typename T>
constexpr void GlobalNamespace::GTEnumValueMap_1<T>::__cordl_internal_set__enumValue_to_unityObject(::System::Collections::Generic::Dictionary_2<int64_t,T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____enumValue_to_unityObject = value;
}
template<typename T>
constexpr ::StringW& GlobalNamespace::GTEnumValueMap_1<T>::__cordl_internal_get_m_enumScriptGuid()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_enumScriptGuid;
}
template<typename T>
constexpr ::StringW const& GlobalNamespace::GTEnumValueMap_1<T>::__cordl_internal_get_m_enumScriptGuid() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_enumScriptGuid;
}
template<typename T>
constexpr void GlobalNamespace::GTEnumValueMap_1<T>::__cordl_internal_set_m_enumScriptGuid(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_enumScriptGuid = value;
}
template<typename T>
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GTEnumValueMap_1_EnumValueToUnityObject<T>>*& GlobalNamespace::GTEnumValueMap_1<T>::__cordl_internal_get_m_enumValueAndUnityObjectPairs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_enumValueAndUnityObjectPairs;
}
template<typename T>
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GTEnumValueMap_1_EnumValueToUnityObject<T>>* const& GlobalNamespace::GTEnumValueMap_1<T>::__cordl_internal_get_m_enumValueAndUnityObjectPairs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_enumValueAndUnityObjectPairs;
}
template<typename T>
constexpr void GlobalNamespace::GTEnumValueMap_1<T>::__cordl_internal_set_m_enumValueAndUnityObjectPairs(::System::Collections::Generic::List_1<::GlobalNamespace::GTEnumValueMap_1_EnumValueToUnityObject<T>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_enumValueAndUnityObjectPairs = value;
}
template<typename T>
inline bool GlobalNamespace::GTEnumValueMap_1<T>::TryGet(int64_t  i, ::by_ref<T>  o)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTEnumValueMap_1<T>*>(),
                        {"TryGet", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<::by_ref<T>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, i, o);
}
template<typename T>
inline ::System::Collections::Generic::IEnumerable_1<T>* GlobalNamespace::GTEnumValueMap_1<T>::get_Values()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTEnumValueMap_1<T>*>(),
                        {"get_Values", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<T>*>(this, ___internal_method);
}
template<typename T>
inline void GlobalNamespace::GTEnumValueMap_1<T>::UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTEnumValueMap_1<T>*>(),
                        {"UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void GlobalNamespace::GTEnumValueMap_1<T>::UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTEnumValueMap_1<T>*>(),
                        {"UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void GlobalNamespace::GTEnumValueMap_1<T>::Init()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTEnumValueMap_1<T>*>(),
                        {"Init", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void GlobalNamespace::GTEnumValueMap_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTEnumValueMap_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::GlobalNamespace::GTEnumValueMap_1<T>* GlobalNamespace::GTEnumValueMap_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GTEnumValueMap_1<T>*>());
}
/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
template<typename T>
constexpr  GlobalNamespace::GTEnumValueMap_1<T>::operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept {
return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
template<typename T>
constexpr ::UnityEngine::ISerializationCallbackReceiver* GlobalNamespace::GTEnumValueMap_1<T>::i___UnityEngine__ISerializationCallbackReceiver() noexcept {
return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T>
constexpr ::GlobalNamespace::GTEnumValueMap_1<T>::GTEnumValueMap_1()   {
}
