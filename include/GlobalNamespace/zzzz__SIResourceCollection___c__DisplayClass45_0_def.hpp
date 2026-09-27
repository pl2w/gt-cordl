#pragma once
// IWYU pragma private; include "GlobalNamespace/SIResourceCollection___c__DisplayClass45_0.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(SIResourceCollection___c__DisplayClass45_0)
namespace GlobalNamespace {
class SITouchscreenButton;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct SIResourceCollection___c__DisplayClass45_0;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SIResourceCollection___c__DisplayClass45_0);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SIResourceCollection___c__DisplayClass45_0, "", "SIResourceCollection/<>c__DisplayClass45_0");
// [CompilerGenerated]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: SIResourceCollection/<>c__DisplayClass45_0
struct CORDL_TYPE SIResourceCollection___c__DisplayClass45_0 {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr SIResourceCollection___c__DisplayClass45_0() ;

// Ctor Parameters [CppParam { name: "buttons", ty: "::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SITouchscreenButton>>*", modifiers: "", def_value: None, comment: None }]
constexpr SIResourceCollection___c__DisplayClass45_0(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SITouchscreenButton>>*  buttons) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{347};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field buttons, offset: 0x0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SITouchscreenButton>>*  buttons;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SIResourceCollection___c__DisplayClass45_0, buttons) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SIResourceCollection___c__DisplayClass45_0) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
