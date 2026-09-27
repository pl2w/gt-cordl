#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/RegisterUxmlCacheAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(RegisterUxmlCacheAttribute)
// Forward declare root types
namespace UnityEngine::UIElements {
class RegisterUxmlCacheAttribute;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::RegisterUxmlCacheAttribute*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::RegisterUxmlCacheAttribute*, "UnityEngine.UIElements", "RegisterUxmlCacheAttribute");
// [AttributeUsage((System.AttributeTargets)64)]
// Dependencies System.Attribute
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.RegisterUxmlCacheAttribute
class CORDL_TYPE RegisterUxmlCacheAttribute : public ::System::Attribute {
public:
// Declarations
static inline ::UnityEngine::UIElements::RegisterUxmlCacheAttribute* New_ctor() ;

/// @brief Method .ctor, addr 0xb7b7360, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RegisterUxmlCacheAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RegisterUxmlCacheAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RegisterUxmlCacheAttribute(RegisterUxmlCacheAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RegisterUxmlCacheAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RegisterUxmlCacheAttribute(RegisterUxmlCacheAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8399};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::RegisterUxmlCacheAttribute) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
