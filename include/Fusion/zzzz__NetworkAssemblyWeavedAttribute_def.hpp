#pragma once
// IWYU pragma private; include "Fusion/NetworkAssemblyWeavedAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(NetworkAssemblyWeavedAttribute)
// Forward declare root types
namespace Fusion {
class NetworkAssemblyWeavedAttribute;
}
// Write type traits
MARK_REF_T(::Fusion::NetworkAssemblyWeavedAttribute*);
DEFINE_IL2CPP_CLASS(::Fusion::NetworkAssemblyWeavedAttribute*, "Fusion", "NetworkAssemblyWeavedAttribute");
// [AttributeUsage((System.AttributeTargets)1, Inherited = false, AllowMultiple = false)]
// Dependencies System.Attribute
namespace Fusion {
// Is value type: false
// CS Name: Fusion.NetworkAssemblyWeavedAttribute
class CORDL_TYPE NetworkAssemblyWeavedAttribute : public ::System::Attribute {
public:
// Declarations
static inline ::Fusion::NetworkAssemblyWeavedAttribute* New_ctor() ;

/// @brief Method .ctor, addr 0x5f7005c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkAssemblyWeavedAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkAssemblyWeavedAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkAssemblyWeavedAttribute(NetworkAssemblyWeavedAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkAssemblyWeavedAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkAssemblyWeavedAttribute(NetworkAssemblyWeavedAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18801};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::NetworkAssemblyWeavedAttribute) == 0x10, "Size mismatch!");

} // namespace end def Fusion
