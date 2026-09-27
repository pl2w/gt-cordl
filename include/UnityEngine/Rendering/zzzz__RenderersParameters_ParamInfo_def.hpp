#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderersParameters_ParamInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RenderersParameters_ParamInfo)
// Forward declare root types
namespace GlobalNamespace {
struct RenderersParameters_ParamInfo;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::RenderersParameters_ParamInfo);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RenderersParameters_ParamInfo, "UnityEngine.Rendering", "RenderersParameters/ParamInfo");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.RenderersParameters/ParamInfo
struct CORDL_TYPE RenderersParameters_ParamInfo {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr RenderersParameters_ParamInfo() ;

// Ctor Parameters [CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "gpuAddress", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "uintOffset", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr RenderersParameters_ParamInfo(int32_t  index, int32_t  gpuAddress, int32_t  uintOffset) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26724};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field index, offset: 0x0, size: 0x4, def value: None
 int32_t  index;

/// @brief Field gpuAddress, offset: 0x4, size: 0x4, def value: None
 int32_t  gpuAddress;

/// @brief Field uintOffset, offset: 0x8, size: 0x4, def value: None
 int32_t  uintOffset;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RenderersParameters_ParamInfo, index) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RenderersParameters_ParamInfo, gpuAddress) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RenderersParameters_ParamInfo, uintOffset) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RenderersParameters_ParamInfo) == 0xc, "Size mismatch!");

} // namespace end def GlobalNamespace
