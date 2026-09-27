#pragma once
// IWYU pragma private; include "GlobalNamespace/TitleDataActivation_RelativeDateTime.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TitleDataActivation_RelativeDateTime)
// Forward declare root types
namespace GlobalNamespace {
struct TitleDataActivation_RelativeDateTime;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::TitleDataActivation_RelativeDateTime);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TitleDataActivation_RelativeDateTime, "", "TitleDataActivation/RelativeDateTime");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: TitleDataActivation/RelativeDateTime
struct CORDL_TYPE TitleDataActivation_RelativeDateTime {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr TitleDataActivation_RelativeDateTime() ;

// Ctor Parameters [CppParam { name: "DaysPast", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Hours", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Minutes", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Seconds", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr TitleDataActivation_RelativeDateTime(int32_t  DaysPast, int32_t  Hours, int32_t  Minutes, int32_t  Seconds) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3682};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field DaysPast, offset: 0x0, size: 0x4, def value: None
 int32_t  DaysPast;

/// @brief Field Hours, offset: 0x4, size: 0x4, def value: None
 int32_t  Hours;

/// @brief Field Minutes, offset: 0x8, size: 0x4, def value: None
 int32_t  Minutes;

/// @brief Field Seconds, offset: 0xc, size: 0x4, def value: None
 int32_t  Seconds;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TitleDataActivation_RelativeDateTime, DaysPast) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TitleDataActivation_RelativeDateTime, Hours) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TitleDataActivation_RelativeDateTime, Minutes) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TitleDataActivation_RelativeDateTime, Seconds) == 0xc, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TitleDataActivation_RelativeDateTime) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
