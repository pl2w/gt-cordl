#pragma once
// IWYU pragma private; include "Meta/WitAi/Utilities/FloatToStringEvent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(FloatToStringEvent)
namespace Meta::WitAi::Utilities {
class StringEvent;
}
// Forward declare root types
namespace Meta::WitAi::Utilities {
class FloatToStringEvent;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::Utilities::FloatToStringEvent*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Utilities::FloatToStringEvent*, "Meta.WitAi.Utilities", "FloatToStringEvent");
// [AddComponentMenu("Wit.ai/Utilities/Conversions/Float to String")]
// Dependencies UnityEngine.MonoBehaviour
namespace Meta::WitAi::Utilities {
// Is value type: false
// CS Name: Meta.WitAi.Utilities.FloatToStringEvent
class CORDL_TYPE FloatToStringEvent : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _floatFormat, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__floatFormat, put=__cordl_internal_set__floatFormat)) ::StringW  _floatFormat;

/// @brief Field _stringFormat, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__stringFormat, put=__cordl_internal_set__stringFormat)) ::StringW  _stringFormat;

/// @brief Field onFloatToString, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_onFloatToString, put=__cordl_internal_set_onFloatToString)) ::Meta::WitAi::Utilities::StringEvent*  onFloatToString;

/// @brief Method ConvertFloatToString, addr 0x9e849cc, size 0xc4, virtual false, abstract: false, final false
inline void ConvertFloatToString(float_t  value) ;

static inline ::Meta::WitAi::Utilities::FloatToStringEvent* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get__floatFormat() const;

constexpr ::StringW& __cordl_internal_get__floatFormat() ;

constexpr ::StringW const& __cordl_internal_get__stringFormat() const;

constexpr ::StringW& __cordl_internal_get__stringFormat() ;

constexpr ::Meta::WitAi::Utilities::StringEvent* const& __cordl_internal_get_onFloatToString() const;

constexpr ::Meta::WitAi::Utilities::StringEvent*& __cordl_internal_get_onFloatToString() ;

constexpr void __cordl_internal_set__floatFormat(::StringW  value) ;

constexpr void __cordl_internal_set__stringFormat(::StringW  value) ;

constexpr void __cordl_internal_set_onFloatToString(::Meta::WitAi::Utilities::StringEvent*  value) ;

/// @brief Method .ctor, addr 0x9e84a90, size 0x68, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FloatToStringEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FloatToStringEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FloatToStringEvent(FloatToStringEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FloatToStringEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FloatToStringEvent(FloatToStringEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25577};

/// [FormerlySerializedAs("format")]
/// [Tooltip("The format value to be used on the float")]
/// [SerializeField]
/// @brief Field _floatFormat, offset: 0x20, size: 0x8, def value: None
 ::StringW  ____floatFormat;

/// [Tooltip("The format of the string itself. {0} will represent the float value provided")]
/// [SerializeField]
/// @brief Field _stringFormat, offset: 0x28, size: 0x8, def value: None
 ::StringW  ____stringFormat;

/// [Space(8)]
/// [TooltipBox("Triggered when ConvertFloatToString(float) is called. The string in this event will be formatted based on the format fields.")]
/// [SerializeField]
/// @brief Field onFloatToString, offset: 0x30, size: 0x8, def value: None
 ::Meta::WitAi::Utilities::StringEvent*  ___onFloatToString;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::Utilities::FloatToStringEvent, ____floatFormat) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Utilities::FloatToStringEvent, ____stringFormat) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Utilities::FloatToStringEvent, ___onFloatToString) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::Utilities::FloatToStringEvent) == 0x38, "Size mismatch!");

} // namespace end def Meta::WitAi::Utilities
