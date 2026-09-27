#pragma once
// IWYU pragma private; include "Cysharp/Text/IResettableBufferWriter_1.hpp"
#include "Cysharp/Text/zzzz__IResettableBufferWriter_1_def.hpp"
#include "System/Buffers/zzzz__IBufferWriter_1_def.hpp"
template<typename T>
inline void Cysharp::Text::IResettableBufferWriter_1<T>::Reset()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Cysharp::Text::IResettableBufferWriter_1<T>*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
/// @brief Convert operator to "::System::Buffers::IBufferWriter_1<T>"
template<typename T>
constexpr  Cysharp::Text::IResettableBufferWriter_1<T>::operator ::System::Buffers::IBufferWriter_1<T>*() noexcept {
return static_cast<::System::Buffers::IBufferWriter_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Buffers::IBufferWriter_1<T>"
template<typename T>
constexpr ::System::Buffers::IBufferWriter_1<T>* Cysharp::Text::IResettableBufferWriter_1<T>::i___System__Buffers__IBufferWriter_1_T_() noexcept {
return static_cast<::System::Buffers::IBufferWriter_1<T>*>(static_cast<void*>(this));
}
