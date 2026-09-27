#pragma once
// IWYU pragma private; include "Oculus/Interaction/HashSetExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Interaction/zzzz__HashSetExtensions_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
template<typename T>
inline void Oculus::Interaction::HashSetExtensions::UnionWithNonAlloc(::System::Collections::Generic::HashSet_1<T>*  hashSetToModify, ::System::Collections::Generic::HashSet_1<T>*  other)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HashSetExtensions*>(),
                    {"UnionWithNonAlloc", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Collections::Generic::HashSet_1<T>*>(), ::i2c::type_of<::System::Collections::Generic::HashSet_1<T>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, hashSetToModify, other);
}
template<typename T>
inline void Oculus::Interaction::HashSetExtensions::UnionWithNonAlloc(::System::Collections::Generic::HashSet_1<T>*  hashSetToModify, ::System::Collections::Generic::IList_1<T>*  other)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HashSetExtensions*>(),
                    {"UnionWithNonAlloc", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Collections::Generic::HashSet_1<T>*>(), ::i2c::type_of<::System::Collections::Generic::IList_1<T>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, hashSetToModify, other);
}
template<typename T>
inline void Oculus::Interaction::HashSetExtensions::ExceptWithNonAlloc(::System::Collections::Generic::HashSet_1<T>*  hashSetToModify, ::System::Collections::Generic::HashSet_1<T>*  other)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HashSetExtensions*>(),
                    {"ExceptWithNonAlloc", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Collections::Generic::HashSet_1<T>*>(), ::i2c::type_of<::System::Collections::Generic::HashSet_1<T>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, hashSetToModify, other);
}
template<typename T>
inline void Oculus::Interaction::HashSetExtensions::ExceptWithNonAlloc(::System::Collections::Generic::HashSet_1<T>*  hashSetToModify, ::System::Collections::Generic::IList_1<T>*  other)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HashSetExtensions*>(),
                    {"ExceptWithNonAlloc", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Collections::Generic::HashSet_1<T>*>(), ::i2c::type_of<::System::Collections::Generic::IList_1<T>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, hashSetToModify, other);
}
template<typename T>
inline bool Oculus::Interaction::HashSetExtensions::OverlapsNonAlloc(::System::Collections::Generic::HashSet_1<T>*  hashSetToCheck, ::System::Collections::Generic::HashSet_1<T>*  other)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HashSetExtensions*>(),
                    {"OverlapsNonAlloc", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Collections::Generic::HashSet_1<T>*>(), ::i2c::type_of<::System::Collections::Generic::HashSet_1<T>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, hashSetToCheck, other);
}
template<typename T>
inline bool Oculus::Interaction::HashSetExtensions::OverlapsNonAlloc(::System::Collections::Generic::HashSet_1<T>*  hashSetToCheck, ::System::Collections::Generic::IList_1<T>*  other)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HashSetExtensions*>(),
                    {"OverlapsNonAlloc", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Collections::Generic::HashSet_1<T>*>(), ::i2c::type_of<::System::Collections::Generic::IList_1<T>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, hashSetToCheck, other);
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::HashSetExtensions::HashSetExtensions()   {
}
