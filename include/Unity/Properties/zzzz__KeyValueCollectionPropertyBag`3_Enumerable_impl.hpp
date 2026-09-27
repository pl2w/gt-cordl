#pragma once
// IWYU pragma private; include "Unity/Properties/KeyValueCollectionPropertyBag`3_Enumerable.hpp"
#include "Unity/Properties/zzzz__KeyValueCollectionPropertyBag`3_Enumerable_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "Unity/Properties/zzzz__IProperty_1_def.hpp"
#include "Unity/Properties/zzzz__KeyValueCollectionPropertyBag_3_def.hpp"
template<typename TDictionary,typename TKey,typename TValue>
inline void GlobalNamespace::KeyValueCollectionPropertyBag_3_Enumerable<TDictionary,TKey,TValue>::_ctor(TDictionary  dictionary, ::Unity::Properties::KeyValueCollectionPropertyBag_3_KeyValuePairProperty<TDictionary,TKey,TValue>*  property)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KeyValueCollectionPropertyBag_3_Enumerable<TDictionary,TKey,TValue>>(),
                        {".ctor", {}, {::i2c::type_of<TDictionary>(), ::i2c::type_of<::Unity::Properties::KeyValueCollectionPropertyBag_3_KeyValuePairProperty<TDictionary,TKey,TValue>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, dictionary, property);
}
template<typename TDictionary,typename TKey,typename TValue>
inline ::System::Collections::IEnumerator* GlobalNamespace::KeyValueCollectionPropertyBag_3_Enumerable<TDictionary,TKey,TValue>::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KeyValueCollectionPropertyBag_3_Enumerable<TDictionary,TKey,TValue>>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(*this, ___internal_method);
}
template<typename TDictionary,typename TKey,typename TValue>
inline ::System::Collections::Generic::IEnumerator_1<::Unity::Properties::IProperty_1<TDictionary>*>* GlobalNamespace::KeyValueCollectionPropertyBag_3_Enumerable<TDictionary,TKey,TValue>::System_Collections_Generic_IEnumerable_Unity_Properties_IProperty_TDictionary___GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KeyValueCollectionPropertyBag_3_Enumerable<TDictionary,TKey,TValue>>(),
                        {"System.Collections.Generic.IEnumerable<Unity.Properties.IProperty<TDictionary>>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::Unity::Properties::IProperty_1<TDictionary>*>*>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Unity::Properties::IProperty_1<TDictionary>*>"
template<typename TDictionary,typename TKey,typename TValue>
constexpr  GlobalNamespace::KeyValueCollectionPropertyBag_3_Enumerable<TDictionary,TKey,TValue>::operator ::System::Collections::Generic::IEnumerable_1<::Unity::Properties::IProperty_1<TDictionary>*>*()  {
return static_cast<::System::Collections::Generic::IEnumerable_1<::Unity::Properties::IProperty_1<TDictionary>*>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Unity::Properties::IProperty_1<TDictionary>*>"
template<typename TDictionary,typename TKey,typename TValue>
constexpr ::System::Collections::Generic::IEnumerable_1<::Unity::Properties::IProperty_1<TDictionary>*>* GlobalNamespace::KeyValueCollectionPropertyBag_3_Enumerable<TDictionary,TKey,TValue>::i___System__Collections__Generic__IEnumerable_1___Unity__Properties__IProperty_1_TDictionary___()  {
return static_cast<::System::Collections::Generic::IEnumerable_1<::Unity::Properties::IProperty_1<TDictionary>*>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template<typename TDictionary,typename TKey,typename TValue>
constexpr  GlobalNamespace::KeyValueCollectionPropertyBag_3_Enumerable<TDictionary,TKey,TValue>::operator ::System::Collections::IEnumerable*()  {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template<typename TDictionary,typename TKey,typename TValue>
constexpr ::System::Collections::IEnumerable* GlobalNamespace::KeyValueCollectionPropertyBag_3_Enumerable<TDictionary,TKey,TValue>::i___System__Collections__IEnumerable()  {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Dictionary", ty: "TDictionary", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Property", ty: "::Unity::Properties::KeyValueCollectionPropertyBag_3_KeyValuePairProperty<TDictionary,TKey,TValue>*", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename TDictionary,typename TKey,typename TValue>
constexpr ::GlobalNamespace::KeyValueCollectionPropertyBag_3_Enumerable<TDictionary,TKey,TValue>::KeyValueCollectionPropertyBag_3_Enumerable(TDictionary  m_Dictionary, ::Unity::Properties::KeyValueCollectionPropertyBag_3_KeyValuePairProperty<TDictionary,TKey,TValue>*  m_Property) noexcept  {
this->m_Dictionary = m_Dictionary;
this->m_Property = m_Property;
}
// Ctor Parameters []
template<typename TDictionary,typename TKey,typename TValue>
constexpr ::GlobalNamespace::KeyValueCollectionPropertyBag_3_Enumerable<TDictionary,TKey,TValue>::KeyValueCollectionPropertyBag_3_Enumerable()   {
}
