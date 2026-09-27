#pragma once
// IWYU pragma private; include "System/Net/NclConstants.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Uri_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NclConstants)
namespace System {
class Object;
}
// Forward declare root types
namespace System::Net {
class NclConstants;
}
// Write type traits
MARK_REF_T(::System::Net::NclConstants*);
DEFINE_IL2CPP_CLASS(::System::Net::NclConstants*, "System.Net", "NclConstants");
// Dependencies System.Object, System.Uri
namespace System::Net {
// Is value type: false
// CS Name: System.Net.NclConstants
class CORDL_TYPE NclConstants : public ::System::Object {
public:
// Declarations
/// @brief Field CRLF, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_CRLF, put=setStaticF_CRLF)) ::ArrayW<uint8_t>  CRLF;

/// @brief Field ChunkTerminator, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ChunkTerminator, put=setStaticF_ChunkTerminator)) ::ArrayW<uint8_t>  ChunkTerminator;

/// @brief Field EmptyObjectArray, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_EmptyObjectArray, put=setStaticF_EmptyObjectArray)) ::ArrayW<::System::Object*>  EmptyObjectArray;

/// @brief Field EmptyUriArray, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_EmptyUriArray, put=setStaticF_EmptyUriArray)) ::ArrayW<::System::Uri*>  EmptyUriArray;

/// @brief Field Sentinel, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Sentinel, put=setStaticF_Sentinel)) ::System::Object*  Sentinel;

static inline ::ArrayW<uint8_t> getStaticF_CRLF() ;

static inline ::ArrayW<uint8_t> getStaticF_ChunkTerminator() ;

static inline ::ArrayW<::System::Object*> getStaticF_EmptyObjectArray() ;

static inline ::ArrayW<::System::Uri*> getStaticF_EmptyUriArray() ;

static inline ::System::Object* getStaticF_Sentinel() ;

static inline void setStaticF_CRLF(::ArrayW<uint8_t>  value) ;

static inline void setStaticF_ChunkTerminator(::ArrayW<uint8_t>  value) ;

static inline void setStaticF_EmptyObjectArray(::ArrayW<::System::Object*>  value) ;

static inline void setStaticF_EmptyUriArray(::ArrayW<::System::Uri*>  value) ;

static inline void setStaticF_Sentinel(::System::Object*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NclConstants() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NclConstants", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NclConstants(NclConstants && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NclConstants", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NclConstants(NclConstants const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10511};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Net::NclConstants) == 0x10, "Size mismatch!");

} // namespace end def System::Net
