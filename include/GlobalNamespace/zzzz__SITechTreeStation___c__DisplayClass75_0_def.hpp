#pragma once
// IWYU pragma private; include "GlobalNamespace/SITechTreeStation___c__DisplayClass75_0.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(SITechTreeStation___c__DisplayClass75_0)
namespace GlobalNamespace {
class SITouchscreenButton;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct SITechTreeStation___c__DisplayClass75_0;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SITechTreeStation___c__DisplayClass75_0);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SITechTreeStation___c__DisplayClass75_0, "", "SITechTreeStation/<>c__DisplayClass75_0");
// [CompilerGenerated]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: SITechTreeStation/<>c__DisplayClass75_0
struct CORDL_TYPE SITechTreeStation___c__DisplayClass75_0 {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr SITechTreeStation___c__DisplayClass75_0() ;

// Ctor Parameters [CppParam { name: "buttons", ty: "::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SITouchscreenButton>>*", modifiers: "", def_value: None, comment: None }]
constexpr SITechTreeStation___c__DisplayClass75_0(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SITouchscreenButton>>*  buttons) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{366};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field buttons, offset: 0x0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SITouchscreenButton>>*  buttons;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SITechTreeStation___c__DisplayClass75_0, buttons) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SITechTreeStation___c__DisplayClass75_0) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
