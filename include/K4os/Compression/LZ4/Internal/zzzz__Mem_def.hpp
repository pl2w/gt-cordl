#pragma once
// IWYU pragma private; include "K4os/Compression/LZ4/Internal/Mem.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Mem)
// Forward declare root types
namespace K4os::Compression::LZ4::Internal {
class Mem;
}
// Write type traits
MARK_REF_T(::K4os::Compression::LZ4::Internal::Mem*);
DEFINE_IL2CPP_CLASS(::K4os::Compression::LZ4::Internal::Mem*, "K4os.Compression.LZ4.Internal", "Mem");
// Dependencies System.Object
namespace K4os::Compression::LZ4::Internal {
// Is value type: false
// CS Name: K4os.Compression.LZ4.Internal.Mem
class CORDL_TYPE Mem : public ::System::Object {
public:
// Declarations
/// @brief Field Empty, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Empty, put=setStaticF_Empty)) ::ArrayW<uint8_t>  Empty;

/// @brief Method Alloc, addr 0x9cbaa30, size 0x58, virtual false, abstract: false, final false
static inline void* Alloc(int32_t  size) ;

/// @brief Method AllocZero, addr 0x9cbabac, size 0x11c, virtual false, abstract: false, final false
static inline void* AllocZero(int32_t  size) ;

/// @brief Method CloneArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline T* CloneArray(::ArrayW<T>  array) ;

/// @brief Method Copy, addr 0x9cba990, size 0x84, virtual false, abstract: false, final false
static inline void Copy(uint8_t*  target, uint8_t*  source, int32_t  length) ;

/// @brief Method Copy2, addr 0x9cbae88, size 0x64, virtual false, abstract: false, final false
static inline void Copy2(uint8_t*  target, uint8_t*  source) ;

/// @brief Method Copy4, addr 0x9cbaeec, size 0x64, virtual false, abstract: false, final false
static inline void Copy4(uint8_t*  target, uint8_t*  source) ;

/// @brief Method Copy8, addr 0x9cbaf50, size 0x64, virtual false, abstract: false, final false
static inline void Copy8(uint8_t*  target, uint8_t*  source) ;

/// @brief Method CpBlk, addr 0x9cba980, size 0x8, virtual false, abstract: false, final false
static inline void CpBlk(void*  target, void*  source, uint32_t  length) ;

/// @brief Method Fill, addr 0x9cbab30, size 0x7c, virtual false, abstract: false, final false
static inline uint8_t* Fill(uint8_t*  target, uint8_t  value, int32_t  length) ;

/// @brief Method Free, addr 0x9cbacc8, size 0x58, virtual false, abstract: false, final false
static inline void Free(void*  ptr) ;

/// @brief Method Move, addr 0x9cbaa14, size 0x1c, virtual false, abstract: false, final false
static inline void Move(uint8_t*  target, uint8_t*  source, int32_t  length) ;

/// @brief Method Peek2, addr 0x9cbad20, size 0x54, virtual false, abstract: false, final false
static inline uint16_t Peek2(void*  p) ;

/// @brief Method Peek4, addr 0x9cbadd4, size 0x54, virtual false, abstract: false, final false
static inline uint32_t Peek4(void*  p) ;

/// @brief Method Poke2, addr 0x9cbad74, size 0x60, virtual false, abstract: false, final false
static inline void Poke2(void*  p, uint16_t  v) ;

/// @brief Method Poke4, addr 0x9cbae28, size 0x60, virtual false, abstract: false, final false
static inline void Poke4(void*  p, uint32_t  v) ;

/// @brief Method ZBlk, addr 0x9cba988, size 0x8, virtual false, abstract: false, final false
static inline void ZBlk(void*  target, uint8_t  value, uint32_t  length) ;

/// @brief Method Zero, addr 0x9cbaa88, size 0xa8, virtual false, abstract: false, final false
static inline uint8_t* Zero(uint8_t*  target, int32_t  length) ;

static inline ::ArrayW<uint8_t> getStaticF_Empty() ;

/// @brief Method get_System32, addr 0x9cba978, size 0x8, virtual false, abstract: false, final false
static inline bool get_System32() ;

static inline void setStaticF_Empty(::ArrayW<uint8_t>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Mem() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Mem", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Mem(Mem && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Mem", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Mem(Mem const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31572};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::K4os::Compression::LZ4::Internal::Mem) == 0x10, "Size mismatch!");

} // namespace end def K4os::Compression::LZ4::Internal
