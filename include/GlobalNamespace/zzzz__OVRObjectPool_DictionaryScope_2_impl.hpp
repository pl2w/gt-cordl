#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRObjectPool_DictionaryScope_2.hpp"
#include "GlobalNamespace/zzzz__OVRObjectPool_DictionaryScope_2_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
template<typename TKey,typename TValue>
inline void GlobalNamespace::OVRObjectPool_DictionaryScope_2<TKey,TValue>::_ctor(::by_ref<::System::Collections::Generic::Dictionary_2<TKey,TValue>*>  dictionary)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRObjectPool_DictionaryScope_2<TKey,TValue>>(),
                        {".ctor", {}, {::i2c::type_of<::by_ref<::System::Collections::Generic::Dictionary_2<TKey,TValue>*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, dictionary);
}
template<typename TKey,typename TValue>
inline void GlobalNamespace::OVRObjectPool_DictionaryScope_2<TKey,TValue>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRObjectPool_DictionaryScope_2<TKey,TValue>>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
template<typename TKey,typename TValue>
constexpr  GlobalNamespace::OVRObjectPool_DictionaryScope_2<TKey,TValue>::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
template<typename TKey,typename TValue>
constexpr ::System::IDisposable* GlobalNamespace::OVRObjectPool_DictionaryScope_2<TKey,TValue>::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_dictionary", ty: "::System::Collections::Generic::Dictionary_2<TKey,TValue>*", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename TKey,typename TValue>
constexpr ::GlobalNamespace::OVRObjectPool_DictionaryScope_2<TKey,TValue>::OVRObjectPool_DictionaryScope_2(::System::Collections::Generic::Dictionary_2<TKey,TValue>*  _dictionary) noexcept  {
this->_dictionary = _dictionary;
}
// Ctor Parameters []
template<typename TKey,typename TValue>
constexpr ::GlobalNamespace::OVRObjectPool_DictionaryScope_2<TKey,TValue>::OVRObjectPool_DictionaryScope_2()   {
}
