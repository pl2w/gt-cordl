#pragma once
// IWYU pragma private; include "System/Buffers/BuffersExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Buffers/zzzz__BuffersExtensions_def.hpp"
#include "System/Buffers/zzzz__ReadOnlySequence_1_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
template<typename T>
inline void System::Buffers::BuffersExtensions::CopyTo(/* [IsReadOnly] */ ::by_ref<::System::Buffers::ReadOnlySequence_1<T>>  source, ::System::Span_1<T>  destination)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::System::Buffers::BuffersExtensions*>(),
                    {"CopyTo", {::i2c::class_of<T>()}, {::i2c::type_of<::by_ref<::System::Buffers::ReadOnlySequence_1<T>>>(), ::i2c::type_of<::System::Span_1<T>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source, destination);
}
template<typename T>
inline void System::Buffers::BuffersExtensions::CopyToMultiSegment(/* [IsReadOnly] */ ::by_ref<::System::Buffers::ReadOnlySequence_1<T>>  sequence, ::System::Span_1<T>  destination)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::System::Buffers::BuffersExtensions*>(),
                    {"CopyToMultiSegment", {::i2c::class_of<T>()}, {::i2c::type_of<::by_ref<::System::Buffers::ReadOnlySequence_1<T>>>(), ::i2c::type_of<::System::Span_1<T>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sequence, destination);
}
// Ctor Parameters []
constexpr ::System::Buffers::BuffersExtensions::BuffersExtensions()   {
}
