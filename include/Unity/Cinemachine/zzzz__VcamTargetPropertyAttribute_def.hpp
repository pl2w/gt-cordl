#pragma once
// IWYU pragma private; include "Unity/Cinemachine/VcamTargetPropertyAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
CORDL_MODULE_EXPORT(VcamTargetPropertyAttribute)
// Forward declare root types
namespace Unity::Cinemachine {
class VcamTargetPropertyAttribute;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::VcamTargetPropertyAttribute*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::VcamTargetPropertyAttribute*, "Unity.Cinemachine", "VcamTargetPropertyAttribute");
// [Obsolete]
// Dependencies UnityEngine.PropertyAttribute
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.VcamTargetPropertyAttribute
class CORDL_TYPE VcamTargetPropertyAttribute : public ::UnityEngine::PropertyAttribute {
public:
// Declarations
static inline ::Unity::Cinemachine::VcamTargetPropertyAttribute* New_ctor() ;

/// @brief Method .ctor, addr 0xaede1e4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VcamTargetPropertyAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VcamTargetPropertyAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VcamTargetPropertyAttribute(VcamTargetPropertyAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VcamTargetPropertyAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VcamTargetPropertyAttribute(VcamTargetPropertyAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22450};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Cinemachine::VcamTargetPropertyAttribute) == 0x18, "Size mismatch!");

} // namespace end def Unity::Cinemachine
