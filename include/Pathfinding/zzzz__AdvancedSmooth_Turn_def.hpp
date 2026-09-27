#pragma once
// IWYU pragma private; include "Pathfinding/AdvancedSmooth_Turn.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AdvancedSmooth_Turn)
namespace Pathfinding {
class AdvancedSmooth_TurnConstructor;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class IComparable_1;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
struct AdvancedSmooth_Turn;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::AdvancedSmooth_Turn);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AdvancedSmooth_Turn, "Pathfinding", "AdvancedSmooth/Turn");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Pathfinding.AdvancedSmooth/Turn
struct CORDL_TYPE AdvancedSmooth_Turn {
public:
// Declarations
 __declspec(property(get=get_score)) float_t  score;

/// @brief Convert operator to "::System::IComparable_1<::GlobalNamespace::AdvancedSmooth_Turn>"
constexpr operator  ::System::IComparable_1<::GlobalNamespace::AdvancedSmooth_Turn>*() ;

/// @brief Method CompareTo, addr 0x5ea06ec, size 0x5c, virtual true, abstract: false, final true
inline int32_t CompareTo(::GlobalNamespace::AdvancedSmooth_Turn  t) ;

/// @brief Method GetPath, addr 0x5e9d918, size 0x2c, virtual false, abstract: false, final false
inline void GetPath(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  output) ;

/// @brief Method .ctor, addr 0x5e9eb34, size 0x10, virtual false, abstract: false, final false
inline void _ctor(float_t  length, ::Pathfinding::AdvancedSmooth_TurnConstructor*  constructor, int32_t  id) ;

/// @brief Method get_score, addr 0x5ea06c8, size 0x24, virtual false, abstract: false, final false
inline float_t get_score() ;

/// @brief Convert to "::System::IComparable_1<::GlobalNamespace::AdvancedSmooth_Turn>"
constexpr ::System::IComparable_1<::GlobalNamespace::AdvancedSmooth_Turn>* i___System__IComparable_1___GlobalNamespace__AdvancedSmooth_Turn_() ;

/// @brief Method op_GreaterThan, addr 0x5ea0788, size 0x40, virtual false, abstract: false, final false
static inline bool op_GreaterThan(::GlobalNamespace::AdvancedSmooth_Turn  lhs, ::GlobalNamespace::AdvancedSmooth_Turn  rhs) ;

/// @brief Method op_LessThan, addr 0x5ea0748, size 0x40, virtual false, abstract: false, final false
static inline bool op_LessThan(::GlobalNamespace::AdvancedSmooth_Turn  lhs, ::GlobalNamespace::AdvancedSmooth_Turn  rhs) ;

// Ctor Parameters []
// @brief default ctor
constexpr AdvancedSmooth_Turn() ;

// Ctor Parameters [CppParam { name: "length", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "id", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "constructor", ty: "::Pathfinding::AdvancedSmooth_TurnConstructor*", modifiers: "", def_value: None, comment: None }]
constexpr AdvancedSmooth_Turn(float_t  length, int32_t  id, ::Pathfinding::AdvancedSmooth_TurnConstructor*  constructor) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21360};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field length, offset: 0x0, size: 0x4, def value: None
 float_t  length;

/// @brief Field id, offset: 0x4, size: 0x4, def value: None
 int32_t  id;

/// @brief Field constructor, offset: 0x8, size: 0x8, def value: None
 ::Pathfinding::AdvancedSmooth_TurnConstructor*  constructor;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AdvancedSmooth_Turn, length) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AdvancedSmooth_Turn, id) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AdvancedSmooth_Turn, constructor) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AdvancedSmooth_Turn) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
