#pragma once
// IWYU pragma private; include "Meta/WitAi/Utilities/StringToStringEvent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(StringToStringEvent)
namespace Meta::WitAi::Utilities {
class StringEvent;
}
// Forward declare root types
namespace Meta::WitAi::Utilities {
class StringToStringEvent;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::Utilities::StringToStringEvent*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Utilities::StringToStringEvent*, "Meta.WitAi.Utilities", "StringToStringEvent");
// [AddComponentMenu("Wit.ai/Utilities/Conversions/String to String")]
// Dependencies UnityEngine.MonoBehaviour
namespace Meta::WitAi::Utilities {
// Is value type: false
// CS Name: Meta.WitAi.Utilities.StringToStringEvent
class CORDL_TYPE StringToStringEvent : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _format, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__format, put=__cordl_internal_set__format)) ::StringW  _format;

/// @brief Field onStringEvent, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_onStringEvent, put=__cordl_internal_set_onStringEvent)) ::Meta::WitAi::Utilities::StringEvent*  onStringEvent;

/// @brief Method FormatString, addr 0x9e84da8, size 0xa0, virtual false, abstract: false, final false
inline void FormatString(::StringW  format, ::StringW  value) ;

/// @brief Method FormatString, addr 0x9e84e48, size 0x10, virtual false, abstract: false, final false
inline void FormatString(::StringW  value) ;

static inline ::Meta::WitAi::Utilities::StringToStringEvent* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get__format() const;

constexpr ::StringW& __cordl_internal_get__format() ;

constexpr ::Meta::WitAi::Utilities::StringEvent* const& __cordl_internal_get_onStringEvent() const;

constexpr ::Meta::WitAi::Utilities::StringEvent*& __cordl_internal_get_onStringEvent() ;

constexpr void __cordl_internal_set__format(::StringW  value) ;

constexpr void __cordl_internal_set_onStringEvent(::Meta::WitAi::Utilities::StringEvent*  value) ;

/// @brief Method .ctor, addr 0x9e84e58, size 0x68, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StringToStringEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StringToStringEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StringToStringEvent(StringToStringEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StringToStringEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StringToStringEvent(StringToStringEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25582};

/// [Tooltip("The string format string that will be used to reformat input strings. Ex: I don\'t know how to respond to {0}")]
/// [SerializeField]
/// @brief Field _format, offset: 0x20, size: 0x8, def value: None
 ::StringW  ____format;

/// [Space(8)]
/// [TooltipBox("Triggered when FormatString(float) is called. The string in this event will be formatted based on the format field.")]
/// [SerializeField]
/// @brief Field onStringEvent, offset: 0x28, size: 0x8, def value: None
 ::Meta::WitAi::Utilities::StringEvent*  ___onStringEvent;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::Utilities::StringToStringEvent, ____format) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Utilities::StringToStringEvent, ___onStringEvent) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::Utilities::StringToStringEvent) == 0x30, "Size mismatch!");

} // namespace end def Meta::WitAi::Utilities
