#pragma once
// IWYU pragma private; include "Meta/XR/IEnvironmentRaycastProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
CORDL_MODULE_EXPORT(IEnvironmentRaycastProvider)
namespace Meta::XR {
struct EnvironmentRaycastHit;
}
namespace UnityEngine {
struct Ray;
}
// Forward declare root types
namespace Meta::XR {
class IEnvironmentRaycastProvider;
}
// Write type traits
MARK_REF_T(::Meta::XR::IEnvironmentRaycastProvider*);
DEFINE_IL2CPP_CLASS(::Meta::XR::IEnvironmentRaycastProvider*, "Meta.XR", "IEnvironmentRaycastProvider");
// Dependencies 
namespace Meta::XR {
// Is value type: false
// CS Name: Meta.XR.IEnvironmentRaycastProvider
class CORDL_TYPE IEnvironmentRaycastProvider {
public:
// Declarations
 __declspec(property(get=get_IsReady)) bool  IsReady;

 __declspec(property(get=get_IsSupported)) bool  IsSupported;

/// @brief Method Raycast, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool Raycast(::UnityEngine::Ray  ray, ::by_ref<::Meta::XR::EnvironmentRaycastHit>  hit, float_t  maxDistance, bool  reconstructNormal, bool  allowOccludedRayOrigin) ;

/// @brief Method SetEnabled, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void SetEnabled(bool  isEnabled) ;

/// @brief Method get_IsReady, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_IsReady() ;

/// @brief Method get_IsSupported, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_IsSupported() ;

// Ctor Parameters [CppParam { name: "", ty: "IEnvironmentRaycastProvider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IEnvironmentRaycastProvider(IEnvironmentRaycastProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25760};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Meta::XR
