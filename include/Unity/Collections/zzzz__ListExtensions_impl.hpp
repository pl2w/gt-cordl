#pragma once
// IWYU pragma private; include "Unity/Collections/ListExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/zzzz__ListExtensions_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
template<typename T>
inline void Unity::Collections::ListExtensions::RemoveAtSwapBack(::System::Collections::Generic::List_1<T>*  list, int32_t  index)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Unity::Collections::ListExtensions*>(),
                    {"RemoveAtSwapBack", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Collections::Generic::List_1<T>*>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, list, index);
}
// Ctor Parameters []
constexpr ::Unity::Collections::ListExtensions::ListExtensions()   {
}
