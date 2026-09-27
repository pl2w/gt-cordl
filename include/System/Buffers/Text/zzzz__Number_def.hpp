#pragma once
// IWYU pragma private; include "System/Buffers/Text/Number.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Number)
namespace System::Buffers::Text {
struct NumberBuffer;
}
namespace System {
struct Decimal;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
// Forward declare root types
namespace System::Buffers::Text {
class Number;
}
// Write type traits
MARK_REF_T(::System::Buffers::Text::Number*);
DEFINE_IL2CPP_CLASS(::System::Buffers::Text::Number*, "System.Buffers.Text", "Number");
// Dependencies System.Object
namespace System::Buffers::Text {
// Is value type: false
// CS Name: System.Buffers.Text.Number
class CORDL_TYPE Number : public ::System::Object {
public:
// Declarations
/// @brief Field s_rgexp64Power10, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_rgexp64Power10, put=setStaticF_s_rgexp64Power10)) ::ArrayW<int8_t>  s_rgexp64Power10;

/// @brief Field s_rgexp64Power10By16, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_rgexp64Power10By16, put=setStaticF_s_rgexp64Power10By16)) ::ArrayW<int16_t>  s_rgexp64Power10By16;

/// @brief Field s_rgval64Power10, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_rgval64Power10, put=setStaticF_s_rgval64Power10)) ::ArrayW<uint64_t>  s_rgval64Power10;

/// @brief Field s_rgval64Power10By16, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_rgval64Power10By16, put=setStaticF_s_rgval64Power10By16)) ::ArrayW<uint64_t>  s_rgval64Power10By16;

/// @brief Method DecimalToNumber, addr 0xa274fc0, size 0x208, virtual false, abstract: false, final false
static inline void DecimalToNumber(::System::Decimal  value, ::by_ref<::System::Buffers::Text::NumberBuffer>  number) ;

/// @brief Method DigitsToInt, addr 0xa27eec0, size 0xc4, virtual false, abstract: false, final false
static inline uint32_t DigitsToInt(::System::ReadOnlySpan_1<uint8_t>  digits, int32_t  count) ;

/// @brief Method Mul32x32To64, addr 0xa27ef84, size 0x8, virtual false, abstract: false, final false
static inline uint64_t Mul32x32To64(uint32_t  a, uint32_t  b) ;

/// @brief Method Mul64Lossy, addr 0xa27ef8c, size 0x98, virtual false, abstract: false, final false
static inline uint64_t Mul64Lossy(uint64_t  a, uint64_t  b, ::by_ref<int32_t>  pexp) ;

/// @brief Method NumberBufferToDecimal, addr 0xa27abb4, size 0x1d4, virtual false, abstract: false, final false
static inline bool NumberBufferToDecimal(::by_ref<::System::Buffers::Text::NumberBuffer>  number, ::by_ref<::System::Decimal>  value) ;

/// @brief Method NumberBufferToDouble, addr 0xa27b174, size 0x88, virtual false, abstract: false, final false
static inline bool NumberBufferToDouble(::by_ref<::System::Buffers::Text::NumberBuffer>  number, ::by_ref<double_t>  value) ;

/// @brief Method NumberToDouble, addr 0xa27e970, size 0x548, virtual false, abstract: false, final false
static inline double_t NumberToDouble(::by_ref<::System::Buffers::Text::NumberBuffer>  number) ;

/// @brief Method RoundNumber, addr 0xa2751c8, size 0x128, virtual false, abstract: false, final false
static inline void RoundNumber(::by_ref<::System::Buffers::Text::NumberBuffer>  number, int32_t  pos) ;

/// @brief Method abs, addr 0xa27f024, size 0xc, virtual false, abstract: false, final false
static inline int32_t abs(int32_t  value) ;

static inline ::ArrayW<int8_t> getStaticF_s_rgexp64Power10() ;

static inline ::ArrayW<int16_t> getStaticF_s_rgexp64Power10By16() ;

static inline ::ArrayW<uint64_t> getStaticF_s_rgval64Power10() ;

static inline ::ArrayW<uint64_t> getStaticF_s_rgval64Power10By16() ;

static inline void setStaticF_s_rgexp64Power10(::ArrayW<int8_t>  value) ;

static inline void setStaticF_s_rgexp64Power10By16(::ArrayW<int16_t>  value) ;

static inline void setStaticF_s_rgval64Power10(::ArrayW<uint64_t>  value) ;

static inline void setStaticF_s_rgval64Power10By16(::ArrayW<uint64_t>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Number() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Number", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Number(Number && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Number", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Number(Number const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6983};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Buffers::Text::Number) == 0x10, "Size mismatch!");

} // namespace end def System::Buffers::Text
