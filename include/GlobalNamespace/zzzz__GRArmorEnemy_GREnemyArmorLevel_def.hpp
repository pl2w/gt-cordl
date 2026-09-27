#pragma once
// IWYU pragma private; include "GlobalNamespace/GRArmorEnemy_GREnemyArmorLevel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GRArmorEnemy_GREnemyArmorLevel)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace GlobalNamespace {
struct GRArmorEnemy_GREnemyArmorLevel;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GRArmorEnemy_GREnemyArmorLevel);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRArmorEnemy_GREnemyArmorLevel, "", "GRArmorEnemy/GREnemyArmorLevel");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GRArmorEnemy/GREnemyArmorLevel
struct CORDL_TYPE GRArmorEnemy_GREnemyArmorLevel {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr GRArmorEnemy_GREnemyArmorLevel() ;

// Ctor Parameters [CppParam { name: "healthThreshold", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "mainRendererMaterial", ty: "::UnityW<::UnityEngine::Material>", modifiers: "", def_value: None, comment: None }, CppParam { name: "visibleObjects", ty: "::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "hiddenObjects", ty: "::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*", modifiers: "", def_value: None, comment: None }]
constexpr GRArmorEnemy_GREnemyArmorLevel(int32_t  healthThreshold, ::UnityW<::UnityEngine::Material>  mainRendererMaterial, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  visibleObjects, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  hiddenObjects) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1878};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field healthThreshold, offset: 0x0, size: 0x4, def value: None
 int32_t  healthThreshold;

/// @brief Field mainRendererMaterial, offset: 0x8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  mainRendererMaterial;

/// @brief Field visibleObjects, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  visibleObjects;

/// @brief Field hiddenObjects, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  hiddenObjects;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRArmorEnemy_GREnemyArmorLevel, healthThreshold) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRArmorEnemy_GREnemyArmorLevel, mainRendererMaterial) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRArmorEnemy_GREnemyArmorLevel, visibleObjects) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRArmorEnemy_GREnemyArmorLevel, hiddenObjects) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRArmorEnemy_GREnemyArmorLevel) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
