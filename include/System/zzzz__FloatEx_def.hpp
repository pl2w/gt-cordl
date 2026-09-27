#pragma once
// IWYU pragma private; include "System/FloatEx.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FloatEx)
// Forward declare root types
namespace System {
class FloatEx;
}
// Write type traits
MARK_REF_T(::System::FloatEx*);
DEFINE_IL2CPP_CLASS(::System::FloatEx*, "System", "FloatEx");
// Dependencies System.Object
namespace System {
// Is value type: false
// CS Name: System.FloatEx
class CORDL_TYPE FloatEx : public ::System::Object {
public:
// Declarations
/// @brief Method IsFinite, addr 0xb993d64, size 0x14, virtual false, abstract: false, final false
static inline bool IsFinite(double_t  d) ;

/// @brief Method IsFinite, addr 0xb993d84, size 0x14, virtual false, abstract: false, final false
static inline bool IsFinite(float_t  f) ;

/// @brief Method IsNegative, addr 0xb993d78, size 0xc, virtual false, abstract: false, final false
static inline bool IsNegative(double_t  d) ;

/// @brief Method IsNegative, addr 0xb993d98, size 0xc, virtual false, abstract: false, final false
static inline bool IsNegative(float_t  f) ;

/// @brief Method SingleToInt32Bits, addr 0xb993da4, size 0x8, virtual false, abstract: false, final false
static inline int32_t SingleToInt32Bits(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FloatEx() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FloatEx", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FloatEx(FloatEx && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FloatEx", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FloatEx(FloatEx const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26319};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::FloatEx) == 0x10, "Size mismatch!");

} // namespace end def System
