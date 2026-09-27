#pragma once
// IWYU pragma private; include "UnityEngine/Animations/AnimationSceneHandleUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Animations/zzzz__AnimationSceneHandleUtility_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Animations/zzzz__AnimationStream_def.hpp"
#include "UnityEngine/Animations/zzzz__PropertySceneHandle_def.hpp"
//  Writing Method size for method: ::UnityEngine::Animations::AnimationSceneHandleUtility.ReadFloats
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Animations::AnimationStream, ::Unity::Collections::NativeArray_1<::UnityEngine::Animations::PropertySceneHandle>, ::Unity::Collections::NativeArray_1<float_t>)>(&::UnityEngine::Animations::AnimationSceneHandleUtility::ReadFloats)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xb54d464;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimationSceneHandleUtility*>(),
                        {"ReadFloats", {}, {::i2c::type_of<::UnityEngine::Animations::AnimationStream>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Animations::PropertySceneHandle>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimationSceneHandleUtility.ReadSceneFloatsInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Animations::AnimationStream>, void*, void*, int32_t)>(&::UnityEngine::Animations::AnimationSceneHandleUtility::ReadSceneFloatsInternal)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb54d57c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimationSceneHandleUtility*>(),
                        {"ReadSceneFloatsInternal", {}, {::i2c::type_of<::by_ref<::UnityEngine::Animations::AnimationStream>>(), ::i2c::type_of<void*>(), ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Animations::AnimationSceneHandleUtility::ReadFloats(::UnityEngine::Animations::AnimationStream  stream, ::Unity::Collections::NativeArray_1<::UnityEngine::Animations::PropertySceneHandle>  handles, ::Unity::Collections::NativeArray_1<float_t>  buffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimationSceneHandleUtility*>(),
                        {"ReadFloats", {}, {::i2c::type_of<::UnityEngine::Animations::AnimationStream>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Animations::PropertySceneHandle>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, stream, handles, buffer);
}
template<typename T0,typename T1>
requires(::cordl_internals::value_type_constraint<T0> && ::cordl_internals::default_constructor_constraint<T0> && ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
inline int32_t UnityEngine::Animations::AnimationSceneHandleUtility::ValidateAndGetArrayCount(::by_ref<::UnityEngine::Animations::AnimationStream>  stream, ::Unity::Collections::NativeArray_1<T0>  handles, ::Unity::Collections::NativeArray_1<T1>  buffer)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Animations::AnimationSceneHandleUtility*>(),
                    {"ValidateAndGetArrayCount", {::i2c::class_of<T0>(), ::i2c::class_of<T1>()}, {::i2c::type_of<::by_ref<::UnityEngine::Animations::AnimationStream>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<T0>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<T1>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T0>(), ::i2c::class_of<T1>()}
                )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, stream, handles, buffer);
}
inline void UnityEngine::Animations::AnimationSceneHandleUtility::ReadSceneFloatsInternal(::by_ref<::UnityEngine::Animations::AnimationStream>  stream, void*  propertySceneHandles, void*  floatBuffer, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimationSceneHandleUtility*>(),
                        {"ReadSceneFloatsInternal", {}, {::i2c::type_of<::by_ref<::UnityEngine::Animations::AnimationStream>>(), ::i2c::type_of<void*>(), ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, stream, propertySceneHandles, floatBuffer, count);
}
// Ctor Parameters []
constexpr ::UnityEngine::Animations::AnimationSceneHandleUtility::AnimationSceneHandleUtility()   {
}
