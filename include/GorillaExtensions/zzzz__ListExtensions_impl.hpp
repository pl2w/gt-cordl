#pragma once
// IWYU pragma private; include "GorillaExtensions/ListExtensions.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GorillaExtensions/zzzz__ListExtensions_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
template<typename TCol,typename TVal>
requires(::cordl_internals::type_constraint<TCol, ::System::Collections::Generic::ICollection_1<TVal>*> && ::cordl_internals::default_constructor_constraint<TCol>)
inline TCol GorillaExtensions::ListExtensions::ShuffleIntoCollection(::System::Collections::Generic::List_1<TVal>*  list)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GorillaExtensions::ListExtensions*>(),
                    {"ShuffleIntoCollection", {::i2c::class_of<TCol>(), ::i2c::class_of<TVal>()}, {::i2c::type_of<::System::Collections::Generic::List_1<TVal>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TCol>(), ::i2c::class_of<TVal>()}
                )));
return ::cordl_internals::RunMethodRethrow<TCol>(nullptr, ___internal_method, list);
}
// Ctor Parameters []
constexpr ::GorillaExtensions::ListExtensions::ListExtensions()   {
}
