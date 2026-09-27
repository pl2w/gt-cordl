#pragma once
// IWYU pragma private; include "System/MathEx.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MathEx)
namespace System {
struct Decimal;
}
// Forward declare root types
namespace System {
class MathEx;
}
// Write type traits
MARK_REF_T(::System::MathEx*);
DEFINE_IL2CPP_CLASS(::System::MathEx*, "System", "MathEx");
// Dependencies System.Object
namespace System {
// Is value type: false
// CS Name: System.MathEx
class CORDL_TYPE MathEx : public ::System::Object {
public:
// Declarations
/// @brief Method Clamp, addr 0xb994a08, size 0x12c, virtual false, abstract: false, final false
static inline ::System::Decimal Clamp(::System::Decimal  value, ::System::Decimal  min, ::System::Decimal  max) ;

/// @brief Method Clamp, addr 0xb994b34, size 0x84, virtual false, abstract: false, final false
static inline double_t Clamp(double_t  value, double_t  min, double_t  max) ;

/// @brief Method Clamp, addr 0xb994db0, size 0x84, virtual false, abstract: false, final false
static inline float_t Clamp(float_t  value, float_t  min, float_t  max) ;

/// @brief Method Clamp, addr 0xb994bb8, size 0x84, virtual false, abstract: false, final false
static inline int16_t Clamp(int16_t  value, int16_t  min, int16_t  max) ;

/// @brief Method Clamp, addr 0xb994c3c, size 0x78, virtual false, abstract: false, final false
static inline int32_t Clamp(int32_t  value, int32_t  min, int32_t  max) ;

/// @brief Method Clamp, addr 0xb994cb4, size 0x78, virtual false, abstract: false, final false
static inline int64_t Clamp(int64_t  value, int64_t  min, int64_t  max) ;

/// @brief Method Clamp, addr 0xb994d2c, size 0x84, virtual false, abstract: false, final false
static inline int8_t Clamp(int8_t  value, int8_t  min, int8_t  max) ;

/// @brief Method Clamp, addr 0xb994e34, size 0x84, virtual false, abstract: false, final false
static inline uint16_t Clamp(uint16_t  value, uint16_t  min, uint16_t  max) ;

/// @brief Method Clamp, addr 0xb994eb8, size 0x78, virtual false, abstract: false, final false
static inline uint32_t Clamp(uint32_t  value, uint32_t  min, uint32_t  max) ;

/// @brief Method Clamp, addr 0xb994f30, size 0x78, virtual false, abstract: false, final false
static inline uint64_t Clamp(uint64_t  value, uint64_t  min, uint64_t  max) ;

/// @brief Method Clamp, addr 0xb994984, size 0x84, virtual false, abstract: false, final false
static inline uint8_t Clamp(uint8_t  value, uint8_t  min, uint8_t  max) ;

/// @brief Method DivRem, addr 0xb99495c, size 0x14, virtual false, abstract: false, final false
static inline int32_t DivRem(int32_t  a, int32_t  b, ::by_ref<int32_t>  result) ;

/// @brief Method DivRem, addr 0xb994970, size 0x14, virtual false, abstract: false, final false
static inline int64_t DivRem(int64_t  a, int64_t  b, ::by_ref<int64_t>  result) ;

/// @brief Method DivRem, addr 0xb994934, size 0x14, virtual false, abstract: false, final false
static inline uint32_t DivRem(uint32_t  a, uint32_t  b, ::by_ref<uint32_t>  result) ;

/// @brief Method DivRem, addr 0xb994948, size 0x14, virtual false, abstract: false, final false
static inline uint64_t DivRem(uint64_t  a, uint64_t  b, ::by_ref<uint64_t>  result) ;

/// [NullableContext(1)]
/// @brief Method ThrowMinMaxException, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void ThrowMinMaxException(T  min, T  max) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MathEx() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MathEx", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MathEx(MathEx && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MathEx", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MathEx(MathEx const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26324};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::MathEx) == 0x10, "Size mismatch!");

} // namespace end def System
