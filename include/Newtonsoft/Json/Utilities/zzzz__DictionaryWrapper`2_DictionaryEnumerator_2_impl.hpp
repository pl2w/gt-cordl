#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Utilities/DictionaryWrapper`2_DictionaryEnumerator_2.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__DictionaryWrapper`2_DictionaryEnumerator_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/Collections/zzzz__DictionaryEntry_def.hpp"
#include "System/Collections/zzzz__IDictionaryEnumerator_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Object_def.hpp"
template<typename TKey,typename TValue,typename TEnumeratorKey,typename TEnumeratorValue>
inline void GlobalNamespace::DictionaryWrapper_2_DictionaryEnumerator_2<TKey,TValue,TEnumeratorKey,TEnumeratorValue>::_ctor(/* [Nullable(new[] { 1, 0, 1, 1 })] */ ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TEnumeratorKey,TEnumeratorValue>>*  e)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DictionaryWrapper_2_DictionaryEnumerator_2<TKey,TValue,TEnumeratorKey,TEnumeratorValue>>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TEnumeratorKey,TEnumeratorValue>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, e);
}
template<typename TKey,typename TValue,typename TEnumeratorKey,typename TEnumeratorValue>
inline ::System::Collections::DictionaryEntry GlobalNamespace::DictionaryWrapper_2_DictionaryEnumerator_2<TKey,TValue,TEnumeratorKey,TEnumeratorValue>::get_Entry()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DictionaryWrapper_2_DictionaryEnumerator_2<TKey,TValue,TEnumeratorKey,TEnumeratorValue>>(),
                        {"get_Entry", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::DictionaryEntry>(*this, ___internal_method);
}
template<typename TKey,typename TValue,typename TEnumeratorKey,typename TEnumeratorValue>
inline ::System::Object* GlobalNamespace::DictionaryWrapper_2_DictionaryEnumerator_2<TKey,TValue,TEnumeratorKey,TEnumeratorValue>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DictionaryWrapper_2_DictionaryEnumerator_2<TKey,TValue,TEnumeratorKey,TEnumeratorValue>>(),
                        {"get_Key", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method);
}
template<typename TKey,typename TValue,typename TEnumeratorKey,typename TEnumeratorValue>
inline ::System::Object* GlobalNamespace::DictionaryWrapper_2_DictionaryEnumerator_2<TKey,TValue,TEnumeratorKey,TEnumeratorValue>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DictionaryWrapper_2_DictionaryEnumerator_2<TKey,TValue,TEnumeratorKey,TEnumeratorValue>>(),
                        {"get_Value", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method);
}
template<typename TKey,typename TValue,typename TEnumeratorKey,typename TEnumeratorValue>
inline ::System::Object* GlobalNamespace::DictionaryWrapper_2_DictionaryEnumerator_2<TKey,TValue,TEnumeratorKey,TEnumeratorValue>::get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DictionaryWrapper_2_DictionaryEnumerator_2<TKey,TValue,TEnumeratorKey,TEnumeratorValue>>(),
                        {"get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method);
}
template<typename TKey,typename TValue,typename TEnumeratorKey,typename TEnumeratorValue>
inline bool GlobalNamespace::DictionaryWrapper_2_DictionaryEnumerator_2<TKey,TValue,TEnumeratorKey,TEnumeratorValue>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DictionaryWrapper_2_DictionaryEnumerator_2<TKey,TValue,TEnumeratorKey,TEnumeratorValue>>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
template<typename TKey,typename TValue,typename TEnumeratorKey,typename TEnumeratorValue>
inline void GlobalNamespace::DictionaryWrapper_2_DictionaryEnumerator_2<TKey,TValue,TEnumeratorKey,TEnumeratorValue>::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DictionaryWrapper_2_DictionaryEnumerator_2<TKey,TValue,TEnumeratorKey,TEnumeratorValue>>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::Collections::IDictionaryEnumerator"
template<typename TKey,typename TValue,typename TEnumeratorKey,typename TEnumeratorValue>
constexpr  GlobalNamespace::DictionaryWrapper_2_DictionaryEnumerator_2<TKey,TValue,TEnumeratorKey,TEnumeratorValue>::operator ::System::Collections::IDictionaryEnumerator*()  {
return static_cast<::System::Collections::IDictionaryEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::IDictionaryEnumerator"
template<typename TKey,typename TValue,typename TEnumeratorKey,typename TEnumeratorValue>
constexpr ::System::Collections::IDictionaryEnumerator* GlobalNamespace::DictionaryWrapper_2_DictionaryEnumerator_2<TKey,TValue,TEnumeratorKey,TEnumeratorValue>::i___System__Collections__IDictionaryEnumerator()  {
return static_cast<::System::Collections::IDictionaryEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template<typename TKey,typename TValue,typename TEnumeratorKey,typename TEnumeratorValue>
constexpr  GlobalNamespace::DictionaryWrapper_2_DictionaryEnumerator_2<TKey,TValue,TEnumeratorKey,TEnumeratorValue>::operator ::System::Collections::IEnumerator*()  {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template<typename TKey,typename TValue,typename TEnumeratorKey,typename TEnumeratorValue>
constexpr ::System::Collections::IEnumerator* GlobalNamespace::DictionaryWrapper_2_DictionaryEnumerator_2<TKey,TValue,TEnumeratorKey,TEnumeratorValue>::i___System__Collections__IEnumerator()  {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_e", ty: "::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TEnumeratorKey,TEnumeratorValue>>*", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename TKey,typename TValue,typename TEnumeratorKey,typename TEnumeratorValue>
constexpr ::GlobalNamespace::DictionaryWrapper_2_DictionaryEnumerator_2<TKey,TValue,TEnumeratorKey,TEnumeratorValue>::DictionaryWrapper_2_DictionaryEnumerator_2(::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TEnumeratorKey,TEnumeratorValue>>*  _e) noexcept  {
this->_e = _e;
}
// Ctor Parameters []
template<typename TKey,typename TValue,typename TEnumeratorKey,typename TEnumeratorValue>
constexpr ::GlobalNamespace::DictionaryWrapper_2_DictionaryEnumerator_2<TKey,TValue,TEnumeratorKey,TEnumeratorValue>::DictionaryWrapper_2_DictionaryEnumerator_2()   {
}
