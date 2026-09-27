#pragma once
// IWYU pragma private; include "GlobalNamespace/GTBitOps_BitWriteInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GTBitOps_BitWriteInfo)
// Forward declare root types
namespace GlobalNamespace {
struct GTBitOps_BitWriteInfo;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GTBitOps_BitWriteInfo);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GTBitOps_BitWriteInfo, "", "GTBitOps/BitWriteInfo");
// [IsReadOnly]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GTBitOps/BitWriteInfo
struct CORDL_TYPE GTBitOps_BitWriteInfo {
public:
// Declarations
/// @brief Method .ctor, addr 0x5676110, size 0x20, virtual false, abstract: false, final false
inline void _ctor(int32_t  index, int32_t  count) ;

// Ctor Parameters []
// @brief default ctor
constexpr GTBitOps_BitWriteInfo() ;

// Ctor Parameters [CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "valueMask", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "clearMask", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GTBitOps_BitWriteInfo(int32_t  index, int32_t  valueMask, int32_t  clearMask) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{839};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field index, offset: 0x0, size: 0x4, def value: None
 int32_t  index;

/// @brief Field valueMask, offset: 0x4, size: 0x4, def value: None
 int32_t  valueMask;

/// @brief Field clearMask, offset: 0x8, size: 0x4, def value: None
 int32_t  clearMask;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GTBitOps_BitWriteInfo, index) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTBitOps_BitWriteInfo, valueMask) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTBitOps_BitWriteInfo, clearMask) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GTBitOps_BitWriteInfo) == 0xc, "Size mismatch!");

} // namespace end def GlobalNamespace
