#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/Capabilities/ICapabilityModifier.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ICapabilityModifier)
// Forward declare root types
namespace Unity::XR::CoreUtils::Capabilities {
class ICapabilityModifier;
}
// Write type traits
MARK_REF_T(::Unity::XR::CoreUtils::Capabilities::ICapabilityModifier*);
DEFINE_IL2CPP_CLASS(::Unity::XR::CoreUtils::Capabilities::ICapabilityModifier*, "Unity.XR.CoreUtils.Capabilities", "ICapabilityModifier");
// Dependencies 
namespace Unity::XR::CoreUtils::Capabilities {
// Is value type: false
// CS Name: Unity.XR.CoreUtils.Capabilities.ICapabilityModifier
class CORDL_TYPE ICapabilityModifier {
public:
// Declarations
/// @brief Method TryGetCapabilityValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool TryGetCapabilityValue(::StringW  capabilityKey, ::by_ref<bool>  capabilityValue) ;

// Ctor Parameters [CppParam { name: "", ty: "ICapabilityModifier", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ICapabilityModifier(ICapabilityModifier const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30457};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::XR::CoreUtils::Capabilities
