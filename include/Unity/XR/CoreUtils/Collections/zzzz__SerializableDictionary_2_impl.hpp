#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/Collections/SerializableDictionary_2.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_impl.hpp"
#include "Unity/XR/CoreUtils/Collections/zzzz__SerializableDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Unity/XR/CoreUtils/Collections/zzzz__SerializableDictionary`2_Item_def.hpp"
#include "UnityEngine/zzzz__ISerializationCallbackReceiver_def.hpp"
template<typename TKey,typename TValue>
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::SerializableDictionary_2_Item<TKey,TValue>>*& Unity::XR::CoreUtils::Collections::SerializableDictionary_2<TKey,TValue>::__cordl_internal_get_m_Items()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Items;
}
template<typename TKey,typename TValue>
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::SerializableDictionary_2_Item<TKey,TValue>>* const& Unity::XR::CoreUtils::Collections::SerializableDictionary_2<TKey,TValue>::__cordl_internal_get_m_Items() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Items;
}
template<typename TKey,typename TValue>
constexpr void Unity::XR::CoreUtils::Collections::SerializableDictionary_2<TKey,TValue>::__cordl_internal_set_m_Items(::System::Collections::Generic::List_1<::GlobalNamespace::SerializableDictionary_2_Item<TKey,TValue>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Items = value;
}
template<typename TKey,typename TValue>
inline ::System::Collections::Generic::List_1<::GlobalNamespace::SerializableDictionary_2_Item<TKey,TValue>>* Unity::XR::CoreUtils::Collections::SerializableDictionary_2<TKey,TValue>::get_SerializedItems()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Collections::SerializableDictionary_2<TKey,TValue>*>(),
                        {"get_SerializedItems", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::SerializableDictionary_2_Item<TKey,TValue>>*>(this, ___internal_method);
}
template<typename TKey,typename TValue>
inline void Unity::XR::CoreUtils::Collections::SerializableDictionary_2<TKey,TValue>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Collections::SerializableDictionary_2<TKey,TValue>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TKey,typename TValue>
inline void Unity::XR::CoreUtils::Collections::SerializableDictionary_2<TKey,TValue>::_ctor(::System::Collections::Generic::IDictionary_2<TKey,TValue>*  input)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Collections::SerializableDictionary_2<TKey,TValue>*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::IDictionary_2<TKey,TValue>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input);
}
template<typename TKey,typename TValue>
inline void Unity::XR::CoreUtils::Collections::SerializableDictionary_2<TKey,TValue>::OnBeforeSerialize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::XR::CoreUtils::Collections::SerializableDictionary_2<TKey,TValue>*>(), 48}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TKey,typename TValue>
inline void Unity::XR::CoreUtils::Collections::SerializableDictionary_2<TKey,TValue>::OnAfterDeserialize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::XR::CoreUtils::Collections::SerializableDictionary_2<TKey,TValue>*>(), 49}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TKey,typename TValue>
inline ::Unity::XR::CoreUtils::Collections::SerializableDictionary_2<TKey,TValue>* Unity::XR::CoreUtils::Collections::SerializableDictionary_2<TKey,TValue>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::XR::CoreUtils::Collections::SerializableDictionary_2<TKey,TValue>*>());
}
template<typename TKey,typename TValue>
inline ::Unity::XR::CoreUtils::Collections::SerializableDictionary_2<TKey,TValue>* Unity::XR::CoreUtils::Collections::SerializableDictionary_2<TKey,TValue>::New_ctor(::System::Collections::Generic::IDictionary_2<TKey,TValue>*  input)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::XR::CoreUtils::Collections::SerializableDictionary_2<TKey,TValue>*>(input));
}
/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
template<typename TKey,typename TValue>
constexpr  Unity::XR::CoreUtils::Collections::SerializableDictionary_2<TKey,TValue>::operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept {
return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
template<typename TKey,typename TValue>
constexpr ::UnityEngine::ISerializationCallbackReceiver* Unity::XR::CoreUtils::Collections::SerializableDictionary_2<TKey,TValue>::i___UnityEngine__ISerializationCallbackReceiver() noexcept {
return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename TKey,typename TValue>
constexpr ::Unity::XR::CoreUtils::Collections::SerializableDictionary_2<TKey,TValue>::SerializableDictionary_2()   {
}
