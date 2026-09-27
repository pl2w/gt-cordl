#pragma once
// IWYU pragma private; include "UnityEngine/Animations/Rigging/RigSyncSceneToStreamJob_TransformSyncer.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "UnityEngine/Animations/zzzz__TransformSceneHandle_impl.hpp"
#include "UnityEngine/Animations/zzzz__TransformStreamHandle_impl.hpp"
#include "UnityEngine/Animations/Rigging/zzzz__RigSyncSceneToStreamJob_TransformSyncer_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/Animations/zzzz__AnimationStream_def.hpp"
#include "UnityEngine/zzzz__Animator_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RigSyncSceneToStreamJob_TransformSyncer.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::RigSyncSceneToStreamJob_TransformSyncer (*)(int32_t)>(&::GlobalNamespace::RigSyncSceneToStreamJob_TransformSyncer::Create)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xae7756c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigSyncSceneToStreamJob_TransformSyncer>(),
                        {"Create", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RigSyncSceneToStreamJob_TransformSyncer.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RigSyncSceneToStreamJob_TransformSyncer::*)()>(&::GlobalNamespace::RigSyncSceneToStreamJob_TransformSyncer::Dispose)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xae77620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigSyncSceneToStreamJob_TransformSyncer>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RigSyncSceneToStreamJob_TransformSyncer.BindAt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RigSyncSceneToStreamJob_TransformSyncer::*)(int32_t, ::UnityEngine::Animator*, ::UnityEngine::Transform*)>(&::GlobalNamespace::RigSyncSceneToStreamJob_TransformSyncer::BindAt)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xae776bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigSyncSceneToStreamJob_TransformSyncer>(),
                        {"BindAt", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Animator*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RigSyncSceneToStreamJob_TransformSyncer.Sync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RigSyncSceneToStreamJob_TransformSyncer::*)(::by_ref<::UnityEngine::Animations::AnimationStream>)>(&::GlobalNamespace::RigSyncSceneToStreamJob_TransformSyncer::Sync)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0xae77340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigSyncSceneToStreamJob_TransformSyncer>(),
                        {"Sync", {}, {::i2c::type_of<::by_ref<::UnityEngine::Animations::AnimationStream>>()}}
                    )));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::RigSyncSceneToStreamJob_TransformSyncer GlobalNamespace::RigSyncSceneToStreamJob_TransformSyncer::Create(int32_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigSyncSceneToStreamJob_TransformSyncer>(),
                        {"Create", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::RigSyncSceneToStreamJob_TransformSyncer>(nullptr, ___internal_method, size);
}
inline void GlobalNamespace::RigSyncSceneToStreamJob_TransformSyncer::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigSyncSceneToStreamJob_TransformSyncer>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::RigSyncSceneToStreamJob_TransformSyncer::BindAt(int32_t  index, ::UnityEngine::Animator*  animator, ::UnityEngine::Transform*  transform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigSyncSceneToStreamJob_TransformSyncer>(),
                        {"BindAt", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Animator*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index, animator, transform);
}
inline void GlobalNamespace::RigSyncSceneToStreamJob_TransformSyncer::Sync(::by_ref<::UnityEngine::Animations::AnimationStream>  stream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigSyncSceneToStreamJob_TransformSyncer>(),
                        {"Sync", {}, {::i2c::type_of<::by_ref<::UnityEngine::Animations::AnimationStream>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stream);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::RigSyncSceneToStreamJob_TransformSyncer::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::RigSyncSceneToStreamJob_TransformSyncer::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "sceneHandles", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Animations::TransformSceneHandle>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "streamHandles", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Animations::TransformStreamHandle>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::RigSyncSceneToStreamJob_TransformSyncer::RigSyncSceneToStreamJob_TransformSyncer(::Unity::Collections::NativeArray_1<::UnityEngine::Animations::TransformSceneHandle>  sceneHandles, ::Unity::Collections::NativeArray_1<::UnityEngine::Animations::TransformStreamHandle>  streamHandles) noexcept  {
this->sceneHandles = sceneHandles;
this->streamHandles = streamHandles;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RigSyncSceneToStreamJob_TransformSyncer::RigSyncSceneToStreamJob_TransformSyncer()   {
}
