#pragma once
// IWYU pragma private; include "Liv/Lck/Encoding/LckNativeEncodingApi_ResourceData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(LckNativeEncodingApi_ResourceData)
// Forward declare root types
namespace GlobalNamespace {
struct LckNativeEncodingApi_ResourceData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LckNativeEncodingApi_ResourceData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LckNativeEncodingApi_ResourceData, "Liv.Lck.Encoding", "LckNativeEncodingApi/ResourceData");
// Dependencies System.IntPtr
namespace GlobalNamespace {
// Is value type: true
// CS Name: Liv.Lck.Encoding.LckNativeEncodingApi/ResourceData
#pragma pack(push, 1)
struct CORDL_TYPE LckNativeEncodingApi_ResourceData {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr LckNativeEncodingApi_ResourceData() ;

// Ctor Parameters [CppParam { name: "encoderContext", ty: "::System::IntPtr", modifiers: "", def_value: None, comment: None }]
constexpr LckNativeEncodingApi_ResourceData(::System::IntPtr  encoderContext) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24893};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field encoderContext, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr  encoderContext;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LckNativeEncodingApi_ResourceData, encoderContext) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LckNativeEncodingApi_ResourceData) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
