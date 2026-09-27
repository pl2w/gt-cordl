#pragma once
// IWYU pragma private; include "GlobalNamespace/TappableGuardianIdol_StageActivatedObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TappableGuardianIdol_StageActivatedObject)
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
struct TappableGuardianIdol_StageActivatedObject;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::TappableGuardianIdol_StageActivatedObject);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TappableGuardianIdol_StageActivatedObject, "", "TappableGuardianIdol/StageActivatedObject");
// Dependencies UnityEngine.GameObject
namespace GlobalNamespace {
// Is value type: true
// CS Name: TappableGuardianIdol/StageActivatedObject
struct CORDL_TYPE TappableGuardianIdol_StageActivatedObject {
public:
// Declarations
/// @brief Method UpdateActiveState, addr 0x598e050, size 0x8c, virtual false, abstract: false, final false
inline void UpdateActiveState(int32_t  stage) ;

// Ctor Parameters []
// @brief default ctor
constexpr TappableGuardianIdol_StageActivatedObject() ;

// Ctor Parameters [CppParam { name: "objects", ty: "::ArrayW<::UnityW<::UnityEngine::GameObject>>", modifiers: "", def_value: None, comment: None }, CppParam { name: "min", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "max", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr TappableGuardianIdol_StageActivatedObject(::ArrayW<::UnityW<::UnityEngine::GameObject>>  objects, int32_t  min, int32_t  max) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2566};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field objects, offset: 0x0, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>>  objects;

/// @brief Field min, offset: 0x8, size: 0x4, def value: None
 int32_t  min;

/// @brief Field max, offset: 0xc, size: 0x4, def value: None
 int32_t  max;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TappableGuardianIdol_StageActivatedObject, objects) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TappableGuardianIdol_StageActivatedObject, min) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TappableGuardianIdol_StageActivatedObject, max) == 0xc, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TappableGuardianIdol_StageActivatedObject) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
