#pragma once
// IWYU pragma private; include "System/IO/Stream_ReadWriteParameters.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Stream_ReadWriteParameters)
// Forward declare root types
namespace GlobalNamespace {
struct Stream_ReadWriteParameters;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Stream_ReadWriteParameters);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Stream_ReadWriteParameters, "System.IO", "Stream/ReadWriteParameters");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.IO.Stream/ReadWriteParameters
struct CORDL_TYPE Stream_ReadWriteParameters {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr Stream_ReadWriteParameters() ;

// Ctor Parameters [CppParam { name: "Buffer", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "Offset", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Count", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Stream_ReadWriteParameters(::ArrayW<uint8_t>  Buffer, int32_t  Offset, int32_t  Count) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7044};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field Buffer, offset: 0x0, size: 0x8, def value: None
 ::ArrayW<uint8_t>  Buffer;

/// @brief Field Offset, offset: 0x8, size: 0x4, def value: None
 int32_t  Offset;

/// @brief Field Count, offset: 0xc, size: 0x4, def value: None
 int32_t  Count;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Stream_ReadWriteParameters, Buffer) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Stream_ReadWriteParameters, Offset) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Stream_ReadWriteParameters, Count) == 0xc, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Stream_ReadWriteParameters) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
