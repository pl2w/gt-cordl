#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Utilities/MathUtils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MathUtils)
// Forward declare root types
namespace Newtonsoft::Json::Utilities {
class MathUtils;
}
// Write type traits
MARK_REF_T(::Newtonsoft::Json::Utilities::MathUtils*);
DEFINE_IL2CPP_CLASS(::Newtonsoft::Json::Utilities::MathUtils*, "Newtonsoft.Json.Utilities", "MathUtils");
// Dependencies System.Object
namespace Newtonsoft::Json::Utilities {
// Is value type: false
// CS Name: Newtonsoft.Json.Utilities.MathUtils
class CORDL_TYPE MathUtils : public ::System::Object {
public:
// Declarations
/// @brief Method ApproxEquals, addr 0xa3a1898, size 0x9c, virtual false, abstract: false, final false
static inline bool ApproxEquals(double_t  d1, double_t  d2) ;

/// @brief Method IntLength, addr 0xa3a16bc, size 0x1c4, virtual false, abstract: false, final false
static inline int32_t IntLength(uint64_t  i) ;

/// @brief Method IntToHex, addr 0xa3a1880, size 0x18, virtual false, abstract: false, final false
static inline char16_t IntToHex(int32_t  n) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MathUtils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MathUtils", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MathUtils(MathUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MathUtils", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MathUtils(MathUtils const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23224};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Newtonsoft::Json::Utilities::MathUtils) == 0x10, "Size mismatch!");

} // namespace end def Newtonsoft::Json::Utilities
