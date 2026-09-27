#pragma once
// IWYU pragma private; include "System/DecimalDecCalc.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DecimalDecCalc)
namespace System {
struct MutableDecimal;
}
// Forward declare root types
namespace System {
class DecimalDecCalc;
}
// Write type traits
MARK_REF_T(::System::DecimalDecCalc*);
DEFINE_IL2CPP_CLASS(::System::DecimalDecCalc*, "System", "DecimalDecCalc");
// Dependencies System.Object
namespace System {
// Is value type: false
// CS Name: System.DecimalDecCalc
class CORDL_TYPE DecimalDecCalc : public ::System::Object {
public:
// Declarations
/// @brief Method D32AddCarry, addr 0xa2fff34, size 0x18, virtual false, abstract: false, final false
static inline bool D32AddCarry(::by_ref<uint32_t>  value, uint32_t  i) ;

/// @brief Method D32DivMod1E9, addr 0xa2ffe5c, size 0x38, virtual false, abstract: false, final false
static inline uint32_t D32DivMod1E9(uint32_t  hi32, ::by_ref<uint32_t>  lo32) ;

/// @brief Method DecAdd, addr 0xa2fffc8, size 0x58, virtual false, abstract: false, final false
static inline void DecAdd(::by_ref<::System::MutableDecimal>  value, ::System::MutableDecimal  d) ;

/// @brief Method DecAddInt32, addr 0xa2fff04, size 0x30, virtual false, abstract: false, final false
static inline void DecAddInt32(::by_ref<::System::MutableDecimal>  value, uint32_t  i) ;

/// @brief Method DecDivMod1E9, addr 0xa2ffe94, size 0x70, virtual false, abstract: false, final false
static inline uint32_t DecDivMod1E9(::by_ref<::System::MutableDecimal>  value) ;

/// @brief Method DecMul10, addr 0xa2fff4c, size 0x5c, virtual false, abstract: false, final false
static inline void DecMul10(::by_ref<::System::MutableDecimal>  value) ;

/// @brief Method DecShiftLeft, addr 0xa2fffa8, size 0x20, virtual false, abstract: false, final false
static inline void DecShiftLeft(::by_ref<::System::MutableDecimal>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DecimalDecCalc() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DecimalDecCalc", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DecimalDecCalc(DecimalDecCalc && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DecimalDecCalc", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DecimalDecCalc(DecimalDecCalc const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5641};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::DecimalDecCalc) == 0x10, "Size mismatch!");

} // namespace end def System
