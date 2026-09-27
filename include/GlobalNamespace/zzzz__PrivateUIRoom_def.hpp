#pragma once
// IWYU pragma private; include "GlobalNamespace/PrivateUIRoom.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MonoBehaviourTick_def.hpp"
#include "GlobalNamespace/zzzz__PrivateUIRoom_OverlaySource_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PrivateUIRoom)
namespace GlobalNamespace {
struct PrivateUIRoom_OverlaySource;
}
namespace GorillaLocomotion {
class GTPlayer;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace TMPro {
class TextMeshPro;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class MeshRenderer;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class PrivateUIRoom;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PrivateUIRoom*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PrivateUIRoom*, "", "PrivateUIRoom");
// Dependencies MonoBehaviourTick, PrivateUIRoom::OverlaySource, UnityEngine.LayerMask, UnityEngine.Quaternion, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: PrivateUIRoom
class CORDL_TYPE PrivateUIRoom : public ::GlobalNamespace::MonoBehaviourTick {
public:
// Declarations
using OverlaySource = ::GlobalNamespace::PrivateUIRoom_OverlaySource;

/// @brief Field _initialAudioVolume, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get__initialAudioVolume, put=__cordl_internal_set__initialAudioVolume)) float_t  _initialAudioVolume;

/// @brief Field _text, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__text, put=__cordl_internal_set__text)) ::UnityW<::TMPro::TextMeshPro>  _text;

/// @brief Field _textDistance, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__textDistance, put=__cordl_internal_set__textDistance)) float_t  _textDistance;

/// @brief Field _uiRoot, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__uiRoot, put=__cordl_internal_set__uiRoot)) ::UnityW<::UnityEngine::Transform>  _uiRoot;

/// @brief Field backgroundDirectionPropertyID, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_backgroundDirectionPropertyID, put=__cordl_internal_set_backgroundDirectionPropertyID)) int32_t  backgroundDirectionPropertyID;

/// @brief Field backgroundDirectionPropertyName, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_backgroundDirectionPropertyName, put=__cordl_internal_set_backgroundDirectionPropertyName)) ::StringW  backgroundDirectionPropertyName;

/// @brief Field backgroundRenderer, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_backgroundRenderer, put=__cordl_internal_set_backgroundRenderer)) ::UnityW<::UnityEngine::MeshRenderer>  backgroundRenderer;

/// @brief Field focusTransform, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_focusTransform, put=__cordl_internal_set_focusTransform)) ::UnityW<::UnityEngine::Transform>  focusTransform;

/// @brief Field inOverlay, offset 0x94, size 0x1 
 __declspec(property(get=__cordl_internal_get_inOverlay, put=__cordl_internal_set_inOverlay)) bool  inOverlay;

/// @brief Field instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_instance, put=setStaticF_instance)) ::UnityW<::GlobalNamespace::PrivateUIRoom>  instance;

/// @brief Field lastStablePosition, offset 0x9c, size 0xc 
 __declspec(property(get=__cordl_internal_get_lastStablePosition, put=__cordl_internal_set_lastStablePosition)) ::UnityEngine::Vector3  lastStablePosition;

/// @brief Field lastStableRotation, offset 0xa8, size 0x10 
 __declspec(property(get=__cordl_internal_get_lastStableRotation, put=__cordl_internal_set_lastStableRotation)) ::UnityEngine::Quaternion  lastStableRotation;

/// @brief Field lateralPlay, offset 0xbc, size 0x4 
 __declspec(property(get=__cordl_internal_get_lateralPlay, put=__cordl_internal_set_lateralPlay)) float_t  lateralPlay;

/// @brief Field leftHandObject, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_leftHandObject, put=__cordl_internal_set_leftHandObject)) ::UnityW<::UnityEngine::GameObject>  leftHandObject;

 __declspec(property(get=get_localPlayer)) ::UnityW<::GorillaLocomotion::GTPlayer>  localPlayer;

/// @brief Field occluder, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_occluder, put=__cordl_internal_set_occluder)) ::UnityW<::UnityEngine::GameObject>  occluder;

 __declspec(property(get=get_overlayForcedActive)) bool  overlayForcedActive;

/// @brief Field overlayForcedSources, offset 0x98, size 0x4 
 __declspec(property(get=__cordl_internal_get_overlayForcedSources, put=__cordl_internal_set_overlayForcedSources)) ::GlobalNamespace::PrivateUIRoom_OverlaySource  overlayForcedSources;

/// @brief Field rightHandObject, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_rightHandObject, put=__cordl_internal_set_rightHandObject)) ::UnityW<::UnityEngine::GameObject>  rightHandObject;

/// @brief Field rotationalPlay, offset 0xc0, size 0x4 
 __declspec(property(get=__cordl_internal_get_rotationalPlay, put=__cordl_internal_set_rotationalPlay)) float_t  rotationalPlay;

/// @brief Field savedCullingLayers, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get_savedCullingLayers, put=__cordl_internal_set_savedCullingLayers)) int32_t  savedCullingLayers;

/// @brief Field ui, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_ui, put=__cordl_internal_set_ui)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  ui;

/// @brief Field uiParents, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_uiParents, put=__cordl_internal_set_uiParents)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Transform>,::UnityW<::UnityEngine::Transform>>*  uiParents;

/// @brief Field verticalPlay, offset 0xb8, size 0x4 
 __declspec(property(get=__cordl_internal_get_verticalPlay, put=__cordl_internal_set_verticalPlay)) float_t  verticalPlay;

/// @brief Field visibleLayers, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_visibleLayers, put=__cordl_internal_set_visibleLayers)) ::UnityEngine::LayerMask  visibleLayers;

/// @brief Method AddUI, addr 0x5715894, size 0x378, virtual false, abstract: false, final false
static inline void AddUI(::UnityEngine::Transform*  focus) ;

/// @brief Method AssignShoulderCameraToCanvases, addr 0x5715890, size 0x4, virtual false, abstract: false, final false
static inline void AssignShoulderCameraToCanvases(::UnityEngine::Transform*  focus) ;

/// @brief Method Awake, addr 0x57151e8, size 0x244, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method ForceStartOverlay, addr 0x5716434, size 0xe4, virtual false, abstract: false, final false
static inline void ForceStartOverlay(::GlobalNamespace::PrivateUIRoom_OverlaySource  source, ::StringW  text) ;

/// @brief Method GetIdealScreenPositionRotation, addr 0x57156bc, size 0x1d4, virtual false, abstract: false, final false
inline void GetIdealScreenPositionRotation(::by_ref<::UnityEngine::Vector3>  position, ::by_ref<::UnityEngine::Quaternion>  rotation, ::by_ref<::UnityEngine::Vector3>  scale) ;

/// @brief Method GetInOverlay, addr 0x5716ebc, size 0xa8, virtual false, abstract: false, final false
static inline bool GetInOverlay() ;

static inline ::GlobalNamespace::PrivateUIRoom* New_ctor() ;

/// @brief Method OnDisable, addr 0x5715434, size 0x8, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x571542c, size 0x8, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method RemoveUI, addr 0x5716134, size 0x300, virtual false, abstract: false, final false
static inline void RemoveUI(::UnityEngine::Transform*  focus) ;

/// @brief Method SetTextPositionAndRotation, addr 0x5716c84, size 0x238, virtual false, abstract: false, final false
inline void SetTextPositionAndRotation(::UnityEngine::Transform*  pov) ;

/// @brief Method ShouldUpdatePosition, addr 0x5716aa0, size 0xc4, virtual false, abstract: false, final false
inline bool ShouldUpdatePosition() ;

/// @brief Method ShouldUpdateRotation, addr 0x5716870, size 0x230, virtual false, abstract: false, final false
inline bool ShouldUpdateRotation() ;

/// @brief Method StartOverlay, addr 0x5715c0c, size 0x28c, virtual false, abstract: false, final false
static inline void StartOverlay() ;

/// @brief Method StopForcedOverlay, addr 0x5716518, size 0xe4, virtual false, abstract: false, final false
static inline void StopForcedOverlay(::GlobalNamespace::PrivateUIRoom_OverlaySource  source) ;

/// @brief Method StopOverlay, addr 0x5715544, size 0x178, virtual false, abstract: false, final false
static inline void StopOverlay() ;

/// @brief Method Tick, addr 0x57165fc, size 0x274, virtual true, abstract: false, final false
inline void Tick() ;

/// @brief Method ToggleLevelVisibility, addr 0x571543c, size 0x108, virtual false, abstract: false, final false
inline void ToggleLevelVisibility(bool  levelShouldBeVisible) ;

/// @brief Method UpdateUIPosition, addr 0x5716b64, size 0x120, virtual false, abstract: false, final false
inline void UpdateUIPosition() ;

/// @brief Method UpdateUIPositionAndRotation, addr 0x5715e98, size 0x29c, virtual false, abstract: false, final false
inline void UpdateUIPositionAndRotation() ;

constexpr float_t const& __cordl_internal_get__initialAudioVolume() const;

constexpr float_t& __cordl_internal_get__initialAudioVolume() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get__text() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get__text() ;

constexpr float_t const& __cordl_internal_get__textDistance() const;

constexpr float_t& __cordl_internal_get__textDistance() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__uiRoot() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__uiRoot() ;

constexpr int32_t const& __cordl_internal_get_backgroundDirectionPropertyID() const;

constexpr int32_t& __cordl_internal_get_backgroundDirectionPropertyID() ;

constexpr ::StringW const& __cordl_internal_get_backgroundDirectionPropertyName() const;

constexpr ::StringW& __cordl_internal_get_backgroundDirectionPropertyName() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get_backgroundRenderer() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get_backgroundRenderer() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_focusTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_focusTransform() ;

constexpr bool const& __cordl_internal_get_inOverlay() const;

constexpr bool& __cordl_internal_get_inOverlay() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_lastStablePosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_lastStablePosition() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_lastStableRotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_lastStableRotation() ;

constexpr float_t const& __cordl_internal_get_lateralPlay() const;

constexpr float_t& __cordl_internal_get_lateralPlay() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_leftHandObject() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_leftHandObject() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_occluder() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_occluder() ;

constexpr ::GlobalNamespace::PrivateUIRoom_OverlaySource const& __cordl_internal_get_overlayForcedSources() const;

constexpr ::GlobalNamespace::PrivateUIRoom_OverlaySource& __cordl_internal_get_overlayForcedSources() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_rightHandObject() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_rightHandObject() ;

constexpr float_t const& __cordl_internal_get_rotationalPlay() const;

constexpr float_t& __cordl_internal_get_rotationalPlay() ;

constexpr int32_t const& __cordl_internal_get_savedCullingLayers() const;

constexpr int32_t& __cordl_internal_get_savedCullingLayers() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* const& __cordl_internal_get_ui() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*& __cordl_internal_get_ui() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Transform>,::UnityW<::UnityEngine::Transform>>* const& __cordl_internal_get_uiParents() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Transform>,::UnityW<::UnityEngine::Transform>>*& __cordl_internal_get_uiParents() ;

constexpr float_t const& __cordl_internal_get_verticalPlay() const;

constexpr float_t& __cordl_internal_get_verticalPlay() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_visibleLayers() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_visibleLayers() ;

constexpr void __cordl_internal_set__initialAudioVolume(float_t  value) ;

constexpr void __cordl_internal_set__text(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set__textDistance(float_t  value) ;

constexpr void __cordl_internal_set__uiRoot(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_backgroundDirectionPropertyID(int32_t  value) ;

constexpr void __cordl_internal_set_backgroundDirectionPropertyName(::StringW  value) ;

constexpr void __cordl_internal_set_backgroundRenderer(::UnityW<::UnityEngine::MeshRenderer>  value) ;

constexpr void __cordl_internal_set_focusTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_inOverlay(bool  value) ;

constexpr void __cordl_internal_set_lastStablePosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_lastStableRotation(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_lateralPlay(float_t  value) ;

constexpr void __cordl_internal_set_leftHandObject(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_occluder(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_overlayForcedSources(::GlobalNamespace::PrivateUIRoom_OverlaySource  value) ;

constexpr void __cordl_internal_set_rightHandObject(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_rotationalPlay(float_t  value) ;

constexpr void __cordl_internal_set_savedCullingLayers(int32_t  value) ;

constexpr void __cordl_internal_set_ui(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  value) ;

constexpr void __cordl_internal_set_uiParents(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Transform>,::UnityW<::UnityEngine::Transform>>*  value) ;

constexpr void __cordl_internal_set_verticalPlay(float_t  value) ;

constexpr void __cordl_internal_set_visibleLayers(::UnityEngine::LayerMask  value) ;

/// @brief Method .ctor, addr 0x5716f64, size 0x74, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::GlobalNamespace::PrivateUIRoom> getStaticF_instance() ;

/// @brief Method get_localPlayer, addr 0x5715160, size 0x88, virtual false, abstract: false, final false
inline ::UnityW<::GorillaLocomotion::GTPlayer> get_localPlayer() ;

/// @brief Method get_overlayForcedActive, addr 0x5715150, size 0x10, virtual false, abstract: false, final false
inline bool get_overlayForcedActive() ;

static inline void setStaticF_instance(::UnityW<::GlobalNamespace::PrivateUIRoom>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PrivateUIRoom() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PrivateUIRoom", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PrivateUIRoom(PrivateUIRoom && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PrivateUIRoom", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PrivateUIRoom(PrivateUIRoom const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1191};

/// [SerializeField]
/// @brief Field _text, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ____text;

/// [SerializeField]
/// @brief Field _textDistance, offset: 0x30, size: 0x4, def value: None
 float_t  ____textDistance;

/// [SerializeField]
/// @brief Field occluder, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___occluder;

/// [SerializeField]
/// @brief Field visibleLayers, offset: 0x40, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___visibleLayers;

/// [SerializeField]
/// @brief Field leftHandObject, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___leftHandObject;

/// [SerializeField]
/// @brief Field rightHandObject, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___rightHandObject;

/// [SerializeField]
/// @brief Field backgroundRenderer, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ___backgroundRenderer;

/// [SerializeField]
/// @brief Field backgroundDirectionPropertyName, offset: 0x60, size: 0x8, def value: None
 ::StringW  ___backgroundDirectionPropertyName;

/// @brief Field backgroundDirectionPropertyID, offset: 0x68, size: 0x4, def value: None
 int32_t  ___backgroundDirectionPropertyID;

/// @brief Field savedCullingLayers, offset: 0x6c, size: 0x4, def value: None
 int32_t  ___savedCullingLayers;

/// @brief Field _uiRoot, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____uiRoot;

/// @brief Field focusTransform, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___focusTransform;

/// @brief Field ui, offset: 0x80, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  ___ui;

/// @brief Field uiParents, offset: 0x88, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Transform>,::UnityW<::UnityEngine::Transform>>*  ___uiParents;

/// @brief Field _initialAudioVolume, offset: 0x90, size: 0x4, def value: None
 float_t  ____initialAudioVolume;

/// @brief Field inOverlay, offset: 0x94, size: 0x1, def value: None
 bool  ___inOverlay;

/// @brief Field overlayForcedSources, offset: 0x98, size: 0x4, def value: None
 ::GlobalNamespace::PrivateUIRoom_OverlaySource  ___overlayForcedSources;

/// @brief Field lastStablePosition, offset: 0x9c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___lastStablePosition;

/// @brief Field lastStableRotation, offset: 0xa8, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___lastStableRotation;

/// [SerializeField]
/// @brief Field verticalPlay, offset: 0xb8, size: 0x4, def value: None
 float_t  ___verticalPlay;

/// [SerializeField]
/// @brief Field lateralPlay, offset: 0xbc, size: 0x4, def value: None
 float_t  ___lateralPlay;

/// [SerializeField]
/// @brief Field rotationalPlay, offset: 0xc0, size: 0x4, def value: None
 float_t  ___rotationalPlay;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PrivateUIRoom, ____text) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PrivateUIRoom, ____textDistance) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PrivateUIRoom, ___occluder) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PrivateUIRoom, ___visibleLayers) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PrivateUIRoom, ___leftHandObject) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PrivateUIRoom, ___rightHandObject) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PrivateUIRoom, ___backgroundRenderer) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PrivateUIRoom, ___backgroundDirectionPropertyName) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PrivateUIRoom, ___backgroundDirectionPropertyID) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PrivateUIRoom, ___savedCullingLayers) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PrivateUIRoom, ____uiRoot) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PrivateUIRoom, ___focusTransform) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PrivateUIRoom, ___ui) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PrivateUIRoom, ___uiParents) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PrivateUIRoom, ____initialAudioVolume) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PrivateUIRoom, ___inOverlay) == 0x94, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PrivateUIRoom, ___overlayForcedSources) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PrivateUIRoom, ___lastStablePosition) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PrivateUIRoom, ___lastStableRotation) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PrivateUIRoom, ___verticalPlay) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PrivateUIRoom, ___lateralPlay) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PrivateUIRoom, ___rotationalPlay) == 0xc0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PrivateUIRoom) == 0xc8, "Size mismatch!");

} // namespace end def GlobalNamespace
