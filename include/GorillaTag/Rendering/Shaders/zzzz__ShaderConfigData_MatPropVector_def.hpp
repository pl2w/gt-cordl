#pragma once
// IWYU pragma private; include "GorillaTag/Rendering/Shaders/ShaderConfigData_MatPropVector.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ShaderConfigData_MatPropVector)
// Forward declare root types
namespace GlobalNamespace {
struct ShaderConfigData_MatPropVector;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ShaderConfigData_MatPropVector);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ShaderConfigData_MatPropVector, "GorillaTag.Rendering.Shaders", "ShaderConfigData/MatPropVector");
// Dependencies UnityEngine.Vector4
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTag.Rendering.Shaders.ShaderConfigData/MatPropVector
struct CORDL_TYPE ShaderConfigData_MatPropVector {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr ShaderConfigData_MatPropVector() ;

// Ctor Parameters [CppParam { name: "vectorName", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "vectorVal", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None, comment: None }]
constexpr ShaderConfigData_MatPropVector(::StringW  vectorName, ::UnityEngine::Vector4  vectorVal) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4822};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field vectorName, offset: 0x0, size: 0x8, def value: None
 ::StringW  vectorName;

/// @brief Field vectorVal, offset: 0x8, size: 0x10, def value: None
 ::UnityEngine::Vector4  vectorVal;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ShaderConfigData_MatPropVector, vectorName) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ShaderConfigData_MatPropVector, vectorVal) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ShaderConfigData_MatPropVector) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
