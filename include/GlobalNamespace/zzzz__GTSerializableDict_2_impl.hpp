#pragma once
// IWYU pragma private; include "GlobalNamespace/GTSerializableDict_2.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__GTSerializableDict_2_def.hpp"
#include "GlobalNamespace/zzzz__GTSerializableDict_2_def.hpp"
#include "GlobalNamespace/zzzz__GTSerializableKeyValue_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
#include "UnityEngine/zzzz__ISerializationCallbackReceiver_def.hpp"
template<typename TKey,typename TValue>
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GTSerializableKeyValue_2<TKey,TValue>>*& GlobalNamespace::GTSerializableDict_2<TKey,TValue>::__cordl_internal_get__m_serializedEntries()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____m_serializedEntries;
}
template<typename TKey,typename TValue>
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GTSerializableKeyValue_2<TKey,TValue>>* const& GlobalNamespace::GTSerializableDict_2<TKey,TValue>::__cordl_internal_get__m_serializedEntries() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____m_serializedEntries;
}
template<typename TKey,typename TValue>
constexpr void GlobalNamespace::GTSerializableDict_2<TKey,TValue>::__cordl_internal_set__m_serializedEntries(::System::Collections::Generic::List_1<::GlobalNamespace::GTSerializableKeyValue_2<TKey,TValue>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____m_serializedEntries = value;
}
template<typename TKey,typename TValue>
inline void GlobalNamespace::GTSerializableDict_2<TKey,TValue>::OnBeforeSerialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTSerializableDict_2<TKey,TValue>*>(),
                        {"OnBeforeSerialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TKey,typename TValue>
inline void GlobalNamespace::GTSerializableDict_2<TKey,TValue>::OnAfterDeserialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTSerializableDict_2<TKey,TValue>*>(),
                        {"OnAfterDeserialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TKey,typename TValue>
inline void GlobalNamespace::GTSerializableDict_2<TKey,TValue>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTSerializableDict_2<TKey,TValue>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TKey,typename TValue>
inline ::GlobalNamespace::GTSerializableDict_2<TKey,TValue>* GlobalNamespace::GTSerializableDict_2<TKey,TValue>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GTSerializableDict_2<TKey,TValue>*>());
}
/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
template<typename TKey,typename TValue>
constexpr  GlobalNamespace::GTSerializableDict_2<TKey,TValue>::operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept {
return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
template<typename TKey,typename TValue>
constexpr ::UnityEngine::ISerializationCallbackReceiver* GlobalNamespace::GTSerializableDict_2<TKey,TValue>::i___UnityEngine__ISerializationCallbackReceiver() noexcept {
return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename TKey,typename TValue>
constexpr ::GlobalNamespace::GTSerializableDict_2<TKey,TValue>::GTSerializableDict_2()   {
}
template<typename TKey,typename TValue>
inline void GlobalNamespace::GTSerializableDict_2___c<TKey,TValue>::setStaticF___9(::GlobalNamespace::GTSerializableDict_2___c<TKey,TValue>*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::GTSerializableDict_2___c<TKey,TValue>*, "<>9", ::GlobalNamespace::GTSerializableDict_2___c<TKey,TValue>*>(std::forward<::GlobalNamespace::GTSerializableDict_2___c<TKey,TValue>*>(value));
}
template<typename TKey,typename TValue>
inline ::GlobalNamespace::GTSerializableDict_2___c<TKey,TValue>* GlobalNamespace::GTSerializableDict_2___c<TKey,TValue>::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::GTSerializableDict_2___c<TKey,TValue>*, "<>9", ::GlobalNamespace::GTSerializableDict_2___c<TKey,TValue>*>();
}
template<typename TKey,typename TValue>
inline void GlobalNamespace::GTSerializableDict_2___c<TKey,TValue>::setStaticF___9__1_0(::System::Comparison_1<::GlobalNamespace::GTSerializableKeyValue_2<TKey,TValue>>*  value)  {
::cordl_internals::setStaticField<::System::Comparison_1<::GlobalNamespace::GTSerializableKeyValue_2<TKey,TValue>>*, "<>9__1_0", ::GlobalNamespace::GTSerializableDict_2___c<TKey,TValue>*>(std::forward<::System::Comparison_1<::GlobalNamespace::GTSerializableKeyValue_2<TKey,TValue>>*>(value));
}
template<typename TKey,typename TValue>
inline ::System::Comparison_1<::GlobalNamespace::GTSerializableKeyValue_2<TKey,TValue>>* GlobalNamespace::GTSerializableDict_2___c<TKey,TValue>::getStaticF___9__1_0()  {
return ::cordl_internals::getStaticField<::System::Comparison_1<::GlobalNamespace::GTSerializableKeyValue_2<TKey,TValue>>*, "<>9__1_0", ::GlobalNamespace::GTSerializableDict_2___c<TKey,TValue>*>();
}
template<typename TKey,typename TValue>
inline void GlobalNamespace::GTSerializableDict_2___c<TKey,TValue>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTSerializableDict_2___c<TKey,TValue>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TKey,typename TValue>
inline int32_t GlobalNamespace::GTSerializableDict_2___c<TKey,TValue>::_OnBeforeSerialize_b__1_0(::GlobalNamespace::GTSerializableKeyValue_2<TKey,TValue>  entry1, ::GlobalNamespace::GTSerializableKeyValue_2<TKey,TValue>  entry2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTSerializableDict_2___c<TKey,TValue>*>(),
                        {"<OnBeforeSerialize>b__1_0", {}, {::i2c::type_of<::GlobalNamespace::GTSerializableKeyValue_2<TKey,TValue>>(), ::i2c::type_of<::GlobalNamespace::GTSerializableKeyValue_2<TKey,TValue>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, entry1, entry2);
}
template<typename TKey,typename TValue>
inline ::GlobalNamespace::GTSerializableDict_2___c<TKey,TValue>* GlobalNamespace::GTSerializableDict_2___c<TKey,TValue>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GTSerializableDict_2___c<TKey,TValue>*>());
}
// Ctor Parameters []
template<typename TKey,typename TValue>
constexpr ::GlobalNamespace::GTSerializableDict_2___c<TKey,TValue>::GTSerializableDict_2___c()   {
}
