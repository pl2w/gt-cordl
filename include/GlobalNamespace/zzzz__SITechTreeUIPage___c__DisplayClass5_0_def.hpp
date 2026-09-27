#pragma once
// IWYU pragma private; include "GlobalNamespace/SITechTreeUIPage___c__DisplayClass5_0.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(SITechTreeUIPage___c__DisplayClass5_0)
namespace GlobalNamespace {
class SITechTreeStation;
}
namespace GlobalNamespace {
class SITechTreeUIPage;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
struct SITechTreeUIPage___c__DisplayClass5_0;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SITechTreeUIPage___c__DisplayClass5_0);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SITechTreeUIPage___c__DisplayClass5_0, "", "SITechTreeUIPage/<>c__DisplayClass5_0");
// [CompilerGenerated]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: SITechTreeUIPage/<>c__DisplayClass5_0
struct CORDL_TYPE SITechTreeUIPage___c__DisplayClass5_0 {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr SITechTreeUIPage___c__DisplayClass5_0() ;

// Ctor Parameters [CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::SITechTreeUIPage>", modifiers: "", def_value: None, comment: None }, CppParam { name: "techTreeStation", ty: "::UnityW<::GlobalNamespace::SITechTreeStation>", modifiers: "", def_value: None, comment: None }, CppParam { name: "imageTarget", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: None, comment: None }, CppParam { name: "textTarget", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: None, comment: None }]
constexpr SITechTreeUIPage___c__DisplayClass5_0(::UnityW<::GlobalNamespace::SITechTreeUIPage>  __4__this, ::UnityW<::GlobalNamespace::SITechTreeStation>  techTreeStation, ::UnityW<::UnityEngine::Transform>  imageTarget, ::UnityW<::UnityEngine::Transform>  textTarget) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{369};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field <>4__this, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SITechTreeUIPage>  __4__this;

/// @brief Field techTreeStation, offset: 0x8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SITechTreeStation>  techTreeStation;

/// @brief Field imageTarget, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  imageTarget;

/// @brief Field textTarget, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  textTarget;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SITechTreeUIPage___c__DisplayClass5_0, __4__this) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SITechTreeUIPage___c__DisplayClass5_0, techTreeStation) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SITechTreeUIPage___c__DisplayClass5_0, imageTarget) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SITechTreeUIPage___c__DisplayClass5_0, textTarget) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SITechTreeUIPage___c__DisplayClass5_0) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
