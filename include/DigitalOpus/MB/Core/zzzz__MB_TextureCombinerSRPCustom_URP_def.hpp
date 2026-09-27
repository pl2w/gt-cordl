#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/MB_TextureCombinerSRPCustom_URP.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(MB_TextureCombinerSRPCustom_URP)
namespace DigitalOpus::MB::Core {
class MB3_TextureCombinerPipeline_TexturePipelineData;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace DigitalOpus::MB::Core {
class MB_TextureCombinerSRPCustom_URP;
}
// Write type traits
MARK_REF_T(::DigitalOpus::MB::Core::MB_TextureCombinerSRPCustom_URP*);
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::MB_TextureCombinerSRPCustom_URP*, "DigitalOpus.MB.Core", "MB_TextureCombinerSRPCustom_URP");
// Dependencies System.Object
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.MB_TextureCombinerSRPCustom_URP
class CORDL_TYPE MB_TextureCombinerSRPCustom_URP : public ::System::Object {
public:
// Declarations
/// @brief Method ConfigureMaterialKeywords, addr 0x9debcdc, size 0x2b4, virtual false, abstract: false, final false
static inline void ConfigureMaterialKeywords(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*  data, ::UnityEngine::Material*  resultMat) ;

/// @brief Method _IsCreatingAtlasForProperty, addr 0x9dec2a4, size 0xfc, virtual false, abstract: false, final false
static inline bool _IsCreatingAtlasForProperty(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*  data, ::StringW  property) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB_TextureCombinerSRPCustom_URP() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB_TextureCombinerSRPCustom_URP", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB_TextureCombinerSRPCustom_URP(MB_TextureCombinerSRPCustom_URP && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB_TextureCombinerSRPCustom_URP", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB_TextureCombinerSRPCustom_URP(MB_TextureCombinerSRPCustom_URP const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22832};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::DigitalOpus::MB::Core::MB_TextureCombinerSRPCustom_URP) == 0x10, "Size mismatch!");

} // namespace end def DigitalOpus::MB::Core
