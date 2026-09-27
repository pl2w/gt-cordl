#pragma once
// IWYU pragma private; include "Liv/Lck/GorillaTag/GtTopButton.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Liv/Lck/GorillaTag/zzzz__GtTopButton_TopButtonState_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(GtTopButton)
namespace GlobalNamespace {
struct GtTopButton_TopButtonState;
}
namespace Liv::Lck::GorillaTag {
class GtUiSettings;
}
namespace Liv::Lck {
class LckDiscreetAudioController;
}
namespace UnityEngine::Events {
class UnityEvent;
}
namespace UnityEngine {
class MeshRenderer;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Liv::Lck::GorillaTag {
class GtTopButton;
}
// Write type traits
MARK_REF_T(::Liv::Lck::GorillaTag::GtTopButton*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::GorillaTag::GtTopButton*, "Liv.Lck.GorillaTag", "GtTopButton");
// Dependencies Liv.Lck.GorillaTag.GtTopButton::TopButtonState, UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace Liv::Lck::GorillaTag {
// Is value type: false
// CS Name: Liv.Lck.GorillaTag.GtTopButton
class CORDL_TYPE GtTopButton : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using TopButtonState = ::GlobalNamespace::GtTopButton_TopButtonState;

/// @brief Field OnTap, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnTap, put=__cordl_internal_set_OnTap)) ::UnityEngine::Events::UnityEvent*  OnTap;

/// @brief Field _audioController, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__audioController, put=__cordl_internal_set__audioController)) ::UnityW<::Liv::Lck::LckDiscreetAudioController>  _audioController;

/// @brief Field _bodyRenderer, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__bodyRenderer, put=__cordl_internal_set__bodyRenderer)) ::UnityW<::UnityEngine::MeshRenderer>  _bodyRenderer;

/// @brief Field _currentState, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentState, put=__cordl_internal_set__currentState)) ::GlobalNamespace::GtTopButton_TopButtonState  _currentState;

/// @brief Field _defaultLocalPosition, offset 0x50, size 0xc 
 __declspec(property(get=__cordl_internal_get__defaultLocalPosition, put=__cordl_internal_set__defaultLocalPosition)) ::UnityEngine::Vector3  _defaultLocalPosition;

/// @brief Field _disabledOrPressedLocalPosition, offset 0x5c, size 0xc 
 __declspec(property(get=__cordl_internal_get__disabledOrPressedLocalPosition, put=__cordl_internal_set__disabledOrPressedLocalPosition)) ::UnityEngine::Vector3  _disabledOrPressedLocalPosition;

/// @brief Field _previousState, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__previousState, put=__cordl_internal_set__previousState)) ::GlobalNamespace::GtTopButton_TopButtonState  _previousState;

/// @brief Field _settings, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__settings, put=__cordl_internal_set__settings)) ::UnityW<::Liv::Lck::GorillaTag::GtUiSettings>  _settings;

/// @brief Field _visualsTrans, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__visualsTrans, put=__cordl_internal_set__visualsTrans)) ::UnityW<::UnityEngine::Transform>  _visualsTrans;

/// @brief Method EvaluateState, addr 0x9d2fb58, size 0x58, virtual false, abstract: false, final false
inline void EvaluateState(::GlobalNamespace::GtTopButton_TopButtonState  state) ;

static inline ::Liv::Lck::GorillaTag::GtTopButton* New_ctor() ;

/// @brief Method OnValidate, addr 0x9d2fd04, size 0x68, virtual false, abstract: false, final false
inline void OnValidate() ;

/// @brief Method RestoreButtonState, addr 0x9d2fcb0, size 0x54, virtual false, abstract: false, final false
inline void RestoreButtonState() ;

/// @brief Method SetDefaultState, addr 0x9d2fc00, size 0x34, virtual false, abstract: false, final false
inline void SetDefaultState() ;

/// @brief Method SetDisabledState, addr 0x9d2fc6c, size 0x44, virtual false, abstract: false, final false
inline void SetDisabledState() ;

/// @brief Method SetSelectedState, addr 0x9d2fc34, size 0x38, virtual false, abstract: false, final false
inline void SetSelectedState() ;

/// @brief Method TapEnded, addr 0x9d2fbb0, size 0x50, virtual false, abstract: false, final false
inline void TapEnded() ;

/// @brief Method TapStarted, addr 0x9d2faf0, size 0x68, virtual false, abstract: false, final false
inline void TapStarted() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_OnTap() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_OnTap() ;

constexpr ::UnityW<::Liv::Lck::LckDiscreetAudioController> const& __cordl_internal_get__audioController() const;

constexpr ::UnityW<::Liv::Lck::LckDiscreetAudioController>& __cordl_internal_get__audioController() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get__bodyRenderer() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get__bodyRenderer() ;

constexpr ::GlobalNamespace::GtTopButton_TopButtonState const& __cordl_internal_get__currentState() const;

constexpr ::GlobalNamespace::GtTopButton_TopButtonState& __cordl_internal_get__currentState() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__defaultLocalPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__defaultLocalPosition() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__disabledOrPressedLocalPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__disabledOrPressedLocalPosition() ;

constexpr ::GlobalNamespace::GtTopButton_TopButtonState const& __cordl_internal_get__previousState() const;

constexpr ::GlobalNamespace::GtTopButton_TopButtonState& __cordl_internal_get__previousState() ;

constexpr ::UnityW<::Liv::Lck::GorillaTag::GtUiSettings> const& __cordl_internal_get__settings() const;

constexpr ::UnityW<::Liv::Lck::GorillaTag::GtUiSettings>& __cordl_internal_get__settings() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__visualsTrans() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__visualsTrans() ;

constexpr void __cordl_internal_set_OnTap(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set__audioController(::UnityW<::Liv::Lck::LckDiscreetAudioController>  value) ;

constexpr void __cordl_internal_set__bodyRenderer(::UnityW<::UnityEngine::MeshRenderer>  value) ;

constexpr void __cordl_internal_set__currentState(::GlobalNamespace::GtTopButton_TopButtonState  value) ;

constexpr void __cordl_internal_set__defaultLocalPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__disabledOrPressedLocalPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__previousState(::GlobalNamespace::GtTopButton_TopButtonState  value) ;

constexpr void __cordl_internal_set__settings(::UnityW<::Liv::Lck::GorillaTag::GtUiSettings>  value) ;

constexpr void __cordl_internal_set__visualsTrans(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x9d2fd6c, size 0x70, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GtTopButton() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GtTopButton", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GtTopButton(GtTopButton && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GtTopButton", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GtTopButton(GtTopButton const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29667};

/// [Header("Global Settings")]
/// [SerializeField]
/// @brief Field _settings, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::GorillaTag::GtUiSettings>  ____settings;

/// [Space(10)]
/// [Header("Parameters")]
/// [SerializeField]
/// @brief Field _currentState, offset: 0x28, size: 0x4, def value: None
 ::GlobalNamespace::GtTopButton_TopButtonState  ____currentState;

/// [SerializeField]
/// @brief Field _previousState, offset: 0x2c, size: 0x4, def value: None
 ::GlobalNamespace::GtTopButton_TopButtonState  ____previousState;

/// [Header("Elements")]
/// [SerializeField]
/// @brief Field _bodyRenderer, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ____bodyRenderer;

/// [SerializeField]
/// @brief Field _visualsTrans, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____visualsTrans;

/// [SerializeField]
/// @brief Field _audioController, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::LckDiscreetAudioController>  ____audioController;

/// [Space(10)]
/// [Header("Events")]
/// @brief Field OnTap, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___OnTap;

/// @brief Field _defaultLocalPosition, offset: 0x50, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____defaultLocalPosition;

/// @brief Field _disabledOrPressedLocalPosition, offset: 0x5c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____disabledOrPressedLocalPosition;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::GorillaTag::GtTopButton, ____settings) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtTopButton, ____currentState) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtTopButton, ____previousState) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtTopButton, ____bodyRenderer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtTopButton, ____visualsTrans) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtTopButton, ____audioController) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtTopButton, ___OnTap) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtTopButton, ____defaultLocalPosition) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtTopButton, ____disabledOrPressedLocalPosition) == 0x5c, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::GorillaTag::GtTopButton) == 0x68, "Size mismatch!");

} // namespace end def Liv::Lck::GorillaTag
