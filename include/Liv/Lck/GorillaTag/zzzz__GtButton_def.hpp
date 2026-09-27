#pragma once
// IWYU pragma private; include "Liv/Lck/GorillaTag/GtButton.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Liv/Lck/GorillaTag/zzzz__ButtonInitializeType_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GtButton)
namespace Liv::Lck::GorillaTag {
class GtUiSettings;
}
namespace Liv::Lck {
class LckDiscreetAudioController;
}
namespace TMPro {
class TextMeshPro;
}
namespace UnityEngine::Events {
class UnityEvent;
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
class GtButton;
}
// Write type traits
MARK_REF_T(::Liv::Lck::GorillaTag::GtButton*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::GorillaTag::GtButton*, "Liv.Lck.GorillaTag", "GtButton");
// Dependencies Liv.Lck.GorillaTag.ButtonInitializeType, UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace Liv::Lck::GorillaTag {
// Is value type: false
// CS Name: Liv.Lck.GorillaTag.GtButton
class CORDL_TYPE GtButton : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _audioController, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__audioController, put=__cordl_internal_set__audioController)) ::UnityW<::Liv::Lck::LckDiscreetAudioController>  _audioController;

/// @brief Field _bodyRenderer, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__bodyRenderer, put=__cordl_internal_set__bodyRenderer)) ::UnityW<::UnityEngine::MeshRenderer>  _bodyRenderer;

/// @brief Field _defaultLocalPosition, offset 0x68, size 0xc 
 __declspec(property(get=__cordl_internal_get__defaultLocalPosition, put=__cordl_internal_set__defaultLocalPosition)) ::UnityEngine::Vector3  _defaultLocalPosition;

/// @brief Field _doFlipping, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get__doFlipping, put=__cordl_internal_set__doFlipping)) bool  _doFlipping;

/// @brief Field _iconImage, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__iconImage, put=__cordl_internal_set__iconImage)) ::UnityW<::UnityEngine::SpriteRenderer>  _iconImage;

/// @brief Field _initializeType, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__initializeType, put=__cordl_internal_set__initializeType)) ::Liv::Lck::GorillaTag::ButtonInitializeType  _initializeType;

/// @brief Field _isDisabled, offset 0x75, size 0x1 
 __declspec(property(get=__cordl_internal_get__isDisabled, put=__cordl_internal_set__isDisabled)) bool  _isDisabled;

/// @brief Field _isFlipped, offset 0x74, size 0x1 
 __declspec(property(get=__cordl_internal_get__isFlipped, put=__cordl_internal_set__isFlipped)) bool  _isFlipped;

/// @brief Field _label, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__label, put=__cordl_internal_set__label)) ::UnityW<::TMPro::TextMeshPro>  _label;

/// @brief Field _name, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__name, put=__cordl_internal_set__name)) ::StringW  _name;

/// @brief Field _settings, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__settings, put=__cordl_internal_set__settings)) ::UnityW<::Liv::Lck::GorillaTag::GtUiSettings>  _settings;

/// @brief Field _visualsTrans, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__visualsTrans, put=__cordl_internal_set__visualsTrans)) ::UnityW<::UnityEngine::Transform>  _visualsTrans;

/// @brief Field onTap, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_onTap, put=__cordl_internal_set_onTap)) ::UnityEngine::Events::UnityEvent*  onTap;

/// @brief Method Awake, addr 0x9d212f8, size 0x14, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method FlipVisuals, addr 0x9d21660, size 0x4c, virtual false, abstract: false, final false
inline void FlipVisuals() ;

/// @brief Method InitSetUp, addr 0x9d2130c, size 0xf4, virtual false, abstract: false, final false
inline void InitSetUp() ;

static inline ::Liv::Lck::GorillaTag::GtButton* New_ctor() ;

/// @brief Method SetDisabled, addr 0x9d21410, size 0x15c, virtual false, abstract: false, final false
inline void SetDisabled(bool  isDisabled) ;

/// @brief Method SetLabelText, addr 0x9d21758, size 0x20, virtual false, abstract: false, final false
inline void SetLabelText(::StringW  text) ;

/// @brief Method Start, addr 0x9d21400, size 0x10, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method TapEnded, addr 0x9d216ac, size 0x68, virtual false, abstract: false, final false
inline void TapEnded() ;

/// @brief Method TapEndedNoAudio, addr 0x9d21714, size 0x44, virtual false, abstract: false, final false
inline void TapEndedNoAudio() ;

/// @brief Method TapStarted, addr 0x9d2156c, size 0xf4, virtual false, abstract: false, final false
inline void TapStarted() ;

constexpr ::UnityW<::Liv::Lck::LckDiscreetAudioController> const& __cordl_internal_get__audioController() const;

constexpr ::UnityW<::Liv::Lck::LckDiscreetAudioController>& __cordl_internal_get__audioController() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get__bodyRenderer() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get__bodyRenderer() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__defaultLocalPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__defaultLocalPosition() ;

constexpr bool const& __cordl_internal_get__doFlipping() const;

constexpr bool& __cordl_internal_get__doFlipping() ;

constexpr ::UnityW<::UnityEngine::SpriteRenderer> const& __cordl_internal_get__iconImage() const;

constexpr ::UnityW<::UnityEngine::SpriteRenderer>& __cordl_internal_get__iconImage() ;

constexpr ::Liv::Lck::GorillaTag::ButtonInitializeType const& __cordl_internal_get__initializeType() const;

constexpr ::Liv::Lck::GorillaTag::ButtonInitializeType& __cordl_internal_get__initializeType() ;

constexpr bool const& __cordl_internal_get__isDisabled() const;

constexpr bool& __cordl_internal_get__isDisabled() ;

constexpr bool const& __cordl_internal_get__isFlipped() const;

constexpr bool& __cordl_internal_get__isFlipped() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get__label() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get__label() ;

constexpr ::StringW const& __cordl_internal_get__name() const;

constexpr ::StringW& __cordl_internal_get__name() ;

constexpr ::UnityW<::Liv::Lck::GorillaTag::GtUiSettings> const& __cordl_internal_get__settings() const;

constexpr ::UnityW<::Liv::Lck::GorillaTag::GtUiSettings>& __cordl_internal_get__settings() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__visualsTrans() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__visualsTrans() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_onTap() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_onTap() ;

constexpr void __cordl_internal_set__audioController(::UnityW<::Liv::Lck::LckDiscreetAudioController>  value) ;

constexpr void __cordl_internal_set__bodyRenderer(::UnityW<::UnityEngine::MeshRenderer>  value) ;

constexpr void __cordl_internal_set__defaultLocalPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__doFlipping(bool  value) ;

constexpr void __cordl_internal_set__iconImage(::UnityW<::UnityEngine::SpriteRenderer>  value) ;

constexpr void __cordl_internal_set__initializeType(::Liv::Lck::GorillaTag::ButtonInitializeType  value) ;

constexpr void __cordl_internal_set__isDisabled(bool  value) ;

constexpr void __cordl_internal_set__isFlipped(bool  value) ;

constexpr void __cordl_internal_set__label(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set__name(::StringW  value) ;

constexpr void __cordl_internal_set__settings(::UnityW<::Liv::Lck::GorillaTag::GtUiSettings>  value) ;

constexpr void __cordl_internal_set__visualsTrans(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_onTap(::UnityEngine::Events::UnityEvent*  value) ;

/// @brief Method .ctor, addr 0x9d21778, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GtButton() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GtButton", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GtButton(GtButton && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GtButton", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GtButton(GtButton const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29621};

/// [SerializeField]
/// @brief Field _settings, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::GorillaTag::GtUiSettings>  ____settings;

/// [Space(10)]
/// [Header("Settings")]
/// [SerializeField]
/// @brief Field _name, offset: 0x28, size: 0x8, def value: None
 ::StringW  ____name;

/// [SerializeField]
/// @brief Field _doFlipping, offset: 0x30, size: 0x1, def value: None
 bool  ____doFlipping;

/// [SerializeField]
/// @brief Field _initializeType, offset: 0x34, size: 0x4, def value: None
 ::Liv::Lck::GorillaTag::ButtonInitializeType  ____initializeType;

/// [Space(10)]
/// [Header("UI Elements")]
/// [SerializeField]
/// @brief Field _label, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ____label;

/// [SerializeField]
/// @brief Field _bodyRenderer, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ____bodyRenderer;

/// [SerializeField]
/// @brief Field _visualsTrans, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____visualsTrans;

/// [SerializeField]
/// @brief Field _iconImage, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::SpriteRenderer>  ____iconImage;

/// [Space(10)]
/// [Header("Sounds")]
/// [SerializeField]
/// @brief Field _audioController, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::LckDiscreetAudioController>  ____audioController;

/// [Space(10)]
/// [Header("Events")]
/// @brief Field onTap, offset: 0x60, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___onTap;

/// @brief Field _defaultLocalPosition, offset: 0x68, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____defaultLocalPosition;

/// @brief Field _isFlipped, offset: 0x74, size: 0x1, def value: None
 bool  ____isFlipped;

/// @brief Field _isDisabled, offset: 0x75, size: 0x1, def value: None
 bool  ____isDisabled;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::GorillaTag::GtButton, ____settings) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtButton, ____name) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtButton, ____doFlipping) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtButton, ____initializeType) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtButton, ____label) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtButton, ____bodyRenderer) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtButton, ____visualsTrans) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtButton, ____iconImage) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtButton, ____audioController) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtButton, ___onTap) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtButton, ____defaultLocalPosition) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtButton, ____isFlipped) == 0x74, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtButton, ____isDisabled) == 0x75, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::GorillaTag::GtButton) == 0x78, "Size mismatch!");

} // namespace end def Liv::Lck::GorillaTag
