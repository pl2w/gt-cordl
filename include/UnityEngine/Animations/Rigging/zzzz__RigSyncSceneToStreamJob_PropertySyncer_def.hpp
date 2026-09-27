#pragma once
// IWYU pragma private; include "UnityEngine/Animations/Rigging/RigSyncSceneToStreamJob_PropertySyncer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Animations/zzzz__PropertySceneHandle_def.hpp"
#include "UnityEngine/Animations/zzzz__PropertyStreamHandle_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RigSyncSceneToStreamJob_PropertySyncer)
namespace System {
class IDisposable;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace UnityEngine::Animations {
struct AnimationStream;
}
namespace UnityEngine {
class Animator;
}
namespace UnityEngine {
class Component;
}
// Forward declare root types
namespace GlobalNamespace {
struct RigSyncSceneToStreamJob_PropertySyncer;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::RigSyncSceneToStreamJob_PropertySyncer);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RigSyncSceneToStreamJob_PropertySyncer, "UnityEngine.Animations.Rigging", "RigSyncSceneToStreamJob/PropertySyncer");
// Dependencies Unity.Collections.NativeArray`1<T>, UnityEngine.Animations.PropertySceneHandle, UnityEngine.Animations.PropertyStreamHandle
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Animations.Rigging.RigSyncSceneToStreamJob/PropertySyncer
struct CORDL_TYPE RigSyncSceneToStreamJob_PropertySyncer {
public:
// Declarations
/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method BindAt, addr 0xae778f0, size 0xbc, virtual false, abstract: false, final false
inline void BindAt(int32_t  index, ::UnityEngine::Animator*  animator, ::UnityEngine::Component*  component, ::StringW  property) ;

/// @brief Method Create, addr 0xae77728, size 0xf8, virtual false, abstract: false, final false
static inline ::GlobalNamespace::RigSyncSceneToStreamJob_PropertySyncer Create(int32_t  size) ;

/// @brief Method Dispose, addr 0xae77820, size 0xd0, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method StreamValues, addr 0xae77524, size 0x48, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<float_t> StreamValues(::by_ref<::UnityEngine::Animations::AnimationStream>  stream) ;

/// @brief Method Sync, addr 0xae774a4, size 0x80, virtual false, abstract: false, final false
inline void Sync(::by_ref<::UnityEngine::Animations::AnimationStream>  stream) ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr RigSyncSceneToStreamJob_PropertySyncer() ;

// Ctor Parameters [CppParam { name: "sceneHandles", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Animations::PropertySceneHandle>", modifiers: "", def_value: None, comment: None }, CppParam { name: "streamHandles", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Animations::PropertyStreamHandle>", modifiers: "", def_value: None, comment: None }, CppParam { name: "buffer", ty: "::Unity::Collections::NativeArray_1<float_t>", modifiers: "", def_value: None, comment: None }]
constexpr RigSyncSceneToStreamJob_PropertySyncer(::Unity::Collections::NativeArray_1<::UnityEngine::Animations::PropertySceneHandle>  sceneHandles, ::Unity::Collections::NativeArray_1<::UnityEngine::Animations::PropertyStreamHandle>  streamHandles, ::Unity::Collections::NativeArray_1<float_t>  buffer) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32294};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field sceneHandles, offset: 0x0, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::Animations::PropertySceneHandle>  sceneHandles;

/// @brief Field streamHandles, offset: 0x10, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::Animations::PropertyStreamHandle>  streamHandles;

/// @brief Field buffer, offset: 0x20, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<float_t>  buffer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RigSyncSceneToStreamJob_PropertySyncer, sceneHandles) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RigSyncSceneToStreamJob_PropertySyncer, streamHandles) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RigSyncSceneToStreamJob_PropertySyncer, buffer) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RigSyncSceneToStreamJob_PropertySyncer) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
