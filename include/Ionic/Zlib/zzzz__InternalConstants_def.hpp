#pragma once
// IWYU pragma private; include "Ionic/Zlib/InternalConstants.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(InternalConstants)
// Forward declare root types
namespace Ionic::Zlib {
class InternalConstants;
}
// Write type traits
MARK_REF_T(::Ionic::Zlib::InternalConstants*);
DEFINE_IL2CPP_CLASS(::Ionic::Zlib::InternalConstants*, "Ionic.Zlib", "InternalConstants");
// Dependencies System.Object
namespace Ionic::Zlib {
// Is value type: false
// CS Name: Ionic.Zlib.InternalConstants
class CORDL_TYPE InternalConstants : public ::System::Object {
public:
// Declarations
/// @brief Field BL_CODES, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_BL_CODES, put=setStaticF_BL_CODES)) int32_t  BL_CODES;

/// @brief Field D_CODES, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_D_CODES, put=setStaticF_D_CODES)) int32_t  D_CODES;

/// @brief Field LENGTH_CODES, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_LENGTH_CODES, put=setStaticF_LENGTH_CODES)) int32_t  LENGTH_CODES;

/// @brief Field LITERALS, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_LITERALS, put=setStaticF_LITERALS)) int32_t  LITERALS;

/// @brief Field L_CODES, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_L_CODES, put=setStaticF_L_CODES)) int32_t  L_CODES;

/// @brief Field MAX_BITS, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_MAX_BITS, put=setStaticF_MAX_BITS)) int32_t  MAX_BITS;

/// @brief Field MAX_BL_BITS, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_MAX_BL_BITS, put=setStaticF_MAX_BL_BITS)) int32_t  MAX_BL_BITS;

/// @brief Field REPZ_11_138, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_REPZ_11_138, put=setStaticF_REPZ_11_138)) int32_t  REPZ_11_138;

/// @brief Field REPZ_3_10, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_REPZ_3_10, put=setStaticF_REPZ_3_10)) int32_t  REPZ_3_10;

/// @brief Field REP_3_6, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_REP_3_6, put=setStaticF_REP_3_6)) int32_t  REP_3_6;

static inline int32_t getStaticF_BL_CODES() ;

static inline int32_t getStaticF_D_CODES() ;

static inline int32_t getStaticF_LENGTH_CODES() ;

static inline int32_t getStaticF_LITERALS() ;

static inline int32_t getStaticF_L_CODES() ;

static inline int32_t getStaticF_MAX_BITS() ;

static inline int32_t getStaticF_MAX_BL_BITS() ;

static inline int32_t getStaticF_REPZ_11_138() ;

static inline int32_t getStaticF_REPZ_3_10() ;

static inline int32_t getStaticF_REP_3_6() ;

static inline void setStaticF_BL_CODES(int32_t  value) ;

static inline void setStaticF_D_CODES(int32_t  value) ;

static inline void setStaticF_LENGTH_CODES(int32_t  value) ;

static inline void setStaticF_LITERALS(int32_t  value) ;

static inline void setStaticF_L_CODES(int32_t  value) ;

static inline void setStaticF_MAX_BITS(int32_t  value) ;

static inline void setStaticF_MAX_BL_BITS(int32_t  value) ;

static inline void setStaticF_REPZ_11_138(int32_t  value) ;

static inline void setStaticF_REPZ_3_10(int32_t  value) ;

static inline void setStaticF_REP_3_6(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InternalConstants() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InternalConstants", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InternalConstants(InternalConstants && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InternalConstants", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InternalConstants(InternalConstants const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19472};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Ionic::Zlib::InternalConstants) == 0x10, "Size mismatch!");

} // namespace end def Ionic::Zlib
