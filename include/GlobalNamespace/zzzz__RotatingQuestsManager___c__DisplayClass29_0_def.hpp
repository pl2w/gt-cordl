#pragma once
// IWYU pragma private; include "GlobalNamespace/RotatingQuestsManager___c__DisplayClass29_0.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(RotatingQuestsManager___c__DisplayClass29_0)
namespace GlobalNamespace {
class RotatingQuest;
}
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct RotatingQuestsManager___c__DisplayClass29_0;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::RotatingQuestsManager___c__DisplayClass29_0);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RotatingQuestsManager___c__DisplayClass29_0, "", "RotatingQuestsManager/<>c__DisplayClass29_0");
// [CompilerGenerated]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: RotatingQuestsManager/<>c__DisplayClass29_0
struct CORDL_TYPE RotatingQuestsManager___c__DisplayClass29_0 {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr RotatingQuestsManager___c__DisplayClass29_0() ;

// Ctor Parameters [CppParam { name: "action", ty: "::System::Action_1<::GlobalNamespace::RotatingQuest*>*", modifiers: "", def_value: None, comment: None }]
constexpr RotatingQuestsManager___c__DisplayClass29_0(::System::Action_1<::GlobalNamespace::RotatingQuest*>*  action) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{622};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field action, offset: 0x0, size: 0x8, def value: None
 ::System::Action_1<::GlobalNamespace::RotatingQuest*>*  action;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RotatingQuestsManager___c__DisplayClass29_0, action) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RotatingQuestsManager___c__DisplayClass29_0) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
