#pragma once
// IWYU pragma private; include "Ionic/Zlib/Adler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Adler)
// Forward declare root types
namespace Ionic::Zlib {
class Adler;
}
// Write type traits
MARK_REF_T(::Ionic::Zlib::Adler*);
DEFINE_IL2CPP_CLASS(::Ionic::Zlib::Adler*, "Ionic.Zlib", "Adler");
// Dependencies System.Object
namespace Ionic::Zlib {
// Is value type: false
// CS Name: Ionic.Zlib.Adler
class CORDL_TYPE Adler : public ::System::Object {
public:
// Declarations
/// @brief Field BASE, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_BASE, put=setStaticF_BASE)) uint32_t  BASE;

/// @brief Field NMAX, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_NMAX, put=setStaticF_NMAX)) int32_t  NMAX;

/// @brief Method Adler32, addr 0xa79b40c, size 0x360, virtual false, abstract: false, final false
static inline uint32_t Adler32(uint32_t  adler, ::ArrayW<uint8_t>  buf, int32_t  index, int32_t  len) ;

static inline ::Ionic::Zlib::Adler* New_ctor() ;

/// @brief Method .ctor, addr 0xa79b76c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline uint32_t getStaticF_BASE() ;

static inline int32_t getStaticF_NMAX() ;

static inline void setStaticF_BASE(uint32_t  value) ;

static inline void setStaticF_NMAX(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Adler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Adler", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Adler(Adler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Adler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Adler(Adler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19474};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Ionic::Zlib::Adler) == 0x10, "Size mismatch!");

} // namespace end def Ionic::Zlib
