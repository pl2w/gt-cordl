#pragma once
// IWYU pragma private; include "Pathfinding/Funnel_FunnelPortals.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(Funnel_FunnelPortals)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
struct Funnel_FunnelPortals;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Funnel_FunnelPortals);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Funnel_FunnelPortals, "Pathfinding", "Funnel/FunnelPortals");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Pathfinding.Funnel/FunnelPortals
struct CORDL_TYPE Funnel_FunnelPortals {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr Funnel_FunnelPortals() ;

// Ctor Parameters [CppParam { name: "left", ty: "::System::Collections::Generic::List_1<::UnityEngine::Vector3>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "right", ty: "::System::Collections::Generic::List_1<::UnityEngine::Vector3>*", modifiers: "", def_value: None, comment: None }]
constexpr Funnel_FunnelPortals(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  left, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  right) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21412};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field left, offset: 0x0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  left;

/// @brief Field right, offset: 0x8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  right;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Funnel_FunnelPortals, left) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Funnel_FunnelPortals, right) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Funnel_FunnelPortals) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
