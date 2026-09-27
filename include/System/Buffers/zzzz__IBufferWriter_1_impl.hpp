#pragma once
// IWYU pragma private; include "System/Buffers/IBufferWriter_1.hpp"
#include "System/Buffers/zzzz__IBufferWriter_1_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
template<typename T>
inline void System::Buffers::IBufferWriter_1<T>::Advance(int32_t  count)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Buffers::IBufferWriter_1<T>*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, count);
}
template<typename T>
inline ::System::Span_1<T> System::Buffers::IBufferWriter_1<T>::GetSpan(int32_t  sizeHint)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Buffers::IBufferWriter_1<T>*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Span_1<T>>(this, ___internal_method, sizeHint);
}
