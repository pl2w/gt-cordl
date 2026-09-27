#pragma once
// IWYU pragma private; include "Unity/Collections/NativeParallelMultiHashMap`2_ParallelWriter.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeParallelMultiHashMap`2_ParallelWriter_impl.hpp"
#include "Unity/Collections/zzzz__NativeParallelMultiHashMap`2_ParallelWriter_def.hpp"
template<typename TKey,typename TValue>
inline void GlobalNamespace::NativeParallelMultiHashMap_2_ParallelWriter<TKey,TValue>::Add(TKey  key, TValue  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NativeParallelMultiHashMap_2_ParallelWriter<TKey,TValue>>(),
                        {"Add", {}, {::i2c::type_of<TKey>(), ::i2c::type_of<TValue>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, key, item);
}
// Ctor Parameters [CppParam { name: "m_Writer", ty: "::GlobalNamespace::UnsafeParallelMultiHashMap_2_ParallelWriter<TKey,TValue>", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename TKey,typename TValue>
constexpr ::GlobalNamespace::NativeParallelMultiHashMap_2_ParallelWriter<TKey,TValue>::NativeParallelMultiHashMap_2_ParallelWriter(::GlobalNamespace::UnsafeParallelMultiHashMap_2_ParallelWriter<TKey,TValue>  m_Writer) noexcept  {
this->m_Writer = m_Writer;
}
// Ctor Parameters []
template<typename TKey,typename TValue>
constexpr ::GlobalNamespace::NativeParallelMultiHashMap_2_ParallelWriter<TKey,TValue>::NativeParallelMultiHashMap_2_ParallelWriter()   {
}
