#pragma once
// IWYU pragma private; include "System/MathF.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MathF)
// Forward declare root types
namespace System {
class MathF;
}
// Write type traits
MARK_REF_T(::System::MathF*);
DEFINE_IL2CPP_CLASS(::System::MathF*, "System", "MathF");
// Dependencies System.Object
namespace System {
// Is value type: false
// CS Name: System.MathF
class CORDL_TYPE MathF : public ::System::Object {
public:
// Declarations
/// @brief Field roundPower10Single, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_roundPower10Single, put=setStaticF_roundPower10Single)) ::ArrayW<float_t>  roundPower10Single;

/// @brief Field singleRoundLimit, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_singleRoundLimit, put=setStaticF_singleRoundLimit)) float_t  singleRoundLimit;

/// @brief Method Abs, addr 0xa2df140, size 0x5c, virtual false, abstract: false, final false
static inline float_t Abs(float_t  x) ;

/// @brief Method CopySign, addr 0xa2df36c, size 0x1c, virtual false, abstract: false, final false
static inline float_t CopySign(float_t  x, float_t  y) ;

/// @brief Method FMod, addr 0xa2df3a0, size 0x4, virtual false, abstract: false, final false
static inline float_t FMod(float_t  x, float_t  y) ;

/// @brief Method Floor, addr 0xa2df388, size 0x8, virtual false, abstract: false, final false
static inline float_t Floor(float_t  x) ;

/// @brief Method Max, addr 0xa2df19c, size 0x74, virtual false, abstract: false, final false
static inline float_t Max(float_t  x, float_t  y) ;

/// @brief Method Min, addr 0xa2df210, size 0x74, virtual false, abstract: false, final false
static inline float_t Min(float_t  x, float_t  y) ;

/// @brief Method Pow, addr 0xa2df390, size 0x4, virtual false, abstract: false, final false
static inline float_t Pow(float_t  x, float_t  y) ;

/// [Intrinsic]
/// @brief Method Round, addr 0xa2df284, size 0xe8, virtual false, abstract: false, final false
static inline float_t Round(float_t  x) ;

/// @brief Method Sin, addr 0xa2df394, size 0x4, virtual false, abstract: false, final false
static inline float_t Sin(float_t  x) ;

/// @brief Method Sqrt, addr 0xa2df398, size 0x8, virtual false, abstract: false, final false
static inline float_t Sqrt(float_t  x) ;

static inline ::ArrayW<float_t> getStaticF_roundPower10Single() ;

static inline float_t getStaticF_singleRoundLimit() ;

static inline void setStaticF_roundPower10Single(::ArrayW<float_t>  value) ;

static inline void setStaticF_singleRoundLimit(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MathF() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MathF", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MathF(MathF && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MathF", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MathF(MathF const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5544};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::MathF) == 0x10, "Size mismatch!");

} // namespace end def System
