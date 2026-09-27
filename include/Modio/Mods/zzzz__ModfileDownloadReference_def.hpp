#pragma once
// IWYU pragma private; include "Modio/Mods/ModfileDownloadReference.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTime_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ModfileDownloadReference)
namespace Modio::API::SchemaDefinitions {
struct DownloadObject;
}
namespace System {
struct DateTime;
}
// Forward declare root types
namespace Modio::Mods {
struct ModfileDownloadReference;
}
// Write type traits
MARK_VAL_T(::Modio::Mods::ModfileDownloadReference);
DEFINE_IL2CPP_CLASS(::Modio::Mods::ModfileDownloadReference, "Modio.Mods", "ModfileDownloadReference");
// Dependencies System.DateTime
namespace Modio::Mods {
// Is value type: true
// CS Name: Modio.Mods.ModfileDownloadReference
struct CORDL_TYPE ModfileDownloadReference {
public:
// Declarations
/// @brief Method .ctor, addr 0xa030c74, size 0x28, virtual false, abstract: false, final false
inline void _ctor(::StringW  binaryUrl, ::System::DateTime  expiresAfter) ;

/// @brief Method .ctor, addr 0xa030c40, size 0x34, virtual false, abstract: false, final false
inline void _ctor(::Modio::API::SchemaDefinitions::DownloadObject  downloadObject) ;

// Ctor Parameters []
// @brief default ctor
constexpr ModfileDownloadReference() ;

// Ctor Parameters [CppParam { name: "BinaryUrl", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "ExpiresAfter", ty: "::System::DateTime", modifiers: "", def_value: None, comment: None }]
constexpr ModfileDownloadReference(::StringW  BinaryUrl, ::System::DateTime  ExpiresAfter) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17590};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field BinaryUrl, offset: 0x0, size: 0x8, def value: None
 ::StringW  BinaryUrl;

/// @brief Field ExpiresAfter, offset: 0x8, size: 0x8, def value: None
 ::System::DateTime  ExpiresAfter;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Modio::Mods::ModfileDownloadReference, BinaryUrl) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Modio::Mods::ModfileDownloadReference, ExpiresAfter) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Modio::Mods::ModfileDownloadReference) == 0x10, "Size mismatch!");

} // namespace end def Modio::Mods
