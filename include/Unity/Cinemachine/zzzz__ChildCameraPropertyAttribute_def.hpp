#pragma once
// IWYU pragma private; include "Unity/Cinemachine/ChildCameraPropertyAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
CORDL_MODULE_EXPORT(ChildCameraPropertyAttribute)
// Forward declare root types
namespace Unity::Cinemachine {
class ChildCameraPropertyAttribute;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::ChildCameraPropertyAttribute*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::ChildCameraPropertyAttribute*, "Unity.Cinemachine", "ChildCameraPropertyAttribute");
// Dependencies UnityEngine.PropertyAttribute
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.ChildCameraPropertyAttribute
class CORDL_TYPE ChildCameraPropertyAttribute : public ::UnityEngine::PropertyAttribute {
public:
// Declarations
static inline ::Unity::Cinemachine::ChildCameraPropertyAttribute* New_ctor() ;

/// @brief Method .ctor, addr 0xaeb37a4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ChildCameraPropertyAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ChildCameraPropertyAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ChildCameraPropertyAttribute(ChildCameraPropertyAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ChildCameraPropertyAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ChildCameraPropertyAttribute(ChildCameraPropertyAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22305};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Cinemachine::ChildCameraPropertyAttribute) == 0x18, "Size mismatch!");

} // namespace end def Unity::Cinemachine
