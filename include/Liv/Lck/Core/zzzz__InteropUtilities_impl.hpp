#pragma once
// IWYU pragma private; include "Liv/Lck/Core/InteropUtilities.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Liv/Lck/Core/zzzz__InteropUtilities_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyCollection_1_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Liv::Lck::Core::InteropUtilities.AllocateUnmanagedStringPointers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyCollection_1<::System::IntPtr>* (*)(::System::Collections::Generic::IEnumerable_1<::StringW>*, ::System::Text::Encoding*)>(&::Liv::Lck::Core::InteropUtilities::AllocateUnmanagedStringPointers)> {
  constexpr static std::size_t size = 0x410;
  constexpr static std::size_t addrs = 0x9cfd3e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::InteropUtilities*>(),
                        {"AllocateUnmanagedStringPointers", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::StringW>*>(), ::i2c::type_of<::System::Text::Encoding*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Core::InteropUtilities.AllocateUnmanagedArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::Collections::Generic::IReadOnlyCollection_1<::System::IntPtr>*)>(&::Liv::Lck::Core::InteropUtilities::AllocateUnmanagedArray)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x9cfd7f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::InteropUtilities*>(),
                        {"AllocateUnmanagedArray", {}, {::i2c::type_of<::System::Collections::Generic::IReadOnlyCollection_1<::System::IntPtr>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Core::InteropUtilities.CopyUnmanagedByteArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::System::IntPtr, int32_t)>(&::Liv::Lck::Core::InteropUtilities::CopyUnmanagedByteArray)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x9cfd9c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::InteropUtilities*>(),
                        {"CopyUnmanagedByteArray", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Core::InteropUtilities.UTF8PointerToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::IntPtr)>(&::Liv::Lck::Core::InteropUtilities::UTF8PointerToString)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x9cfda64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::InteropUtilities*>(),
                        {"UTF8PointerToString", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Core::InteropUtilities.StringToUTF8Pointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::StringW)>(&::Liv::Lck::Core::InteropUtilities::StringToUTF8Pointer)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x9cfdb64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::InteropUtilities*>(),
                        {"StringToUTF8Pointer", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Core::InteropUtilities.Free
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::Liv::Lck::Core::InteropUtilities::Free)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9cfdc44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::InteropUtilities*>(),
                        {"Free", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::Collections::Generic::IReadOnlyCollection_1<::System::IntPtr>* Liv::Lck::Core::InteropUtilities::AllocateUnmanagedStringPointers(::System::Collections::Generic::IEnumerable_1<::StringW>*  strings, ::System::Text::Encoding*  targetEncoding)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::InteropUtilities*>(),
                        {"AllocateUnmanagedStringPointers", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::StringW>*>(), ::i2c::type_of<::System::Text::Encoding*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyCollection_1<::System::IntPtr>*>(nullptr, ___internal_method, strings, targetEncoding);
}
inline ::System::IntPtr Liv::Lck::Core::InteropUtilities::AllocateUnmanagedArray(::System::Collections::Generic::IReadOnlyCollection_1<::System::IntPtr>*  ptrs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::InteropUtilities*>(),
                        {"AllocateUnmanagedArray", {}, {::i2c::type_of<::System::Collections::Generic::IReadOnlyCollection_1<::System::IntPtr>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, ptrs);
}
inline ::ArrayW<uint8_t> Liv::Lck::Core::InteropUtilities::CopyUnmanagedByteArray(::System::IntPtr  byteArrayStartPtr, int32_t  byteArrayLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::InteropUtilities*>(),
                        {"CopyUnmanagedByteArray", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, byteArrayStartPtr, byteArrayLength);
}
inline ::StringW Liv::Lck::Core::InteropUtilities::UTF8PointerToString(::System::IntPtr  ptr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::InteropUtilities*>(),
                        {"UTF8PointerToString", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, ptr);
}
inline ::System::IntPtr Liv::Lck::Core::InteropUtilities::StringToUTF8Pointer(::StringW  str)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::InteropUtilities*>(),
                        {"StringToUTF8Pointer", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, str);
}
inline void Liv::Lck::Core::InteropUtilities::Free(::System::IntPtr  ptr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::InteropUtilities*>(),
                        {"Free", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ptr);
}
// Ctor Parameters []
constexpr ::Liv::Lck::Core::InteropUtilities::InteropUtilities()   {
}
