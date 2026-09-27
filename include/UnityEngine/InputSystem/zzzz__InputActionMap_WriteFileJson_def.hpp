#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputActionMap_WriteFileJson.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__InputActionMap_WriteMapJson_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(InputActionMap_WriteFileJson)
namespace GlobalNamespace {
struct InputActionMap_WriteMapJson;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace UnityEngine::InputSystem {
class InputActionMap;
}
// Forward declare root types
namespace GlobalNamespace {
struct InputActionMap_WriteFileJson;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::InputActionMap_WriteFileJson);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InputActionMap_WriteFileJson, "UnityEngine.InputSystem", "InputActionMap/WriteFileJson");
// Dependencies UnityEngine.InputSystem.InputActionMap::WriteMapJson
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputActionMap/WriteFileJson
struct CORDL_TYPE InputActionMap_WriteFileJson {
public:
// Declarations
/// @brief Method FromMap, addr 0xaf153dc, size 0xa8, virtual false, abstract: false, final false
static inline ::GlobalNamespace::InputActionMap_WriteFileJson FromMap(::UnityEngine::InputSystem::InputActionMap*  map) ;

/// @brief Method FromMaps, addr 0xaf0f0a4, size 0x374, virtual false, abstract: false, final false
static inline ::GlobalNamespace::InputActionMap_WriteFileJson FromMaps(::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputActionMap*>*  maps) ;

// Ctor Parameters []
// @brief default ctor
constexpr InputActionMap_WriteFileJson() ;

// Ctor Parameters [CppParam { name: "maps", ty: "::ArrayW<::GlobalNamespace::InputActionMap_WriteMapJson>", modifiers: "", def_value: None, comment: None }]
constexpr InputActionMap_WriteFileJson(::ArrayW<::GlobalNamespace::InputActionMap_WriteMapJson>  maps) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13360};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field maps, offset: 0x0, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::InputActionMap_WriteMapJson>  maps;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InputActionMap_WriteFileJson, maps) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InputActionMap_WriteFileJson) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
