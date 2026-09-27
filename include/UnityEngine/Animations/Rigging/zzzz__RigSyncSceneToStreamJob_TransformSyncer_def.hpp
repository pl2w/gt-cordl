#pragma once
// IWYU pragma private; include "UnityEngine/Animations/Rigging/RigSyncSceneToStreamJob_TransformSyncer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Animations/zzzz__TransformSceneHandle_def.hpp"
#include "UnityEngine/Animations/zzzz__TransformStreamHandle_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RigSyncSceneToStreamJob_TransformSyncer)
namespace System {
class IDisposable;
}
namespace UnityEngine::Animations {
struct AnimationStream;
}
namespace UnityEngine {
class Animator;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
struct RigSyncSceneToStreamJob_TransformSyncer;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::RigSyncSceneToStreamJob_TransformSyncer);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RigSyncSceneToStreamJob_TransformSyncer, "UnityEngine.Animations.Rigging", "RigSyncSceneToStreamJob/TransformSyncer");
// Dependencies Unity.Collections.NativeArray`1<T>, UnityEngine.Animations.TransformSceneHandle, UnityEngine.Animations.TransformStreamHandle
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Animations.Rigging.RigSyncSceneToStreamJob/TransformSyncer
struct CORDL_TYPE RigSyncSceneToStreamJob_TransformSyncer {
public:
// Declarations
/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method BindAt, addr 0xae776bc, size 0x6c, virtual false, abstract: false, final false
inline void BindAt(int32_t  index, ::UnityEngine::Animator*  animator, ::UnityEngine::Transform*  transform) ;

/// @brief Method Create, addr 0xae7756c, size 0xb4, virtual false, abstract: false, final false
static inline ::GlobalNamespace::RigSyncSceneToStreamJob_TransformSyncer Create(int32_t  size) ;

/// @brief Method Dispose, addr 0xae77620, size 0x9c, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Sync, addr 0xae77340, size 0x164, virtual false, abstract: false, final false
inline void Sync(::by_ref<::UnityEngine::Animations::AnimationStream>  stream) ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr RigSyncSceneToStreamJob_TransformSyncer() ;

// Ctor Parameters [CppParam { name: "sceneHandles", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Animations::TransformSceneHandle>", modifiers: "", def_value: None, comment: None }, CppParam { name: "streamHandles", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Animations::TransformStreamHandle>", modifiers: "", def_value: None, comment: None }]
constexpr RigSyncSceneToStreamJob_TransformSyncer(::Unity::Collections::NativeArray_1<::UnityEngine::Animations::TransformSceneHandle>  sceneHandles, ::Unity::Collections::NativeArray_1<::UnityEngine::Animations::TransformStreamHandle>  streamHandles) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32293};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field sceneHandles, offset: 0x0, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::Animations::TransformSceneHandle>  sceneHandles;

/// @brief Field streamHandles, offset: 0x10, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::Animations::TransformStreamHandle>  streamHandles;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RigSyncSceneToStreamJob_TransformSyncer, sceneHandles) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RigSyncSceneToStreamJob_TransformSyncer, streamHandles) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RigSyncSceneToStreamJob_TransformSyncer) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
