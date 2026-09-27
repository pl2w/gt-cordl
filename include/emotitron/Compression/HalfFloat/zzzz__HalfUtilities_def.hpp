#pragma once
// IWYU pragma private; include "emotitron/Compression/HalfFloat/HalfUtilities.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(HalfUtilities)
namespace GlobalNamespace {
struct HalfUtilities_FloatToUint;
}
// Forward declare root types
namespace emotitron::Compression::HalfFloat {
class HalfUtilities;
}
// Write type traits
MARK_REF_T(::emotitron::Compression::HalfFloat::HalfUtilities*);
DEFINE_IL2CPP_CLASS(::emotitron::Compression::HalfFloat::HalfUtilities*, "emotitron.Compression.HalfFloat", "HalfUtilities");
// Dependencies System.Object
namespace emotitron::Compression::HalfFloat {
// Is value type: false
// CS Name: emotitron.Compression.HalfFloat.HalfUtilities
class CORDL_TYPE HalfUtilities : public ::System::Object {
public:
// Declarations
using FloatToUint = ::GlobalNamespace::HalfUtilities_FloatToUint;

/// @brief Field FloatToHalfBaseTable, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_FloatToHalfBaseTable, put=setStaticF_FloatToHalfBaseTable)) ::ArrayW<uint16_t>  FloatToHalfBaseTable;

/// @brief Field FloatToHalfShiftTable, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_FloatToHalfShiftTable, put=setStaticF_FloatToHalfShiftTable)) ::ArrayW<uint8_t>  FloatToHalfShiftTable;

/// @brief Field HalfToFloatExponentTable, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_HalfToFloatExponentTable, put=setStaticF_HalfToFloatExponentTable)) ::ArrayW<uint32_t>  HalfToFloatExponentTable;

/// @brief Field HalfToFloatMantissaTable, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_HalfToFloatMantissaTable, put=setStaticF_HalfToFloatMantissaTable)) ::ArrayW<uint32_t>  HalfToFloatMantissaTable;

/// @brief Field HalfToFloatOffsetTable, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_HalfToFloatOffsetTable, put=setStaticF_HalfToFloatOffsetTable)) ::ArrayW<uint32_t>  HalfToFloatOffsetTable;

/// @brief Method Pack, addr 0x5dd79fc, size 0xb4, virtual false, abstract: false, final false
static inline uint16_t Pack(float_t  value) ;

/// @brief Method Unpack, addr 0x5dd7bb8, size 0xcc, virtual false, abstract: false, final false
static inline float_t Unpack(uint16_t  value) ;

static inline ::ArrayW<uint16_t> getStaticF_FloatToHalfBaseTable() ;

static inline ::ArrayW<uint8_t> getStaticF_FloatToHalfShiftTable() ;

static inline ::ArrayW<uint32_t> getStaticF_HalfToFloatExponentTable() ;

static inline ::ArrayW<uint32_t> getStaticF_HalfToFloatMantissaTable() ;

static inline ::ArrayW<uint32_t> getStaticF_HalfToFloatOffsetTable() ;

static inline void setStaticF_FloatToHalfBaseTable(::ArrayW<uint16_t>  value) ;

static inline void setStaticF_FloatToHalfShiftTable(::ArrayW<uint8_t>  value) ;

static inline void setStaticF_HalfToFloatExponentTable(::ArrayW<uint32_t>  value) ;

static inline void setStaticF_HalfToFloatMantissaTable(::ArrayW<uint32_t>  value) ;

static inline void setStaticF_HalfToFloatOffsetTable(::ArrayW<uint32_t>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HalfUtilities() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HalfUtilities", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HalfUtilities(HalfUtilities && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HalfUtilities", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HalfUtilities(HalfUtilities const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5105};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::emotitron::Compression::HalfFloat::HalfUtilities) == 0x10, "Size mismatch!");

} // namespace end def emotitron::Compression::HalfFloat
