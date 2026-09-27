#pragma once
// IWYU pragma private; include "Liv/Lck/GorillaTag/GtSelector.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Liv/Lck/GorillaTag/zzzz__CameraMode_def.hpp"
#include "Liv/Lck/GorillaTag/zzzz__SelectorState_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(GtSelector)
namespace Liv::Lck::GorillaTag {
struct CameraMode;
}
namespace Liv::Lck::GorillaTag {
class GtUiSettings;
}
namespace Liv::Lck::GorillaTag {
struct SelectorState;
}
namespace Liv::Lck {
class LckDiscreetAudioController;
}
namespace TMPro {
class TextMeshPro;
}
namespace UnityEngine::Events {
template<typename T0>
class UnityEvent_1;
}
namespace UnityEngine {
class MeshRenderer;
}
namespace UnityEngine {
class SpriteRenderer;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Liv::Lck::GorillaTag {
class GtSelector;
}
// Write type traits
MARK_REF_T(::Liv::Lck::GorillaTag::GtSelector*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::GorillaTag::GtSelector*, "Liv.Lck.GorillaTag", "GtSelector");
// Dependencies Liv.Lck.GorillaTag.CameraMode, Liv.Lck.GorillaTag.SelectorState, UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace Liv::Lck::GorillaTag {
// Is value type: false
// CS Name: Liv.Lck.GorillaTag.GtSelector
class CORDL_TYPE GtSelector : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _audioController, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__audioController, put=__cordl_internal_set__audioController)) ::UnityW<::Liv::Lck::LckDiscreetAudioController>  _audioController;

/// @brief Field _bodyRenderer, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__bodyRenderer, put=__cordl_internal_set__bodyRenderer)) ::UnityW<::UnityEngine::MeshRenderer>  _bodyRenderer;

/// @brief Field _defaultLocalPosition, offset 0x60, size 0xc 
 __declspec(property(get=__cordl_internal_get__defaultLocalPosition, put=__cordl_internal_set__defaultLocalPosition)) ::UnityEngine::Vector3  _defaultLocalPosition;

/// @brief Field _iconRenderer, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__iconRenderer, put=__cordl_internal_set__iconRenderer)) ::UnityW<::UnityEngine::SpriteRenderer>  _iconRenderer;

/// @brief Field _mode, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__mode, put=__cordl_internal_set__mode)) ::Liv::Lck::GorillaTag::CameraMode  _mode;

/// @brief Field _settings, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__settings, put=__cordl_internal_set__settings)) ::UnityW<::Liv::Lck::GorillaTag::GtUiSettings>  _settings;

/// @brief Field _state, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__state, put=__cordl_internal_set__state)) ::Liv::Lck::GorillaTag::SelectorState  _state;

/// @brief Field _textMesh, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__textMesh, put=__cordl_internal_set__textMesh)) ::UnityW<::TMPro::TextMeshPro>  _textMesh;

/// @brief Field _visualsTrans, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__visualsTrans, put=__cordl_internal_set__visualsTrans)) ::UnityW<::UnityEngine::Transform>  _visualsTrans;

/// @brief Field onCameraModeUpdate, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_onCameraModeUpdate, put=__cordl_internal_set_onCameraModeUpdate)) ::UnityEngine::Events::UnityEvent_1<::Liv::Lck::GorillaTag::CameraMode>*  onCameraModeUpdate;

/// @brief Method Awake, addr 0x9d2bf48, size 0x4, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method EvaluateCameraMode, addr 0x9d2bda0, size 0x1a8, virtual false, abstract: false, final false
inline void EvaluateCameraMode(::Liv::Lck::GorillaTag::CameraMode  mode) ;

/// @brief Method EvaluateState, addr 0x9d2bf98, size 0x4c, virtual false, abstract: false, final false
inline void EvaluateState(::Liv::Lck::GorillaTag::SelectorState  state) ;

/// @brief Method InitSetUp, addr 0x9d2bf4c, size 0x2c, virtual false, abstract: false, final false
inline void InitSetUp() ;

/// @brief Method ListenToCameraModeChanged, addr 0x9d2c04c, size 0x1c, virtual false, abstract: false, final false
inline void ListenToCameraModeChanged(::Liv::Lck::GorillaTag::CameraMode  mode) ;

static inline ::Liv::Lck::GorillaTag::GtSelector* New_ctor() ;

/// @brief Method OnValidate, addr 0x9d2bd98, size 0x8, virtual false, abstract: false, final false
inline void OnValidate() ;

/// @brief Method SetDefaultState, addr 0x9d2c068, size 0x8c, virtual false, abstract: false, final false
inline void SetDefaultState() ;

/// @brief Method SetSelectedState, addr 0x9d2c0f4, size 0x9c, virtual false, abstract: false, final false
inline void SetSelectedState() ;

/// @brief Method Start, addr 0x9d2bf78, size 0x20, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method TapStarted, addr 0x9d2bfe4, size 0x68, virtual false, abstract: false, final false
inline void TapStarted() ;

constexpr ::UnityW<::Liv::Lck::LckDiscreetAudioController> const& __cordl_internal_get__audioController() const;

constexpr ::UnityW<::Liv::Lck::LckDiscreetAudioController>& __cordl_internal_get__audioController() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get__bodyRenderer() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get__bodyRenderer() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__defaultLocalPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__defaultLocalPosition() ;

constexpr ::UnityW<::UnityEngine::SpriteRenderer> const& __cordl_internal_get__iconRenderer() const;

constexpr ::UnityW<::UnityEngine::SpriteRenderer>& __cordl_internal_get__iconRenderer() ;

constexpr ::Liv::Lck::GorillaTag::CameraMode const& __cordl_internal_get__mode() const;

constexpr ::Liv::Lck::GorillaTag::CameraMode& __cordl_internal_get__mode() ;

constexpr ::UnityW<::Liv::Lck::GorillaTag::GtUiSettings> const& __cordl_internal_get__settings() const;

constexpr ::UnityW<::Liv::Lck::GorillaTag::GtUiSettings>& __cordl_internal_get__settings() ;

constexpr ::Liv::Lck::GorillaTag::SelectorState const& __cordl_internal_get__state() const;

constexpr ::Liv::Lck::GorillaTag::SelectorState& __cordl_internal_get__state() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get__textMesh() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get__textMesh() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__visualsTrans() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__visualsTrans() ;

constexpr ::UnityEngine::Events::UnityEvent_1<::Liv::Lck::GorillaTag::CameraMode>* const& __cordl_internal_get_onCameraModeUpdate() const;

constexpr ::UnityEngine::Events::UnityEvent_1<::Liv::Lck::GorillaTag::CameraMode>*& __cordl_internal_get_onCameraModeUpdate() ;

constexpr void __cordl_internal_set__audioController(::UnityW<::Liv::Lck::LckDiscreetAudioController>  value) ;

constexpr void __cordl_internal_set__bodyRenderer(::UnityW<::UnityEngine::MeshRenderer>  value) ;

constexpr void __cordl_internal_set__defaultLocalPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__iconRenderer(::UnityW<::UnityEngine::SpriteRenderer>  value) ;

constexpr void __cordl_internal_set__mode(::Liv::Lck::GorillaTag::CameraMode  value) ;

constexpr void __cordl_internal_set__settings(::UnityW<::Liv::Lck::GorillaTag::GtUiSettings>  value) ;

constexpr void __cordl_internal_set__state(::Liv::Lck::GorillaTag::SelectorState  value) ;

constexpr void __cordl_internal_set__textMesh(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set__visualsTrans(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_onCameraModeUpdate(::UnityEngine::Events::UnityEvent_1<::Liv::Lck::GorillaTag::CameraMode>*  value) ;

/// @brief Method .ctor, addr 0x9d2c190, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GtSelector() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GtSelector", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GtSelector(GtSelector && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GtSelector", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GtSelector(GtSelector const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29652};

/// [Header("Global Settings")]
/// [SerializeField]
/// @brief Field _settings, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::GorillaTag::GtUiSettings>  ____settings;

/// [Space(10)]
/// [Header("Parameters")]
/// [SerializeField]
/// @brief Field _mode, offset: 0x28, size: 0x4, def value: None
 ::Liv::Lck::GorillaTag::CameraMode  ____mode;

/// [SerializeField]
/// @brief Field _state, offset: 0x2c, size: 0x4, def value: None
 ::Liv::Lck::GorillaTag::SelectorState  ____state;

/// [Header("Elements")]
/// [SerializeField]
/// @brief Field _bodyRenderer, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ____bodyRenderer;

/// [SerializeField]
/// @brief Field _iconRenderer, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::SpriteRenderer>  ____iconRenderer;

/// [SerializeField]
/// @brief Field _textMesh, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ____textMesh;

/// [SerializeField]
/// @brief Field _visualsTrans, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____visualsTrans;

/// [SerializeField]
/// @brief Field _audioController, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::LckDiscreetAudioController>  ____audioController;

/// [HideInInspector]
/// @brief Field onCameraModeUpdate, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<::Liv::Lck::GorillaTag::CameraMode>*  ___onCameraModeUpdate;

/// @brief Field _defaultLocalPosition, offset: 0x60, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____defaultLocalPosition;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::GorillaTag::GtSelector, ____settings) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtSelector, ____mode) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtSelector, ____state) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtSelector, ____bodyRenderer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtSelector, ____iconRenderer) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtSelector, ____textMesh) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtSelector, ____visualsTrans) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtSelector, ____audioController) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtSelector, ___onCameraModeUpdate) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtSelector, ____defaultLocalPosition) == 0x60, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::GorillaTag::GtSelector) == 0x70, "Size mismatch!");

} // namespace end def Liv::Lck::GorillaTag
