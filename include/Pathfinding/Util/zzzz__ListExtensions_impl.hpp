#pragma once
// IWYU pragma private; include "Pathfinding/Util/ListExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Pathfinding/Util/zzzz__ListExtensions_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
template<typename T>
inline ::ArrayW<T> Pathfinding::Util::ListExtensions::ToArrayFromPool(::System::Collections::Generic::List_1<T>*  list)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Util::ListExtensions*>(),
                    {"ToArrayFromPool", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Collections::Generic::List_1<T>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(nullptr, ___internal_method, list);
}
template<typename T>
inline void Pathfinding::Util::ListExtensions::ClearFast(::System::Collections::Generic::List_1<T>*  list)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Util::ListExtensions*>(),
                    {"ClearFast", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Collections::Generic::List_1<T>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, list);
}
// Ctor Parameters []
constexpr ::Pathfinding::Util::ListExtensions::ListExtensions()   {
}
