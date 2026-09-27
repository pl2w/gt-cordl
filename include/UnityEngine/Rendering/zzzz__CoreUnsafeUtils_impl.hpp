#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/CoreUnsafeUtils.hpp"
#include "System/zzzz__IComparable_1_impl.hpp"
#include "System/zzzz__IEquatable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Hash128_impl.hpp"
#include "UnityEngine/Rendering/zzzz__CoreUnsafeUtils_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__CoreUnsafeUtils_DefaultKeyGetter_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__CoreUnsafeUtils_FixedBufferStringQueue_def.hpp"
#include "UnityEngine/Rendering/zzzz__CoreUnsafeUtils_UintKeyGetter_def.hpp"
#include "UnityEngine/Rendering/zzzz__CoreUnsafeUtils_UlongKeyGetter_def.hpp"
#include "UnityEngine/Rendering/zzzz__CoreUnsafeUtils_def.hpp"
#include "UnityEngine/zzzz__Hash128_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUnsafeUtils.CalculateRadixParams
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::by_ref<int32_t>)>(&::UnityEngine::Rendering::CoreUnsafeUtils::CalculateRadixParams)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb122658;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUnsafeUtils*>(),
                        {"CalculateRadixParams", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUnsafeUtils.CalculateRadixSupportSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, int32_t)>(&::UnityEngine::Rendering::CoreUnsafeUtils::CalculateRadixSupportSize)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb122668;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUnsafeUtils*>(),
                        {"CalculateRadixSupportSize", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUnsafeUtils.CalculateRadixSortSupportArrays
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, int32_t, uint32_t*, ::by_ref<uint32_t*>, ::by_ref<uint32_t*>, ::by_ref<uint32_t*>, ::by_ref<uint32_t*>)>(&::UnityEngine::Rendering::CoreUnsafeUtils::CalculateRadixSortSupportArrays)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xb122674;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUnsafeUtils*>(),
                        {"CalculateRadixSortSupportArrays", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t*>(), ::i2c::type_of<::by_ref<uint32_t*>>(), ::i2c::type_of<::by_ref<uint32_t*>>(), ::i2c::type_of<::by_ref<uint32_t*>>(), ::i2c::type_of<::by_ref<uint32_t*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUnsafeUtils.MergeSort
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint32_t*, uint32_t*, int32_t)>(&::UnityEngine::Rendering::CoreUnsafeUtils::MergeSort)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0xb122694;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUnsafeUtils*>(),
                        {"MergeSort", {}, {::i2c::type_of<uint32_t*>(), ::i2c::type_of<uint32_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUnsafeUtils.MergeSort
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint32_t>, int32_t, ::by_ref<::ArrayW<uint32_t>>)>(&::UnityEngine::Rendering::CoreUnsafeUtils::MergeSort)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xb1227bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUnsafeUtils*>(),
                        {"MergeSort", {}, {::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::ArrayW<uint32_t>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUnsafeUtils.MergeSort
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Collections::NativeArray_1<uint32_t>, int32_t, ::by_ref<::Unity::Collections::NativeArray_1<uint32_t>>)>(&::UnityEngine::Rendering::CoreUnsafeUtils::MergeSort)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0xb1228c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUnsafeUtils*>(),
                        {"MergeSort", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<uint32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<uint32_t>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUnsafeUtils.InsertionSort
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint32_t*, int32_t)>(&::UnityEngine::Rendering::CoreUnsafeUtils::InsertionSort)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xb1229e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUnsafeUtils*>(),
                        {"InsertionSort", {}, {::i2c::type_of<uint32_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUnsafeUtils.InsertionSort
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint32_t>, int32_t)>(&::UnityEngine::Rendering::CoreUnsafeUtils::InsertionSort)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xb122a48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUnsafeUtils*>(),
                        {"InsertionSort", {}, {::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUnsafeUtils.InsertionSort
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Collections::NativeArray_1<uint32_t>, int32_t)>(&::UnityEngine::Rendering::CoreUnsafeUtils::InsertionSort)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xb122ad8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUnsafeUtils*>(),
                        {"InsertionSort", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<uint32_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUnsafeUtils.RadixSort
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint32_t*, uint32_t*, int32_t, int32_t, int32_t)>(&::UnityEngine::Rendering::CoreUnsafeUtils::RadixSort)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0xb122b98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUnsafeUtils*>(),
                        {"RadixSort", {}, {::i2c::type_of<uint32_t*>(), ::i2c::type_of<uint32_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUnsafeUtils.RadixSort
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint32_t>, int32_t, ::by_ref<::ArrayW<uint32_t>>, int32_t)>(&::UnityEngine::Rendering::CoreUnsafeUtils::RadixSort)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0xb122d50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUnsafeUtils*>(),
                        {"RadixSort", {}, {::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::ArrayW<uint32_t>>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUnsafeUtils.RadixSort
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Collections::NativeArray_1<uint32_t>, int32_t, ::by_ref<::Unity::Collections::NativeArray_1<uint32_t>>, int32_t)>(&::UnityEngine::Rendering::CoreUnsafeUtils::RadixSort)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0xb122e78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUnsafeUtils*>(),
                        {"RadixSort", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<uint32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<uint32_t>>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUnsafeUtils.QuickSort
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint32_t>, int32_t, int32_t)>(&::UnityEngine::Rendering::CoreUnsafeUtils::QuickSort)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb122fbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUnsafeUtils*>(),
                        {"QuickSort", {}, {::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUnsafeUtils.QuickSort
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint64_t>, int32_t, int32_t)>(&::UnityEngine::Rendering::CoreUnsafeUtils::QuickSort)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb123034;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUnsafeUtils*>(),
                        {"QuickSort", {}, {::i2c::type_of<::ArrayW<uint64_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUnsafeUtils.CompareHashes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, ::UnityEngine::Hash128*, int32_t, ::UnityEngine::Hash128*, int32_t*, int32_t*, ::by_ref<int32_t>, ::by_ref<int32_t>)>(&::UnityEngine::Rendering::CoreUnsafeUtils::CompareHashes)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xb1230ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUnsafeUtils*>(),
                        {"CompareHashes", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Hash128*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Hash128*>(), ::i2c::type_of<int32_t*>(), ::i2c::type_of<int32_t*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUnsafeUtils.CombineHashes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::UnityEngine::Hash128*, ::UnityEngine::Hash128*)>(&::UnityEngine::Rendering::CoreUnsafeUtils::CombineHashes)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xb123150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUnsafeUtils*>(),
                        {"CombineHashes", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Hash128*>(), ::i2c::type_of<::UnityEngine::Hash128*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUnsafeUtils.HaveDuplicates
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ArrayW<int32_t>)>(&::UnityEngine::Rendering::CoreUnsafeUtils::HaveDuplicates)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0xb1231b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUnsafeUtils*>(),
                        {"HaveDuplicates", {}, {::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void UnityEngine::Rendering::CoreUnsafeUtils::CopyTo(::System::Collections::Generic::List_1<T>*  list, void*  dest, int32_t  count)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::CoreUnsafeUtils*>(),
                    {"CopyTo", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Collections::Generic::List_1<T>*>(), ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, list, dest, count);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void UnityEngine::Rendering::CoreUnsafeUtils::CopyTo(::ArrayW<T>  list, void*  dest, int32_t  count)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::CoreUnsafeUtils*>(),
                    {"CopyTo", {::i2c::class_of<T>()}, {::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, list, dest, count);
}
inline void UnityEngine::Rendering::CoreUnsafeUtils::CalculateRadixParams(int32_t  radixBits, ::by_ref<int32_t>  bitStates)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUnsafeUtils*>(),
                        {"CalculateRadixParams", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, radixBits, bitStates);
}
inline int32_t UnityEngine::Rendering::CoreUnsafeUtils::CalculateRadixSupportSize(int32_t  bitStates, int32_t  arrayLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUnsafeUtils*>(),
                        {"CalculateRadixSupportSize", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, bitStates, arrayLength);
}
inline void UnityEngine::Rendering::CoreUnsafeUtils::CalculateRadixSortSupportArrays(int32_t  bitStates, int32_t  arrayLength, uint32_t*  supportArray, ::by_ref<uint32_t*>  bucketIndices, ::by_ref<uint32_t*>  bucketSizes, ::by_ref<uint32_t*>  bucketPrefix, ::by_ref<uint32_t*>  arrayOutput)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUnsafeUtils*>(),
                        {"CalculateRadixSortSupportArrays", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t*>(), ::i2c::type_of<::by_ref<uint32_t*>>(), ::i2c::type_of<::by_ref<uint32_t*>>(), ::i2c::type_of<::by_ref<uint32_t*>>(), ::i2c::type_of<::by_ref<uint32_t*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, bitStates, arrayLength, supportArray, bucketIndices, bucketSizes, bucketPrefix, arrayOutput);
}
inline void UnityEngine::Rendering::CoreUnsafeUtils::MergeSort(uint32_t*  array, uint32_t*  support, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUnsafeUtils*>(),
                        {"MergeSort", {}, {::i2c::type_of<uint32_t*>(), ::i2c::type_of<uint32_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, array, support, length);
}
inline void UnityEngine::Rendering::CoreUnsafeUtils::MergeSort(::ArrayW<uint32_t>  arr, int32_t  sortSize, ::by_ref<::ArrayW<uint32_t>>  supportArray)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUnsafeUtils*>(),
                        {"MergeSort", {}, {::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::ArrayW<uint32_t>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, arr, sortSize, supportArray);
}
inline void UnityEngine::Rendering::CoreUnsafeUtils::MergeSort(::Unity::Collections::NativeArray_1<uint32_t>  arr, int32_t  sortSize, ::by_ref<::Unity::Collections::NativeArray_1<uint32_t>>  supportArray)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUnsafeUtils*>(),
                        {"MergeSort", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<uint32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<uint32_t>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, arr, sortSize, supportArray);
}
inline void UnityEngine::Rendering::CoreUnsafeUtils::InsertionSort(uint32_t*  arr, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUnsafeUtils*>(),
                        {"InsertionSort", {}, {::i2c::type_of<uint32_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, arr, length);
}
inline void UnityEngine::Rendering::CoreUnsafeUtils::InsertionSort(::ArrayW<uint32_t>  arr, int32_t  sortSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUnsafeUtils*>(),
                        {"InsertionSort", {}, {::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, arr, sortSize);
}
inline void UnityEngine::Rendering::CoreUnsafeUtils::InsertionSort(::Unity::Collections::NativeArray_1<uint32_t>  arr, int32_t  sortSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUnsafeUtils*>(),
                        {"InsertionSort", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<uint32_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, arr, sortSize);
}
inline void UnityEngine::Rendering::CoreUnsafeUtils::RadixSort(uint32_t*  array, uint32_t*  support, int32_t  radixBits, int32_t  bitStates, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUnsafeUtils*>(),
                        {"RadixSort", {}, {::i2c::type_of<uint32_t*>(), ::i2c::type_of<uint32_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, array, support, radixBits, bitStates, length);
}
inline void UnityEngine::Rendering::CoreUnsafeUtils::RadixSort(::ArrayW<uint32_t>  arr, int32_t  sortSize, ::by_ref<::ArrayW<uint32_t>>  supportArray, int32_t  radixBits)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUnsafeUtils*>(),
                        {"RadixSort", {}, {::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::ArrayW<uint32_t>>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, arr, sortSize, supportArray, radixBits);
}
inline void UnityEngine::Rendering::CoreUnsafeUtils::RadixSort(::Unity::Collections::NativeArray_1<uint32_t>  array, int32_t  sortSize, ::by_ref<::Unity::Collections::NativeArray_1<uint32_t>>  supportArray, int32_t  radixBits)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUnsafeUtils*>(),
                        {"RadixSort", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<uint32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<uint32_t>>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, array, sortSize, supportArray, radixBits);
}
inline void UnityEngine::Rendering::CoreUnsafeUtils::QuickSort(::ArrayW<uint32_t>  arr, int32_t  left, int32_t  right)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUnsafeUtils*>(),
                        {"QuickSort", {}, {::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, arr, left, right);
}
inline void UnityEngine::Rendering::CoreUnsafeUtils::QuickSort(::ArrayW<uint64_t>  arr, int32_t  left, int32_t  right)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUnsafeUtils*>(),
                        {"QuickSort", {}, {::i2c::type_of<::ArrayW<uint64_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, arr, left, right);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::System::IComparable_1<T>*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void UnityEngine::Rendering::CoreUnsafeUtils::QuickSort(int32_t  count, void*  data)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::CoreUnsafeUtils*>(),
                    {"QuickSort", {::i2c::class_of<T>()}, {::i2c::type_of<int32_t>(), ::i2c::type_of<void*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, count, data);
}
template<typename TValue,typename TKey,typename TGetter>
requires(::cordl_internals::value_type_constraint<TValue> && ::cordl_internals::default_constructor_constraint<TValue> && ::cordl_internals::type_constraint<TKey, ::System::IComparable_1<TKey>*> && ::cordl_internals::value_type_constraint<TKey> && ::cordl_internals::default_constructor_constraint<TKey> && ::cordl_internals::type_constraint<TGetter, ::UnityEngine::Rendering::CoreUnsafeUtils_IKeyGetter_2<TValue,TKey>*> && ::cordl_internals::value_type_constraint<TGetter> && ::cordl_internals::default_constructor_constraint<TGetter>)
inline void UnityEngine::Rendering::CoreUnsafeUtils::QuickSort(int32_t  count, void*  data)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::CoreUnsafeUtils*>(),
                    {"QuickSort", {::i2c::class_of<TValue>(), ::i2c::class_of<TKey>(), ::i2c::class_of<TGetter>()}, {::i2c::type_of<int32_t>(), ::i2c::type_of<void*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TValue>(), ::i2c::class_of<TKey>(), ::i2c::class_of<TGetter>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, count, data);
}
template<typename TValue,typename TKey,typename TGetter>
requires(::cordl_internals::value_type_constraint<TValue> && ::cordl_internals::default_constructor_constraint<TValue> && ::cordl_internals::type_constraint<TKey, ::System::IComparable_1<TKey>*> && ::cordl_internals::value_type_constraint<TKey> && ::cordl_internals::default_constructor_constraint<TKey> && ::cordl_internals::type_constraint<TGetter, ::UnityEngine::Rendering::CoreUnsafeUtils_IKeyGetter_2<TValue,TKey>*> && ::cordl_internals::value_type_constraint<TGetter> && ::cordl_internals::default_constructor_constraint<TGetter>)
inline void UnityEngine::Rendering::CoreUnsafeUtils::QuickSort(void*  data, int32_t  left, int32_t  right)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::CoreUnsafeUtils*>(),
                    {"QuickSort", {::i2c::class_of<TValue>(), ::i2c::class_of<TKey>(), ::i2c::class_of<TGetter>()}, {::i2c::type_of<void*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TValue>(), ::i2c::class_of<TKey>(), ::i2c::class_of<TGetter>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data, left, right);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::System::IEquatable_1<T>*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline int32_t UnityEngine::Rendering::CoreUnsafeUtils::IndexOf(void*  data, int32_t  count, T  v)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::CoreUnsafeUtils*>(),
                    {"IndexOf", {::i2c::class_of<T>()}, {::i2c::type_of<void*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<T>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, data, count, v);
}
template<typename TOldValue,typename TOldGetter,typename TNewValue,typename TNewGetter>
requires(::cordl_internals::value_type_constraint<TOldValue> && ::cordl_internals::default_constructor_constraint<TOldValue> && ::cordl_internals::type_constraint<TOldGetter, ::UnityEngine::Rendering::CoreUnsafeUtils_IKeyGetter_2<TOldValue,::UnityEngine::Hash128>*> && ::cordl_internals::value_type_constraint<TOldGetter> && ::cordl_internals::default_constructor_constraint<TOldGetter> && ::cordl_internals::value_type_constraint<TNewValue> && ::cordl_internals::default_constructor_constraint<TNewValue> && ::cordl_internals::type_constraint<TNewGetter, ::UnityEngine::Rendering::CoreUnsafeUtils_IKeyGetter_2<TNewValue,::UnityEngine::Hash128>*> && ::cordl_internals::value_type_constraint<TNewGetter> && ::cordl_internals::default_constructor_constraint<TNewGetter>)
inline int32_t UnityEngine::Rendering::CoreUnsafeUtils::CompareHashes(int32_t  oldHashCount, void*  oldHashes, int32_t  newHashCount, void*  newHashes, int32_t*  addIndices, int32_t*  removeIndices, ::by_ref<int32_t>  addCount, ::by_ref<int32_t>  remCount)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::CoreUnsafeUtils*>(),
                    {"CompareHashes", {::i2c::class_of<TOldValue>(), ::i2c::class_of<TOldGetter>(), ::i2c::class_of<TNewValue>(), ::i2c::class_of<TNewGetter>()}, {::i2c::type_of<int32_t>(), ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<void*>(), ::i2c::type_of<int32_t*>(), ::i2c::type_of<int32_t*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TOldValue>(), ::i2c::class_of<TOldGetter>(), ::i2c::class_of<TNewValue>(), ::i2c::class_of<TNewGetter>()}
                )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, oldHashCount, oldHashes, newHashCount, newHashes, addIndices, removeIndices, addCount, remCount);
}
inline int32_t UnityEngine::Rendering::CoreUnsafeUtils::CompareHashes(int32_t  oldHashCount, ::UnityEngine::Hash128*  oldHashes, int32_t  newHashCount, ::UnityEngine::Hash128*  newHashes, int32_t*  addIndices, int32_t*  removeIndices, ::by_ref<int32_t>  addCount, ::by_ref<int32_t>  remCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUnsafeUtils*>(),
                        {"CompareHashes", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Hash128*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Hash128*>(), ::i2c::type_of<int32_t*>(), ::i2c::type_of<int32_t*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, oldHashCount, oldHashes, newHashCount, newHashes, addIndices, removeIndices, addCount, remCount);
}
template<typename TValue,typename TGetter>
requires(::cordl_internals::value_type_constraint<TValue> && ::cordl_internals::default_constructor_constraint<TValue> && ::cordl_internals::type_constraint<TGetter, ::UnityEngine::Rendering::CoreUnsafeUtils_IKeyGetter_2<TValue,::UnityEngine::Hash128>*> && ::cordl_internals::value_type_constraint<TGetter> && ::cordl_internals::default_constructor_constraint<TGetter>)
inline void UnityEngine::Rendering::CoreUnsafeUtils::CombineHashes(int32_t  count, void*  hashes, ::UnityEngine::Hash128*  outHash)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::CoreUnsafeUtils*>(),
                    {"CombineHashes", {::i2c::class_of<TValue>(), ::i2c::class_of<TGetter>()}, {::i2c::type_of<int32_t>(), ::i2c::type_of<void*>(), ::i2c::type_of<::UnityEngine::Hash128*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TValue>(), ::i2c::class_of<TGetter>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, count, hashes, outHash);
}
inline void UnityEngine::Rendering::CoreUnsafeUtils::CombineHashes(int32_t  count, ::UnityEngine::Hash128*  hashes, ::UnityEngine::Hash128*  outHash)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUnsafeUtils*>(),
                        {"CombineHashes", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Hash128*>(), ::i2c::type_of<::UnityEngine::Hash128*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, count, hashes, outHash);
}
template<typename TValue,typename TKey,typename TGetter>
requires(::cordl_internals::value_type_constraint<TValue> && ::cordl_internals::default_constructor_constraint<TValue> && ::cordl_internals::type_constraint<TKey, ::System::IComparable_1<TKey>*> && ::cordl_internals::value_type_constraint<TKey> && ::cordl_internals::default_constructor_constraint<TKey> && ::cordl_internals::type_constraint<TGetter, ::UnityEngine::Rendering::CoreUnsafeUtils_IKeyGetter_2<TValue,TKey>*> && ::cordl_internals::value_type_constraint<TGetter> && ::cordl_internals::default_constructor_constraint<TGetter>)
inline int32_t UnityEngine::Rendering::CoreUnsafeUtils::Partition(void*  data, int32_t  left, int32_t  right)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::CoreUnsafeUtils*>(),
                    {"Partition", {::i2c::class_of<TValue>(), ::i2c::class_of<TKey>(), ::i2c::class_of<TGetter>()}, {::i2c::type_of<void*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TValue>(), ::i2c::class_of<TKey>(), ::i2c::class_of<TGetter>()}
                )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, data, left, right);
}
inline bool UnityEngine::Rendering::CoreUnsafeUtils::HaveDuplicates(::ArrayW<int32_t>  arr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUnsafeUtils*>(),
                        {"HaveDuplicates", {}, {::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, arr);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::CoreUnsafeUtils::CoreUnsafeUtils()   {
}
template<typename TValue,typename TKey>
inline TKey UnityEngine::Rendering::CoreUnsafeUtils_IKeyGetter_2<TValue,TKey>::Get(::by_ref<TValue>  v)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Rendering::CoreUnsafeUtils_IKeyGetter_2<TValue,TKey>*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<TKey>(this, ___internal_method, v);
}
