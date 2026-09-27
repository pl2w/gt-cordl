#pragma once
// IWYU pragma private; include "BuildSafe/ListUtilsUnsafe_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BuildSafe/zzzz__ListUtilsUnsafe_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
template<typename T>
inline ::ArrayW<T> BuildSafe::ListUtilsUnsafe_1<T>::GetInternalArray(::System::Collections::Generic::List_1<T>*  list)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BuildSafe::ListUtilsUnsafe_1<T>*>(),
                        {"GetInternalArray", {}, {::i2c::type_of<::System::Collections::Generic::List_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(nullptr, ___internal_method, list);
}
// Ctor Parameters []
template<typename T>
constexpr ::BuildSafe::ListUtilsUnsafe_1<T>::ListUtilsUnsafe_1()   {
}
