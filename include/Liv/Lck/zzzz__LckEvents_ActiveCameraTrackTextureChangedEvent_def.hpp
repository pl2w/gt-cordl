#pragma once
// IWYU pragma private; include "Liv/Lck/LckEvents_ActiveCameraTrackTextureChangedEvent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(LckEvents_ActiveCameraTrackTextureChangedEvent)
namespace Liv::Lck {
template<typename TResult>
class LckEvents_IEventWithResult_1;
}
namespace Liv::Lck {
template<typename T>
class LckResult_1;
}
namespace UnityEngine {
class RenderTexture;
}
// Forward declare root types
namespace GlobalNamespace {
struct LckEvents_ActiveCameraTrackTextureChangedEvent;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LckEvents_ActiveCameraTrackTextureChangedEvent);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LckEvents_ActiveCameraTrackTextureChangedEvent, "Liv.Lck", "LckEvents/ActiveCameraTrackTextureChangedEvent");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Liv.Lck.LckEvents/ActiveCameraTrackTextureChangedEvent
struct CORDL_TYPE LckEvents_ActiveCameraTrackTextureChangedEvent {
public:
// Declarations
 __declspec(property(get=get_CameraTrackTextureResult)) ::Liv::Lck::LckResult_1<::UnityW<::UnityEngine::RenderTexture>>*  CameraTrackTextureResult;

 __declspec(property(get=get_Result)) ::Liv::Lck::LckResult_1<::UnityW<::UnityEngine::RenderTexture>>*  Result;

/// @brief Convert operator to "::Liv::Lck::LckEvents_IEventWithResult_1<::Liv::Lck::LckResult_1<::UnityW<::UnityEngine::RenderTexture>>*>"
constexpr operator  ::Liv::Lck::LckEvents_IEventWithResult_1<::Liv::Lck::LckResult_1<::UnityW<::UnityEngine::RenderTexture>>*>*() ;

/// @brief Method .ctor, addr 0x9ce1918, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::Liv::Lck::LckResult_1<::UnityW<::UnityEngine::RenderTexture>>*  cameraTrackTextureResult) ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_CameraTrackTextureResult, addr 0x9ce1908, size 0x8, virtual false, abstract: false, final false
inline ::Liv::Lck::LckResult_1<::UnityW<::UnityEngine::RenderTexture>>* get_CameraTrackTextureResult() ;

/// @brief Method get_Result, addr 0x9ce1910, size 0x8, virtual true, abstract: false, final true
inline ::Liv::Lck::LckResult_1<::UnityW<::UnityEngine::RenderTexture>>* get_Result() ;

/// @brief Convert to "::Liv::Lck::LckEvents_IEventWithResult_1<::Liv::Lck::LckResult_1<::UnityW<::UnityEngine::RenderTexture>>*>"
constexpr ::Liv::Lck::LckEvents_IEventWithResult_1<::Liv::Lck::LckResult_1<::UnityW<::UnityEngine::RenderTexture>>*>* i___Liv__Lck__LckEvents_IEventWithResult_1___Liv__Lck__LckResult_1___UnityW___UnityEngine__RenderTexture____() ;

// Ctor Parameters []
// @brief default ctor
constexpr LckEvents_ActiveCameraTrackTextureChangedEvent() ;

// Ctor Parameters [CppParam { name: "_CameraTrackTextureResult_k__BackingField", ty: "::Liv::Lck::LckResult_1<::UnityW<::UnityEngine::RenderTexture>>*", modifiers: "", def_value: None, comment: None }]
constexpr LckEvents_ActiveCameraTrackTextureChangedEvent(::Liv::Lck::LckResult_1<::UnityW<::UnityEngine::RenderTexture>>*  _CameraTrackTextureResult_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24725};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// [CompilerGenerated]
/// @brief Field <CameraTrackTextureResult>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Liv::Lck::LckResult_1<::UnityW<::UnityEngine::RenderTexture>>*  _CameraTrackTextureResult_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LckEvents_ActiveCameraTrackTextureChangedEvent, _CameraTrackTextureResult_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LckEvents_ActiveCameraTrackTextureChangedEvent) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
