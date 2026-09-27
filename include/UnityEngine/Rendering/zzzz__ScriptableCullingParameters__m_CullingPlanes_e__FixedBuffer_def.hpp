#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ScriptableCullingParameters__m_CullingPlanes_e__FixedBuffer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ScriptableCullingParameters__m_CullingPlanes_e__FixedBuffer)
// Forward declare root types
namespace GlobalNamespace {
struct ScriptableCullingParameters__m_CullingPlanes_e__FixedBuffer;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ScriptableCullingParameters__m_CullingPlanes_e__FixedBuffer);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ScriptableCullingParameters__m_CullingPlanes_e__FixedBuffer, "UnityEngine.Rendering", "ScriptableCullingParameters/<m_CullingPlanes>e__FixedBuffer");
// [CompilerGenerated]
// [UnsafeValueType]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.ScriptableCullingParameters/<m_CullingPlanes>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE ScriptableCullingParameters__m_CullingPlanes_e__FixedBuffer {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr ScriptableCullingParameters__m_CullingPlanes_e__FixedBuffer() ;

// Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint8_t", modifiers: "", def_value: None, comment: None }]
constexpr ScriptableCullingParameters__m_CullingPlanes_e__FixedBuffer(uint8_t  FixedElementField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15533};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xa0};

/// @brief Field FixedElementField, offset: 0x0, size: 0x1, def value: None
 uint8_t  FixedElementField;

/// @brief Size padding 0xa0 - 0x1 = 0x9f, packed as 0x9f
 uint8_t  _cordl_size_padding[0x9f];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ScriptableCullingParameters__m_CullingPlanes_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ScriptableCullingParameters__m_CullingPlanes_e__FixedBuffer) == 0xa0, "Size mismatch!");

} // namespace end def GlobalNamespace
