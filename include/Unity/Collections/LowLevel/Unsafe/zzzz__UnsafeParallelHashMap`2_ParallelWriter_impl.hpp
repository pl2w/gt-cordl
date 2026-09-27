#pragma once
// IWYU pragma private; include "Unity/Collections/LowLevel/Unsafe/UnsafeParallelHashMap`2_ParallelWriter.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeParallelHashMap`2_ParallelWriter_def.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeParallelHashMapData_def.hpp"
template<typename TKey,typename TValue>
inline bool GlobalNamespace::UnsafeParallelHashMap_2_ParallelWriter<TKey,TValue>::TryAdd(TKey  key, TValue  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnsafeParallelHashMap_2_ParallelWriter<TKey,TValue>>(),
                        {"TryAdd", {}, {::i2c::type_of<TKey>(), ::i2c::type_of<TValue>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, key, item);
}
// Ctor Parameters [CppParam { name: "m_Buffer", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_ThreadIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename TKey,typename TValue>
constexpr ::GlobalNamespace::UnsafeParallelHashMap_2_ParallelWriter<TKey,TValue>::UnsafeParallelHashMap_2_ParallelWriter(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData*  m_Buffer, int32_t  m_ThreadIndex) noexcept  {
this->m_Buffer = m_Buffer;
this->m_ThreadIndex = m_ThreadIndex;
}
// Ctor Parameters []
template<typename TKey,typename TValue>
constexpr ::GlobalNamespace::UnsafeParallelHashMap_2_ParallelWriter<TKey,TValue>::UnsafeParallelHashMap_2_ParallelWriter()   {
}
