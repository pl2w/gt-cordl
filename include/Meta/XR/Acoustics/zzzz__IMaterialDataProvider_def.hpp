#pragma once
// IWYU pragma private; include "Meta/XR/Acoustics/IMaterialDataProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(IMaterialDataProvider)
namespace Meta::XR::Acoustics {
class MaterialData;
}
// Forward declare root types
namespace Meta::XR::Acoustics {
class IMaterialDataProvider;
}
// Write type traits
MARK_REF_T(::Meta::XR::Acoustics::IMaterialDataProvider*);
DEFINE_IL2CPP_CLASS(::Meta::XR::Acoustics::IMaterialDataProvider*, "Meta.XR.Acoustics", "IMaterialDataProvider");
// Dependencies 
namespace Meta::XR::Acoustics {
// Is value type: false
// CS Name: Meta.XR.Acoustics.IMaterialDataProvider
class CORDL_TYPE IMaterialDataProvider {
public:
// Declarations
 __declspec(property(get=get_Data)) ::Meta::XR::Acoustics::MaterialData*  Data;

 __declspec(property(get=get_name)) ::StringW  name;

/// @brief Method get_Data, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Meta::XR::Acoustics::MaterialData* get_Data() ;

/// @brief Method get_name, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW get_name() ;

// Ctor Parameters [CppParam { name: "", ty: "IMaterialDataProvider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IMaterialDataProvider(IMaterialDataProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29964};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Meta::XR::Acoustics
