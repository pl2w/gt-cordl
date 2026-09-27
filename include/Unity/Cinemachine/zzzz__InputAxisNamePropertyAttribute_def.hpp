#pragma once
// IWYU pragma private; include "Unity/Cinemachine/InputAxisNamePropertyAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
CORDL_MODULE_EXPORT(InputAxisNamePropertyAttribute)
// Forward declare root types
namespace Unity::Cinemachine {
class InputAxisNamePropertyAttribute;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::InputAxisNamePropertyAttribute*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::InputAxisNamePropertyAttribute*, "Unity.Cinemachine", "InputAxisNamePropertyAttribute");
// Dependencies UnityEngine.PropertyAttribute
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.InputAxisNamePropertyAttribute
class CORDL_TYPE InputAxisNamePropertyAttribute : public ::UnityEngine::PropertyAttribute {
public:
// Declarations
static inline ::Unity::Cinemachine::InputAxisNamePropertyAttribute* New_ctor() ;

/// @brief Method .ctor, addr 0xaeb35d8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InputAxisNamePropertyAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InputAxisNamePropertyAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InputAxisNamePropertyAttribute(InputAxisNamePropertyAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputAxisNamePropertyAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputAxisNamePropertyAttribute(InputAxisNamePropertyAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22289};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Cinemachine::InputAxisNamePropertyAttribute) == 0x18, "Size mismatch!");

} // namespace end def Unity::Cinemachine
