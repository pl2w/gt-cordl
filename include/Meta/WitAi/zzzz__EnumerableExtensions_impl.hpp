#pragma once
// IWYU pragma private; include "Meta/WitAi/EnumerableExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/WitAi/zzzz__EnumerableExtensions_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
template<typename TSource>
inline bool Meta::WitAi::EnumerableExtensions::Equivalent(::System::Collections::Generic::IEnumerable_1<TSource>*  first, ::System::Collections::Generic::IEnumerable_1<TSource>*  second)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::EnumerableExtensions*>(),
                    {"Equivalent", {::i2c::class_of<TSource>()}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<TSource>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, first, second);
}
// Ctor Parameters []
constexpr ::Meta::WitAi::EnumerableExtensions::EnumerableExtensions()   {
}
