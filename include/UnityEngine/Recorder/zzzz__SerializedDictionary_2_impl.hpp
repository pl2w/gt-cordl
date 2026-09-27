#pragma once
// IWYU pragma private; include "UnityEngine/Recorder/SerializedDictionary_2.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Recorder/zzzz__SerializedDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__ISerializationCallbackReceiver_def.hpp"
template<typename TKey,typename TValue>
constexpr ::System::Collections::Generic::List_1<TKey>*& UnityEngine::Recorder::SerializedDictionary_2<TKey,TValue>::__cordl_internal_get_m_Keys()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Keys;
}
template<typename TKey,typename TValue>
constexpr ::System::Collections::Generic::List_1<TKey>* const& UnityEngine::Recorder::SerializedDictionary_2<TKey,TValue>::__cordl_internal_get_m_Keys() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Keys;
}
template<typename TKey,typename TValue>
constexpr void UnityEngine::Recorder::SerializedDictionary_2<TKey,TValue>::__cordl_internal_set_m_Keys(::System::Collections::Generic::List_1<TKey>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Keys = value;
}
template<typename TKey,typename TValue>
constexpr ::System::Collections::Generic::List_1<TValue>*& UnityEngine::Recorder::SerializedDictionary_2<TKey,TValue>::__cordl_internal_get_m_Values()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Values;
}
template<typename TKey,typename TValue>
constexpr ::System::Collections::Generic::List_1<TValue>* const& UnityEngine::Recorder::SerializedDictionary_2<TKey,TValue>::__cordl_internal_get_m_Values() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Values;
}
template<typename TKey,typename TValue>
constexpr void UnityEngine::Recorder::SerializedDictionary_2<TKey,TValue>::__cordl_internal_set_m_Values(::System::Collections::Generic::List_1<TValue>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Values = value;
}
template<typename TKey,typename TValue>
constexpr ::System::Collections::Generic::Dictionary_2<TKey,TValue>*& UnityEngine::Recorder::SerializedDictionary_2<TKey,TValue>::__cordl_internal_get_m_Dictionary()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Dictionary;
}
template<typename TKey,typename TValue>
constexpr ::System::Collections::Generic::Dictionary_2<TKey,TValue>* const& UnityEngine::Recorder::SerializedDictionary_2<TKey,TValue>::__cordl_internal_get_m_Dictionary() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Dictionary;
}
template<typename TKey,typename TValue>
constexpr void UnityEngine::Recorder::SerializedDictionary_2<TKey,TValue>::__cordl_internal_set_m_Dictionary(::System::Collections::Generic::Dictionary_2<TKey,TValue>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Dictionary = value;
}
template<typename TKey,typename TValue>
inline ::System::Collections::Generic::Dictionary_2<TKey,TValue>* UnityEngine::Recorder::SerializedDictionary_2<TKey,TValue>::get_dictionary()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Recorder::SerializedDictionary_2<TKey,TValue>*>(),
                        {"get_dictionary", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<TKey,TValue>*>(this, ___internal_method);
}
template<typename TKey,typename TValue>
inline void UnityEngine::Recorder::SerializedDictionary_2<TKey,TValue>::OnBeforeSerialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Recorder::SerializedDictionary_2<TKey,TValue>*>(),
                        {"OnBeforeSerialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TKey,typename TValue>
inline void UnityEngine::Recorder::SerializedDictionary_2<TKey,TValue>::OnAfterDeserialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Recorder::SerializedDictionary_2<TKey,TValue>*>(),
                        {"OnAfterDeserialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TKey,typename TValue>
inline void UnityEngine::Recorder::SerializedDictionary_2<TKey,TValue>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Recorder::SerializedDictionary_2<TKey,TValue>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TKey,typename TValue>
inline ::UnityEngine::Recorder::SerializedDictionary_2<TKey,TValue>* UnityEngine::Recorder::SerializedDictionary_2<TKey,TValue>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Recorder::SerializedDictionary_2<TKey,TValue>*>());
}
/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
template<typename TKey,typename TValue>
constexpr  UnityEngine::Recorder::SerializedDictionary_2<TKey,TValue>::operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept {
return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
template<typename TKey,typename TValue>
constexpr ::UnityEngine::ISerializationCallbackReceiver* UnityEngine::Recorder::SerializedDictionary_2<TKey,TValue>::i___UnityEngine__ISerializationCallbackReceiver() noexcept {
return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename TKey,typename TValue>
constexpr ::UnityEngine::Recorder::SerializedDictionary_2<TKey,TValue>::SerializedDictionary_2()   {
}
