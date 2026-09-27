#pragma once
// IWYU pragma private; include "Unity/Cinemachine/TagFieldAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
CORDL_MODULE_EXPORT(TagFieldAttribute)
// Forward declare root types
namespace Unity::Cinemachine {
class TagFieldAttribute;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::TagFieldAttribute*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::TagFieldAttribute*, "Unity.Cinemachine", "TagFieldAttribute");
// Dependencies UnityEngine.PropertyAttribute
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.TagFieldAttribute
class CORDL_TYPE TagFieldAttribute : public ::UnityEngine::PropertyAttribute {
public:
// Declarations
static inline ::Unity::Cinemachine::TagFieldAttribute* New_ctor() ;

/// @brief Method .ctor, addr 0xaeb36f4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TagFieldAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TagFieldAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TagFieldAttribute(TagFieldAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TagFieldAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TagFieldAttribute(TagFieldAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22298};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Cinemachine::TagFieldAttribute) == 0x18, "Size mismatch!");

} // namespace end def Unity::Cinemachine
