#pragma once
// IWYU pragma private; include "GlobalNamespace/NodeEnumAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
CORDL_MODULE_EXPORT(NodeEnumAttribute)
// Forward declare root types
namespace GlobalNamespace {
class NodeEnumAttribute;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::NodeEnumAttribute*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NodeEnumAttribute*, "", "NodeEnumAttribute");
// Dependencies UnityEngine.PropertyAttribute
namespace GlobalNamespace {
// Is value type: false
// CS Name: NodeEnumAttribute
class CORDL_TYPE NodeEnumAttribute : public ::UnityEngine::PropertyAttribute {
public:
// Declarations
static inline ::GlobalNamespace::NodeEnumAttribute* New_ctor() ;

/// @brief Method .ctor, addr 0xb98b5e0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NodeEnumAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NodeEnumAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NodeEnumAttribute(NodeEnumAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NodeEnumAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NodeEnumAttribute(NodeEnumAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32252};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::NodeEnumAttribute) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
