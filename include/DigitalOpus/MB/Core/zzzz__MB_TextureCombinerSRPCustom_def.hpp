#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/MB_TextureCombinerSRPCustom.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(MB_TextureCombinerSRPCustom)
namespace DigitalOpus::MB::Core {
class MB3_TextureCombinerPipeline_TexturePipelineData;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace DigitalOpus::MB::Core {
class MB_TextureCombinerSRPCustom;
}
// Write type traits
MARK_REF_T(::DigitalOpus::MB::Core::MB_TextureCombinerSRPCustom*);
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::MB_TextureCombinerSRPCustom*, "DigitalOpus.MB.Core", "MB_TextureCombinerSRPCustom");
// Dependencies System.Object
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.MB_TextureCombinerSRPCustom
class CORDL_TYPE MB_TextureCombinerSRPCustom : public ::System::Object {
public:
// Declarations
/// @brief Method ConfigureMaterialKeywordsIfNecessary, addr 0x9de8110, size 0xf8, virtual false, abstract: false, final false
static inline void ConfigureMaterialKeywordsIfNecessary(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*  data) ;

/// @brief Method IsURPMaterial, addr 0x9debc88, size 0x54, virtual false, abstract: false, final false
static inline bool IsURPMaterial(::UnityEngine::Material*  m) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB_TextureCombinerSRPCustom() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB_TextureCombinerSRPCustom", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB_TextureCombinerSRPCustom(MB_TextureCombinerSRPCustom && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB_TextureCombinerSRPCustom", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB_TextureCombinerSRPCustom(MB_TextureCombinerSRPCustom const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22831};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::DigitalOpus::MB::Core::MB_TextureCombinerSRPCustom) == 0x10, "Size mismatch!");

} // namespace end def DigitalOpus::MB::Core
