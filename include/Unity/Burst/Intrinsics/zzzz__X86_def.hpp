#pragma once
// IWYU pragma private; include "Unity/Burst/Intrinsics/X86.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(X86)
namespace Unity::Burst::Intrinsics {
class X86_Sse2;
}
namespace Unity::Burst::Intrinsics {
struct v128;
}
// Forward declare root types
namespace Unity::Burst::Intrinsics {
class X86;
}
namespace Unity::Burst::Intrinsics {
class X86_Sse2;
}
// Write type traits
MARK_REF_T(::Unity::Burst::Intrinsics::X86*);
MARK_REF_T(::Unity::Burst::Intrinsics::X86_Sse2*);
DEFINE_IL2CPP_CLASS(::Unity::Burst::Intrinsics::X86*, "Unity.Burst.Intrinsics", "X86");
DEFINE_IL2CPP_CLASS(::Unity::Burst::Intrinsics::X86_Sse2*, "Unity.Burst.Intrinsics", "X86/Sse2");
// [BurstCompile]
// Dependencies System.Object
namespace Unity::Burst::Intrinsics {
// Is value type: false
// CS Name: Unity.Burst.Intrinsics.X86
class CORDL_TYPE X86 : public ::System::Object {
public:
// Declarations
using Sse2 = ::Unity::Burst::Intrinsics::X86_Sse2;

/// @brief Method Saturate_To_Int16, addr 0xae85370, size 0x20, virtual false, abstract: false, final false
static inline int16_t Saturate_To_Int16(int32_t  val) ;

/// @brief Method Saturate_To_UnsignedInt8, addr 0xae85360, size 0x10, virtual false, abstract: false, final false
static inline uint8_t Saturate_To_UnsignedInt8(int32_t  val) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr X86() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "X86", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
X86(X86 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "X86", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
X86(X86 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32197};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Burst::Intrinsics::X86) == 0x10, "Size mismatch!");

} // namespace end def Unity::Burst::Intrinsics
// Dependencies System.Object
namespace Unity::Burst::Intrinsics {
// Is value type: false
// CS Name: Unity.Burst.Intrinsics.X86/Sse2
class CORDL_TYPE X86_Sse2 : public ::System::Object {
public:
// Declarations
/// @brief Method get_IsSse2Supported, addr 0xae85390, size 0x8, virtual false, abstract: false, final false
static inline bool get_IsSse2Supported() ;

/// [DebuggerStepThrough]
/// @brief Method packs_epi32, addr 0xae85398, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 packs_epi32(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

/// [DebuggerStepThrough]
/// @brief Method packus_epi16, addr 0xae85458, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 packus_epi16(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr X86_Sse2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "X86_Sse2", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
X86_Sse2(X86_Sse2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "X86_Sse2", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
X86_Sse2(X86_Sse2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32196};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Burst::Intrinsics::X86_Sse2) == 0x10, "Size mismatch!");

} // namespace end def Unity::Burst::Intrinsics
