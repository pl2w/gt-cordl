#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/HashSetExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/XR/CoreUtils/zzzz__HashSetExtensions_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
template<typename T>
inline void Unity::XR::CoreUtils::HashSetExtensions::ExceptWithNonAlloc(::System::Collections::Generic::HashSet_1<T>*  self, ::System::Collections::Generic::HashSet_1<T>*  other)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Unity::XR::CoreUtils::HashSetExtensions*>(),
                    {"ExceptWithNonAlloc", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Collections::Generic::HashSet_1<T>*>(), ::i2c::type_of<::System::Collections::Generic::HashSet_1<T>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, self, other);
}
template<typename T>
inline T Unity::XR::CoreUtils::HashSetExtensions::First(::System::Collections::Generic::HashSet_1<T>*  set)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Unity::XR::CoreUtils::HashSetExtensions*>(),
                    {"First", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Collections::Generic::HashSet_1<T>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, set);
}
// Ctor Parameters []
constexpr ::Unity::XR::CoreUtils::HashSetExtensions::HashSetExtensions()   {
}
