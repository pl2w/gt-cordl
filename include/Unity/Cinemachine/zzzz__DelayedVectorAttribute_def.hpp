#pragma once
// IWYU pragma private; include "Unity/Cinemachine/DelayedVectorAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
CORDL_MODULE_EXPORT(DelayedVectorAttribute)
// Forward declare root types
namespace Unity::Cinemachine {
class DelayedVectorAttribute;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::DelayedVectorAttribute*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::DelayedVectorAttribute*, "Unity.Cinemachine", "DelayedVectorAttribute");
// Dependencies UnityEngine.PropertyAttribute
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.DelayedVectorAttribute
class CORDL_TYPE DelayedVectorAttribute : public ::UnityEngine::PropertyAttribute {
public:
// Declarations
static inline ::Unity::Cinemachine::DelayedVectorAttribute* New_ctor() ;

/// @brief Method .ctor, addr 0xaeb372c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DelayedVectorAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DelayedVectorAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DelayedVectorAttribute(DelayedVectorAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DelayedVectorAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DelayedVectorAttribute(DelayedVectorAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22301};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Cinemachine::DelayedVectorAttribute) == 0x18, "Size mismatch!");

} // namespace end def Unity::Cinemachine
