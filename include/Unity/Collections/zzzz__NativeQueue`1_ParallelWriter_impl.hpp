#pragma once
// IWYU pragma private; include "Unity/Collections/NativeQueue`1_ParallelWriter.hpp"
#include "Unity/Collections/zzzz__UnsafeQueue`1_ParallelWriter_impl.hpp"
#include "Unity/Collections/zzzz__NativeQueue`1_ParallelWriter_def.hpp"
template<typename T>
inline void GlobalNamespace::NativeQueue_1_ParallelWriter<T>::Enqueue(T  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NativeQueue_1_ParallelWriter<T>>(),
                        {"Enqueue", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "unsafeWriter", ty: "::GlobalNamespace::UnsafeQueue_1_ParallelWriter<T>", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename T>
constexpr ::GlobalNamespace::NativeQueue_1_ParallelWriter<T>::NativeQueue_1_ParallelWriter(::GlobalNamespace::UnsafeQueue_1_ParallelWriter<T>  unsafeWriter) noexcept  {
this->unsafeWriter = unsafeWriter;
}
// Ctor Parameters []
template<typename T>
constexpr ::GlobalNamespace::NativeQueue_1_ParallelWriter<T>::NativeQueue_1_ParallelWriter()   {
}
