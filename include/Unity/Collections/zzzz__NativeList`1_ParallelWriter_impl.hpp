#pragma once
// IWYU pragma private; include "Unity/Collections/NativeList`1_ParallelWriter.hpp"
#include "Unity/Collections/zzzz__NativeList`1_ParallelWriter_def.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeList_1_def.hpp"
template<typename T>
inline void GlobalNamespace::NativeList_1_ParallelWriter<T>::_ctor(::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>*  listData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NativeList_1_ParallelWriter<T>>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, listData);
}
template<typename T>
inline void GlobalNamespace::NativeList_1_ParallelWriter<T>::AddNoResize(T  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NativeList_1_ParallelWriter<T>>(),
                        {"AddNoResize", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
template<typename T>
inline void GlobalNamespace::NativeList_1_ParallelWriter<T>::AddRangeNoResize(void*  ptr, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NativeList_1_ParallelWriter<T>>(),
                        {"AddRangeNoResize", {}, {::i2c::type_of<void*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, ptr, count);
}
// Ctor Parameters [CppParam { name: "ListData", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>*", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename T>
constexpr ::GlobalNamespace::NativeList_1_ParallelWriter<T>::NativeList_1_ParallelWriter(::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>*  ListData) noexcept  {
this->ListData = ListData;
}
// Ctor Parameters []
template<typename T>
constexpr ::GlobalNamespace::NativeList_1_ParallelWriter<T>::NativeList_1_ParallelWriter()   {
}
