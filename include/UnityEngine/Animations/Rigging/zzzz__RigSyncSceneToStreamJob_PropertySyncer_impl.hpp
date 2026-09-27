#pragma once
// IWYU pragma private; include "UnityEngine/Animations/Rigging/RigSyncSceneToStreamJob_PropertySyncer.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "UnityEngine/Animations/zzzz__PropertySceneHandle_impl.hpp"
#include "UnityEngine/Animations/zzzz__PropertyStreamHandle_impl.hpp"
#include "UnityEngine/Animations/Rigging/zzzz__RigSyncSceneToStreamJob_PropertySyncer_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Animations/zzzz__AnimationStream_def.hpp"
#include "UnityEngine/zzzz__Animator_def.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RigSyncSceneToStreamJob_PropertySyncer.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::RigSyncSceneToStreamJob_PropertySyncer (*)(int32_t)>(&::GlobalNamespace::RigSyncSceneToStreamJob_PropertySyncer::Create)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xae77728;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigSyncSceneToStreamJob_PropertySyncer>(),
                        {"Create", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RigSyncSceneToStreamJob_PropertySyncer.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RigSyncSceneToStreamJob_PropertySyncer::*)()>(&::GlobalNamespace::RigSyncSceneToStreamJob_PropertySyncer::Dispose)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xae77820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigSyncSceneToStreamJob_PropertySyncer>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RigSyncSceneToStreamJob_PropertySyncer.BindAt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RigSyncSceneToStreamJob_PropertySyncer::*)(int32_t, ::UnityEngine::Animator*, ::UnityEngine::Component*, ::StringW)>(&::GlobalNamespace::RigSyncSceneToStreamJob_PropertySyncer::BindAt)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xae778f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigSyncSceneToStreamJob_PropertySyncer>(),
                        {"BindAt", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Animator*>(), ::i2c::type_of<::UnityEngine::Component*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RigSyncSceneToStreamJob_PropertySyncer.Sync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RigSyncSceneToStreamJob_PropertySyncer::*)(::by_ref<::UnityEngine::Animations::AnimationStream>)>(&::GlobalNamespace::RigSyncSceneToStreamJob_PropertySyncer::Sync)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xae774a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigSyncSceneToStreamJob_PropertySyncer>(),
                        {"Sync", {}, {::i2c::type_of<::by_ref<::UnityEngine::Animations::AnimationStream>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RigSyncSceneToStreamJob_PropertySyncer.StreamValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<float_t> (::GlobalNamespace::RigSyncSceneToStreamJob_PropertySyncer::*)(::by_ref<::UnityEngine::Animations::AnimationStream>)>(&::GlobalNamespace::RigSyncSceneToStreamJob_PropertySyncer::StreamValues)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xae77524;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigSyncSceneToStreamJob_PropertySyncer>(),
                        {"StreamValues", {}, {::i2c::type_of<::by_ref<::UnityEngine::Animations::AnimationStream>>()}}
                    )));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::RigSyncSceneToStreamJob_PropertySyncer GlobalNamespace::RigSyncSceneToStreamJob_PropertySyncer::Create(int32_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigSyncSceneToStreamJob_PropertySyncer>(),
                        {"Create", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::RigSyncSceneToStreamJob_PropertySyncer>(nullptr, ___internal_method, size);
}
inline void GlobalNamespace::RigSyncSceneToStreamJob_PropertySyncer::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigSyncSceneToStreamJob_PropertySyncer>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::RigSyncSceneToStreamJob_PropertySyncer::BindAt(int32_t  index, ::UnityEngine::Animator*  animator, ::UnityEngine::Component*  component, ::StringW  property)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigSyncSceneToStreamJob_PropertySyncer>(),
                        {"BindAt", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Animator*>(), ::i2c::type_of<::UnityEngine::Component*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index, animator, component, property);
}
inline void GlobalNamespace::RigSyncSceneToStreamJob_PropertySyncer::Sync(::by_ref<::UnityEngine::Animations::AnimationStream>  stream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigSyncSceneToStreamJob_PropertySyncer>(),
                        {"Sync", {}, {::i2c::type_of<::by_ref<::UnityEngine::Animations::AnimationStream>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stream);
}
inline ::Unity::Collections::NativeArray_1<float_t> GlobalNamespace::RigSyncSceneToStreamJob_PropertySyncer::StreamValues(::by_ref<::UnityEngine::Animations::AnimationStream>  stream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigSyncSceneToStreamJob_PropertySyncer>(),
                        {"StreamValues", {}, {::i2c::type_of<::by_ref<::UnityEngine::Animations::AnimationStream>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<float_t>>(*this, ___internal_method, stream);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::RigSyncSceneToStreamJob_PropertySyncer::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::RigSyncSceneToStreamJob_PropertySyncer::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "sceneHandles", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Animations::PropertySceneHandle>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "streamHandles", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Animations::PropertyStreamHandle>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "buffer", ty: "::Unity::Collections::NativeArray_1<float_t>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::RigSyncSceneToStreamJob_PropertySyncer::RigSyncSceneToStreamJob_PropertySyncer(::Unity::Collections::NativeArray_1<::UnityEngine::Animations::PropertySceneHandle>  sceneHandles, ::Unity::Collections::NativeArray_1<::UnityEngine::Animations::PropertyStreamHandle>  streamHandles, ::Unity::Collections::NativeArray_1<float_t>  buffer) noexcept  {
this->sceneHandles = sceneHandles;
this->streamHandles = streamHandles;
this->buffer = buffer;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RigSyncSceneToStreamJob_PropertySyncer::RigSyncSceneToStreamJob_PropertySyncer()   {
}
