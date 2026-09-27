#pragma once
// IWYU pragma private; include "Unity/Collections/NativeParallelHashMap`2_ReadOnly.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeParallelHashMap_2_impl.hpp"
#include "Unity/Collections/zzzz__NativeParallelHashMap`2_ReadOnly_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__KeyValue_2_def.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeParallelHashMap_2_def.hpp"
template<typename TKey,typename TValue>
inline void GlobalNamespace::NativeParallelHashMap_2_ReadOnly<TKey,TValue>::_ctor(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMap_2<TKey,TValue>  hashMapData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NativeParallelHashMap_2_ReadOnly<TKey,TValue>>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMap_2<TKey,TValue>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, hashMapData);
}
template<typename TKey,typename TValue>
inline bool GlobalNamespace::NativeParallelHashMap_2_ReadOnly<TKey,TValue>::TryGetValue(TKey  key, ::by_ref<TValue>  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NativeParallelHashMap_2_ReadOnly<TKey,TValue>>(),
                        {"TryGetValue", {}, {::i2c::type_of<TKey>(), ::i2c::type_of<::by_ref<TValue>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, key, item);
}
template<typename TKey,typename TValue>
inline bool GlobalNamespace::NativeParallelHashMap_2_ReadOnly<TKey,TValue>::ContainsKey(TKey  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NativeParallelHashMap_2_ReadOnly<TKey,TValue>>(),
                        {"ContainsKey", {}, {::i2c::type_of<TKey>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, key);
}
template<typename TKey,typename TValue>
inline ::System::Collections::Generic::IEnumerator_1<::Unity::Collections::LowLevel::Unsafe::KeyValue_2<TKey,TValue>>* GlobalNamespace::NativeParallelHashMap_2_ReadOnly<TKey,TValue>::System_Collections_Generic_IEnumerable_Unity_Collections_LowLevel_Unsafe_KeyValue_TKey_TValue___GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NativeParallelHashMap_2_ReadOnly<TKey,TValue>>(),
                        {"System.Collections.Generic.IEnumerable<Unity.Collections.LowLevel.Unsafe.KeyValue<TKey,TValue>>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::Unity::Collections::LowLevel::Unsafe::KeyValue_2<TKey,TValue>>*>(*this, ___internal_method);
}
template<typename TKey,typename TValue>
inline ::System::Collections::IEnumerator* GlobalNamespace::NativeParallelHashMap_2_ReadOnly<TKey,TValue>::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NativeParallelHashMap_2_ReadOnly<TKey,TValue>>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Unity::Collections::LowLevel::Unsafe::KeyValue_2<TKey,TValue>>"
template<typename TKey,typename TValue>
constexpr  GlobalNamespace::NativeParallelHashMap_2_ReadOnly<TKey,TValue>::operator ::System::Collections::Generic::IEnumerable_1<::Unity::Collections::LowLevel::Unsafe::KeyValue_2<TKey,TValue>>*()  {
return static_cast<::System::Collections::Generic::IEnumerable_1<::Unity::Collections::LowLevel::Unsafe::KeyValue_2<TKey,TValue>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Unity::Collections::LowLevel::Unsafe::KeyValue_2<TKey,TValue>>"
template<typename TKey,typename TValue>
constexpr ::System::Collections::Generic::IEnumerable_1<::Unity::Collections::LowLevel::Unsafe::KeyValue_2<TKey,TValue>>* GlobalNamespace::NativeParallelHashMap_2_ReadOnly<TKey,TValue>::i___System__Collections__Generic__IEnumerable_1___Unity__Collections__LowLevel__Unsafe__KeyValue_2_TKey_TValue__()  {
return static_cast<::System::Collections::Generic::IEnumerable_1<::Unity::Collections::LowLevel::Unsafe::KeyValue_2<TKey,TValue>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template<typename TKey,typename TValue>
constexpr  GlobalNamespace::NativeParallelHashMap_2_ReadOnly<TKey,TValue>::operator ::System::Collections::IEnumerable*()  {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template<typename TKey,typename TValue>
constexpr ::System::Collections::IEnumerable* GlobalNamespace::NativeParallelHashMap_2_ReadOnly<TKey,TValue>::i___System__Collections__IEnumerable()  {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_HashMapData", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMap_2<TKey,TValue>", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename TKey,typename TValue>
constexpr ::GlobalNamespace::NativeParallelHashMap_2_ReadOnly<TKey,TValue>::NativeParallelHashMap_2_ReadOnly(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMap_2<TKey,TValue>  m_HashMapData) noexcept  {
this->m_HashMapData = m_HashMapData;
}
// Ctor Parameters []
template<typename TKey,typename TValue>
constexpr ::GlobalNamespace::NativeParallelHashMap_2_ReadOnly<TKey,TValue>::NativeParallelHashMap_2_ReadOnly()   {
}
