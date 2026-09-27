#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineImpulseChannelPropertyAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
CORDL_MODULE_EXPORT(CinemachineImpulseChannelPropertyAttribute)
// Forward declare root types
namespace Unity::Cinemachine {
class CinemachineImpulseChannelPropertyAttribute;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::CinemachineImpulseChannelPropertyAttribute*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachineImpulseChannelPropertyAttribute*, "Unity.Cinemachine", "CinemachineImpulseChannelPropertyAttribute");
// Dependencies UnityEngine.PropertyAttribute
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachineImpulseChannelPropertyAttribute
class CORDL_TYPE CinemachineImpulseChannelPropertyAttribute : public ::UnityEngine::PropertyAttribute {
public:
// Declarations
static inline ::Unity::Cinemachine::CinemachineImpulseChannelPropertyAttribute* New_ctor() ;

/// @brief Method .ctor, addr 0xaee4128, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineImpulseChannelPropertyAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CinemachineImpulseChannelPropertyAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CinemachineImpulseChannelPropertyAttribute(CinemachineImpulseChannelPropertyAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CinemachineImpulseChannelPropertyAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachineImpulseChannelPropertyAttribute(CinemachineImpulseChannelPropertyAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22478};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Cinemachine::CinemachineImpulseChannelPropertyAttribute) == 0x18, "Size mismatch!");

} // namespace end def Unity::Cinemachine
