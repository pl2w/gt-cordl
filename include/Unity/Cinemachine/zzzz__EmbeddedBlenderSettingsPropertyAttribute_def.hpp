#pragma once
// IWYU pragma private; include "Unity/Cinemachine/EmbeddedBlenderSettingsPropertyAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
CORDL_MODULE_EXPORT(EmbeddedBlenderSettingsPropertyAttribute)
// Forward declare root types
namespace Unity::Cinemachine {
class EmbeddedBlenderSettingsPropertyAttribute;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::EmbeddedBlenderSettingsPropertyAttribute*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::EmbeddedBlenderSettingsPropertyAttribute*, "Unity.Cinemachine", "EmbeddedBlenderSettingsPropertyAttribute");
// Dependencies UnityEngine.PropertyAttribute
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.EmbeddedBlenderSettingsPropertyAttribute
class CORDL_TYPE EmbeddedBlenderSettingsPropertyAttribute : public ::UnityEngine::PropertyAttribute {
public:
// Declarations
static inline ::Unity::Cinemachine::EmbeddedBlenderSettingsPropertyAttribute* New_ctor() ;

/// @brief Method .ctor, addr 0xaeb37ac, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EmbeddedBlenderSettingsPropertyAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EmbeddedBlenderSettingsPropertyAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EmbeddedBlenderSettingsPropertyAttribute(EmbeddedBlenderSettingsPropertyAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EmbeddedBlenderSettingsPropertyAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EmbeddedBlenderSettingsPropertyAttribute(EmbeddedBlenderSettingsPropertyAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22306};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Cinemachine::EmbeddedBlenderSettingsPropertyAttribute) == 0x18, "Size mismatch!");

} // namespace end def Unity::Cinemachine
