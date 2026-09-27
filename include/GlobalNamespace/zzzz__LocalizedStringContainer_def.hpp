#pragma once
// IWYU pragma private; include "GlobalNamespace/LocalizedStringContainer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(LocalizedStringContainer)
namespace UnityEngine::Localization {
class LocalizedString;
}
// Forward declare root types
namespace GlobalNamespace {
struct LocalizedStringContainer;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LocalizedStringContainer);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LocalizedStringContainer, "", "LocalizedStringContainer");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: LocalizedStringContainer
struct CORDL_TYPE LocalizedStringContainer {
public:
// Declarations
/// @brief Method GetName, addr 0x5a68dc4, size 0xb4, virtual false, abstract: false, final false
inline ::StringW GetName() ;

// Ctor Parameters []
// @brief default ctor
constexpr LocalizedStringContainer() ;

// Ctor Parameters [CppParam { name: "StringReference", ty: "::UnityEngine::Localization::LocalizedString*", modifiers: "", def_value: None, comment: None }, CppParam { name: "FallbackName", ty: "::StringW", modifiers: "", def_value: None, comment: None }]
constexpr LocalizedStringContainer(::UnityEngine::Localization::LocalizedString*  StringReference, ::StringW  FallbackName) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3088};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// [SerializeField]
/// @brief Field StringReference, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::Localization::LocalizedString*  StringReference;

/// [SerializeField]
/// @brief Field FallbackName, offset: 0x8, size: 0x8, def value: None
 ::StringW  FallbackName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LocalizedStringContainer, StringReference) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalizedStringContainer, FallbackName) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LocalizedStringContainer) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
