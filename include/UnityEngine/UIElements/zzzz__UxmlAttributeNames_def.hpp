#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UxmlAttributeNames.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(UxmlAttributeNames)
namespace System {
class Type;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct UxmlAttributeNames;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::UxmlAttributeNames);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::UxmlAttributeNames, "UnityEngine.UIElements", "UxmlAttributeNames");
// [IsReadOnly]
// Dependencies 
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.UxmlAttributeNames
struct CORDL_TYPE UxmlAttributeNames {
public:
// Declarations
/// @brief Method .ctor, addr 0xb7b7268, size 0xf8, virtual false, abstract: false, final false
inline void _ctor(::StringW  fieldName, ::StringW  uxmlName, ::System::Type*  typeReference, /* [ParamArray] */ ::ArrayW<::StringW>  obsoleteNames) ;

// Ctor Parameters []
// @brief default ctor
constexpr UxmlAttributeNames() ;

// Ctor Parameters [CppParam { name: "fieldName", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "uxmlName", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "typeReference", ty: "::System::Type*", modifiers: "", def_value: None, comment: None }, CppParam { name: "obsoleteNames", ty: "::ArrayW<::StringW>", modifiers: "", def_value: None, comment: None }]
constexpr UxmlAttributeNames(::StringW  fieldName, ::StringW  uxmlName, ::System::Type*  typeReference, ::ArrayW<::StringW>  obsoleteNames) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8398};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field fieldName, offset: 0x0, size: 0x8, def value: None
 ::StringW  fieldName;

/// @brief Field uxmlName, offset: 0x8, size: 0x8, def value: None
 ::StringW  uxmlName;

/// @brief Field typeReference, offset: 0x10, size: 0x8, def value: None
 ::System::Type*  typeReference;

/// @brief Field obsoleteNames, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::StringW>  obsoleteNames;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::UxmlAttributeNames, fieldName) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UxmlAttributeNames, uxmlName) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UxmlAttributeNames, typeReference) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UxmlAttributeNames, obsoleteNames) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::UxmlAttributeNames) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
