#pragma once
// IWYU pragma private; include "System/Runtime/InteropServices/MemoryMarshal.hpp"
#include "System/Buffers/zzzz__MemoryManager_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/InteropServices/zzzz__MemoryMarshal_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
#include "System/zzzz__Memory_1_def.hpp"
#include "System/zzzz__ReadOnlyMemory_1_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
//  Writing Method size for method: ::System::Runtime::InteropServices::MemoryMarshal.TryGetString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlyMemory_1<char16_t>, ::by_ref<::StringW>, ::by_ref<int32_t>, ::by_ref<int32_t>)>(&::System::Runtime::InteropServices::MemoryMarshal::TryGetString)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xa1e00c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::MemoryMarshal*>(),
                        {"TryGetString", {}, {::i2c::type_of<::System::ReadOnlyMemory_1<char16_t>>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline ::System::Span_1<uint8_t> System::Runtime::InteropServices::MemoryMarshal::AsBytes(::System::Span_1<T>  span)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::System::Runtime::InteropServices::MemoryMarshal*>(),
                    {"AsBytes", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Span_1<T>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Span_1<uint8_t>>(nullptr, ___internal_method, span);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline ::System::ReadOnlySpan_1<uint8_t> System::Runtime::InteropServices::MemoryMarshal::AsBytes(::System::ReadOnlySpan_1<T>  span)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::System::Runtime::InteropServices::MemoryMarshal*>(),
                    {"AsBytes", {::i2c::class_of<T>()}, {::i2c::type_of<::System::ReadOnlySpan_1<T>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::ReadOnlySpan_1<uint8_t>>(nullptr, ___internal_method, span);
}
template<typename T>
inline ::System::Memory_1<T> System::Runtime::InteropServices::MemoryMarshal::AsMemory(::System::ReadOnlyMemory_1<T>  memory)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::System::Runtime::InteropServices::MemoryMarshal*>(),
                    {"AsMemory", {::i2c::class_of<T>()}, {::i2c::type_of<::System::ReadOnlyMemory_1<T>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Memory_1<T>>(nullptr, ___internal_method, memory);
}
template<typename T>
inline ::by_ref<T> System::Runtime::InteropServices::MemoryMarshal::GetReference(::System::Span_1<T>  span)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::System::Runtime::InteropServices::MemoryMarshal*>(),
                    {"GetReference", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Span_1<T>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::by_ref<T>>(nullptr, ___internal_method, span);
}
template<typename T>
inline ::by_ref<T> System::Runtime::InteropServices::MemoryMarshal::GetReference(::System::ReadOnlySpan_1<T>  span)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::System::Runtime::InteropServices::MemoryMarshal*>(),
                    {"GetReference", {::i2c::class_of<T>()}, {::i2c::type_of<::System::ReadOnlySpan_1<T>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::by_ref<T>>(nullptr, ___internal_method, span);
}
template<typename T>
inline ::by_ref<T> System::Runtime::InteropServices::MemoryMarshal::GetNonNullPinnableReference(::System::Span_1<T>  span)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::System::Runtime::InteropServices::MemoryMarshal*>(),
                    {"GetNonNullPinnableReference", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Span_1<T>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::by_ref<T>>(nullptr, ___internal_method, span);
}
template<typename T>
inline ::by_ref<T> System::Runtime::InteropServices::MemoryMarshal::GetNonNullPinnableReference(::System::ReadOnlySpan_1<T>  span)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::System::Runtime::InteropServices::MemoryMarshal*>(),
                    {"GetNonNullPinnableReference", {::i2c::class_of<T>()}, {::i2c::type_of<::System::ReadOnlySpan_1<T>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::by_ref<T>>(nullptr, ___internal_method, span);
}
template<typename TFrom,typename TTo>
requires(::cordl_internals::value_type_constraint<TFrom> && ::cordl_internals::default_constructor_constraint<TFrom> && ::cordl_internals::value_type_constraint<TTo> && ::cordl_internals::default_constructor_constraint<TTo>)
inline ::System::ReadOnlySpan_1<TTo> System::Runtime::InteropServices::MemoryMarshal::Cast(::System::ReadOnlySpan_1<TFrom>  span)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::System::Runtime::InteropServices::MemoryMarshal*>(),
                    {"Cast", {::i2c::class_of<TFrom>(), ::i2c::class_of<TTo>()}, {::i2c::type_of<::System::ReadOnlySpan_1<TFrom>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TFrom>(), ::i2c::class_of<TTo>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::ReadOnlySpan_1<TTo>>(nullptr, ___internal_method, span);
}
template<typename T>
inline ::System::Span_1<T> System::Runtime::InteropServices::MemoryMarshal::CreateSpan(::by_ref<T>  reference, int32_t  length)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::System::Runtime::InteropServices::MemoryMarshal*>(),
                    {"CreateSpan", {::i2c::class_of<T>()}, {::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Span_1<T>>(nullptr, ___internal_method, reference, length);
}
template<typename T>
inline ::System::ReadOnlySpan_1<T> System::Runtime::InteropServices::MemoryMarshal::CreateReadOnlySpan(::by_ref<T>  reference, int32_t  length)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::System::Runtime::InteropServices::MemoryMarshal*>(),
                    {"CreateReadOnlySpan", {::i2c::class_of<T>()}, {::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::ReadOnlySpan_1<T>>(nullptr, ___internal_method, reference, length);
}
template<typename T>
inline bool System::Runtime::InteropServices::MemoryMarshal::TryGetArray(::System::ReadOnlyMemory_1<T>  memory, ::by_ref<::System::ArraySegment_1<T>>  segment)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::System::Runtime::InteropServices::MemoryMarshal*>(),
                    {"TryGetArray", {::i2c::class_of<T>()}, {::i2c::type_of<::System::ReadOnlyMemory_1<T>>(), ::i2c::type_of<::by_ref<::System::ArraySegment_1<T>>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, memory, segment);
}
template<typename T,typename TManager>
requires(::cordl_internals::type_constraint<TManager, ::System::Buffers::MemoryManager_1<T>*>)
inline bool System::Runtime::InteropServices::MemoryMarshal::TryGetMemoryManager(::System::ReadOnlyMemory_1<T>  memory, ::by_ref<TManager>  manager, ::by_ref<int32_t>  start, ::by_ref<int32_t>  length)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::System::Runtime::InteropServices::MemoryMarshal*>(),
                    {"TryGetMemoryManager", {::i2c::class_of<T>(), ::i2c::class_of<TManager>()}, {::i2c::type_of<::System::ReadOnlyMemory_1<T>>(), ::i2c::type_of<::by_ref<TManager>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>(), ::i2c::class_of<TManager>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, memory, manager, start, length);
}
inline bool System::Runtime::InteropServices::MemoryMarshal::TryGetString(::System::ReadOnlyMemory_1<char16_t>  memory, ::by_ref<::StringW>  text, ::by_ref<int32_t>  start, ::by_ref<int32_t>  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::MemoryMarshal*>(),
                        {"TryGetString", {}, {::i2c::type_of<::System::ReadOnlyMemory_1<char16_t>>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, memory, text, start, length);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline T System::Runtime::InteropServices::MemoryMarshal::Read(::System::ReadOnlySpan_1<uint8_t>  source)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::System::Runtime::InteropServices::MemoryMarshal*>(),
                    {"Read", {::i2c::class_of<T>()}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, source);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void System::Runtime::InteropServices::MemoryMarshal::Write(::System::Span_1<uint8_t>  destination, ::by_ref<T>  value)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::System::Runtime::InteropServices::MemoryMarshal*>(),
                    {"Write", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<T>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, destination, value);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline bool System::Runtime::InteropServices::MemoryMarshal::TryWrite(::System::Span_1<uint8_t>  destination, ::by_ref<T>  value)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::System::Runtime::InteropServices::MemoryMarshal*>(),
                    {"TryWrite", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<T>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, destination, value);
}
// Ctor Parameters []
constexpr ::System::Runtime::InteropServices::MemoryMarshal::MemoryMarshal()   {
}
