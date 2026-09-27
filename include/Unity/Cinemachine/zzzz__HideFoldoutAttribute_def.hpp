#pragma once
// IWYU pragma private; include "Unity/Cinemachine/HideFoldoutAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
CORDL_MODULE_EXPORT(HideFoldoutAttribute)
// Forward declare root types
namespace Unity::Cinemachine {
class HideFoldoutAttribute;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::HideFoldoutAttribute*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::HideFoldoutAttribute*, "Unity.Cinemachine", "HideFoldoutAttribute");
// Dependencies UnityEngine.PropertyAttribute
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.HideFoldoutAttribute
class CORDL_TYPE HideFoldoutAttribute : public ::UnityEngine::PropertyAttribute {
public:
// Declarations
static inline ::Unity::Cinemachine::HideFoldoutAttribute* New_ctor() ;

/// @brief Method .ctor, addr 0xaeb35e0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HideFoldoutAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HideFoldoutAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HideFoldoutAttribute(HideFoldoutAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HideFoldoutAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HideFoldoutAttribute(HideFoldoutAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22290};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Cinemachine::HideFoldoutAttribute) == 0x18, "Size mismatch!");

} // namespace end def Unity::Cinemachine
