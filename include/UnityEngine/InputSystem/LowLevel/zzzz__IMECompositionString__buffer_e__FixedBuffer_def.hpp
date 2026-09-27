#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/LowLevel/IMECompositionString__buffer_e__FixedBuffer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(IMECompositionString__buffer_e__FixedBuffer)
// Forward declare root types
namespace GlobalNamespace {
struct IMECompositionString__buffer_e__FixedBuffer;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::IMECompositionString__buffer_e__FixedBuffer);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::IMECompositionString__buffer_e__FixedBuffer, "UnityEngine.InputSystem.LowLevel", "IMECompositionString/<buffer>e__FixedBuffer");
// [CompilerGenerated]
// [UnsafeValueType]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.LowLevel.IMECompositionString/<buffer>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE IMECompositionString__buffer_e__FixedBuffer {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr IMECompositionString__buffer_e__FixedBuffer() ;

// Ctor Parameters [CppParam { name: "FixedElementField", ty: "char16_t", modifiers: "", def_value: None, comment: None }]
constexpr IMECompositionString__buffer_e__FixedBuffer(char16_t  FixedElementField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13752};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x80};

/// @brief Field FixedElementField, offset: 0x0, size: 0x2, def value: None
 char16_t  FixedElementField;

/// @brief Size padding 0x80 - 0x2 = 0x7e, packed as 0x7e
 uint8_t  _cordl_size_padding[0x7e];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::IMECompositionString__buffer_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::IMECompositionString__buffer_e__FixedBuffer) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
