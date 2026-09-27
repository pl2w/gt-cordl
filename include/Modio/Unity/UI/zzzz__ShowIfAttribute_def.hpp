#pragma once
// IWYU pragma private; include "Modio/Unity/UI/ShowIfAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ShowIfAttribute)
// Forward declare root types
namespace Modio::Unity::UI {
class ShowIfAttribute;
}
// Write type traits
MARK_REF_T(::Modio::Unity::UI::ShowIfAttribute*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::ShowIfAttribute*, "Modio.Unity.UI", "ShowIfAttribute");
// [AttributeUsage((System.AttributeTargets)256)]
// Dependencies UnityEngine.PropertyAttribute
namespace Modio::Unity::UI {
// Is value type: false
// CS Name: Modio.Unity.UI.ShowIfAttribute
class CORDL_TYPE ShowIfAttribute : public ::UnityEngine::PropertyAttribute {
public:
// Declarations
static inline ::Modio::Unity::UI::ShowIfAttribute* New_ctor(::StringW  predicateName) ;

/// @brief Method .ctor, addr 0x9f9dd0c, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::StringW  predicateName) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ShowIfAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ShowIfAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ShowIfAttribute(ShowIfAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ShowIfAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ShowIfAttribute(ShowIfAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27031};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::Unity::UI::ShowIfAttribute) == 0x18, "Size mismatch!");

} // namespace end def Modio::Unity::UI
