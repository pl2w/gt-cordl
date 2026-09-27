#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/IComponentHost_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(IComponentHost_1)
// Forward declare root types
namespace Unity::XR::CoreUtils {
template<typename THostType>
class IComponentHost_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Unity::XR::CoreUtils::IComponentHost_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Unity::XR::CoreUtils::IComponentHost_1, "Unity.XR.CoreUtils", "IComponentHost`1");
// Dependencies 
namespace Unity::XR::CoreUtils {
// cpp template
template<typename THostType>
// Is value type: false
// CS Name: Unity.XR.CoreUtils.IComponentHost`1<THostType>
class CORDL_TYPE IComponentHost_1 {
public:
// Declarations
 __declspec(property(get=get_HostedComponents)) ::ArrayW<THostType>  HostedComponents;

/// @brief Method get_HostedComponents, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::ArrayW<THostType> get_HostedComponents() ;

// Ctor Parameters [CppParam { name: "", ty: "IComponentHost_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IComponentHost_1(IComponentHost_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30380};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::XR::CoreUtils
