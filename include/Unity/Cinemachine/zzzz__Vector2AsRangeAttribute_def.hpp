#pragma once
// IWYU pragma private; include "Unity/Cinemachine/Vector2AsRangeAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
CORDL_MODULE_EXPORT(Vector2AsRangeAttribute)
// Forward declare root types
namespace Unity::Cinemachine {
class Vector2AsRangeAttribute;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::Vector2AsRangeAttribute*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::Vector2AsRangeAttribute*, "Unity.Cinemachine", "Vector2AsRangeAttribute");
// Dependencies UnityEngine.PropertyAttribute
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.Vector2AsRangeAttribute
class CORDL_TYPE Vector2AsRangeAttribute : public ::UnityEngine::PropertyAttribute {
public:
// Declarations
static inline ::Unity::Cinemachine::Vector2AsRangeAttribute* New_ctor() ;

/// @brief Method .ctor, addr 0xaeb3724, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Vector2AsRangeAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Vector2AsRangeAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Vector2AsRangeAttribute(Vector2AsRangeAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Vector2AsRangeAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Vector2AsRangeAttribute(Vector2AsRangeAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22300};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Cinemachine::Vector2AsRangeAttribute) == 0x18, "Size mismatch!");

} // namespace end def Unity::Cinemachine
