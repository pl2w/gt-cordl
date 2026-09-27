#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineSplineDollyLookAtTargets_LerpItem.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(CinemachineSplineDollyLookAtTargets_LerpItem)
namespace GlobalNamespace {
struct CinemachineSplineDollyLookAtTargets_Item;
}
namespace UnityEngine::Splines {
template<typename T>
class IInterpolator_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct CinemachineSplineDollyLookAtTargets_LerpItem;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CinemachineSplineDollyLookAtTargets_LerpItem);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CinemachineSplineDollyLookAtTargets_LerpItem, "Unity.Cinemachine", "CinemachineSplineDollyLookAtTargets/LerpItem");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Cinemachine.CinemachineSplineDollyLookAtTargets/LerpItem
#pragma pack(push, 0)
struct CORDL_TYPE CinemachineSplineDollyLookAtTargets_LerpItem {
public:
// Declarations
/// @brief Convert operator to "::UnityEngine::Splines::IInterpolator_1<::GlobalNamespace::CinemachineSplineDollyLookAtTargets_Item>"
constexpr operator  ::UnityEngine::Splines::IInterpolator_1<::GlobalNamespace::CinemachineSplineDollyLookAtTargets_Item>*() ;

/// @brief Method Interpolate, addr 0xaea7394, size 0x11c, virtual true, abstract: false, final true
inline ::GlobalNamespace::CinemachineSplineDollyLookAtTargets_Item Interpolate(::GlobalNamespace::CinemachineSplineDollyLookAtTargets_Item  a, ::GlobalNamespace::CinemachineSplineDollyLookAtTargets_Item  b, float_t  t) ;

/// @brief Convert to "::UnityEngine::Splines::IInterpolator_1<::GlobalNamespace::CinemachineSplineDollyLookAtTargets_Item>"
constexpr ::UnityEngine::Splines::IInterpolator_1<::GlobalNamespace::CinemachineSplineDollyLookAtTargets_Item>* i___UnityEngine__Splines__IInterpolator_1___GlobalNamespace__CinemachineSplineDollyLookAtTargets_Item_() ;

// Ctor Parameters []
// @brief default ctor
constexpr CinemachineSplineDollyLookAtTargets_LerpItem() ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22246};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
 uint8_t  _cordl_size_padding[0x1];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::CinemachineSplineDollyLookAtTargets_LerpItem) == 0x1, "Size mismatch!");

} // namespace end def GlobalNamespace
