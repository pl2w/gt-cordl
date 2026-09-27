#pragma once
// IWYU pragma private; include "UnityEngine/Animations/TransformSceneHandle.hpp"
#include "UnityEngine/Animations/zzzz__TransformSceneHandle_def.hpp"
#include "UnityEngine/Animations/zzzz__AnimationStream_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::Animations::TransformSceneHandle.IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Animations::TransformSceneHandle::*)(::UnityEngine::Animations::AnimationStream)>(&::UnityEngine::Animations::TransformSceneHandle::IsValid)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xb54d1a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::TransformSceneHandle>(),
                        {"IsValid", {}, {::i2c::type_of<::UnityEngine::Animations::AnimationStream>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::TransformSceneHandle.get_createdByNative
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Animations::TransformSceneHandle::*)()>(&::UnityEngine::Animations::TransformSceneHandle::get_createdByNative)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb54d240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::TransformSceneHandle>(),
                        {"get_createdByNative", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::TransformSceneHandle.get_hasTransformSceneHandleDefinitionIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Animations::TransformSceneHandle::*)()>(&::UnityEngine::Animations::TransformSceneHandle::get_hasTransformSceneHandleDefinitionIndex)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb54d250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::TransformSceneHandle>(),
                        {"get_hasTransformSceneHandleDefinitionIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::TransformSceneHandle.CheckIsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animations::TransformSceneHandle::*)(::by_ref<::UnityEngine::Animations::AnimationStream>)>(&::UnityEngine::Animations::TransformSceneHandle::CheckIsValid)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xb54d2a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::TransformSceneHandle>(),
                        {"CheckIsValid", {}, {::i2c::type_of<::by_ref<::UnityEngine::Animations::AnimationStream>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::TransformSceneHandle.GetLocalTRS
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animations::TransformSceneHandle::*)(::UnityEngine::Animations::AnimationStream, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Quaternion>, ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::Animations::TransformSceneHandle::GetLocalTRS)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xb54d388;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::TransformSceneHandle>(),
                        {"GetLocalTRS", {}, {::i2c::type_of<::UnityEngine::Animations::AnimationStream>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::TransformSceneHandle.HasValidTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Animations::TransformSceneHandle::*)(::by_ref<::UnityEngine::Animations::AnimationStream>)>(&::UnityEngine::Animations::TransformSceneHandle::HasValidTransform)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb54d260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::TransformSceneHandle>(),
                        {"HasValidTransform", {}, {::i2c::type_of<::by_ref<::UnityEngine::Animations::AnimationStream>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::TransformSceneHandle.GetLocalTRSInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animations::TransformSceneHandle::*)(::by_ref<::UnityEngine::Animations::AnimationStream>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Quaternion>, ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::Animations::TransformSceneHandle::GetLocalTRSInternal)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xb54d3f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::TransformSceneHandle>(),
                        {"GetLocalTRSInternal", {}, {::i2c::type_of<::by_ref<::UnityEngine::Animations::AnimationStream>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
inline bool UnityEngine::Animations::TransformSceneHandle::IsValid(::UnityEngine::Animations::AnimationStream  stream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::TransformSceneHandle>(),
                        {"IsValid", {}, {::i2c::type_of<::UnityEngine::Animations::AnimationStream>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, stream);
}
inline bool UnityEngine::Animations::TransformSceneHandle::get_createdByNative()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::TransformSceneHandle>(),
                        {"get_createdByNative", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool UnityEngine::Animations::TransformSceneHandle::get_hasTransformSceneHandleDefinitionIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::TransformSceneHandle>(),
                        {"get_hasTransformSceneHandleDefinitionIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void UnityEngine::Animations::TransformSceneHandle::CheckIsValid(::by_ref<::UnityEngine::Animations::AnimationStream>  stream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::TransformSceneHandle>(),
                        {"CheckIsValid", {}, {::i2c::type_of<::by_ref<::UnityEngine::Animations::AnimationStream>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stream);
}
inline void UnityEngine::Animations::TransformSceneHandle::GetLocalTRS(::UnityEngine::Animations::AnimationStream  stream, ::by_ref<::UnityEngine::Vector3>  position, ::by_ref<::UnityEngine::Quaternion>  rotation, ::by_ref<::UnityEngine::Vector3>  scale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::TransformSceneHandle>(),
                        {"GetLocalTRS", {}, {::i2c::type_of<::UnityEngine::Animations::AnimationStream>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stream, position, rotation, scale);
}
inline bool UnityEngine::Animations::TransformSceneHandle::HasValidTransform(::by_ref<::UnityEngine::Animations::AnimationStream>  stream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::TransformSceneHandle>(),
                        {"HasValidTransform", {}, {::i2c::type_of<::by_ref<::UnityEngine::Animations::AnimationStream>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, stream);
}
inline void UnityEngine::Animations::TransformSceneHandle::GetLocalTRSInternal(::by_ref<::UnityEngine::Animations::AnimationStream>  stream, ::by_ref<::UnityEngine::Vector3>  position, ::by_ref<::UnityEngine::Quaternion>  rotation, ::by_ref<::UnityEngine::Vector3>  scale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::TransformSceneHandle>(),
                        {"GetLocalTRSInternal", {}, {::i2c::type_of<::by_ref<::UnityEngine::Animations::AnimationStream>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stream, position, rotation, scale);
}
// Ctor Parameters [CppParam { name: "valid", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "transformSceneHandleDefinitionIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Animations::TransformSceneHandle::TransformSceneHandle(uint32_t  valid, int32_t  transformSceneHandleDefinitionIndex) noexcept  {
this->valid = valid;
this->transformSceneHandleDefinitionIndex = transformSceneHandleDefinitionIndex;
}
// Ctor Parameters []
constexpr ::UnityEngine::Animations::TransformSceneHandle::TransformSceneHandle()   {
}
