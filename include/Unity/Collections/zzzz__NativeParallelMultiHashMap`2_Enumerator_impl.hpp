#pragma once
// IWYU pragma private; include "Unity/Collections/NativeParallelMultiHashMap`2_Enumerator.hpp"
#include "Unity/Collections/zzzz__NativeParallelMultiHashMapIterator_1_impl.hpp"
#include "Unity/Collections/zzzz__NativeParallelMultiHashMap_2_impl.hpp"
#include "Unity/Collections/zzzz__NativeParallelMultiHashMap`2_Enumerator_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
template<typename TKey,typename TValue>
inline void GlobalNamespace::NativeParallelMultiHashMap_2_Enumerator<TKey,TValue>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NativeParallelMultiHashMap_2_Enumerator<TKey,TValue>>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename TKey,typename TValue>
inline bool GlobalNamespace::NativeParallelMultiHashMap_2_Enumerator<TKey,TValue>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NativeParallelMultiHashMap_2_Enumerator<TKey,TValue>>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
template<typename TKey,typename TValue>
inline void GlobalNamespace::NativeParallelMultiHashMap_2_Enumerator<TKey,TValue>::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NativeParallelMultiHashMap_2_Enumerator<TKey,TValue>>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename TKey,typename TValue>
inline TValue GlobalNamespace::NativeParallelMultiHashMap_2_Enumerator<TKey,TValue>::get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NativeParallelMultiHashMap_2_Enumerator<TKey,TValue>>(),
                        {"get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<TValue>(*this, ___internal_method);
}
template<typename TKey,typename TValue>
inline ::System::Object* GlobalNamespace::NativeParallelMultiHashMap_2_Enumerator<TKey,TValue>::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NativeParallelMultiHashMap_2_Enumerator<TKey,TValue>>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<TValue>"
template<typename TKey,typename TValue>
constexpr  GlobalNamespace::NativeParallelMultiHashMap_2_Enumerator<TKey,TValue>::operator ::System::Collections::Generic::IEnumerator_1<TValue>*()  {
return static_cast<::System::Collections::Generic::IEnumerator_1<TValue>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<TValue>"
template<typename TKey,typename TValue>
constexpr ::System::Collections::Generic::IEnumerator_1<TValue>* GlobalNamespace::NativeParallelMultiHashMap_2_Enumerator<TKey,TValue>::i___System__Collections__Generic__IEnumerator_1_TValue_()  {
return static_cast<::System::Collections::Generic::IEnumerator_1<TValue>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template<typename TKey,typename TValue>
constexpr  GlobalNamespace::NativeParallelMultiHashMap_2_Enumerator<TKey,TValue>::operator ::System::Collections::IEnumerator*()  {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template<typename TKey,typename TValue>
constexpr ::System::Collections::IEnumerator* GlobalNamespace::NativeParallelMultiHashMap_2_Enumerator<TKey,TValue>::i___System__Collections__IEnumerator()  {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
template<typename TKey,typename TValue>
constexpr  GlobalNamespace::NativeParallelMultiHashMap_2_Enumerator<TKey,TValue>::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
template<typename TKey,typename TValue>
constexpr ::System::IDisposable* GlobalNamespace::NativeParallelMultiHashMap_2_Enumerator<TKey,TValue>::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "hashmap", ty: "::Unity::Collections::NativeParallelMultiHashMap_2<TKey,TValue>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "key", ty: "TKey", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "isFirst", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "iterator", ty: "::Unity::Collections::NativeParallelMultiHashMapIterator_1<TKey>", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename TKey,typename TValue>
constexpr ::GlobalNamespace::NativeParallelMultiHashMap_2_Enumerator<TKey,TValue>::NativeParallelMultiHashMap_2_Enumerator(::Unity::Collections::NativeParallelMultiHashMap_2<TKey,TValue>  hashmap, TKey  key, uint8_t  isFirst, TValue  value, ::Unity::Collections::NativeParallelMultiHashMapIterator_1<TKey>  iterator) noexcept  {
this->hashmap = hashmap;
this->key = key;
this->isFirst = isFirst;
this->value = value;
this->iterator = iterator;
}
// Ctor Parameters []
template<typename TKey,typename TValue>
constexpr ::GlobalNamespace::NativeParallelMultiHashMap_2_Enumerator<TKey,TValue>::NativeParallelMultiHashMap_2_Enumerator()   {
}
