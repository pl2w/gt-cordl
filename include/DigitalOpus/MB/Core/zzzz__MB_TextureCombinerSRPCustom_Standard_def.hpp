#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/MB_TextureCombinerSRPCustom_Standard.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(MB_TextureCombinerSRPCustom_Standard)
namespace DigitalOpus::MB::Core {
class MB3_TextureCombinerPipeline_TexturePipelineData;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace DigitalOpus::MB::Core {
class MB_TextureCombinerSRPCustom_Standard;
}
// Write type traits
MARK_REF_T(::DigitalOpus::MB::Core::MB_TextureCombinerSRPCustom_Standard*);
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::MB_TextureCombinerSRPCustom_Standard*, "DigitalOpus.MB.Core", "MB_TextureCombinerSRPCustom_Standard");
// Dependencies System.Object
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.MB_TextureCombinerSRPCustom_Standard
class CORDL_TYPE MB_TextureCombinerSRPCustom_Standard : public ::System::Object {
public:
// Declarations
/// @brief Method ConfigureMaterialKeywords, addr 0x9debf90, size 0x314, virtual false, abstract: false, final false
static inline void ConfigureMaterialKeywords(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*  data, ::UnityEngine::Material*  resultMat) ;

/// @brief Method _IsCreatingAtlasForProperty, addr 0x9dec3a0, size 0xfc, virtual false, abstract: false, final false
static inline bool _IsCreatingAtlasForProperty(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*  data, ::StringW  property) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB_TextureCombinerSRPCustom_Standard() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB_TextureCombinerSRPCustom_Standard", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB_TextureCombinerSRPCustom_Standard(MB_TextureCombinerSRPCustom_Standard && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB_TextureCombinerSRPCustom_Standard", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB_TextureCombinerSRPCustom_Standard(MB_TextureCombinerSRPCustom_Standard const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22833};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::DigitalOpus::MB::Core::MB_TextureCombinerSRPCustom_Standard) == 0x10, "Size mismatch!");

} // namespace end def DigitalOpus::MB::Core
