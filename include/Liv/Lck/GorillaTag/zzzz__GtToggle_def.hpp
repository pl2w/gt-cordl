#pragma once
// IWYU pragma private; include "Liv/Lck/GorillaTag/GtToggle.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GtToggle)
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
template<typename T0>
class UnityEvent_1;
}
namespace UnityEngine {
class SpriteRenderer;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Liv::Lck::GorillaTag {
class GtToggle;
}
// Write type traits
MARK_REF_T(::Liv::Lck::GorillaTag::GtToggle*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::GorillaTag::GtToggle*, "Liv.Lck.GorillaTag", "GtToggle");
// Dependencies UnityEngine.MonoBehaviour
namespace Liv::Lck::GorillaTag {
// Is value type: false
// CS Name: Liv.Lck.GorillaTag.GtToggle
class CORDL_TYPE GtToggle : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_IsFirstSelected, put=set_IsFirstSelected)) bool  IsFirstSelected;

/// @brief Field _audioController, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__audioController, put=__cordl_internal_set__audioController)) ::UnityW<::Liv::Lck::LckDiscreetAudioController>  _audioController;

/// @brief Field _firstButtonLabel, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__firstButtonLabel, put=__cordl_internal_set__firstButtonLabel)) ::UnityW<::TMPro::TextMeshPro>  _firstButtonLabel;

/// @brief Field _firstButtonRenderer, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__firstButtonRenderer, put=__cordl_internal_set__firstButtonRenderer)) ::UnityW<::UnityEngine::SpriteRenderer>  _firstButtonRenderer;

/// @brief Field _firstLabelValue, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__firstLabelValue, put=__cordl_internal_set__firstLabelValue)) ::StringW  _firstLabelValue;

/// @brief Field _isFirstSelected, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__isFirstSelected, put=__cordl_internal_set__isFirstSelected)) bool  _isFirstSelected;

/// @brief Field _label, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__label, put=__cordl_internal_set__label)) ::UnityW<::TMPro::TextMeshPro>  _label;

/// @brief Field _name, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__name, put=__cordl_internal_set__name)) ::StringW  _name;

/// @brief Field _secondButtonLabel, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__secondButtonLabel, put=__cordl_internal_set__secondButtonLabel)) ::UnityW<::TMPro::TextMeshPro>  _secondButtonLabel;

/// @brief Field _secondButtonRenderer, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__secondButtonRenderer, put=__cordl_internal_set__secondButtonRenderer)) ::UnityW<::UnityEngine::SpriteRenderer>  _secondButtonRenderer;

/// @brief Field _secondLabelValue, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__secondLabelValue, put=__cordl_internal_set__secondLabelValue)) ::StringW  _secondLabelValue;

/// @brief Field _settings, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__settings, put=__cordl_internal_set__settings)) ::UnityW<::Liv::Lck::GorillaTag::GtUiSettings>  _settings;

/// @brief Field _visualsTrans, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__visualsTrans, put=__cordl_internal_set__visualsTrans)) ::UnityW<::UnityEngine::Transform>  _visualsTrans;

/// @brief Field onValueChanged, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_onValueChanged, put=__cordl_internal_set_onValueChanged)) ::UnityEngine::Events::UnityEvent_1<bool>*  onValueChanged;

/// @brief Method FirstButtonPressed, addr 0x9d2f930, size 0x70, virtual false, abstract: false, final false
inline void FirstButtonPressed() ;

static inline ::Liv::Lck::GorillaTag::GtToggle* New_ctor() ;

/// @brief Method OnValidate, addr 0x9d2f874, size 0x4, virtual false, abstract: false, final false
inline void OnValidate() ;

/// @brief Method Reset, addr 0x9d2fa2c, size 0x34, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method SecondButtonPressed, addr 0x9d2f9a0, size 0x70, virtual false, abstract: false, final false
inline void SecondButtonPressed() ;

/// @brief Method SetUp, addr 0x9d2f878, size 0xb4, virtual false, abstract: false, final false
inline void SetUp() ;

/// @brief Method Start, addr 0x9d2f92c, size 0x4, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method TapEnded, addr 0x9d2fa10, size 0x1c, virtual false, abstract: false, final false
inline void TapEnded() ;

/// @brief Method UpdateToggle, addr 0x9d2f7a8, size 0xc4, virtual false, abstract: false, final false
inline void UpdateToggle(bool  isFirstSelected) ;

constexpr ::UnityW<::Liv::Lck::LckDiscreetAudioController> const& __cordl_internal_get__audioController() const;

constexpr ::UnityW<::Liv::Lck::LckDiscreetAudioController>& __cordl_internal_get__audioController() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get__firstButtonLabel() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get__firstButtonLabel() ;

constexpr ::UnityW<::UnityEngine::SpriteRenderer> const& __cordl_internal_get__firstButtonRenderer() const;

constexpr ::UnityW<::UnityEngine::SpriteRenderer>& __cordl_internal_get__firstButtonRenderer() ;

constexpr ::StringW const& __cordl_internal_get__firstLabelValue() const;

constexpr ::StringW& __cordl_internal_get__firstLabelValue() ;

constexpr bool const& __cordl_internal_get__isFirstSelected() const;

constexpr bool& __cordl_internal_get__isFirstSelected() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get__label() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get__label() ;

constexpr ::StringW const& __cordl_internal_get__name() const;

constexpr ::StringW& __cordl_internal_get__name() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get__secondButtonLabel() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get__secondButtonLabel() ;

constexpr ::UnityW<::UnityEngine::SpriteRenderer> const& __cordl_internal_get__secondButtonRenderer() const;

constexpr ::UnityW<::UnityEngine::SpriteRenderer>& __cordl_internal_get__secondButtonRenderer() ;

constexpr ::StringW const& __cordl_internal_get__secondLabelValue() const;

constexpr ::StringW& __cordl_internal_get__secondLabelValue() ;

constexpr ::UnityW<::Liv::Lck::GorillaTag::GtUiSettings> const& __cordl_internal_get__settings() const;

constexpr ::UnityW<::Liv::Lck::GorillaTag::GtUiSettings>& __cordl_internal_get__settings() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__visualsTrans() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__visualsTrans() ;

constexpr ::UnityEngine::Events::UnityEvent_1<bool>* const& __cordl_internal_get_onValueChanged() const;

constexpr ::UnityEngine::Events::UnityEvent_1<bool>*& __cordl_internal_get_onValueChanged() ;

constexpr void __cordl_internal_set__audioController(::UnityW<::Liv::Lck::LckDiscreetAudioController>  value) ;

constexpr void __cordl_internal_set__firstButtonLabel(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set__firstButtonRenderer(::UnityW<::UnityEngine::SpriteRenderer>  value) ;

constexpr void __cordl_internal_set__firstLabelValue(::StringW  value) ;

constexpr void __cordl_internal_set__isFirstSelected(bool  value) ;

constexpr void __cordl_internal_set__label(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set__name(::StringW  value) ;

constexpr void __cordl_internal_set__secondButtonLabel(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set__secondButtonRenderer(::UnityW<::UnityEngine::SpriteRenderer>  value) ;

constexpr void __cordl_internal_set__secondLabelValue(::StringW  value) ;

constexpr void __cordl_internal_set__settings(::UnityW<::Liv::Lck::GorillaTag::GtUiSettings>  value) ;

constexpr void __cordl_internal_set__visualsTrans(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_onValueChanged(::UnityEngine::Events::UnityEvent_1<bool>*  value) ;

/// @brief Method .ctor, addr 0x9d2fa60, size 0x90, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsFirstSelected, addr 0x9d2f86c, size 0x8, virtual false, abstract: false, final false
inline bool get_IsFirstSelected() ;

/// @brief Method set_IsFirstSelected, addr 0x9d2f740, size 0x68, virtual false, abstract: false, final false
inline void set_IsFirstSelected(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GtToggle() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GtToggle", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GtToggle(GtToggle && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GtToggle", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GtToggle(GtToggle const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29665};

/// [SerializeField]
/// @brief Field _isFirstSelected, offset: 0x20, size: 0x1, def value: None
 bool  ____isFirstSelected;

/// [SerializeField]
/// @brief Field _name, offset: 0x28, size: 0x8, def value: None
 ::StringW  ____name;

/// [SerializeField]
/// @brief Field _firstLabelValue, offset: 0x30, size: 0x8, def value: None
 ::StringW  ____firstLabelValue;

/// [SerializeField]
/// @brief Field _secondLabelValue, offset: 0x38, size: 0x8, def value: None
 ::StringW  ____secondLabelValue;

/// [SerializeField]
/// @brief Field _settings, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::GorillaTag::GtUiSettings>  ____settings;

/// [Space(10)]
/// [Header("Elements")]
/// [SerializeField]
/// @brief Field _label, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ____label;

/// [SerializeField]
/// @brief Field _firstButtonRenderer, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::SpriteRenderer>  ____firstButtonRenderer;

/// [SerializeField]
/// @brief Field _secondButtonRenderer, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::SpriteRenderer>  ____secondButtonRenderer;

/// [SerializeField]
/// @brief Field _firstButtonLabel, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ____firstButtonLabel;

/// [SerializeField]
/// @brief Field _secondButtonLabel, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ____secondButtonLabel;

/// [SerializeField]
/// @brief Field _visualsTrans, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____visualsTrans;

/// [Space(10)]
/// [Header("Sounds")]
/// [SerializeField]
/// @brief Field _audioController, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::LckDiscreetAudioController>  ____audioController;

/// [Space(10)]
/// [Header("Events")]
/// @brief Field onValueChanged, offset: 0x80, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<bool>*  ___onValueChanged;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::GorillaTag::GtToggle, ____isFirstSelected) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtToggle, ____name) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtToggle, ____firstLabelValue) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtToggle, ____secondLabelValue) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtToggle, ____settings) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtToggle, ____label) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtToggle, ____firstButtonRenderer) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtToggle, ____secondButtonRenderer) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtToggle, ____firstButtonLabel) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtToggle, ____secondButtonLabel) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtToggle, ____visualsTrans) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtToggle, ____audioController) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtToggle, ___onValueChanged) == 0x80, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::GorillaTag::GtToggle) == 0x88, "Size mismatch!");

} // namespace end def Liv::Lck::GorillaTag
