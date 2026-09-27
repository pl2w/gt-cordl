#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/MB3_TextureCombinerPipeline_CreateAtlasForProperty.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(MB3_TextureCombinerPipeline_CreateAtlasForProperty)
// Forward declare root types
namespace GlobalNamespace {
struct MB3_TextureCombinerPipeline_CreateAtlasForProperty;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MB3_TextureCombinerPipeline_CreateAtlasForProperty);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MB3_TextureCombinerPipeline_CreateAtlasForProperty, "DigitalOpus.MB.Core", "MB3_TextureCombinerPipeline/CreateAtlasForProperty");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: DigitalOpus.MB.Core.MB3_TextureCombinerPipeline/CreateAtlasForProperty
struct CORDL_TYPE MB3_TextureCombinerPipeline_CreateAtlasForProperty {
public:
// Declarations
/// @brief Method ToString, addr 0x9de3db0, size 0x1d0, virtual true, abstract: false, final false
inline ::StringW ToString() ;

// Ctor Parameters []
// @brief default ctor
constexpr MB3_TextureCombinerPipeline_CreateAtlasForProperty() ;

// Ctor Parameters [CppParam { name: "allTexturesAreNull", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "allTexturesAreSame", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "allNonTexturePropsAreSame", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "allSrcMatsOmittedTextureProperty", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr MB3_TextureCombinerPipeline_CreateAtlasForProperty(bool  allTexturesAreNull, bool  allTexturesAreSame, bool  allNonTexturePropsAreSame, bool  allSrcMatsOmittedTextureProperty) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22819};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field allTexturesAreNull, offset: 0x0, size: 0x1, def value: None
 bool  allTexturesAreNull;

/// @brief Field allTexturesAreSame, offset: 0x1, size: 0x1, def value: None
 bool  allTexturesAreSame;

/// @brief Field allNonTexturePropsAreSame, offset: 0x2, size: 0x1, def value: None
 bool  allNonTexturePropsAreSame;

/// @brief Field allSrcMatsOmittedTextureProperty, offset: 0x3, size: 0x1, def value: None
 bool  allSrcMatsOmittedTextureProperty;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MB3_TextureCombinerPipeline_CreateAtlasForProperty, allTexturesAreNull) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_TextureCombinerPipeline_CreateAtlasForProperty, allTexturesAreSame) == 0x1, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_TextureCombinerPipeline_CreateAtlasForProperty, allNonTexturePropsAreSame) == 0x2, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_TextureCombinerPipeline_CreateAtlasForProperty, allSrcMatsOmittedTextureProperty) == 0x3, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MB3_TextureCombinerPipeline_CreateAtlasForProperty) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
