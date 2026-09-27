#pragma once
// IWYU pragma private; include "Liv/Lck/GorillaTag/GtAudioButton.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(GtAudioButton)
namespace Liv::Lck::GorillaTag {
class GtUiSettings;
}
namespace Liv::Lck {
class LckDiscreetAudioController;
}
namespace UnityEngine::Events {
template<typename T0>
class UnityAction_1;
}
namespace UnityEngine::Events {
template<typename T0>
class UnityEvent_1;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class MeshRenderer;
}
namespace UnityEngine {
class SpriteRenderer;
}
namespace UnityEngine {
class Sprite;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Liv::Lck::GorillaTag {
class GtAudioButton;
}
// Write type traits
MARK_REF_T(::Liv::Lck::GorillaTag::GtAudioButton*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::GorillaTag::GtAudioButton*, "Liv.Lck.GorillaTag", "GtAudioButton");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace Liv::Lck::GorillaTag {
// Is value type: false
// CS Name: Liv.Lck.GorillaTag.GtAudioButton
class CORDL_TYPE GtAudioButton : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field IS_ON, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_IS_ON, put=__cordl_internal_set_IS_ON)) ::StringW  IS_ON;

/// @brief Field PROGRESS, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_PROGRESS, put=__cordl_internal_set_PROGRESS)) ::StringW  PROGRESS;

/// @brief Field _audioController, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__audioController, put=__cordl_internal_set__audioController)) ::UnityW<::Liv::Lck::LckDiscreetAudioController>  _audioController;

/// @brief Field _bodyRenderer, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__bodyRenderer, put=__cordl_internal_set__bodyRenderer)) ::UnityW<::UnityEngine::MeshRenderer>  _bodyRenderer;

/// @brief Field _defaultLocalPosition, offset 0x80, size 0xc 
 __declspec(property(get=__cordl_internal_get__defaultLocalPosition, put=__cordl_internal_set__defaultLocalPosition)) ::UnityEngine::Vector3  _defaultLocalPosition;

/// @brief Field _iconRenderer, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__iconRenderer, put=__cordl_internal_set__iconRenderer)) ::UnityW<::UnityEngine::SpriteRenderer>  _iconRenderer;

/// @brief Field _isActive, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get__isActive, put=__cordl_internal_set__isActive)) bool  _isActive;

/// @brief Field _offIcon, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__offIcon, put=__cordl_internal_set__offIcon)) ::UnityW<::UnityEngine::Sprite>  _offIcon;

/// @brief Field _onIcon, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__onIcon, put=__cordl_internal_set__onIcon)) ::UnityW<::UnityEngine::Sprite>  _onIcon;

/// @brief Field _progress, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__progress, put=__cordl_internal_set__progress)) float_t  _progress;

/// @brief Field _propertyBlock, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__propertyBlock, put=__cordl_internal_set__propertyBlock)) ::UnityEngine::MaterialPropertyBlock*  _propertyBlock;

/// @brief Field _settings, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__settings, put=__cordl_internal_set__settings)) ::UnityW<::Liv::Lck::GorillaTag::GtUiSettings>  _settings;

/// @brief Field _visualsTrans, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__visualsTrans, put=__cordl_internal_set__visualsTrans)) ::UnityW<::UnityEngine::Transform>  _visualsTrans;

/// @brief Field onTap, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_onTap, put=__cordl_internal_set_onTap)) ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Events::UnityAction_1<bool>*>*  onTap;

static inline ::Liv::Lck::GorillaTag::GtAudioButton* New_ctor() ;

/// @brief Method OnValidate, addr 0x9d20eb0, size 0x1c, virtual false, abstract: false, final false
inline void OnValidate() ;

/// @brief Method ProcessState, addr 0x9d2114c, size 0xe0, virtual false, abstract: false, final false
inline void ProcessState(bool  isOn) ;

/// @brief Method SetActiveState, addr 0x9d21110, size 0x3c, virtual false, abstract: false, final false
inline void SetActiveState(bool  isActive) ;

/// @brief Method SetProgress, addr 0x9d20f38, size 0x38, virtual false, abstract: false, final false
inline void SetProgress(float_t  progress) ;

/// @brief Method SetUp, addr 0x9d20ecc, size 0x6c, virtual false, abstract: false, final false
inline void SetUp() ;

/// @brief Method Start, addr 0x9d20f70, size 0x30, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method TapEnded, addr 0x9d210d4, size 0x3c, virtual false, abstract: false, final false
inline void TapEnded() ;

/// @brief Method TapStarted, addr 0x9d20fa0, size 0x134, virtual false, abstract: false, final false
inline void TapStarted() ;

constexpr ::StringW const& __cordl_internal_get_IS_ON() const;

constexpr ::StringW& __cordl_internal_get_IS_ON() ;

constexpr ::StringW const& __cordl_internal_get_PROGRESS() const;

constexpr ::StringW& __cordl_internal_get_PROGRESS() ;

constexpr ::UnityW<::Liv::Lck::LckDiscreetAudioController> const& __cordl_internal_get__audioController() const;

constexpr ::UnityW<::Liv::Lck::LckDiscreetAudioController>& __cordl_internal_get__audioController() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get__bodyRenderer() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get__bodyRenderer() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__defaultLocalPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__defaultLocalPosition() ;

constexpr ::UnityW<::UnityEngine::SpriteRenderer> const& __cordl_internal_get__iconRenderer() const;

constexpr ::UnityW<::UnityEngine::SpriteRenderer>& __cordl_internal_get__iconRenderer() ;

constexpr bool const& __cordl_internal_get__isActive() const;

constexpr bool& __cordl_internal_get__isActive() ;

constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get__offIcon() const;

constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get__offIcon() ;

constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get__onIcon() const;

constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get__onIcon() ;

constexpr float_t const& __cordl_internal_get__progress() const;

constexpr float_t& __cordl_internal_get__progress() ;

constexpr ::UnityEngine::MaterialPropertyBlock* const& __cordl_internal_get__propertyBlock() const;

constexpr ::UnityEngine::MaterialPropertyBlock*& __cordl_internal_get__propertyBlock() ;

constexpr ::UnityW<::Liv::Lck::GorillaTag::GtUiSettings> const& __cordl_internal_get__settings() const;

constexpr ::UnityW<::Liv::Lck::GorillaTag::GtUiSettings>& __cordl_internal_get__settings() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__visualsTrans() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__visualsTrans() ;

constexpr ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Events::UnityAction_1<bool>*>* const& __cordl_internal_get_onTap() const;

constexpr ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Events::UnityAction_1<bool>*>*& __cordl_internal_get_onTap() ;

constexpr void __cordl_internal_set_IS_ON(::StringW  value) ;

constexpr void __cordl_internal_set_PROGRESS(::StringW  value) ;

constexpr void __cordl_internal_set__audioController(::UnityW<::Liv::Lck::LckDiscreetAudioController>  value) ;

constexpr void __cordl_internal_set__bodyRenderer(::UnityW<::UnityEngine::MeshRenderer>  value) ;

constexpr void __cordl_internal_set__defaultLocalPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__iconRenderer(::UnityW<::UnityEngine::SpriteRenderer>  value) ;

constexpr void __cordl_internal_set__isActive(bool  value) ;

constexpr void __cordl_internal_set__offIcon(::UnityW<::UnityEngine::Sprite>  value) ;

constexpr void __cordl_internal_set__onIcon(::UnityW<::UnityEngine::Sprite>  value) ;

constexpr void __cordl_internal_set__progress(float_t  value) ;

constexpr void __cordl_internal_set__propertyBlock(::UnityEngine::MaterialPropertyBlock*  value) ;

constexpr void __cordl_internal_set__settings(::UnityW<::Liv::Lck::GorillaTag::GtUiSettings>  value) ;

constexpr void __cordl_internal_set__visualsTrans(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_onTap(::UnityEngine::Events::UnityEvent_1<::UnityEngine::Events::UnityAction_1<bool>*>*  value) ;

/// @brief Method .ctor, addr 0x9d2122c, size 0x8c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GtAudioButton() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GtAudioButton", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GtAudioButton(GtAudioButton && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GtAudioButton", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GtAudioButton(GtAudioButton const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29618};

/// @brief Field onTap, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Events::UnityAction_1<bool>*>*  ___onTap;

/// [SerializeField]
/// @brief Field _settings, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::GorillaTag::GtUiSettings>  ____settings;

/// [Space(10)]
/// [Header("Parameters")]
/// [SerializeField]
/// [Range(0, 1)]
/// @brief Field _progress, offset: 0x30, size: 0x4, def value: None
 float_t  ____progress;

/// [Space(10)]
/// [Header("Elements")]
/// [SerializeField]
/// @brief Field _iconRenderer, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::SpriteRenderer>  ____iconRenderer;

/// [SerializeField]
/// @brief Field _onIcon, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Sprite>  ____onIcon;

/// [SerializeField]
/// @brief Field _offIcon, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Sprite>  ____offIcon;

/// [SerializeField]
/// @brief Field _bodyRenderer, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ____bodyRenderer;

/// [SerializeField]
/// @brief Field _visualsTrans, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____visualsTrans;

/// [SerializeField]
/// @brief Field _audioController, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::LckDiscreetAudioController>  ____audioController;

/// [SerializeField]
/// @brief Field _isActive, offset: 0x68, size: 0x1, def value: None
 bool  ____isActive;

/// @brief Field PROGRESS, offset: 0x70, size: 0x8, def value: None
 ::StringW  ___PROGRESS;

/// @brief Field IS_ON, offset: 0x78, size: 0x8, def value: None
 ::StringW  ___IS_ON;

/// @brief Field _defaultLocalPosition, offset: 0x80, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____defaultLocalPosition;

/// @brief Field _propertyBlock, offset: 0x90, size: 0x8, def value: None
 ::UnityEngine::MaterialPropertyBlock*  ____propertyBlock;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::GorillaTag::GtAudioButton, ___onTap) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtAudioButton, ____settings) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtAudioButton, ____progress) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtAudioButton, ____iconRenderer) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtAudioButton, ____onIcon) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtAudioButton, ____offIcon) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtAudioButton, ____bodyRenderer) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtAudioButton, ____visualsTrans) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtAudioButton, ____audioController) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtAudioButton, ____isActive) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtAudioButton, ___PROGRESS) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtAudioButton, ___IS_ON) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtAudioButton, ____defaultLocalPosition) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtAudioButton, ____propertyBlock) == 0x90, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::GorillaTag::GtAudioButton) == 0x98, "Size mismatch!");

} // namespace end def Liv::Lck::GorillaTag
