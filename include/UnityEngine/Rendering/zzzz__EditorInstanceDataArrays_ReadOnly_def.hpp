#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/EditorInstanceDataArrays_ReadOnly.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(EditorInstanceDataArrays_ReadOnly)
namespace UnityEngine::Rendering {
struct CPUInstanceData;
}
// Forward declare root types
namespace GlobalNamespace {
struct EditorInstanceDataArrays_ReadOnly;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::EditorInstanceDataArrays_ReadOnly);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EditorInstanceDataArrays_ReadOnly, "UnityEngine.Rendering", "EditorInstanceDataArrays/ReadOnly");
// [IsReadOnly]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.EditorInstanceDataArrays/ReadOnly
#pragma pack(push, 0)
struct CORDL_TYPE EditorInstanceDataArrays_ReadOnly {
public:
// Declarations
/// @brief Method .ctor, addr 0xb1ffaec, size 0x4, virtual false, abstract: false, final false
inline void _ctor(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::CPUInstanceData>  instanceData) ;

// Ctor Parameters []
// @brief default ctor
constexpr EditorInstanceDataArrays_ReadOnly() ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26629};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
 uint8_t  _cordl_size_padding[0x1];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::EditorInstanceDataArrays_ReadOnly) == 0x1, "Size mismatch!");

} // namespace end def GlobalNamespace
