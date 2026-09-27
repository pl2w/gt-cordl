#pragma once
// IWYU pragma private; include "PerformanceSystems/FastRemoveExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "PerformanceSystems/zzzz__FastRemoveExtensions_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
template<typename T>
inline bool PerformanceSystems::FastRemoveExtensions::FastRemove(::System::Collections::Generic::List_1<T>*  list, T  itemToRemove)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::PerformanceSystems::FastRemoveExtensions*>(),
                    {"FastRemove", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Collections::Generic::List_1<T>*>(), ::i2c::type_of<T>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, list, itemToRemove);
}
template<typename T>
inline bool PerformanceSystems::FastRemoveExtensions::FastRemove(::System::Collections::Generic::List_1<T>*  list, ::System::Collections::Generic::HashSet_1<T>*  setToRemove)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::PerformanceSystems::FastRemoveExtensions*>(),
                    {"FastRemove", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Collections::Generic::List_1<T>*>(), ::i2c::type_of<::System::Collections::Generic::HashSet_1<T>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, list, setToRemove);
}
// Ctor Parameters []
constexpr ::PerformanceSystems::FastRemoveExtensions::FastRemoveExtensions()   {
}
