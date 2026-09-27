#pragma once
// IWYU pragma private; include "Fusion/NetworkAssemblyIgnoreAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(NetworkAssemblyIgnoreAttribute)
// Forward declare root types
namespace Fusion {
class NetworkAssemblyIgnoreAttribute;
}
// Write type traits
MARK_REF_T(::Fusion::NetworkAssemblyIgnoreAttribute*);
DEFINE_IL2CPP_CLASS(::Fusion::NetworkAssemblyIgnoreAttribute*, "Fusion", "NetworkAssemblyIgnoreAttribute");
// [AttributeUsage((System.AttributeTargets)1, Inherited = false, AllowMultiple = false)]
// Dependencies System.Attribute
namespace Fusion {
// Is value type: false
// CS Name: Fusion.NetworkAssemblyIgnoreAttribute
class CORDL_TYPE NetworkAssemblyIgnoreAttribute : public ::System::Attribute {
public:
// Declarations
static inline ::Fusion::NetworkAssemblyIgnoreAttribute* New_ctor() ;

/// @brief Method .ctor, addr 0x5f70054, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkAssemblyIgnoreAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkAssemblyIgnoreAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkAssemblyIgnoreAttribute(NetworkAssemblyIgnoreAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkAssemblyIgnoreAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkAssemblyIgnoreAttribute(NetworkAssemblyIgnoreAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18800};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::NetworkAssemblyIgnoreAttribute) == 0x10, "Size mismatch!");

} // namespace end def Fusion
