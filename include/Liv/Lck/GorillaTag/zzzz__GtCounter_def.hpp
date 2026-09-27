#pragma once
// IWYU pragma private; include "Liv/Lck/GorillaTag/GtCounter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GtCounter)
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
class GtCounter;
}
// Write type traits
MARK_REF_T(::Liv::Lck::GorillaTag::GtCounter*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::GorillaTag::GtCounter*, "Liv.Lck.GorillaTag", "GtCounter");
// Dependencies UnityEngine.MonoBehaviour
namespace Liv::Lck::GorillaTag {
// Is value type: false
// CS Name: Liv.Lck.GorillaTag.GtCounter
class CORDL_TYPE GtCounter : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_Value, put=set_Value)) int32_t  Value;

/// @brief Field _audioController, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__audioController, put=__cordl_internal_set__audioController)) ::UnityW<::Liv::Lck::LckDiscreetAudioController>  _audioController;

/// @brief Field _decrementButtonRenderer, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__decrementButtonRenderer, put=__cordl_internal_set__decrementButtonRenderer)) ::UnityW<::UnityEngine::SpriteRenderer>  _decrementButtonRenderer;

/// @brief Field _incrementButtonRenderer, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__incrementButtonRenderer, put=__cordl_internal_set__incrementButtonRenderer)) ::UnityW<::UnityEngine::SpriteRenderer>  _incrementButtonRenderer;

/// @brief Field _label, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__label, put=__cordl_internal_set__label)) ::UnityW<::TMPro::TextMeshPro>  _label;

/// @brief Field _maxValue, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxValue, put=__cordl_internal_set__maxValue)) int32_t  _maxValue;

/// @brief Field _minValue, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__minValue, put=__cordl_internal_set__minValue)) int32_t  _minValue;

/// @brief Field _minusRenderer, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__minusRenderer, put=__cordl_internal_set__minusRenderer)) ::UnityW<::UnityEngine::SpriteRenderer>  _minusRenderer;

/// @brief Field _name, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__name, put=__cordl_internal_set__name)) ::StringW  _name;

/// @brief Field _plusRenderer, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__plusRenderer, put=__cordl_internal_set__plusRenderer)) ::UnityW<::UnityEngine::SpriteRenderer>  _plusRenderer;

/// @brief Field _settings, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__settings, put=__cordl_internal_set__settings)) ::UnityW<::Liv::Lck::GorillaTag::GtUiSettings>  _settings;

/// @brief Field _showMaxInsteadOfNumber, offset 0x41, size 0x1 
 __declspec(property(get=__cordl_internal_get__showMaxInsteadOfNumber, put=__cordl_internal_set__showMaxInsteadOfNumber)) bool  _showMaxInsteadOfNumber;

/// @brief Field _showOffInsteadOfZero, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get__showOffInsteadOfZero, put=__cordl_internal_set__showOffInsteadOfZero)) bool  _showOffInsteadOfZero;

/// @brief Field _step, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__step, put=__cordl_internal_set__step)) int32_t  _step;

/// @brief Field _value, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__value, put=__cordl_internal_set__value)) int32_t  _value;

/// @brief Field _valueLabel, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__valueLabel, put=__cordl_internal_set__valueLabel)) ::UnityW<::TMPro::TextMeshPro>  _valueLabel;

/// @brief Field _visualsTrans, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__visualsTrans, put=__cordl_internal_set__visualsTrans)) ::UnityW<::UnityEngine::Transform>  _visualsTrans;

/// @brief Field onValueChanged, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_onValueChanged, put=__cordl_internal_set_onValueChanged)) ::UnityEngine::Events::UnityEvent_1<int32_t>*  onValueChanged;

/// @brief Method Decrease, addr 0x9d22adc, size 0xd8, virtual false, abstract: false, final false
inline void Decrease() ;

/// @brief Method Increase, addr 0x9d22a44, size 0x98, virtual false, abstract: false, final false
inline void Increase() ;

static inline ::Liv::Lck::GorillaTag::GtCounter* New_ctor() ;

/// @brief Method OnValidate, addr 0x9d2294c, size 0x4, virtual false, abstract: false, final false
inline void OnValidate() ;

/// @brief Method SetUp, addr 0x9d22950, size 0xf0, virtual false, abstract: false, final false
inline void SetUp() ;

/// @brief Method Start, addr 0x9d22a40, size 0x4, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method TapEnded, addr 0x9d22bb4, size 0xb8, virtual false, abstract: false, final false
inline void TapEnded() ;

/// @brief Method UpdateCounter, addr 0x9d2275c, size 0x1e8, virtual false, abstract: false, final false
inline void UpdateCounter(int32_t  num) ;

constexpr ::UnityW<::Liv::Lck::LckDiscreetAudioController> const& __cordl_internal_get__audioController() const;

constexpr ::UnityW<::Liv::Lck::LckDiscreetAudioController>& __cordl_internal_get__audioController() ;

constexpr ::UnityW<::UnityEngine::SpriteRenderer> const& __cordl_internal_get__decrementButtonRenderer() const;

constexpr ::UnityW<::UnityEngine::SpriteRenderer>& __cordl_internal_get__decrementButtonRenderer() ;

constexpr ::UnityW<::UnityEngine::SpriteRenderer> const& __cordl_internal_get__incrementButtonRenderer() const;

constexpr ::UnityW<::UnityEngine::SpriteRenderer>& __cordl_internal_get__incrementButtonRenderer() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get__label() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get__label() ;

constexpr int32_t const& __cordl_internal_get__maxValue() const;

constexpr int32_t& __cordl_internal_get__maxValue() ;

constexpr int32_t const& __cordl_internal_get__minValue() const;

constexpr int32_t& __cordl_internal_get__minValue() ;

constexpr ::UnityW<::UnityEngine::SpriteRenderer> const& __cordl_internal_get__minusRenderer() const;

constexpr ::UnityW<::UnityEngine::SpriteRenderer>& __cordl_internal_get__minusRenderer() ;

constexpr ::StringW const& __cordl_internal_get__name() const;

constexpr ::StringW& __cordl_internal_get__name() ;

constexpr ::UnityW<::UnityEngine::SpriteRenderer> const& __cordl_internal_get__plusRenderer() const;

constexpr ::UnityW<::UnityEngine::SpriteRenderer>& __cordl_internal_get__plusRenderer() ;

constexpr ::UnityW<::Liv::Lck::GorillaTag::GtUiSettings> const& __cordl_internal_get__settings() const;

constexpr ::UnityW<::Liv::Lck::GorillaTag::GtUiSettings>& __cordl_internal_get__settings() ;

constexpr bool const& __cordl_internal_get__showMaxInsteadOfNumber() const;

constexpr bool& __cordl_internal_get__showMaxInsteadOfNumber() ;

constexpr bool const& __cordl_internal_get__showOffInsteadOfZero() const;

constexpr bool& __cordl_internal_get__showOffInsteadOfZero() ;

constexpr int32_t const& __cordl_internal_get__step() const;

constexpr int32_t& __cordl_internal_get__step() ;

constexpr int32_t const& __cordl_internal_get__value() const;

constexpr int32_t& __cordl_internal_get__value() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get__valueLabel() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get__valueLabel() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__visualsTrans() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__visualsTrans() ;

constexpr ::UnityEngine::Events::UnityEvent_1<int32_t>* const& __cordl_internal_get_onValueChanged() const;

constexpr ::UnityEngine::Events::UnityEvent_1<int32_t>*& __cordl_internal_get_onValueChanged() ;

constexpr void __cordl_internal_set__audioController(::UnityW<::Liv::Lck::LckDiscreetAudioController>  value) ;

constexpr void __cordl_internal_set__decrementButtonRenderer(::UnityW<::UnityEngine::SpriteRenderer>  value) ;

constexpr void __cordl_internal_set__incrementButtonRenderer(::UnityW<::UnityEngine::SpriteRenderer>  value) ;

constexpr void __cordl_internal_set__label(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set__maxValue(int32_t  value) ;

constexpr void __cordl_internal_set__minValue(int32_t  value) ;

constexpr void __cordl_internal_set__minusRenderer(::UnityW<::UnityEngine::SpriteRenderer>  value) ;

constexpr void __cordl_internal_set__name(::StringW  value) ;

constexpr void __cordl_internal_set__plusRenderer(::UnityW<::UnityEngine::SpriteRenderer>  value) ;

constexpr void __cordl_internal_set__settings(::UnityW<::Liv::Lck::GorillaTag::GtUiSettings>  value) ;

constexpr void __cordl_internal_set__showMaxInsteadOfNumber(bool  value) ;

constexpr void __cordl_internal_set__showOffInsteadOfZero(bool  value) ;

constexpr void __cordl_internal_set__step(int32_t  value) ;

constexpr void __cordl_internal_set__value(int32_t  value) ;

constexpr void __cordl_internal_set__valueLabel(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set__visualsTrans(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_onValueChanged(::UnityEngine::Events::UnityEvent_1<int32_t>*  value) ;

/// @brief Method .ctor, addr 0x9d22c6c, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Value, addr 0x9d22944, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Value() ;

/// @brief Method set_Value, addr 0x9d226e4, size 0x78, virtual false, abstract: false, final false
inline void set_Value(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GtCounter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GtCounter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GtCounter(GtCounter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GtCounter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GtCounter(GtCounter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29628};

/// [SerializeField]
/// @brief Field _settings, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::GorillaTag::GtUiSettings>  ____settings;

/// [Space(10)]
/// [SerializeField]
/// @brief Field _name, offset: 0x28, size: 0x8, def value: None
 ::StringW  ____name;

/// [SerializeField]
/// @brief Field _value, offset: 0x30, size: 0x4, def value: None
 int32_t  ____value;

/// [SerializeField]
/// @brief Field _step, offset: 0x34, size: 0x4, def value: None
 int32_t  ____step;

/// [SerializeField]
/// @brief Field _minValue, offset: 0x38, size: 0x4, def value: None
 int32_t  ____minValue;

/// [SerializeField]
/// @brief Field _maxValue, offset: 0x3c, size: 0x4, def value: None
 int32_t  ____maxValue;

/// [SerializeField]
/// @brief Field _showOffInsteadOfZero, offset: 0x40, size: 0x1, def value: None
 bool  ____showOffInsteadOfZero;

/// [SerializeField]
/// @brief Field _showMaxInsteadOfNumber, offset: 0x41, size: 0x1, def value: None
 bool  ____showMaxInsteadOfNumber;

/// [SerializeField]
/// @brief Field _label, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ____label;

/// [SerializeField]
/// @brief Field _valueLabel, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ____valueLabel;

/// [SerializeField]
/// @brief Field _decrementButtonRenderer, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::SpriteRenderer>  ____decrementButtonRenderer;

/// [SerializeField]
/// @brief Field _incrementButtonRenderer, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::SpriteRenderer>  ____incrementButtonRenderer;

/// [SerializeField]
/// @brief Field _minusRenderer, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::SpriteRenderer>  ____minusRenderer;

/// [SerializeField]
/// @brief Field _plusRenderer, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::SpriteRenderer>  ____plusRenderer;

/// [SerializeField]
/// @brief Field _visualsTrans, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____visualsTrans;

/// [SerializeField]
/// @brief Field _audioController, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::LckDiscreetAudioController>  ____audioController;

/// @brief Field onValueChanged, offset: 0x88, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<int32_t>*  ___onValueChanged;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::GorillaTag::GtCounter, ____settings) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtCounter, ____name) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtCounter, ____value) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtCounter, ____step) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtCounter, ____minValue) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtCounter, ____maxValue) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtCounter, ____showOffInsteadOfZero) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtCounter, ____showMaxInsteadOfNumber) == 0x41, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtCounter, ____label) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtCounter, ____valueLabel) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtCounter, ____decrementButtonRenderer) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtCounter, ____incrementButtonRenderer) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtCounter, ____minusRenderer) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtCounter, ____plusRenderer) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtCounter, ____visualsTrans) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtCounter, ____audioController) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtCounter, ___onValueChanged) == 0x88, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::GorillaTag::GtCounter) == 0x90, "Size mismatch!");

} // namespace end def Liv::Lck::GorillaTag
