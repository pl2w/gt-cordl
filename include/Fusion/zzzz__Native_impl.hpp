#pragma once
// IWYU pragma private; include "Fusion/Native.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/zzzz__Native_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Fusion::Native.MemMove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(void*, void*, int32_t)>(&::Fusion::Native::MemMove)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5f3f158;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Native*>(),
                        {"MemMove", {}, {::i2c::type_of<void*>(), ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Native.MemCpy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(void*, void*, int32_t)>(&::Fusion::Native::MemCpy)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5f3f170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Native*>(),
                        {"MemCpy", {}, {::i2c::type_of<void*>(), ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Native.MemCpy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Span_1<int32_t>, ::System::Span_1<int32_t>)>(&::Fusion::Native::MemCpy)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5f3f188;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Native*>(),
                        {"MemCpy", {}, {::i2c::type_of<::System::Span_1<int32_t>>(), ::i2c::type_of<::System::Span_1<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Native.MemCpy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Span_1<uint8_t>, ::System::Span_1<uint8_t>)>(&::Fusion::Native::MemCpy)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5f3f278;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Native*>(),
                        {"MemCpy", {}, {::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::System::Span_1<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Native.MemClear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(void*, int32_t)>(&::Fusion::Native::MemClear)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5f3f364;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Native*>(),
                        {"MemClear", {}, {::i2c::type_of<void*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Native.MemCmp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(void*, void*, int32_t)>(&::Fusion::Native::MemCmp)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5f3f378;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Native*>(),
                        {"MemCmp", {}, {::i2c::type_of<void*>(), ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Native.Malloc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void* (*)(int32_t)>(&::Fusion::Native::Malloc)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5f3f394;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Native*>(),
                        {"Malloc", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Native.Free
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(void*)>(&::Fusion::Native::Free)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5f3f470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Native*>(),
                        {"Free", {}, {::i2c::type_of<void*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Native.SizeOf
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Type*)>(&::Fusion::Native::SizeOf)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f3f484;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Native*>(),
                        {"SizeOf", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Native.Free
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<void*>)>(&::Fusion::Native::Free)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5f3f48c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Native*>(),
                        {"Free", {}, {::i2c::type_of<::by_ref<void*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Native.MallocAndClear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void* (*)(int32_t)>(&::Fusion::Native::MallocAndClear)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5f3f4ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Native*>(),
                        {"MallocAndClear", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Native.MallocAndClearArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void* (*)(int32_t, int32_t)>(&::Fusion::Native::MallocAndClearArray)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5f3f4e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Native*>(),
                        {"MallocAndClearArray", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Native.GetLengthPrefixedUTF8ByteCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW)>(&::Fusion::Native::GetLengthPrefixedUTF8ByteCount)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5f3f520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Native*>(),
                        {"GetLengthPrefixedUTF8ByteCount", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Native.WriteLengthPrefixedUTF8
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(void*, ::StringW)>(&::Fusion::Native::WriteLengthPrefixedUTF8)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5f3f554;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Native*>(),
                        {"WriteLengthPrefixedUTF8", {}, {::i2c::type_of<void*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Native.ReadLengthPrefixedUTF8
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(void*, ::by_ref<::StringW>)>(&::Fusion::Native::ReadLengthPrefixedUTF8)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5f3f650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Native*>(),
                        {"ReadLengthPrefixedUTF8", {}, {::i2c::type_of<void*>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Native.IsPointerAligned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(void*, int32_t)>(&::Fusion::Native::IsPointerAligned)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5f3f6a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Native*>(),
                        {"IsPointerAligned", {}, {::i2c::type_of<void*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Native.RoundToMaxAlignment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::Fusion::Native::RoundToMaxAlignment)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5f3f6bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Native*>(),
                        {"RoundToMaxAlignment", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Native.WordCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, int32_t)>(&::Fusion::Native::WordCount)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5f3f7bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Native*>(),
                        {"WordCount", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Native.RoundToAlignment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, int32_t)>(&::Fusion::Native::RoundToAlignment)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5f3f6c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Native*>(),
                        {"RoundToAlignment", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Native.MallocAndClearBlock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, int32_t, ::by_ref<void*>, ::by_ref<void*>, int32_t)>(&::Fusion::Native::MallocAndClearBlock)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5f3f7d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Native*>(),
                        {"MallocAndClearBlock", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<void*>>(), ::i2c::type_of<::by_ref<void*>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::Native::MemMove(void*  destination, void*  source, int32_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Native*>(),
                        {"MemMove", {}, {::i2c::type_of<void*>(), ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, destination, source, size);
}
inline void Fusion::Native::MemCpy(void*  destination, void*  source, int32_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Native*>(),
                        {"MemCpy", {}, {::i2c::type_of<void*>(), ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, destination, source, size);
}
inline void Fusion::Native::MemCpy(::System::Span_1<int32_t>  d, ::System::Span_1<int32_t>  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Native*>(),
                        {"MemCpy", {}, {::i2c::type_of<::System::Span_1<int32_t>>(), ::i2c::type_of<::System::Span_1<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, d, s);
}
inline void Fusion::Native::MemCpy(::System::Span_1<uint8_t>  d, ::System::Span_1<uint8_t>  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Native*>(),
                        {"MemCpy", {}, {::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::System::Span_1<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, d, s);
}
inline void Fusion::Native::MemClear(void*  ptr, int32_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Native*>(),
                        {"MemClear", {}, {::i2c::type_of<void*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ptr, size);
}
inline int32_t Fusion::Native::MemCmp(void*  ptr1, void*  ptr2, int32_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Native*>(),
                        {"MemCmp", {}, {::i2c::type_of<void*>(), ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, ptr1, ptr2, size);
}
inline void* Fusion::Native::Malloc(int32_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Native*>(),
                        {"Malloc", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void*>(nullptr, ___internal_method, size);
}
inline void Fusion::Native::Free(void*  memory)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Native*>(),
                        {"Free", {}, {::i2c::type_of<void*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, memory);
}
inline int32_t Fusion::Native::SizeOf(::System::Type*  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Native*>(),
                        {"SizeOf", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, t);
}
inline void Fusion::Native::Free(::by_ref<void*>  memory)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Native*>(),
                        {"Free", {}, {::i2c::type_of<::by_ref<void*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, memory);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void Fusion::Native::Free(::by_ref<T*>  memory)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::Native*>(),
                    {"Free", {::i2c::class_of<T>()}, {::i2c::type_of<::by_ref<T*>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, memory);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void Fusion::Native::Free(::by_ref<T*>  memory)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::Native*>(),
                    {"Free", {::i2c::class_of<T>()}, {::i2c::type_of<::by_ref<T*>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, memory);
}
inline void* Fusion::Native::MallocAndClear(int32_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Native*>(),
                        {"MallocAndClear", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void*>(nullptr, ___internal_method, size);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline T* Fusion::Native::MallocAndClear()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::Native*>(),
                    {"MallocAndClear", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T*>(nullptr, ___internal_method);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline T* Fusion::Native::Malloc()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::Native*>(),
                    {"Malloc", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T*>(nullptr, ___internal_method);
}
inline void* Fusion::Native::MallocAndClearArray(int32_t  stride, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Native*>(),
                        {"MallocAndClearArray", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void*>(nullptr, ___internal_method, stride, length);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline T* Fusion::Native::MallocAndClearArray(int32_t  length)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::Native*>(),
                    {"MallocAndClearArray", {::i2c::class_of<T>()}, {::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T*>(nullptr, ___internal_method, length);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline T* Fusion::Native::MallocAndClearPtrArray(int32_t  length)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::Native*>(),
                    {"MallocAndClearPtrArray", {::i2c::class_of<T>()}, {::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T*>(nullptr, ___internal_method, length);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline T* Fusion::Native::DoublePtrArray(T*  array, int32_t  currentLength)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::Native*>(),
                    {"DoublePtrArray", {::i2c::class_of<T>()}, {::i2c::type_of<T*>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T*>(nullptr, ___internal_method, array, currentLength);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline T* Fusion::Native::ExpandPtrArray(T*  array, int32_t  currentLength, int32_t  newLength)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::Native*>(),
                    {"ExpandPtrArray", {::i2c::class_of<T>()}, {::i2c::type_of<T*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T*>(nullptr, ___internal_method, array, currentLength, newLength);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline int32_t Fusion::Native::CopyFromArray(void*  destination, ::ArrayW<T>  source)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::Native*>(),
                    {"CopyFromArray", {::i2c::class_of<T>()}, {::i2c::type_of<void*>(), ::i2c::type_of<::ArrayW<T>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, destination, source);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline int32_t Fusion::Native::CopyToArray(::ArrayW<T>  destination, void*  source)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::Native*>(),
                    {"CopyToArray", {::i2c::class_of<T>()}, {::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<void*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, destination, source);
}
inline int32_t Fusion::Native::GetLengthPrefixedUTF8ByteCount(::StringW  str)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Native*>(),
                        {"GetLengthPrefixedUTF8ByteCount", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, str);
}
inline int32_t Fusion::Native::WriteLengthPrefixedUTF8(void*  destination, ::StringW  str)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Native*>(),
                        {"WriteLengthPrefixedUTF8", {}, {::i2c::type_of<void*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, destination, str);
}
inline int32_t Fusion::Native::ReadLengthPrefixedUTF8(void*  source, ::by_ref<::StringW>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Native*>(),
                        {"ReadLengthPrefixedUTF8", {}, {::i2c::type_of<void*>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, source, result);
}
inline bool Fusion::Native::IsPointerAligned(void*  pointer, int32_t  alignment)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Native*>(),
                        {"IsPointerAligned", {}, {::i2c::type_of<void*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, pointer, alignment);
}
inline int32_t Fusion::Native::RoundToMaxAlignment(int32_t  stride)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Native*>(),
                        {"RoundToMaxAlignment", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, stride);
}
inline int32_t Fusion::Native::WordCount(int32_t  stride, int32_t  wordSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Native*>(),
                        {"WordCount", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, stride, wordSize);
}
inline int32_t Fusion::Native::RoundToAlignment(int32_t  stride, int32_t  alignment)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Native*>(),
                        {"RoundToAlignment", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, stride, alignment);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline uint8_t* Fusion::Native::ReferenceToPointer(::by_ref<T>  obj)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::Native*>(),
                    {"ReferenceToPointer", {::i2c::class_of<T>()}, {::i2c::type_of<::by_ref<T>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<uint8_t*>(nullptr, ___internal_method, obj);
}
inline int32_t Fusion::Native::MallocAndClearBlock(int32_t  size0, int32_t  size1, ::by_ref<void*>  ptr0, ::by_ref<void*>  ptr1, int32_t  alignment)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Native*>(),
                        {"MallocAndClearBlock", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<void*>>(), ::i2c::type_of<::by_ref<void*>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, size0, size1, ptr0, ptr1, alignment);
}
// Ctor Parameters []
constexpr ::Fusion::Native::Native()   {
}
