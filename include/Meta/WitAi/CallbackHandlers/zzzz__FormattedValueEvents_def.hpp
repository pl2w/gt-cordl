#pragma once
// IWYU pragma private; include "Meta/WitAi/CallbackHandlers/FormattedValueEvents.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(FormattedValueEvents)
namespace Meta::WitAi::CallbackHandlers {
class ValueEvent;
}
// Forward declare root types
namespace Meta::WitAi::CallbackHandlers {
class FormattedValueEvents;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::CallbackHandlers::FormattedValueEvents*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::CallbackHandlers::FormattedValueEvents*, "Meta.WitAi.CallbackHandlers", "FormattedValueEvents");
// Dependencies System.Object
namespace Meta::WitAi::CallbackHandlers {
// Is value type: false
// CS Name: Meta.WitAi.CallbackHandlers.FormattedValueEvents
class CORDL_TYPE FormattedValueEvents : public ::System::Object {
public:
// Declarations
/// @brief Field format, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_format, put=__cordl_internal_set_format)) ::StringW  format;

/// @brief Field onFormattedValueEvent, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_onFormattedValueEvent, put=__cordl_internal_set_onFormattedValueEvent)) ::Meta::WitAi::CallbackHandlers::ValueEvent*  onFormattedValueEvent;

static inline ::Meta::WitAi::CallbackHandlers::FormattedValueEvents* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_format() const;

constexpr ::StringW& __cordl_internal_get_format() ;

constexpr ::Meta::WitAi::CallbackHandlers::ValueEvent* const& __cordl_internal_get_onFormattedValueEvent() const;

constexpr ::Meta::WitAi::CallbackHandlers::ValueEvent*& __cordl_internal_get_onFormattedValueEvent() ;

constexpr void __cordl_internal_set_format(::StringW  value) ;

constexpr void __cordl_internal_set_onFormattedValueEvent(::Meta::WitAi::CallbackHandlers::ValueEvent*  value) ;

/// @brief Method .ctor, addr 0x9e9e7fc, size 0x68, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FormattedValueEvents() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FormattedValueEvents", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FormattedValueEvents(FormattedValueEvents && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FormattedValueEvents", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FormattedValueEvents(FormattedValueEvents const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25734};

/// [Tooltip("Modify the string output, values can be inserted with {value} or {0}, {1}, {2}")]
/// @brief Field format, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___format;

/// @brief Field onFormattedValueEvent, offset: 0x18, size: 0x8, def value: None
 ::Meta::WitAi::CallbackHandlers::ValueEvent*  ___onFormattedValueEvent;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::CallbackHandlers::FormattedValueEvents, ___format) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::CallbackHandlers::FormattedValueEvents, ___onFormattedValueEvent) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::CallbackHandlers::FormattedValueEvents) == 0x20, "Size mismatch!");

} // namespace end def Meta::WitAi::CallbackHandlers
