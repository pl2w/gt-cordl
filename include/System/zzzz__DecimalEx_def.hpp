#pragma once
// IWYU pragma private; include "System/DecimalEx.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DecimalEx)
namespace GlobalNamespace {
struct DecimalEx_DecCalc;
}
namespace GlobalNamespace {
struct DecimalEx_DecimalBits;
}
namespace System {
struct Decimal;
}
// Forward declare root types
namespace System {
class DecimalEx;
}
// Write type traits
MARK_REF_T(::System::DecimalEx*);
DEFINE_IL2CPP_CLASS(::System::DecimalEx*, "System", "DecimalEx");
// [Extension]
// Dependencies System.Object
namespace System {
// Is value type: false
// CS Name: System.DecimalEx
class CORDL_TYPE DecimalEx : public ::System::Object {
public:
// Declarations
using DecCalc = ::GlobalNamespace::DecimalEx_DecCalc;

using DecimalBits = ::GlobalNamespace::DecimalEx_DecimalBits;

/// @brief Method AsMutable, addr 0xb993c80, size 0x4, virtual false, abstract: false, final false
static inline ::by_ref<::GlobalNamespace::DecimalEx_DecCalc> AsMutable(::by_ref<::System::Decimal>  d) ;

/// @brief Method DecDivMod1E9, addr 0xb993cac, size 0x5c, virtual false, abstract: false, final false
static inline uint32_t DecDivMod1E9(::by_ref<::System::Decimal>  value) ;

/// [Extension]
/// @brief Method High, addr 0xb993c84, size 0x8, virtual false, abstract: false, final false
static inline uint32_t High(::System::Decimal  value) ;

/// [Extension]
/// @brief Method IsNegative, addr 0xb993c9c, size 0x8, virtual false, abstract: false, final false
static inline bool IsNegative(::System::Decimal  value) ;

/// [Extension]
/// @brief Method Low, addr 0xb993c8c, size 0x8, virtual false, abstract: false, final false
static inline uint32_t Low(::System::Decimal  value) ;

/// [Extension]
/// @brief Method Mid, addr 0xb993c94, size 0x8, virtual false, abstract: false, final false
static inline uint32_t Mid(::System::Decimal  value) ;

/// [Extension]
/// @brief Method Scale, addr 0xb993ca4, size 0x8, virtual false, abstract: false, final false
static inline int32_t Scale(::System::Decimal  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DecimalEx() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DecimalEx", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DecimalEx(DecimalEx && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DecimalEx", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DecimalEx(DecimalEx const& ) = delete;

/// @brief Field ScaleShift offset 0xffffffff size 0x4
static constexpr int32_t  ScaleShift{static_cast<int32_t>(0x10)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26318};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::DecimalEx) == 0x10, "Size mismatch!");

} // namespace end def System
