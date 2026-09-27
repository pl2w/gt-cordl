#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/ReflectionProbeManager_CachedProbe__levels_e__FixedBuffer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ReflectionProbeManager_CachedProbe__levels_e__FixedBuffer)
// Forward declare root types
namespace GlobalNamespace {
struct CachedProbe_ReflectionProbeManager__levels_e__FixedBuffer;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CachedProbe_ReflectionProbeManager__levels_e__FixedBuffer);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CachedProbe_ReflectionProbeManager__levels_e__FixedBuffer, "UnityEngine.Rendering.Universal", "ReflectionProbeManager/CachedProbe/<levels>e__FixedBuffer");
// [CompilerGenerated]
// [UnsafeValueType]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.ReflectionProbeManager/CachedProbe/<levels>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE CachedProbe_ReflectionProbeManager__levels_e__FixedBuffer {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr CachedProbe_ReflectionProbeManager__levels_e__FixedBuffer() ;

// Ctor Parameters [CppParam { name: "FixedElementField", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr CachedProbe_ReflectionProbeManager__levels_e__FixedBuffer(int32_t  FixedElementField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18545};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1c};

/// @brief Field FixedElementField, offset: 0x0, size: 0x4, def value: None
 int32_t  FixedElementField;

/// @brief Size padding 0x1c - 0x4 = 0x18, packed as 0x18
 uint8_t  _cordl_size_padding[0x18];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CachedProbe_ReflectionProbeManager__levels_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CachedProbe_ReflectionProbeManager__levels_e__FixedBuffer) == 0x1c, "Size mismatch!");

} // namespace end def GlobalNamespace
