#pragma once
// IWYU pragma private; include "Unity/Collections/LowLevel/Unsafe/UnsafeUtility.hpp"
#include "System/zzzz__IConvertible_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeUtility_def.hpp"
#include "System/Reflection/zzzz__FieldInfo_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeUtility_AlignOfHelper_1_def.hpp"
#include "Unity/Collections/zzzz__Allocator_def.hpp"
#include "Unity/Collections/zzzz__LeakCategory_def.hpp"
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeUtility.GetFieldOffsetInStruct
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Reflection::FieldInfo*)>(&::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::GetFieldOffsetInStruct)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb55fa1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeUtility*>(),
                        {"GetFieldOffsetInStruct", {}, {::i2c::type_of<::System::Reflection::FieldInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeUtility.GetFieldOffsetInClass
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Reflection::FieldInfo*)>(&::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::GetFieldOffsetInClass)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb55fa58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeUtility*>(),
                        {"GetFieldOffsetInClass", {}, {::i2c::type_of<::System::Reflection::FieldInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeUtility.GetFieldOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Reflection::FieldInfo*)>(&::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::GetFieldOffset)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xb55fa94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeUtility*>(),
                        {"GetFieldOffset", {}, {::i2c::type_of<::System::Reflection::FieldInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeUtility.LeakRecord
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::Unity::Collections::LeakCategory, int32_t)>(&::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::LeakRecord)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb55fb48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeUtility*>(),
                        {"LeakRecord", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Unity::Collections::LeakCategory>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeUtility.LeakErase
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::Unity::Collections::LeakCategory)>(&::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::LeakErase)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb55fb9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeUtility*>(),
                        {"LeakErase", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Unity::Collections::LeakCategory>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeUtility.MallocTracked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void* (*)(int64_t, int32_t, ::Unity::Collections::Allocator, int32_t)>(&::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::MallocTracked)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb55fbe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeUtility*>(),
                        {"MallocTracked", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::Allocator>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeUtility.FreeTracked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(void*, ::Unity::Collections::Allocator)>(&::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::FreeTracked)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb55f7b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeUtility*>(),
                        {"FreeTracked", {}, {::i2c::type_of<void*>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeUtility.Malloc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void* (*)(int64_t, int32_t, ::Unity::Collections::Allocator)>(&::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::Malloc)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb55fc3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeUtility*>(),
                        {"Malloc", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeUtility.Free
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(void*, ::Unity::Collections::Allocator)>(&::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::Free)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb55fc90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeUtility*>(),
                        {"Free", {}, {::i2c::type_of<void*>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeUtility.MemCpy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(void*, void*, int64_t)>(&::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::MemCpy)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb55e6d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeUtility*>(),
                        {"MemCpy", {}, {::i2c::type_of<void*>(), ::i2c::type_of<void*>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeUtility.MemCpyStride
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(void*, int32_t, void*, int32_t, int32_t, int32_t)>(&::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::MemCpyStride)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xb55fcd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeUtility*>(),
                        {"MemCpyStride", {}, {::i2c::type_of<void*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeUtility.MemMove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(void*, void*, int64_t)>(&::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::MemMove)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb55fd48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeUtility*>(),
                        {"MemMove", {}, {::i2c::type_of<void*>(), ::i2c::type_of<void*>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeUtility.MemSet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(void*, uint8_t, int64_t)>(&::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::MemSet)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb55fd9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeUtility*>(),
                        {"MemSet", {}, {::i2c::type_of<void*>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeUtility.MemClear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(void*, int64_t)>(&::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::MemClear)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xb55fdf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeUtility*>(),
                        {"MemClear", {}, {::i2c::type_of<void*>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeUtility.MemCmp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(void*, void*, int64_t)>(&::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::MemCmp)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb55fe38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeUtility*>(),
                        {"MemCmp", {}, {::i2c::type_of<void*>(), ::i2c::type_of<void*>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeUtility.SizeOf
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Type*)>(&::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::SizeOf)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb55fe8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeUtility*>(),
                        {"SizeOf", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeUtility.IsBlittable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*)>(&::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::IsBlittable)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb55fec8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeUtility*>(),
                        {"IsBlittable", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeUtility.IsUnmanaged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*)>(&::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::IsUnmanaged)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb55ff04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeUtility*>(),
                        {"IsUnmanaged", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeUtility.IsBlittableValueType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*)>(&::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::IsBlittableValueType)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xb55ff40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeUtility*>(),
                        {"IsBlittableValueType", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeUtility.GetReasonForTypeNonBlittableImpl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Type*, ::StringW)>(&::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::GetReasonForTypeNonBlittableImpl)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0xb55ffa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeUtility*>(),
                        {"GetReasonForTypeNonBlittableImpl", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeUtility.IsArrayBlittable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Array*)>(&::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::IsArrayBlittable)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xb56015c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeUtility*>(),
                        {"IsArrayBlittable", {}, {::i2c::type_of<::System::Array*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeUtility.GetReasonForArrayNonBlittable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Array*)>(&::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::GetReasonForArrayNonBlittable)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xb56018c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeUtility*>(),
                        {"GetReasonForArrayNonBlittable", {}, {::i2c::type_of<::System::Array*>()}}
                    )));
    return ___internal_method;
  }
};
inline int32_t Unity::Collections::LowLevel::Unsafe::UnsafeUtility::GetFieldOffsetInStruct(::System::Reflection::FieldInfo*  field)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeUtility*>(),
                        {"GetFieldOffsetInStruct", {}, {::i2c::type_of<::System::Reflection::FieldInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, field);
}
inline int32_t Unity::Collections::LowLevel::Unsafe::UnsafeUtility::GetFieldOffsetInClass(::System::Reflection::FieldInfo*  field)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeUtility*>(),
                        {"GetFieldOffsetInClass", {}, {::i2c::type_of<::System::Reflection::FieldInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, field);
}
inline int32_t Unity::Collections::LowLevel::Unsafe::UnsafeUtility::GetFieldOffset(::System::Reflection::FieldInfo*  field)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeUtility*>(),
                        {"GetFieldOffset", {}, {::i2c::type_of<::System::Reflection::FieldInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, field);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline bool Unity::Collections::LowLevel::Unsafe::UnsafeUtility::IsBlittable()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeUtility*>(),
                    {"IsBlittable", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline int32_t Unity::Collections::LowLevel::Unsafe::UnsafeUtility::LeakRecord(::System::IntPtr  handle, ::Unity::Collections::LeakCategory  category, int32_t  callstacksToSkip)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeUtility*>(),
                        {"LeakRecord", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Unity::Collections::LeakCategory>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, handle, category, callstacksToSkip);
}
inline int32_t Unity::Collections::LowLevel::Unsafe::UnsafeUtility::LeakErase(::System::IntPtr  handle, ::Unity::Collections::LeakCategory  category)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeUtility*>(),
                        {"LeakErase", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Unity::Collections::LeakCategory>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, handle, category);
}
inline void* Unity::Collections::LowLevel::Unsafe::UnsafeUtility::MallocTracked(int64_t  size, int32_t  alignment, ::Unity::Collections::Allocator  allocator, int32_t  callstacksToSkip)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeUtility*>(),
                        {"MallocTracked", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::Allocator>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void*>(nullptr, ___internal_method, size, alignment, allocator, callstacksToSkip);
}
inline void Unity::Collections::LowLevel::Unsafe::UnsafeUtility::FreeTracked(void*  memory, ::Unity::Collections::Allocator  allocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeUtility*>(),
                        {"FreeTracked", {}, {::i2c::type_of<void*>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, memory, allocator);
}
inline void* Unity::Collections::LowLevel::Unsafe::UnsafeUtility::Malloc(int64_t  size, int32_t  alignment, ::Unity::Collections::Allocator  allocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeUtility*>(),
                        {"Malloc", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void*>(nullptr, ___internal_method, size, alignment, allocator);
}
inline void Unity::Collections::LowLevel::Unsafe::UnsafeUtility::Free(void*  memory, ::Unity::Collections::Allocator  allocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeUtility*>(),
                        {"Free", {}, {::i2c::type_of<void*>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, memory, allocator);
}
inline void Unity::Collections::LowLevel::Unsafe::UnsafeUtility::MemCpy(void*  destination, void*  source, int64_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeUtility*>(),
                        {"MemCpy", {}, {::i2c::type_of<void*>(), ::i2c::type_of<void*>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, destination, source, size);
}
inline void Unity::Collections::LowLevel::Unsafe::UnsafeUtility::MemCpyStride(void*  destination, int32_t  destinationStride, void*  source, int32_t  sourceStride, int32_t  elementSize, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeUtility*>(),
                        {"MemCpyStride", {}, {::i2c::type_of<void*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, destination, destinationStride, source, sourceStride, elementSize, count);
}
inline void Unity::Collections::LowLevel::Unsafe::UnsafeUtility::MemMove(void*  destination, void*  source, int64_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeUtility*>(),
                        {"MemMove", {}, {::i2c::type_of<void*>(), ::i2c::type_of<void*>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, destination, source, size);
}
inline void Unity::Collections::LowLevel::Unsafe::UnsafeUtility::MemSet(void*  destination, uint8_t  value, int64_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeUtility*>(),
                        {"MemSet", {}, {::i2c::type_of<void*>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, destination, value, size);
}
inline void Unity::Collections::LowLevel::Unsafe::UnsafeUtility::MemClear(void*  destination, int64_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeUtility*>(),
                        {"MemClear", {}, {::i2c::type_of<void*>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, destination, size);
}
inline int32_t Unity::Collections::LowLevel::Unsafe::UnsafeUtility::MemCmp(void*  ptr1, void*  ptr2, int64_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeUtility*>(),
                        {"MemCmp", {}, {::i2c::type_of<void*>(), ::i2c::type_of<void*>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, ptr1, ptr2, size);
}
inline int32_t Unity::Collections::LowLevel::Unsafe::UnsafeUtility::SizeOf(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeUtility*>(),
                        {"SizeOf", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, type);
}
inline bool Unity::Collections::LowLevel::Unsafe::UnsafeUtility::IsBlittable(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeUtility*>(),
                        {"IsBlittable", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type);
}
inline bool Unity::Collections::LowLevel::Unsafe::UnsafeUtility::IsUnmanaged(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeUtility*>(),
                        {"IsUnmanaged", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type);
}
inline bool Unity::Collections::LowLevel::Unsafe::UnsafeUtility::IsBlittableValueType(::System::Type*  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeUtility*>(),
                        {"IsBlittableValueType", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, t);
}
inline ::StringW Unity::Collections::LowLevel::Unsafe::UnsafeUtility::GetReasonForTypeNonBlittableImpl(::System::Type*  t, ::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeUtility*>(),
                        {"GetReasonForTypeNonBlittableImpl", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, t, name);
}
inline bool Unity::Collections::LowLevel::Unsafe::UnsafeUtility::IsArrayBlittable(::System::Array*  arr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeUtility*>(),
                        {"IsArrayBlittable", {}, {::i2c::type_of<::System::Array*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, arr);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline bool Unity::Collections::LowLevel::Unsafe::UnsafeUtility::IsGenericListBlittable()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeUtility*>(),
                    {"IsGenericListBlittable", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::StringW Unity::Collections::LowLevel::Unsafe::UnsafeUtility::GetReasonForArrayNonBlittable(::System::Array*  arr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeUtility*>(),
                        {"GetReasonForArrayNonBlittable", {}, {::i2c::type_of<::System::Array*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, arr);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline ::StringW Unity::Collections::LowLevel::Unsafe::UnsafeUtility::GetReasonForGenericListNonBlittable()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeUtility*>(),
                    {"GetReasonForGenericListNonBlittable", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline int32_t Unity::Collections::LowLevel::Unsafe::UnsafeUtility::AlignOf()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeUtility*>(),
                    {"AlignOf", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void Unity::Collections::LowLevel::Unsafe::UnsafeUtility::CopyPtrToStructure(void*  ptr, ::by_ref<T>  output)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeUtility*>(),
                    {"CopyPtrToStructure", {::i2c::class_of<T>()}, {::i2c::type_of<void*>(), ::i2c::type_of<::by_ref<T>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ptr, output);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void Unity::Collections::LowLevel::Unsafe::UnsafeUtility::InternalCopyPtrToStructure(void*  ptr, ::by_ref<T>  output)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeUtility*>(),
                    {"InternalCopyPtrToStructure", {::i2c::class_of<T>()}, {::i2c::type_of<void*>(), ::i2c::type_of<::by_ref<T>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ptr, output);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void Unity::Collections::LowLevel::Unsafe::UnsafeUtility::CopyStructureToPtr(::by_ref<T>  input, void*  ptr)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeUtility*>(),
                    {"CopyStructureToPtr", {::i2c::class_of<T>()}, {::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<void*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, input, ptr);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void Unity::Collections::LowLevel::Unsafe::UnsafeUtility::InternalCopyStructureToPtr(::by_ref<T>  input, void*  ptr)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeUtility*>(),
                    {"InternalCopyStructureToPtr", {::i2c::class_of<T>()}, {::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<void*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, input, ptr);
}
template<typename T>
inline T Unity::Collections::LowLevel::Unsafe::UnsafeUtility::ReadArrayElement(void*  source, int32_t  index)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeUtility*>(),
                    {"ReadArrayElement", {::i2c::class_of<T>()}, {::i2c::type_of<void*>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, source, index);
}
template<typename T>
inline T Unity::Collections::LowLevel::Unsafe::UnsafeUtility::ReadArrayElementWithStride(void*  source, int32_t  index, int32_t  stride)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeUtility*>(),
                    {"ReadArrayElementWithStride", {::i2c::class_of<T>()}, {::i2c::type_of<void*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, source, index, stride);
}
template<typename T>
inline void Unity::Collections::LowLevel::Unsafe::UnsafeUtility::WriteArrayElement(void*  destination, int32_t  index, T  value)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeUtility*>(),
                    {"WriteArrayElement", {::i2c::class_of<T>()}, {::i2c::type_of<void*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<T>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, destination, index, value);
}
template<typename T>
inline void Unity::Collections::LowLevel::Unsafe::UnsafeUtility::WriteArrayElementWithStride(void*  destination, int32_t  index, int32_t  stride, T  value)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeUtility*>(),
                    {"WriteArrayElementWithStride", {::i2c::class_of<T>()}, {::i2c::type_of<void*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<T>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, destination, index, stride, value);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void* Unity::Collections::LowLevel::Unsafe::UnsafeUtility::AddressOf(::by_ref<T>  output)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeUtility*>(),
                    {"AddressOf", {::i2c::class_of<T>()}, {::i2c::type_of<::by_ref<T>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void*>(nullptr, ___internal_method, output);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline int32_t Unity::Collections::LowLevel::Unsafe::UnsafeUtility::SizeOf()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeUtility*>(),
                    {"SizeOf", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
template<typename U,typename T>
inline ::by_ref<T> Unity::Collections::LowLevel::Unsafe::UnsafeUtility::As(::by_ref<U>  from)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeUtility*>(),
                    {"As", {::i2c::class_of<U>(), ::i2c::class_of<T>()}, {::i2c::type_of<::by_ref<U>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<U>(), ::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::by_ref<T>>(nullptr, ___internal_method, from);
}
template<typename T>
requires(::cordl_internals::reference_type_constraint<T>)
inline T Unity::Collections::LowLevel::Unsafe::UnsafeUtility::As(::System::Object*  from)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeUtility*>(),
                    {"As", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Object*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, from);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline ::by_ref<T> Unity::Collections::LowLevel::Unsafe::UnsafeUtility::AsRef(void*  ptr)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeUtility*>(),
                    {"AsRef", {::i2c::class_of<T>()}, {::i2c::type_of<void*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::by_ref<T>>(nullptr, ___internal_method, ptr);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline ::by_ref<T> Unity::Collections::LowLevel::Unsafe::UnsafeUtility::ArrayElementAsRef(void*  ptr, int32_t  index)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeUtility*>(),
                    {"ArrayElementAsRef", {::i2c::class_of<T>()}, {::i2c::type_of<void*>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::by_ref<T>>(nullptr, ___internal_method, ptr, index);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::System::IConvertible*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline int32_t Unity::Collections::LowLevel::Unsafe::UnsafeUtility::EnumToInt(T  enumValue)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeUtility*>(),
                    {"EnumToInt", {::i2c::class_of<T>()}, {::i2c::type_of<T>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, enumValue);
}
template<typename T>
inline void Unity::Collections::LowLevel::Unsafe::UnsafeUtility::InternalEnumToInt(::by_ref<T>  enumValue, ::by_ref<int32_t>  intValue)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeUtility*>(),
                    {"InternalEnumToInt", {::i2c::class_of<T>()}, {::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, enumValue, intValue);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::System::IConvertible*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline bool Unity::Collections::LowLevel::Unsafe::UnsafeUtility::EnumEquals(T  lhs, T  rhs)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeUtility*>(),
                    {"EnumEquals", {::i2c::class_of<T>()}, {::i2c::type_of<T>(), ::i2c::type_of<T>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
// Ctor Parameters []
constexpr ::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::UnsafeUtility()   {
}
