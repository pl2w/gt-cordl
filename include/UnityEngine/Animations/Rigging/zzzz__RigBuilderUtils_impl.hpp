#pragma once
// IWYU pragma private; include "UnityEngine/Animations/Rigging/RigBuilderUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Animations/Rigging/zzzz__RigBuilderUtils_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "UnityEngine/Animations/Rigging/zzzz__IRigLayer_def.hpp"
#include "UnityEngine/Animations/Rigging/zzzz__RigBuilderUtils_PlayableChain_def.hpp"
#include "UnityEngine/Animations/Rigging/zzzz__SyncSceneToStreamLayer_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableGraph_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "UnityEngine/zzzz__Animator_def.hpp"
//  Writing Method size for method: ::UnityEngine::Animations::Rigging::RigBuilderUtils.BuildRigPlayables
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Playables::Playable> (*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Animations::Rigging::IRigLayer*)>(&::UnityEngine::Animations::Rigging::RigBuilderUtils::BuildRigPlayables)> {
  constexpr static std::size_t size = 0x48c;
  constexpr static std::size_t addrs = 0xae79ff4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::Rigging::RigBuilderUtils*>(),
                        {"BuildRigPlayables", {}, {::i2c::type_of<::UnityEngine::Playables::PlayableGraph>(), ::i2c::type_of<::UnityEngine::Animations::Rigging::IRigLayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::Rigging::RigBuilderUtils.BuildPlayables
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::RigBuilderUtils_PlayableChain>* (*)(::UnityEngine::Animator*, ::UnityEngine::Playables::PlayableGraph, ::System::Collections::Generic::IList_1<::UnityEngine::Animations::Rigging::IRigLayer*>*, ::UnityEngine::Animations::Rigging::SyncSceneToStreamLayer*)>(&::UnityEngine::Animations::Rigging::RigBuilderUtils::BuildPlayables)> {
  constexpr static std::size_t size = 0x6e4;
  constexpr static std::size_t addrs = 0xae79624;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::Rigging::RigBuilderUtils*>(),
                        {"BuildPlayables", {}, {::i2c::type_of<::UnityEngine::Animator*>(), ::i2c::type_of<::UnityEngine::Playables::PlayableGraph>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::Animations::Rigging::IRigLayer*>*>(), ::i2c::type_of<::UnityEngine::Animations::Rigging::SyncSceneToStreamLayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::Rigging::RigBuilderUtils.BuildPlayableGraph
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::PlayableGraph (*)(::UnityEngine::Animator*, ::System::Collections::Generic::IList_1<::UnityEngine::Animations::Rigging::IRigLayer*>*, ::UnityEngine::Animations::Rigging::SyncSceneToStreamLayer*)>(&::UnityEngine::Animations::Rigging::RigBuilderUtils::BuildPlayableGraph)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xae78610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::Rigging::RigBuilderUtils*>(),
                        {"BuildPlayableGraph", {}, {::i2c::type_of<::UnityEngine::Animator*>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::Animations::Rigging::IRigLayer*>*>(), ::i2c::type_of<::UnityEngine::Animations::Rigging::SyncSceneToStreamLayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::Rigging::RigBuilderUtils.BuildPlayableGraph
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Animator*, ::System::Collections::Generic::IList_1<::UnityEngine::Animations::Rigging::IRigLayer*>*, ::UnityEngine::Animations::Rigging::SyncSceneToStreamLayer*)>(&::UnityEngine::Animations::Rigging::RigBuilderUtils::BuildPlayableGraph)> {
  constexpr static std::size_t size = 0x3f4;
  constexpr static std::size_t addrs = 0xae7886c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::Rigging::RigBuilderUtils*>(),
                        {"BuildPlayableGraph", {}, {::i2c::type_of<::UnityEngine::Playables::PlayableGraph>(), ::i2c::type_of<::UnityEngine::Animator*>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::Animations::Rigging::IRigLayer*>*>(), ::i2c::type_of<::UnityEngine::Animations::Rigging::SyncSceneToStreamLayer*>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Animations::Rigging::RigBuilderUtils::setStaticF_k_AnimationOutputPriority(uint16_t  value)  {
::cordl_internals::setStaticField<uint16_t, "k_AnimationOutputPriority", ::UnityEngine::Animations::Rigging::RigBuilderUtils*>(std::forward<uint16_t>(value));
}
inline uint16_t UnityEngine::Animations::Rigging::RigBuilderUtils::getStaticF_k_AnimationOutputPriority()  {
return ::cordl_internals::getStaticField<uint16_t, "k_AnimationOutputPriority", ::UnityEngine::Animations::Rigging::RigBuilderUtils*>();
}
inline ::ArrayW<::UnityEngine::Playables::Playable> UnityEngine::Animations::Rigging::RigBuilderUtils::BuildRigPlayables(::UnityEngine::Playables::PlayableGraph  graph, ::UnityEngine::Animations::Rigging::IRigLayer*  layer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::Rigging::RigBuilderUtils*>(),
                        {"BuildRigPlayables", {}, {::i2c::type_of<::UnityEngine::Playables::PlayableGraph>(), ::i2c::type_of<::UnityEngine::Animations::Rigging::IRigLayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Playables::Playable>>(nullptr, ___internal_method, graph, layer);
}
inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::RigBuilderUtils_PlayableChain>* UnityEngine::Animations::Rigging::RigBuilderUtils::BuildPlayables(::UnityEngine::Animator*  animator, ::UnityEngine::Playables::PlayableGraph  graph, ::System::Collections::Generic::IList_1<::UnityEngine::Animations::Rigging::IRigLayer*>*  layers, ::UnityEngine::Animations::Rigging::SyncSceneToStreamLayer*  syncSceneToStreamLayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::Rigging::RigBuilderUtils*>(),
                        {"BuildPlayables", {}, {::i2c::type_of<::UnityEngine::Animator*>(), ::i2c::type_of<::UnityEngine::Playables::PlayableGraph>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::Animations::Rigging::IRigLayer*>*>(), ::i2c::type_of<::UnityEngine::Animations::Rigging::SyncSceneToStreamLayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::RigBuilderUtils_PlayableChain>*>(nullptr, ___internal_method, animator, graph, layers, syncSceneToStreamLayer);
}
inline ::UnityEngine::Playables::PlayableGraph UnityEngine::Animations::Rigging::RigBuilderUtils::BuildPlayableGraph(::UnityEngine::Animator*  animator, ::System::Collections::Generic::IList_1<::UnityEngine::Animations::Rigging::IRigLayer*>*  layers, ::UnityEngine::Animations::Rigging::SyncSceneToStreamLayer*  syncSceneToStreamLayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::Rigging::RigBuilderUtils*>(),
                        {"BuildPlayableGraph", {}, {::i2c::type_of<::UnityEngine::Animator*>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::Animations::Rigging::IRigLayer*>*>(), ::i2c::type_of<::UnityEngine::Animations::Rigging::SyncSceneToStreamLayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::PlayableGraph>(nullptr, ___internal_method, animator, layers, syncSceneToStreamLayer);
}
inline void UnityEngine::Animations::Rigging::RigBuilderUtils::BuildPlayableGraph(::UnityEngine::Playables::PlayableGraph  graph, ::UnityEngine::Animator*  animator, ::System::Collections::Generic::IList_1<::UnityEngine::Animations::Rigging::IRigLayer*>*  layers, ::UnityEngine::Animations::Rigging::SyncSceneToStreamLayer*  syncSceneToStreamLayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::Rigging::RigBuilderUtils*>(),
                        {"BuildPlayableGraph", {}, {::i2c::type_of<::UnityEngine::Playables::PlayableGraph>(), ::i2c::type_of<::UnityEngine::Animator*>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::Animations::Rigging::IRigLayer*>*>(), ::i2c::type_of<::UnityEngine::Animations::Rigging::SyncSceneToStreamLayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, graph, animator, layers, syncSceneToStreamLayer);
}
// Ctor Parameters []
constexpr ::UnityEngine::Animations::Rigging::RigBuilderUtils::RigBuilderUtils()   {
}
