#pragma once
// IWYU pragma private; include "Unity/Properties/PropertyCollection_1.hpp"
#include "Unity/Properties/zzzz__IndexedCollectionPropertyBagEnumerable_1_impl.hpp"
#include "Unity/Properties/zzzz__PropertyCollection`1_EnumeratorType_impl.hpp"
#include "Unity/Properties/zzzz__PropertyCollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "Unity/Properties/zzzz__IProperty_1_def.hpp"
#include "Unity/Properties/zzzz__IndexedCollectionPropertyBagEnumerable_1_def.hpp"
#include "Unity/Properties/zzzz__PropertyCollection`1_EnumeratorType_def.hpp"
#include "Unity/Properties/zzzz__PropertyCollection`1_Enumerator_def.hpp"
template<typename TContainer>
inline void Unity::Properties::PropertyCollection_1<TContainer>::setStaticF__Empty_k__BackingField(::Unity::Properties::PropertyCollection_1<TContainer>  value)  {
::cordl_internals::setStaticField<::Unity::Properties::PropertyCollection_1<TContainer>, "<Empty>k__BackingField", ::Unity::Properties::PropertyCollection_1<TContainer>>(std::forward<::Unity::Properties::PropertyCollection_1<TContainer>>(value));
}
template<typename TContainer>
inline ::Unity::Properties::PropertyCollection_1<TContainer> Unity::Properties::PropertyCollection_1<TContainer>::getStaticF__Empty_k__BackingField()  {
return ::cordl_internals::getStaticField<::Unity::Properties::PropertyCollection_1<TContainer>, "<Empty>k__BackingField", ::Unity::Properties::PropertyCollection_1<TContainer>>();
}
template<typename TContainer>
inline ::Unity::Properties::PropertyCollection_1<TContainer> Unity::Properties::PropertyCollection_1<TContainer>::get_Empty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Properties::PropertyCollection_1<TContainer>>(),
                        {"get_Empty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Properties::PropertyCollection_1<TContainer>>(nullptr, ___internal_method);
}
template<typename TContainer>
inline void Unity::Properties::PropertyCollection_1<TContainer>::_ctor(::System::Collections::Generic::IEnumerable_1<::Unity::Properties::IProperty_1<TContainer>*>*  enumerable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Properties::PropertyCollection_1<TContainer>>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::Unity::Properties::IProperty_1<TContainer>*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, enumerable);
}
template<typename TContainer>
inline void Unity::Properties::PropertyCollection_1<TContainer>::_ctor(::System::Collections::Generic::List_1<::Unity::Properties::IProperty_1<TContainer>*>*  properties)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Properties::PropertyCollection_1<TContainer>>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Unity::Properties::IProperty_1<TContainer>*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, properties);
}
template<typename TContainer>
inline void Unity::Properties::PropertyCollection_1<TContainer>::_ctor(::Unity::Properties::IndexedCollectionPropertyBagEnumerable_1<TContainer>  enumerable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Properties::PropertyCollection_1<TContainer>>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Properties::IndexedCollectionPropertyBagEnumerable_1<TContainer>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, enumerable);
}
template<typename TContainer>
inline ::GlobalNamespace::PropertyCollection_1_Enumerator<TContainer> Unity::Properties::PropertyCollection_1<TContainer>::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Properties::PropertyCollection_1<TContainer>>(),
                        {"GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PropertyCollection_1_Enumerator<TContainer>>(*this, ___internal_method);
}
template<typename TContainer>
inline ::System::Collections::Generic::IEnumerator_1<::Unity::Properties::IProperty_1<TContainer>*>* Unity::Properties::PropertyCollection_1<TContainer>::System_Collections_Generic_IEnumerable_Unity_Properties_IProperty_TContainer___GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Properties::PropertyCollection_1<TContainer>>(),
                        {"System.Collections.Generic.IEnumerable<Unity.Properties.IProperty<TContainer>>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::Unity::Properties::IProperty_1<TContainer>*>*>(*this, ___internal_method);
}
template<typename TContainer>
inline ::System::Collections::IEnumerator* Unity::Properties::PropertyCollection_1<TContainer>::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Properties::PropertyCollection_1<TContainer>>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Unity::Properties::IProperty_1<TContainer>*>"
template<typename TContainer>
constexpr  Unity::Properties::PropertyCollection_1<TContainer>::operator ::System::Collections::Generic::IEnumerable_1<::Unity::Properties::IProperty_1<TContainer>*>*()  {
return static_cast<::System::Collections::Generic::IEnumerable_1<::Unity::Properties::IProperty_1<TContainer>*>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Unity::Properties::IProperty_1<TContainer>*>"
template<typename TContainer>
constexpr ::System::Collections::Generic::IEnumerable_1<::Unity::Properties::IProperty_1<TContainer>*>* Unity::Properties::PropertyCollection_1<TContainer>::i___System__Collections__Generic__IEnumerable_1___Unity__Properties__IProperty_1_TContainer___()  {
return static_cast<::System::Collections::Generic::IEnumerable_1<::Unity::Properties::IProperty_1<TContainer>*>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template<typename TContainer>
constexpr  Unity::Properties::PropertyCollection_1<TContainer>::operator ::System::Collections::IEnumerable*()  {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template<typename TContainer>
constexpr ::System::Collections::IEnumerable* Unity::Properties::PropertyCollection_1<TContainer>::i___System__Collections__IEnumerable()  {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Type", ty: "::GlobalNamespace::PropertyCollection_1_EnumeratorType<TContainer>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Enumerable", ty: "::System::Collections::Generic::IEnumerable_1<::Unity::Properties::IProperty_1<TContainer>*>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Properties", ty: "::System::Collections::Generic::List_1<::Unity::Properties::IProperty_1<TContainer>*>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_IndexedCollectionPropertyBag", ty: "::Unity::Properties::IndexedCollectionPropertyBagEnumerable_1<TContainer>", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename TContainer>
constexpr ::Unity::Properties::PropertyCollection_1<TContainer>::PropertyCollection_1(::GlobalNamespace::PropertyCollection_1_EnumeratorType<TContainer>  m_Type, ::System::Collections::Generic::IEnumerable_1<::Unity::Properties::IProperty_1<TContainer>*>*  m_Enumerable, ::System::Collections::Generic::List_1<::Unity::Properties::IProperty_1<TContainer>*>*  m_Properties, ::Unity::Properties::IndexedCollectionPropertyBagEnumerable_1<TContainer>  m_IndexedCollectionPropertyBag) noexcept  {
this->m_Type = m_Type;
this->m_Enumerable = m_Enumerable;
this->m_Properties = m_Properties;
this->m_IndexedCollectionPropertyBag = m_IndexedCollectionPropertyBag;
}
// Ctor Parameters []
template<typename TContainer>
constexpr ::Unity::Properties::PropertyCollection_1<TContainer>::PropertyCollection_1()   {
}
