#pragma once
// IWYU pragma private; include "UnityEngine/Animations/AnimationStreamHandleUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Animations/zzzz__AnimationStreamHandleUtility_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Animations/zzzz__AnimationStream_def.hpp"
#include "UnityEngine/Animations/zzzz__PropertyStreamHandle_def.hpp"
//  Writing Method size for method: ::UnityEngine::Animations::AnimationStreamHandleUtility.WriteFloats
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Animations::AnimationStream, ::Unity::Collections::NativeArray_1<::UnityEngine::Animations::PropertyStreamHandle>, ::Unity::Collections::NativeArray_1<float_t>, bool)>(&::UnityEngine::Animations::AnimationStreamHandleUtility::WriteFloats)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0xb54d5d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimationStreamHandleUtility*>(),
                        {"WriteFloats", {}, {::i2c::type_of<::UnityEngine::Animations::AnimationStream>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Animations::PropertyStreamHandle>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<float_t>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimationStreamHandleUtility.ReadFloats
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Animations::AnimationStream, ::Unity::Collections::NativeArray_1<::UnityEngine::Animations::PropertyStreamHandle>, ::Unity::Collections::NativeArray_1<float_t>)>(&::UnityEngine::Animations::AnimationStreamHandleUtility::ReadFloats)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xb54d778;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimationStreamHandleUtility*>(),
                        {"ReadFloats", {}, {::i2c::type_of<::UnityEngine::Animations::AnimationStream>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Animations::PropertyStreamHandle>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimationStreamHandleUtility.ReadStreamFloatsInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Animations::AnimationStream>, void*, void*, int32_t)>(&::UnityEngine::Animations::AnimationStreamHandleUtility::ReadStreamFloatsInternal)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb54d898;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimationStreamHandleUtility*>(),
                        {"ReadStreamFloatsInternal", {}, {::i2c::type_of<::by_ref<::UnityEngine::Animations::AnimationStream>>(), ::i2c::type_of<void*>(), ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimationStreamHandleUtility.WriteStreamFloatsInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Animations::AnimationStream>, void*, void*, int32_t, bool)>(&::UnityEngine::Animations::AnimationStreamHandleUtility::WriteStreamFloatsInternal)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xb54d70c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimationStreamHandleUtility*>(),
                        {"WriteStreamFloatsInternal", {}, {::i2c::type_of<::by_ref<::UnityEngine::Animations::AnimationStream>>(), ::i2c::type_of<void*>(), ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Animations::AnimationStreamHandleUtility::WriteFloats(::UnityEngine::Animations::AnimationStream  stream, ::Unity::Collections::NativeArray_1<::UnityEngine::Animations::PropertyStreamHandle>  handles, ::Unity::Collections::NativeArray_1<float_t>  buffer, bool  useMask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimationStreamHandleUtility*>(),
                        {"WriteFloats", {}, {::i2c::type_of<::UnityEngine::Animations::AnimationStream>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Animations::PropertyStreamHandle>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<float_t>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, stream, handles, buffer, useMask);
}
inline void UnityEngine::Animations::AnimationStreamHandleUtility::ReadFloats(::UnityEngine::Animations::AnimationStream  stream, ::Unity::Collections::NativeArray_1<::UnityEngine::Animations::PropertyStreamHandle>  handles, ::Unity::Collections::NativeArray_1<float_t>  buffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimationStreamHandleUtility*>(),
                        {"ReadFloats", {}, {::i2c::type_of<::UnityEngine::Animations::AnimationStream>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Animations::PropertyStreamHandle>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, stream, handles, buffer);
}
inline void UnityEngine::Animations::AnimationStreamHandleUtility::ReadStreamFloatsInternal(::by_ref<::UnityEngine::Animations::AnimationStream>  stream, void*  propertyStreamHandles, void*  floatBuffer, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimationStreamHandleUtility*>(),
                        {"ReadStreamFloatsInternal", {}, {::i2c::type_of<::by_ref<::UnityEngine::Animations::AnimationStream>>(), ::i2c::type_of<void*>(), ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, stream, propertyStreamHandles, floatBuffer, count);
}
inline void UnityEngine::Animations::AnimationStreamHandleUtility::WriteStreamFloatsInternal(::by_ref<::UnityEngine::Animations::AnimationStream>  stream, void*  propertyStreamHandles, void*  floatBuffer, int32_t  count, bool  useMask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimationStreamHandleUtility*>(),
                        {"WriteStreamFloatsInternal", {}, {::i2c::type_of<::by_ref<::UnityEngine::Animations::AnimationStream>>(), ::i2c::type_of<void*>(), ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, stream, propertyStreamHandles, floatBuffer, count, useMask);
}
// Ctor Parameters []
constexpr ::UnityEngine::Animations::AnimationStreamHandleUtility::AnimationStreamHandleUtility()   {
}
