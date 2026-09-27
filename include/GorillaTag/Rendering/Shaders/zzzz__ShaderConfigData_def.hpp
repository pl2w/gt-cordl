#pragma once
// IWYU pragma private; include "GorillaTag/Rendering/Shaders/ShaderConfigData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ShaderConfigData)
namespace GlobalNamespace {
struct ShaderConfigData_MatPropFloat;
}
namespace GlobalNamespace {
struct ShaderConfigData_MatPropInt;
}
namespace GlobalNamespace {
struct ShaderConfigData_MatPropMatrix;
}
namespace GlobalNamespace {
struct ShaderConfigData_MatPropTexture;
}
namespace GlobalNamespace {
struct ShaderConfigData_MatPropVector;
}
namespace GlobalNamespace {
struct ShaderConfigData_RenderersForShaderWithSameProperties;
}
namespace GlobalNamespace {
struct ShaderConfigData_ShaderConfig;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace GorillaTag::Rendering::Shaders {
class ShaderConfigData;
}
// Write type traits
MARK_REF_T(::GorillaTag::Rendering::Shaders::ShaderConfigData*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Rendering::Shaders::ShaderConfigData*, "GorillaTag.Rendering.Shaders", "ShaderConfigData");
// Dependencies System.Object
namespace GorillaTag::Rendering::Shaders {
// Is value type: false
// CS Name: GorillaTag.Rendering.Shaders.ShaderConfigData
class CORDL_TYPE ShaderConfigData : public ::System::Object {
public:
// Declarations
using MatPropFloat = ::GlobalNamespace::ShaderConfigData_MatPropFloat;

using MatPropInt = ::GlobalNamespace::ShaderConfigData_MatPropInt;

using MatPropMatrix = ::GlobalNamespace::ShaderConfigData_MatPropMatrix;

using MatPropTexture = ::GlobalNamespace::ShaderConfigData_MatPropTexture;

using MatPropVector = ::GlobalNamespace::ShaderConfigData_MatPropVector;

using RenderersForShaderWithSameProperties = ::GlobalNamespace::ShaderConfigData_RenderersForShaderWithSameProperties;

using ShaderConfig = ::GlobalNamespace::ShaderConfigData_ShaderConfig;

/// @brief Method GetConfigDataFromMaterial, addr 0x5d5f048, size 0xc8c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::ShaderConfigData_ShaderConfig GetConfigDataFromMaterial(::UnityEngine::Material*  mat, bool  includeMainTexData) ;

/// @brief Method GetShaderPropertiesStringFromMaterial, addr 0x5d5eae0, size 0x568, virtual false, abstract: false, final false
static inline ::StringW GetShaderPropertiesStringFromMaterial(::UnityEngine::Material*  mat, bool  excludeMainTexData) ;

static inline ::GorillaTag::Rendering::Shaders::ShaderConfigData* New_ctor() ;

/// @brief Method .ctor, addr 0x5d5fddc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method convertFloats, addr 0x5d5e640, size 0x118, virtual false, abstract: false, final false
static inline ::ArrayW<::GlobalNamespace::ShaderConfigData_MatPropFloat> convertFloats(::ArrayW<::StringW>  names, ::ArrayW<float_t>  vals) ;

/// @brief Method convertInts, addr 0x5d5e528, size 0x118, virtual false, abstract: false, final false
static inline ::ArrayW<::GlobalNamespace::ShaderConfigData_MatPropInt> convertInts(::ArrayW<::StringW>  names, ::ArrayW<int32_t>  vals) ;

/// @brief Method convertMatrices, addr 0x5d5e758, size 0x148, virtual false, abstract: false, final false
static inline ::ArrayW<::GlobalNamespace::ShaderConfigData_MatPropMatrix> convertMatrices(::ArrayW<::StringW>  names, ::ArrayW<::UnityEngine::Matrix4x4>  vals) ;

/// @brief Method convertTextures, addr 0x5d5e9bc, size 0x124, virtual false, abstract: false, final false
static inline ::ArrayW<::GlobalNamespace::ShaderConfigData_MatPropTexture> convertTextures(::ArrayW<::StringW>  names, ::ArrayW<::UnityEngine::Texture*>  vals) ;

/// @brief Method convertVectors, addr 0x5d5e8a0, size 0x11c, virtual false, abstract: false, final false
static inline ::ArrayW<::GlobalNamespace::ShaderConfigData_MatPropVector> convertVectors(::ArrayW<::StringW>  names, ::ArrayW<::UnityEngine::Vector4>  vals) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ShaderConfigData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ShaderConfigData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ShaderConfigData(ShaderConfigData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ShaderConfigData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ShaderConfigData(ShaderConfigData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4825};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GorillaTag::Rendering::Shaders::ShaderConfigData) == 0x10, "Size mismatch!");

} // namespace end def GorillaTag::Rendering::Shaders
