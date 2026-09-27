#pragma once
// IWYU pragma private; include "Unity/Collections/FixedStringMethods.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/zzzz__INativeList_1_impl.hpp"
#include "Unity/Collections/zzzz__IUTF8Bytes_impl.hpp"
#include "Unity/Collections/zzzz__FixedStringMethods_def.hpp"
#include "Unity/Collections/zzzz__CopyError_def.hpp"
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T, ::Unity::Collections::IUTF8Bytes*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline ::Unity::Collections::CopyError Unity::Collections::FixedStringMethods::CopyFromTruncated(::by_ref<T>  fs, ::StringW  s)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Unity::Collections::FixedStringMethods*>(),
                    {"CopyFromTruncated", {::i2c::class_of<T>()}, {::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<::StringW>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::CopyError>(nullptr, ___internal_method, fs, s);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T, ::Unity::Collections::IUTF8Bytes*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline int32_t Unity::Collections::FixedStringMethods::CompareTo(::by_ref<T>  fs, uint8_t*  bytes, int32_t  bytesLen)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Unity::Collections::FixedStringMethods*>(),
                    {"CompareTo", {::i2c::class_of<T>()}, {::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, fs, bytes, bytesLen);
}
template<typename T,typename T2>
requires(::cordl_internals::type_constraint<T, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T, ::Unity::Collections::IUTF8Bytes*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T> && ::cordl_internals::type_constraint<T2, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T2, ::Unity::Collections::IUTF8Bytes*> && ::cordl_internals::value_type_constraint<T2> && ::cordl_internals::default_constructor_constraint<T2>)
inline int32_t Unity::Collections::FixedStringMethods::CompareTo(::by_ref<T>  fs, /* [IsReadOnly] */ ::by_ref<T2>  other)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Unity::Collections::FixedStringMethods*>(),
                    {"CompareTo", {::i2c::class_of<T>(), ::i2c::class_of<T2>()}, {::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<::by_ref<T2>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>(), ::i2c::class_of<T2>()}
                )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, fs, other);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T, ::Unity::Collections::IUTF8Bytes*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline ::StringW Unity::Collections::FixedStringMethods::ConvertToString(::by_ref<T>  fs)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Unity::Collections::FixedStringMethods*>(),
                    {"ConvertToString", {::i2c::class_of<T>()}, {::i2c::type_of<::by_ref<T>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, fs);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T, ::Unity::Collections::IUTF8Bytes*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline int32_t Unity::Collections::FixedStringMethods::ComputeHashCode(::by_ref<T>  fs)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Unity::Collections::FixedStringMethods*>(),
                    {"ComputeHashCode", {::i2c::class_of<T>()}, {::i2c::type_of<::by_ref<T>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, fs);
}
// Ctor Parameters []
constexpr ::Unity::Collections::FixedStringMethods::FixedStringMethods()   {
}
