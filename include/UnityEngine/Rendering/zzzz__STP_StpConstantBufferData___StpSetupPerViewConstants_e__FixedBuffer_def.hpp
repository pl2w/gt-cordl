#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/STP_StpConstantBufferData___StpSetupPerViewConstants_e__FixedBuffer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(STP_StpConstantBufferData___StpSetupPerViewConstants_e__FixedBuffer)
// Forward declare root types
namespace GlobalNamespace {
struct StpConstantBufferData_STP___StpSetupPerViewConstants_e__FixedBuffer;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::StpConstantBufferData_STP___StpSetupPerViewConstants_e__FixedBuffer);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::StpConstantBufferData_STP___StpSetupPerViewConstants_e__FixedBuffer, "UnityEngine.Rendering", "STP/StpConstantBufferData/<_StpSetupPerViewConstants>e__FixedBuffer");
// [CompilerGenerated]
// [UnsafeValueType]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.STP/StpConstantBufferData/<_StpSetupPerViewConstants>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE StpConstantBufferData_STP___StpSetupPerViewConstants_e__FixedBuffer {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr StpConstantBufferData_STP___StpSetupPerViewConstants_e__FixedBuffer() ;

// Ctor Parameters [CppParam { name: "FixedElementField", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr StpConstantBufferData_STP___StpSetupPerViewConstants_e__FixedBuffer(float_t  FixedElementField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16946};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x100};

/// @brief Field FixedElementField, offset: 0x0, size: 0x4, def value: None
 float_t  FixedElementField;

/// @brief Size padding 0x100 - 0x4 = 0xfc, packed as 0xfc
 uint8_t  _cordl_size_padding[0xfc];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::StpConstantBufferData_STP___StpSetupPerViewConstants_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::StpConstantBufferData_STP___StpSetupPerViewConstants_e__FixedBuffer) == 0x100, "Size mismatch!");

} // namespace end def GlobalNamespace
