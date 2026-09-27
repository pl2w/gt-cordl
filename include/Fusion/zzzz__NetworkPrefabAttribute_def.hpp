#pragma once
// IWYU pragma private; include "Fusion/NetworkPrefabAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__PropertyAttribute_def.hpp"
CORDL_MODULE_EXPORT(NetworkPrefabAttribute)
// Forward declare root types
namespace Fusion {
class NetworkPrefabAttribute;
}
// Write type traits
MARK_REF_T(::Fusion::NetworkPrefabAttribute*);
DEFINE_IL2CPP_CLASS(::Fusion::NetworkPrefabAttribute*, "Fusion", "NetworkPrefabAttribute");
// [AttributeUsage((System.AttributeTargets)256, AllowMultiple = false, Inherited = false)]
// Dependencies Fusion.PropertyAttribute
namespace Fusion {
// Is value type: false
// CS Name: Fusion.NetworkPrefabAttribute
class CORDL_TYPE NetworkPrefabAttribute : public ::Fusion::PropertyAttribute {
public:
// Declarations
static inline ::Fusion::NetworkPrefabAttribute* New_ctor() ;

/// @brief Method .ctor, addr 0x5f70214, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkPrefabAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkPrefabAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkPrefabAttribute(NetworkPrefabAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkPrefabAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkPrefabAttribute(NetworkPrefabAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18809};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::NetworkPrefabAttribute) == 0x18, "Size mismatch!");

} // namespace end def Fusion
