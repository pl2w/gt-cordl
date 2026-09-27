#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaEventAnimationController_GEAKeyframeData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(GorillaEventAnimationController_GEAKeyframeData)
namespace GlobalNamespace {
struct GorillaEventAnimationController_ControlledAnimationKeyframeData;
}
namespace GlobalNamespace {
class GorillaEventAnimation;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct GorillaEventAnimationController_GEAKeyframeData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GorillaEventAnimationController_GEAKeyframeData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaEventAnimationController_GEAKeyframeData, "", "GorillaEventAnimationController/GEAKeyframeData");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaEventAnimationController/GEAKeyframeData
struct CORDL_TYPE GorillaEventAnimationController_GEAKeyframeData {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr GorillaEventAnimationController_GEAKeyframeData() ;

// Ctor Parameters [CppParam { name: "gEA", ty: "::UnityW<::GlobalNamespace::GorillaEventAnimation>", modifiers: "", def_value: None, comment: None }, CppParam { name: "keyframeData", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::GorillaEventAnimationController_ControlledAnimationKeyframeData>*", modifiers: "", def_value: None, comment: None }]
constexpr GorillaEventAnimationController_GEAKeyframeData(::UnityW<::GlobalNamespace::GorillaEventAnimation>  gEA, ::System::Collections::Generic::List_1<::GlobalNamespace::GorillaEventAnimationController_ControlledAnimationKeyframeData>*  keyframeData) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{211};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field gEA, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaEventAnimation>  gEA;

/// @brief Field keyframeData, offset: 0x8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::GorillaEventAnimationController_ControlledAnimationKeyframeData>*  keyframeData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaEventAnimationController_GEAKeyframeData, gEA) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaEventAnimationController_GEAKeyframeData, keyframeData) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaEventAnimationController_GEAKeyframeData) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
