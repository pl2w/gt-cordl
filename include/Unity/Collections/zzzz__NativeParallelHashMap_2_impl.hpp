#pragma once
// IWYU pragma private; include "Unity/Collections/NativeParallelHashMap_2.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeParallelHashMap_2_impl.hpp"
#include "Unity/Collections/zzzz__NativeParallelHashMap_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__KeyValue_2_def.hpp"
#include "Unity/Collections/zzzz__AllocatorManager_AllocatorHandle_def.hpp"
#include "Unity/Collections/zzzz__NativeParallelHashMap`2_Enumerator_def.hpp"
#include "Unity/Collections/zzzz__NativeParallelHashMap`2_ParallelWriter_def.hpp"
#include "Unity/Collections/zzzz__NativeParallelHashMap`2_ReadOnly_def.hpp"
template<typename TKey,typename TValue>
inline void Unity::Collections::NativeParallelHashMap_2<TKey,TValue>::_ctor(int32_t  capacity, ::GlobalNamespace::AllocatorManager_AllocatorHandle  allocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::NativeParallelHashMap_2<TKey,TValue>>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::AllocatorManager_AllocatorHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, capacity, allocator);
}
template<typename TKey,typename TValue>
inline int32_t Unity::Collections::NativeParallelHashMap_2<TKey,TValue>::Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::NativeParallelHashMap_2<TKey,TValue>>(),
                        {"Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template<typename TKey,typename TValue>
inline int32_t Unity::Collections::NativeParallelHashMap_2<TKey,TValue>::get_Capacity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::NativeParallelHashMap_2<TKey,TValue>>(),
                        {"get_Capacity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template<typename TKey,typename TValue>
inline void Unity::Collections::NativeParallelHashMap_2<TKey,TValue>::set_Capacity(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::NativeParallelHashMap_2<TKey,TValue>>(),
                        {"set_Capacity", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
template<typename TKey,typename TValue>
inline void Unity::Collections::NativeParallelHashMap_2<TKey,TValue>::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::NativeParallelHashMap_2<TKey,TValue>>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename TKey,typename TValue>
inline bool Unity::Collections::NativeParallelHashMap_2<TKey,TValue>::TryAdd(TKey  key, TValue  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::NativeParallelHashMap_2<TKey,TValue>>(),
                        {"TryAdd", {}, {::i2c::type_of<TKey>(), ::i2c::type_of<TValue>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, key, item);
}
template<typename TKey,typename TValue>
inline void Unity::Collections::NativeParallelHashMap_2<TKey,TValue>::Add(TKey  key, TValue  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::NativeParallelHashMap_2<TKey,TValue>>(),
                        {"Add", {}, {::i2c::type_of<TKey>(), ::i2c::type_of<TValue>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, key, item);
}
template<typename TKey,typename TValue>
inline bool Unity::Collections::NativeParallelHashMap_2<TKey,TValue>::Remove(TKey  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::NativeParallelHashMap_2<TKey,TValue>>(),
                        {"Remove", {}, {::i2c::type_of<TKey>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, key);
}
template<typename TKey,typename TValue>
inline bool Unity::Collections::NativeParallelHashMap_2<TKey,TValue>::TryGetValue(TKey  key, ::by_ref<TValue>  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::NativeParallelHashMap_2<TKey,TValue>>(),
                        {"TryGetValue", {}, {::i2c::type_of<TKey>(), ::i2c::type_of<::by_ref<TValue>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, key, item);
}
template<typename TKey,typename TValue>
inline bool Unity::Collections::NativeParallelHashMap_2<TKey,TValue>::ContainsKey(TKey  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::NativeParallelHashMap_2<TKey,TValue>>(),
                        {"ContainsKey", {}, {::i2c::type_of<TKey>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, key);
}
template<typename TKey,typename TValue>
inline TValue Unity::Collections::NativeParallelHashMap_2<TKey,TValue>::get_Item(TKey  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::NativeParallelHashMap_2<TKey,TValue>>(),
                        {"get_Item", {}, {::i2c::type_of<TKey>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<TValue>(*this, ___internal_method, key);
}
template<typename TKey,typename TValue>
inline void Unity::Collections::NativeParallelHashMap_2<TKey,TValue>::set_Item(TKey  key, TValue  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::NativeParallelHashMap_2<TKey,TValue>>(),
                        {"set_Item", {}, {::i2c::type_of<TKey>(), ::i2c::type_of<TValue>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, key, value);
}
template<typename TKey,typename TValue>
inline bool Unity::Collections::NativeParallelHashMap_2<TKey,TValue>::get_IsCreated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::NativeParallelHashMap_2<TKey,TValue>>(),
                        {"get_IsCreated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
template<typename TKey,typename TValue>
inline void Unity::Collections::NativeParallelHashMap_2<TKey,TValue>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::NativeParallelHashMap_2<TKey,TValue>>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename TKey,typename TValue>
inline ::GlobalNamespace::NativeParallelHashMap_2_ParallelWriter<TKey,TValue> Unity::Collections::NativeParallelHashMap_2<TKey,TValue>::AsParallelWriter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::NativeParallelHashMap_2<TKey,TValue>>(),
                        {"AsParallelWriter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NativeParallelHashMap_2_ParallelWriter<TKey,TValue>>(*this, ___internal_method);
}
template<typename TKey,typename TValue>
inline ::GlobalNamespace::NativeParallelHashMap_2_ReadOnly<TKey,TValue> Unity::Collections::NativeParallelHashMap_2<TKey,TValue>::AsReadOnly()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::NativeParallelHashMap_2<TKey,TValue>>(),
                        {"AsReadOnly", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NativeParallelHashMap_2_ReadOnly<TKey,TValue>>(*this, ___internal_method);
}
template<typename TKey,typename TValue>
inline ::GlobalNamespace::NativeParallelHashMap_2_Enumerator<TKey,TValue> Unity::Collections::NativeParallelHashMap_2<TKey,TValue>::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::NativeParallelHashMap_2<TKey,TValue>>(),
                        {"GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NativeParallelHashMap_2_Enumerator<TKey,TValue>>(*this, ___internal_method);
}
template<typename TKey,typename TValue>
inline ::System::Collections::Generic::IEnumerator_1<::Unity::Collections::LowLevel::Unsafe::KeyValue_2<TKey,TValue>>* Unity::Collections::NativeParallelHashMap_2<TKey,TValue>::System_Collections_Generic_IEnumerable_Unity_Collections_LowLevel_Unsafe_KeyValue_TKey_TValue___GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::NativeParallelHashMap_2<TKey,TValue>>(),
                        {"System.Collections.Generic.IEnumerable<Unity.Collections.LowLevel.Unsafe.KeyValue<TKey,TValue>>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::Unity::Collections::LowLevel::Unsafe::KeyValue_2<TKey,TValue>>*>(*this, ___internal_method);
}
template<typename TKey,typename TValue>
inline ::System::Collections::IEnumerator* Unity::Collections::NativeParallelHashMap_2<TKey,TValue>::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::NativeParallelHashMap_2<TKey,TValue>>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
template<typename TKey,typename TValue>
constexpr  Unity::Collections::NativeParallelHashMap_2<TKey,TValue>::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
template<typename TKey,typename TValue>
constexpr ::System::IDisposable* Unity::Collections::NativeParallelHashMap_2<TKey,TValue>::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Unity::Collections::LowLevel::Unsafe::KeyValue_2<TKey,TValue>>"
template<typename TKey,typename TValue>
constexpr  Unity::Collections::NativeParallelHashMap_2<TKey,TValue>::operator ::System::Collections::Generic::IEnumerable_1<::Unity::Collections::LowLevel::Unsafe::KeyValue_2<TKey,TValue>>*()  {
return static_cast<::System::Collections::Generic::IEnumerable_1<::Unity::Collections::LowLevel::Unsafe::KeyValue_2<TKey,TValue>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Unity::Collections::LowLevel::Unsafe::KeyValue_2<TKey,TValue>>"
template<typename TKey,typename TValue>
constexpr ::System::Collections::Generic::IEnumerable_1<::Unity::Collections::LowLevel::Unsafe::KeyValue_2<TKey,TValue>>* Unity::Collections::NativeParallelHashMap_2<TKey,TValue>::i___System__Collections__Generic__IEnumerable_1___Unity__Collections__LowLevel__Unsafe__KeyValue_2_TKey_TValue__()  {
return static_cast<::System::Collections::Generic::IEnumerable_1<::Unity::Collections::LowLevel::Unsafe::KeyValue_2<TKey,TValue>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template<typename TKey,typename TValue>
constexpr  Unity::Collections::NativeParallelHashMap_2<TKey,TValue>::operator ::System::Collections::IEnumerable*()  {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template<typename TKey,typename TValue>
constexpr ::System::Collections::IEnumerable* Unity::Collections::NativeParallelHashMap_2<TKey,TValue>::i___System__Collections__IEnumerable()  {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_HashMapData", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMap_2<TKey,TValue>", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename TKey,typename TValue>
constexpr ::Unity::Collections::NativeParallelHashMap_2<TKey,TValue>::NativeParallelHashMap_2(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMap_2<TKey,TValue>  m_HashMapData) noexcept  {
this->m_HashMapData = m_HashMapData;
}
// Ctor Parameters []
template<typename TKey,typename TValue>
constexpr ::Unity::Collections::NativeParallelHashMap_2<TKey,TValue>::NativeParallelHashMap_2()   {
}
