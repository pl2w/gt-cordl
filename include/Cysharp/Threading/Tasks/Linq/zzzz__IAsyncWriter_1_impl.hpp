#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Linq/IAsyncWriter_1.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__IAsyncWriter_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_def.hpp"
template<typename T>
inline ::Cysharp::Threading::Tasks::UniTask Cysharp::Threading::Tasks::Linq::IAsyncWriter_1<T>::YieldAsync(T  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Cysharp::Threading::Tasks::Linq::IAsyncWriter_1<T>*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(this, ___internal_method, value);
}
