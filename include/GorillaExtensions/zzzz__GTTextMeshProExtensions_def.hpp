#pragma once
// IWYU pragma private; include "GorillaExtensions/GTTextMeshProExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(GTTextMeshProExtensions)
namespace Cysharp::Text {
struct Utf16ValueStringBuilder;
}
namespace TMPro {
class TMP_Text;
}
// Forward declare root types
namespace GorillaExtensions {
class GTTextMeshProExtensions;
}
// Write type traits
MARK_REF_T(::GorillaExtensions::GTTextMeshProExtensions*);
DEFINE_IL2CPP_CLASS(::GorillaExtensions::GTTextMeshProExtensions*, "GorillaExtensions", "GTTextMeshProExtensions");
// [Extension]
// Dependencies System.Object
namespace GorillaExtensions {
// Is value type: false
// CS Name: GorillaExtensions.GTTextMeshProExtensions
class CORDL_TYPE GTTextMeshProExtensions : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method SetTextToZString, addr 0x5cf7424, size 0xd8, virtual false, abstract: false, final false
static inline void SetTextToZString(::TMPro::TMP_Text*  textMono, ::Cysharp::Text::Utf16ValueStringBuilder  zStringBuilder) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GTTextMeshProExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GTTextMeshProExtensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GTTextMeshProExtensions(GTTextMeshProExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GTTextMeshProExtensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GTTextMeshProExtensions(GTTextMeshProExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4559};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GorillaExtensions::GTTextMeshProExtensions) == 0x10, "Size mismatch!");

} // namespace end def GorillaExtensions
