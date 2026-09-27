#pragma once
// IWYU pragma private; include "Unity/Properties/PropertyCollection`1_Enumerator.hpp"
#include "System/Collections/Generic/zzzz__List`1_Enumerator_impl.hpp"
#include "Unity/Properties/zzzz__IndexedCollectionPropertyBagEnumerator_1_impl.hpp"
#include "Unity/Properties/zzzz__PropertyCollection`1_EnumeratorType_impl.hpp"
#include "Unity/Properties/zzzz__PropertyCollection`1_Enumerator_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List`1_Enumerator_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Properties/zzzz__IProperty_1_def.hpp"
#include "Unity/Properties/zzzz__IndexedCollectionPropertyBagEnumerator_1_def.hpp"
template<typename TContainer>
inline ::Unity::Properties::IProperty_1<TContainer>* GlobalNamespace::PropertyCollection_1_Enumerator<TContainer>::get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropertyCollection_1_Enumerator<TContainer>>(),
                        {"get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Properties::IProperty_1<TContainer>*>(*this, ___internal_method);
}
template<typename TContainer>
inline void GlobalNamespace::PropertyCollection_1_Enumerator<TContainer>::set_Current(::Unity::Properties::IProperty_1<TContainer>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropertyCollection_1_Enumerator<TContainer>>(),
                        {"set_Current", {}, {::i2c::type_of<::Unity::Properties::IProperty_1<TContainer>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
template<typename TContainer>
inline ::System::Object* GlobalNamespace::PropertyCollection_1_Enumerator<TContainer>::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropertyCollection_1_Enumerator<TContainer>>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method);
}
template<typename TContainer>
inline void GlobalNamespace::PropertyCollection_1_Enumerator<TContainer>::_ctor(::System::Collections::Generic::IEnumerator_1<::Unity::Properties::IProperty_1<TContainer>*>*  enumerator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropertyCollection_1_Enumerator<TContainer>>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerator_1<::Unity::Properties::IProperty_1<TContainer>*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, enumerator);
}
template<typename TContainer>
inline void GlobalNamespace::PropertyCollection_1_Enumerator<TContainer>::_ctor(::GlobalNamespace::List_1_Enumerator<::Unity::Properties::IProperty_1<TContainer>*>  properties)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropertyCollection_1_Enumerator<TContainer>>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::List_1_Enumerator<::Unity::Properties::IProperty_1<TContainer>*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, properties);
}
template<typename TContainer>
inline void GlobalNamespace::PropertyCollection_1_Enumerator<TContainer>::_ctor(::Unity::Properties::IndexedCollectionPropertyBagEnumerator_1<TContainer>  enumerator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropertyCollection_1_Enumerator<TContainer>>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Properties::IndexedCollectionPropertyBagEnumerator_1<TContainer>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, enumerator);
}
template<typename TContainer>
inline bool GlobalNamespace::PropertyCollection_1_Enumerator<TContainer>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropertyCollection_1_Enumerator<TContainer>>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
template<typename TContainer>
inline void GlobalNamespace::PropertyCollection_1_Enumerator<TContainer>::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropertyCollection_1_Enumerator<TContainer>>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename TContainer>
inline void GlobalNamespace::PropertyCollection_1_Enumerator<TContainer>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropertyCollection_1_Enumerator<TContainer>>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Unity::Properties::IProperty_1<TContainer>*>"
template<typename TContainer>
constexpr  GlobalNamespace::PropertyCollection_1_Enumerator<TContainer>::operator ::System::Collections::Generic::IEnumerator_1<::Unity::Properties::IProperty_1<TContainer>*>*()  {
return static_cast<::System::Collections::Generic::IEnumerator_1<::Unity::Properties::IProperty_1<TContainer>*>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Unity::Properties::IProperty_1<TContainer>*>"
template<typename TContainer>
constexpr ::System::Collections::Generic::IEnumerator_1<::Unity::Properties::IProperty_1<TContainer>*>* GlobalNamespace::PropertyCollection_1_Enumerator<TContainer>::i___System__Collections__Generic__IEnumerator_1___Unity__Properties__IProperty_1_TContainer___()  {
return static_cast<::System::Collections::Generic::IEnumerator_1<::Unity::Properties::IProperty_1<TContainer>*>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template<typename TContainer>
constexpr  GlobalNamespace::PropertyCollection_1_Enumerator<TContainer>::operator ::System::Collections::IEnumerator*()  {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template<typename TContainer>
constexpr ::System::Collections::IEnumerator* GlobalNamespace::PropertyCollection_1_Enumerator<TContainer>::i___System__Collections__IEnumerator()  {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
template<typename TContainer>
constexpr  GlobalNamespace::PropertyCollection_1_Enumerator<TContainer>::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
template<typename TContainer>
constexpr ::System::IDisposable* GlobalNamespace::PropertyCollection_1_Enumerator<TContainer>::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Type", ty: "::GlobalNamespace::PropertyCollection_1_EnumeratorType<TContainer>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Enumerator", ty: "::System::Collections::Generic::IEnumerator_1<::Unity::Properties::IProperty_1<TContainer>*>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Properties", ty: "::GlobalNamespace::List_1_Enumerator<::Unity::Properties::IProperty_1<TContainer>*>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_IndexedCollectionPropertyBag", ty: "::Unity::Properties::IndexedCollectionPropertyBagEnumerator_1<TContainer>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_Current_k__BackingField", ty: "::Unity::Properties::IProperty_1<TContainer>*", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename TContainer>
constexpr ::GlobalNamespace::PropertyCollection_1_Enumerator<TContainer>::PropertyCollection_1_Enumerator(::GlobalNamespace::PropertyCollection_1_EnumeratorType<TContainer>  m_Type, ::System::Collections::Generic::IEnumerator_1<::Unity::Properties::IProperty_1<TContainer>*>*  m_Enumerator, ::GlobalNamespace::List_1_Enumerator<::Unity::Properties::IProperty_1<TContainer>*>  m_Properties, ::Unity::Properties::IndexedCollectionPropertyBagEnumerator_1<TContainer>  m_IndexedCollectionPropertyBag, ::Unity::Properties::IProperty_1<TContainer>*  _Current_k__BackingField) noexcept  {
this->m_Type = m_Type;
this->m_Enumerator = m_Enumerator;
this->m_Properties = m_Properties;
this->m_IndexedCollectionPropertyBag = m_IndexedCollectionPropertyBag;
this->_Current_k__BackingField = _Current_k__BackingField;
}
// Ctor Parameters []
template<typename TContainer>
constexpr ::GlobalNamespace::PropertyCollection_1_Enumerator<TContainer>::PropertyCollection_1_Enumerator()   {
}
