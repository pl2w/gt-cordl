#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRNativeList.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__OVRNativeList_def.hpp"
#include "GlobalNamespace/zzzz__OVREnumerable_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRNativeList_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRNativeList_CapacityHelper_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "Unity/Collections/zzzz__Allocator_def.hpp"
template<typename T>
inline ::GlobalNamespace::OVRNativeList_CapacityHelper GlobalNamespace::OVRNativeList::WithSuggestedCapacityFrom(/* [NoEnumeration] */ ::System::Collections::Generic::IEnumerable_1<T>*  collection)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OVRNativeList*>(),
                    {"WithSuggestedCapacityFrom", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<T>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRNativeList_CapacityHelper>(nullptr, ___internal_method, collection);
}
template<typename T>
inline ::GlobalNamespace::OVRNativeList_CapacityHelper GlobalNamespace::OVRNativeList::WithSuggestedCapacityFrom(/* [NoEnumeration] */ ::System::Collections::Generic::IEnumerable_1<T>*  collection, ::by_ref<::GlobalNamespace::OVREnumerable_1<T>>  nonAllocatingEnumerable)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OVRNativeList*>(),
                    {"WithSuggestedCapacityFrom", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<T>*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::OVREnumerable_1<T>>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRNativeList_CapacityHelper>(nullptr, ___internal_method, collection, nonAllocatingEnumerable);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline ::GlobalNamespace::OVRNativeList_1<T> GlobalNamespace::OVRNativeList::ToNativeList(::System::Collections::Generic::IEnumerable_1<T>*  collection, ::Unity::Collections::Allocator  allocator)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OVRNativeList*>(),
                    {"ToNativeList", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<T>*>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRNativeList_1<T>>(nullptr, ___internal_method, collection, allocator);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRNativeList::OVRNativeList()   {
}
