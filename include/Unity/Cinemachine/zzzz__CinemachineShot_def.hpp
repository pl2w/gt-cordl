#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineShot.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__PlayableAsset_def.hpp"
#include "UnityEngine/zzzz__ExposedReference_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(CinemachineShot)
namespace Unity::Cinemachine {
class CinemachineVirtualCameraBase;
}
namespace UnityEngine::Playables {
class PlayableDirector;
}
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace UnityEngine::Playables {
struct Playable;
}
namespace UnityEngine::Timeline {
class IPropertyCollector;
}
namespace UnityEngine::Timeline {
class IPropertyPreview;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace Unity::Cinemachine {
class CinemachineShot;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::CinemachineShot*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachineShot*, "Unity.Cinemachine", "CinemachineShot");
// Dependencies UnityEngine.ExposedReference`1<T>, UnityEngine.Playables.PlayableAsset
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachineShot
class CORDL_TYPE CinemachineShot : public ::UnityEngine::Playables::PlayableAsset {
public:
// Declarations
/// @brief Field DisplayName, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_DisplayName, put=__cordl_internal_set_DisplayName)) ::StringW  DisplayName;

/// @brief Field VirtualCamera, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get_VirtualCamera, put=__cordl_internal_set_VirtualCamera)) ::UnityEngine::ExposedReference_1<::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>>  VirtualCamera;

/// @brief Convert operator to "::UnityEngine::Timeline::IPropertyPreview"
constexpr operator  ::UnityEngine::Timeline::IPropertyPreview*() noexcept;

/// @brief Method CreatePlayable, addr 0xaf00a9c, size 0x134, virtual true, abstract: false, final false
inline ::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph  graph, ::UnityEngine::GameObject*  owner) ;

/// @brief Method GatherProperties, addr 0xaf00bd0, size 0x5e0, virtual true, abstract: false, final true
inline void GatherProperties(::UnityEngine::Playables::PlayableDirector*  director, ::UnityEngine::Timeline::IPropertyCollector*  driver) ;

static inline ::Unity::Cinemachine::CinemachineShot* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_DisplayName() const;

constexpr ::StringW& __cordl_internal_get_DisplayName() ;

constexpr ::UnityEngine::ExposedReference_1<::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>> const& __cordl_internal_get_VirtualCamera() const;

constexpr ::UnityEngine::ExposedReference_1<::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>>& __cordl_internal_get_VirtualCamera() ;

constexpr void __cordl_internal_set_DisplayName(::StringW  value) ;

constexpr void __cordl_internal_set_VirtualCamera(::UnityEngine::ExposedReference_1<::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>>  value) ;

/// @brief Method .ctor, addr 0xaf011b0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::UnityEngine::Timeline::IPropertyPreview"
constexpr ::UnityEngine::Timeline::IPropertyPreview* i___UnityEngine__Timeline__IPropertyPreview() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineShot() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CinemachineShot", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CinemachineShot(CinemachineShot && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CinemachineShot", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachineShot(CinemachineShot const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22532};

/// [Tooltip("The name to display on the track.  If empty, the CmCamera\'s name will be used.")]
/// @brief Field DisplayName, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___DisplayName;

/// [Tooltip("The Cinemachine camera to use for this shot")]
/// @brief Field VirtualCamera, offset: 0x20, size: 0x10, def value: None
 ::UnityEngine::ExposedReference_1<::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>>  ___VirtualCamera;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::CinemachineShot, ___DisplayName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineShot, ___VirtualCamera) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::CinemachineShot) == 0x30, "Size mismatch!");

} // namespace end def Unity::Cinemachine
