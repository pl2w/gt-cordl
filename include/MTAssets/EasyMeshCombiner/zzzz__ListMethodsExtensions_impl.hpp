#pragma once
// IWYU pragma private; include "MTAssets/EasyMeshCombiner/ListMethodsExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "MTAssets/EasyMeshCombiner/zzzz__ListMethodsExtensions_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
template<typename T>
inline void MTAssets::EasyMeshCombiner::ListMethodsExtensions::RemoveAllNullItems(::System::Collections::Generic::List_1<T>*  list)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::MTAssets::EasyMeshCombiner::ListMethodsExtensions*>(),
                    {"RemoveAllNullItems", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Collections::Generic::List_1<T>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, list);
}
// Ctor Parameters []
constexpr ::MTAssets::EasyMeshCombiner::ListMethodsExtensions::ListMethodsExtensions()   {
}
