#pragma once
// IWYU pragma private; include "TMPro/TMP_Compatibility.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(TMP_Compatibility)
namespace GlobalNamespace {
struct TMP_Compatibility_AnchorPositions;
}
namespace TMPro {
struct TextAlignmentOptions;
}
// Forward declare root types
namespace TMPro {
class TMP_Compatibility;
}
// Write type traits
MARK_REF_T(::TMPro::TMP_Compatibility*);
DEFINE_IL2CPP_CLASS(::TMPro::TMP_Compatibility*, "TMPro", "TMP_Compatibility");
// Dependencies System.Object
namespace TMPro {
// Is value type: false
// CS Name: TMPro.TMP_Compatibility
class CORDL_TYPE TMP_Compatibility : public ::System::Object {
public:
// Declarations
using AnchorPositions = ::GlobalNamespace::TMP_Compatibility_AnchorPositions;

/// @brief Method ConvertTextAlignmentEnumValues, addr 0xb352e8c, size 0x24, virtual false, abstract: false, final false
static inline ::TMPro::TextAlignmentOptions ConvertTextAlignmentEnumValues(::TMPro::TextAlignmentOptions  oldValue) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TMP_Compatibility() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TMP_Compatibility", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TMP_Compatibility(TMP_Compatibility && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TMP_Compatibility", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TMP_Compatibility(TMP_Compatibility const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22920};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::TMPro::TMP_Compatibility) == 0x10, "Size mismatch!");

} // namespace end def TMPro
