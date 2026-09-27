#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/GUI/FlagsPropertyAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
CORDL_MODULE_EXPORT(FlagsPropertyAttribute)
// Forward declare root types
namespace Unity::XR::CoreUtils::GUI {
class FlagsPropertyAttribute;
}
// Write type traits
MARK_REF_T(::Unity::XR::CoreUtils::GUI::FlagsPropertyAttribute*);
DEFINE_IL2CPP_CLASS(::Unity::XR::CoreUtils::GUI::FlagsPropertyAttribute*, "Unity.XR.CoreUtils.GUI", "FlagsPropertyAttribute");
// Dependencies UnityEngine.PropertyAttribute
namespace Unity::XR::CoreUtils::GUI {
// Is value type: false
// CS Name: Unity.XR.CoreUtils.GUI.FlagsPropertyAttribute
class CORDL_TYPE FlagsPropertyAttribute : public ::UnityEngine::PropertyAttribute {
public:
// Declarations
static inline ::Unity::XR::CoreUtils::GUI::FlagsPropertyAttribute* New_ctor() ;

/// @brief Method .ctor, addr 0xb3fe048, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FlagsPropertyAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FlagsPropertyAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FlagsPropertyAttribute(FlagsPropertyAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FlagsPropertyAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FlagsPropertyAttribute(FlagsPropertyAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30471};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::XR::CoreUtils::GUI::FlagsPropertyAttribute) == 0x18, "Size mismatch!");

} // namespace end def Unity::XR::CoreUtils::GUI
