#pragma once
// IWYU pragma private; include "Valve/OpenXR/Utils/ValveOpenXRLeptonValidationFeature.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRFeature_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ValveOpenXRLeptonValidationFeature)
// Forward declare root types
namespace Valve::OpenXR::Utils {
class ValveOpenXRLeptonValidationFeature;
}
// Write type traits
MARK_REF_T(::Valve::OpenXR::Utils::ValveOpenXRLeptonValidationFeature*);
DEFINE_IL2CPP_CLASS(::Valve::OpenXR::Utils::ValveOpenXRLeptonValidationFeature*, "Valve.OpenXR.Utils", "ValveOpenXRLeptonValidationFeature");
// Dependencies System.Type, UnityEngine.XR.OpenXR.Features.OpenXRFeature
namespace Valve::OpenXR::Utils {
// Is value type: false
// CS Name: Valve.OpenXR.Utils.ValveOpenXRLeptonValidationFeature
class CORDL_TYPE ValveOpenXRLeptonValidationFeature : public ::UnityEngine::XR::OpenXR::Features::OpenXRFeature {
public:
// Declarations
/// @brief Field incompatibleFeatureTypes, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_incompatibleFeatureTypes, put=__cordl_internal_set_incompatibleFeatureTypes)) ::ArrayW<::System::Type*>  incompatibleFeatureTypes;

static inline ::Valve::OpenXR::Utils::ValveOpenXRLeptonValidationFeature* New_ctor() ;

constexpr ::ArrayW<::System::Type*> const& __cordl_internal_get_incompatibleFeatureTypes() const;

constexpr ::ArrayW<::System::Type*>& __cordl_internal_get_incompatibleFeatureTypes() ;

constexpr void __cordl_internal_set_incompatibleFeatureTypes(::ArrayW<::System::Type*>  value) ;

/// @brief Method .ctor, addr 0xb9416a0, size 0xfc, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ValveOpenXRLeptonValidationFeature() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ValveOpenXRLeptonValidationFeature", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ValveOpenXRLeptonValidationFeature(ValveOpenXRLeptonValidationFeature && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ValveOpenXRLeptonValidationFeature", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ValveOpenXRLeptonValidationFeature(ValveOpenXRLeptonValidationFeature const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31838};

/// @brief Field featureId offset 0xffffffff size 0x8
static constexpr ::ConstString  featureId{u"com.valvesoftware.openxr.utils.validation"};

/// @brief Field incompatibleFeatureTypes, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<::System::Type*>  ___incompatibleFeatureTypes;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Valve::OpenXR::Utils::ValveOpenXRLeptonValidationFeature, ___incompatibleFeatureTypes) == 0x50, "Offset mismatch!");

static_assert(sizeof(::Valve::OpenXR::Utils::ValveOpenXRLeptonValidationFeature) == 0x58, "Size mismatch!");

} // namespace end def Valve::OpenXR::Utils
