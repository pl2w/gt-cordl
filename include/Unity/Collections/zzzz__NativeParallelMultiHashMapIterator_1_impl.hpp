#pragma once
// IWYU pragma private; include "Unity/Collections/NativeParallelMultiHashMapIterator_1.hpp"
#include "Unity/Collections/zzzz__NativeParallelMultiHashMapIterator_1_def.hpp"
// Ctor Parameters [CppParam { name: "key", ty: "TKey", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "NextEntryIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "EntryIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename TKey>
constexpr ::Unity::Collections::NativeParallelMultiHashMapIterator_1<TKey>::NativeParallelMultiHashMapIterator_1(TKey  key, int32_t  NextEntryIndex, int32_t  EntryIndex) noexcept  {
this->key = key;
this->NextEntryIndex = NextEntryIndex;
this->EntryIndex = EntryIndex;
}
// Ctor Parameters []
template<typename TKey>
constexpr ::Unity::Collections::NativeParallelMultiHashMapIterator_1<TKey>::NativeParallelMultiHashMapIterator_1()   {
}
