#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/IAssignToMeshCustomizer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IAssignToMeshCustomizer)
// Forward declare root types
namespace DigitalOpus::MB::Core {
class IAssignToMeshCustomizer;
}
// Write type traits
MARK_REF_T(::DigitalOpus::MB::Core::IAssignToMeshCustomizer*);
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::IAssignToMeshCustomizer*, "DigitalOpus.MB.Core", "IAssignToMeshCustomizer");
// Dependencies 
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.IAssignToMeshCustomizer
class CORDL_TYPE IAssignToMeshCustomizer {
public:
// Declarations
// Ctor Parameters [CppParam { name: "", ty: "IAssignToMeshCustomizer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IAssignToMeshCustomizer(IAssignToMeshCustomizer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22737};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def DigitalOpus::MB::Core
