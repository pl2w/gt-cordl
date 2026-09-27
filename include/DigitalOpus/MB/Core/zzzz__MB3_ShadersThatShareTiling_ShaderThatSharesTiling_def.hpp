#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/MB3_ShadersThatShareTiling_ShaderThatSharesTiling.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(MB3_ShadersThatShareTiling_ShaderThatSharesTiling)
// Forward declare root types
namespace GlobalNamespace {
struct MB3_ShadersThatShareTiling_ShaderThatSharesTiling;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MB3_ShadersThatShareTiling_ShaderThatSharesTiling);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MB3_ShadersThatShareTiling_ShaderThatSharesTiling, "DigitalOpus.MB.Core", "MB3_ShadersThatShareTiling/ShaderThatSharesTiling");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: DigitalOpus.MB.Core.MB3_ShadersThatShareTiling/ShaderThatSharesTiling
struct CORDL_TYPE MB3_ShadersThatShareTiling_ShaderThatSharesTiling {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr MB3_ShadersThatShareTiling_ShaderThatSharesTiling() ;

// Ctor Parameters [CppParam { name: "shadername", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "allPropsShareTiling", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "tilingTexturePropName", ty: "::StringW", modifiers: "", def_value: None, comment: None }]
constexpr MB3_ShadersThatShareTiling_ShaderThatSharesTiling(::StringW  shadername, bool  allPropsShareTiling, ::StringW  tilingTexturePropName) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22730};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field shadername, offset: 0x0, size: 0x8, def value: None
 ::StringW  shadername;

/// @brief Field allPropsShareTiling, offset: 0x8, size: 0x1, def value: None
 bool  allPropsShareTiling;

/// @brief Field tilingTexturePropName, offset: 0x10, size: 0x8, def value: None
 ::StringW  tilingTexturePropName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MB3_ShadersThatShareTiling_ShaderThatSharesTiling, shadername) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_ShadersThatShareTiling_ShaderThatSharesTiling, allPropsShareTiling) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_ShadersThatShareTiling_ShaderThatSharesTiling, tilingTexturePropName) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MB3_ShadersThatShareTiling_ShaderThatSharesTiling) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
