#pragma once
// IWYU pragma private; include "Unity/Collections/LowLevel/Unsafe/HashMapHelper_1.hpp"
#include "Unity/Collections/zzzz__AllocatorManager_AllocatorHandle_impl.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__HashMapHelper_1_def.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__HashMapHelper`1_Enumerator_def.hpp"
#include "Unity/Collections/zzzz__AllocatorManager_AllocatorHandle_def.hpp"
template<typename TKey>
inline int32_t Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>::CalcCapacityCeilPow2(int32_t  capacity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>>(),
                        {"CalcCapacityCeilPow2", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, capacity);
}
template<typename TKey>
inline int32_t Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>::GetBucketSize(int32_t  capacity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>>(),
                        {"GetBucketSize", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, capacity);
}
template<typename TKey>
inline bool Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>::get_IsCreated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>>(),
                        {"get_IsCreated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
template<typename TKey>
inline void Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename TKey>
inline void Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>::Init(int32_t  capacity, int32_t  sizeOfValueT, int32_t  minGrowth, ::GlobalNamespace::AllocatorManager_AllocatorHandle  allocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>>(),
                        {"Init", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::AllocatorManager_AllocatorHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, capacity, sizeOfValueT, minGrowth, allocator);
}
template<typename TKey>
inline void Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename TKey>
inline ::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>* Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>::Alloc(int32_t  capacity, int32_t  sizeOfValueT, int32_t  minGrowth, ::GlobalNamespace::AllocatorManager_AllocatorHandle  allocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>>(),
                        {"Alloc", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::AllocatorManager_AllocatorHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>*>(nullptr, ___internal_method, capacity, sizeOfValueT, minGrowth, allocator);
}
template<typename TKey>
inline void Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>::Free(::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>>(),
                        {"Free", {}, {::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
template<typename TKey>
inline void Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>::Resize(int32_t  newCapacity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>>(),
                        {"Resize", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, newCapacity);
}
template<typename TKey>
inline void Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>::ResizeExact(int32_t  newCapacity, int32_t  newBucketCapacity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>>(),
                        {"ResizeExact", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, newCapacity, newBucketCapacity);
}
template<typename TKey>
inline int32_t Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>::CalculateDataSize(int32_t  capacity, int32_t  bucketCapacity, int32_t  sizeOfTValue, ::by_ref<int32_t>  outKeyOffset, ::by_ref<int32_t>  outNextOffset, ::by_ref<int32_t>  outBucketOffset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>>(),
                        {"CalculateDataSize", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, capacity, bucketCapacity, sizeOfTValue, outKeyOffset, outNextOffset, outBucketOffset);
}
template<typename TKey>
inline int32_t Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>::GetBucket(/* [IsReadOnly] */ ::by_ref<TKey>  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>>(),
                        {"GetBucket", {}, {::i2c::type_of<::by_ref<TKey>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, key);
}
template<typename TKey>
inline int32_t Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>::TryAdd(/* [IsReadOnly] */ ::by_ref<TKey>  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>>(),
                        {"TryAdd", {}, {::i2c::type_of<::by_ref<TKey>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, key);
}
template<typename TKey>
inline int32_t Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>::Find(TKey  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>>(),
                        {"Find", {}, {::i2c::type_of<TKey>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, key);
}
template<typename TKey>
template<typename TValue>
requires(::cordl_internals::value_type_constraint<TValue> && ::cordl_internals::default_constructor_constraint<TValue>)
inline bool Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>::TryGetValue(TKey  key, ::by_ref<TValue>  item)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>>(),
                    {"TryGetValue", {::i2c::class_of<TValue>()}, {::i2c::type_of<TKey>(), ::i2c::type_of<::by_ref<TValue>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TValue>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, key, item);
}
template<typename TKey>
inline int32_t Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>::TryRemove(TKey  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>>(),
                        {"TryRemove", {}, {::i2c::type_of<TKey>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, key);
}
template<typename TKey>
inline bool Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>::MoveNextSearch(::by_ref<int32_t>  bucketIndex, ::by_ref<int32_t>  nextIndex, ::by_ref<int32_t>  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>>(),
                        {"MoveNextSearch", {}, {::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, bucketIndex, nextIndex, index);
}
template<typename TKey>
inline bool Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>::MoveNext(::by_ref<int32_t>  bucketIndex, ::by_ref<int32_t>  nextIndex, ::by_ref<int32_t>  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>>(),
                        {"MoveNext", {}, {::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, bucketIndex, nextIndex, index);
}
// Ctor Parameters [CppParam { name: "Ptr", ty: "uint8_t*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Keys", ty: "TKey*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Next", ty: "int32_t*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Buckets", ty: "int32_t*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Count", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Capacity", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Log2MinGrowth", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "BucketCapacity", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "AllocatedIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "FirstFreeIdx", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "SizeOfTValue", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Allocator", ty: "::GlobalNamespace::AllocatorManager_AllocatorHandle", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename TKey>
constexpr ::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>::HashMapHelper_1(uint8_t*  Ptr, TKey*  Keys, int32_t*  Next, int32_t*  Buckets, int32_t  Count, int32_t  Capacity, int32_t  Log2MinGrowth, int32_t  BucketCapacity, int32_t  AllocatedIndex, int32_t  FirstFreeIdx, int32_t  SizeOfTValue, ::GlobalNamespace::AllocatorManager_AllocatorHandle  Allocator) noexcept  {
this->Ptr = Ptr;
this->Keys = Keys;
this->Next = Next;
this->Buckets = Buckets;
this->Count = Count;
this->Capacity = Capacity;
this->Log2MinGrowth = Log2MinGrowth;
this->BucketCapacity = BucketCapacity;
this->AllocatedIndex = AllocatedIndex;
this->FirstFreeIdx = FirstFreeIdx;
this->SizeOfTValue = SizeOfTValue;
this->Allocator = Allocator;
}
// Ctor Parameters []
template<typename TKey>
constexpr ::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>::HashMapHelper_1()   {
}
