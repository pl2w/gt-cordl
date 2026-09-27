#pragma once
// IWYU pragma private; include "System/Security/Cryptography/RSAEncryptionPadding.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/zzzz__HashAlgorithmName_def.hpp"
#include "System/Security/Cryptography/zzzz__RSAEncryptionPaddingMode_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RSAEncryptionPadding)
namespace System::Security::Cryptography {
struct HashAlgorithmName;
}
namespace System::Security::Cryptography {
struct RSAEncryptionPaddingMode;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Security::Cryptography {
class RSAEncryptionPadding;
}
// Write type traits
MARK_REF_T(::System::Security::Cryptography::RSAEncryptionPadding*);
DEFINE_IL2CPP_CLASS(::System::Security::Cryptography::RSAEncryptionPadding*, "System.Security.Cryptography", "RSAEncryptionPadding");
// Dependencies System.Object, System.Security.Cryptography.HashAlgorithmName, System.Security.Cryptography.RSAEncryptionPaddingMode
namespace System::Security::Cryptography {
// Is value type: false
// CS Name: System.Security.Cryptography.RSAEncryptionPadding
class CORDL_TYPE RSAEncryptionPadding : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Mode)) ::System::Security::Cryptography::RSAEncryptionPaddingMode  Mode;

 __declspec(property(get=get_OaepHashAlgorithm)) ::System::Security::Cryptography::HashAlgorithmName  OaepHashAlgorithm;

/// @brief Field _mode, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__mode, put=__cordl_internal_set__mode)) ::System::Security::Cryptography::RSAEncryptionPaddingMode  _mode;

/// @brief Field _oaepHashAlgorithm, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__oaepHashAlgorithm, put=__cordl_internal_set__oaepHashAlgorithm)) ::System::Security::Cryptography::HashAlgorithmName  _oaepHashAlgorithm;

/// @brief Field s_oaepSHA1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_oaepSHA1, put=setStaticF_s_oaepSHA1)) ::System::Security::Cryptography::RSAEncryptionPadding*  s_oaepSHA1;

/// @brief Field s_oaepSHA256, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_oaepSHA256, put=setStaticF_s_oaepSHA256)) ::System::Security::Cryptography::RSAEncryptionPadding*  s_oaepSHA256;

/// @brief Field s_oaepSHA384, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_oaepSHA384, put=setStaticF_s_oaepSHA384)) ::System::Security::Cryptography::RSAEncryptionPadding*  s_oaepSHA384;

/// @brief Field s_oaepSHA512, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_oaepSHA512, put=setStaticF_s_oaepSHA512)) ::System::Security::Cryptography::RSAEncryptionPadding*  s_oaepSHA512;

/// @brief Field s_pkcs1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_pkcs1, put=setStaticF_s_pkcs1)) ::System::Security::Cryptography::RSAEncryptionPadding*  s_pkcs1;

/// @brief Convert operator to "::System::IEquatable_1<::System::Security::Cryptography::RSAEncryptionPadding*>"
constexpr operator  ::System::IEquatable_1<::System::Security::Cryptography::RSAEncryptionPadding*>*() noexcept;

/// @brief Method CombineHashCodes, addr 0xa1617ac, size 0xc, virtual false, abstract: false, final false
static inline int32_t CombineHashCodes(int32_t  h1, int32_t  h2) ;

/// @brief Method CreateOaep, addr 0xa16162c, size 0xe4, virtual false, abstract: false, final false
static inline ::System::Security::Cryptography::RSAEncryptionPadding* CreateOaep(::System::Security::Cryptography::HashAlgorithmName  hashAlgorithm) ;

/// @brief Method Equals, addr 0xa1617b8, size 0x64, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0xa16181c, size 0xa4, virtual true, abstract: false, final true
inline bool Equals(::System::Security::Cryptography::RSAEncryptionPadding*  other) ;

/// @brief Method GetHashCode, addr 0xa161720, size 0x8c, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

static inline ::System::Security::Cryptography::RSAEncryptionPadding* New_ctor() ;

static inline ::System::Security::Cryptography::RSAEncryptionPadding* New_ctor(::System::Security::Cryptography::RSAEncryptionPaddingMode  mode, ::System::Security::Cryptography::HashAlgorithmName  oaepHashAlgorithm) ;

/// @brief Method ToString, addr 0xa161944, size 0x74, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::System::Security::Cryptography::RSAEncryptionPaddingMode const& __cordl_internal_get__mode() const;

constexpr ::System::Security::Cryptography::RSAEncryptionPaddingMode& __cordl_internal_get__mode() ;

constexpr ::System::Security::Cryptography::HashAlgorithmName const& __cordl_internal_get__oaepHashAlgorithm() const;

constexpr ::System::Security::Cryptography::HashAlgorithmName& __cordl_internal_get__oaepHashAlgorithm() ;

constexpr void __cordl_internal_set__mode(::System::Security::Cryptography::RSAEncryptionPaddingMode  value) ;

constexpr void __cordl_internal_set__oaepHashAlgorithm(::System::Security::Cryptography::HashAlgorithmName  value) ;

/// @brief Method .ctor, addr 0xa161ab4, size 0x38, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xa1615f4, size 0x38, virtual false, abstract: false, final false
inline void _ctor(::System::Security::Cryptography::RSAEncryptionPaddingMode  mode, ::System::Security::Cryptography::HashAlgorithmName  oaepHashAlgorithm) ;

static inline ::System::Security::Cryptography::RSAEncryptionPadding* getStaticF_s_oaepSHA1() ;

static inline ::System::Security::Cryptography::RSAEncryptionPadding* getStaticF_s_oaepSHA256() ;

static inline ::System::Security::Cryptography::RSAEncryptionPadding* getStaticF_s_oaepSHA384() ;

static inline ::System::Security::Cryptography::RSAEncryptionPadding* getStaticF_s_oaepSHA512() ;

static inline ::System::Security::Cryptography::RSAEncryptionPadding* getStaticF_s_pkcs1() ;

/// @brief Method get_Mode, addr 0xa161710, size 0x8, virtual false, abstract: false, final false
inline ::System::Security::Cryptography::RSAEncryptionPaddingMode get_Mode() ;

/// @brief Method get_OaepHashAlgorithm, addr 0xa161718, size 0x8, virtual false, abstract: false, final false
inline ::System::Security::Cryptography::HashAlgorithmName get_OaepHashAlgorithm() ;

/// @brief Method get_OaepSHA1, addr 0xa161494, size 0x58, virtual false, abstract: false, final false
static inline ::System::Security::Cryptography::RSAEncryptionPadding* get_OaepSHA1() ;

/// @brief Method get_OaepSHA256, addr 0xa1614ec, size 0x58, virtual false, abstract: false, final false
static inline ::System::Security::Cryptography::RSAEncryptionPadding* get_OaepSHA256() ;

/// @brief Method get_OaepSHA384, addr 0xa161544, size 0x58, virtual false, abstract: false, final false
static inline ::System::Security::Cryptography::RSAEncryptionPadding* get_OaepSHA384() ;

/// @brief Method get_OaepSHA512, addr 0xa16159c, size 0x58, virtual false, abstract: false, final false
static inline ::System::Security::Cryptography::RSAEncryptionPadding* get_OaepSHA512() ;

/// @brief Method get_Pkcs1, addr 0xa16143c, size 0x58, virtual false, abstract: false, final false
static inline ::System::Security::Cryptography::RSAEncryptionPadding* get_Pkcs1() ;

/// @brief Convert to "::System::IEquatable_1<::System::Security::Cryptography::RSAEncryptionPadding*>"
constexpr ::System::IEquatable_1<::System::Security::Cryptography::RSAEncryptionPadding*>* i___System__IEquatable_1___System__Security__Cryptography__RSAEncryptionPadding__() noexcept;

/// @brief Method op_Equality, addr 0xa161930, size 0x14, virtual false, abstract: false, final false
static inline bool op_Equality(::System::Security::Cryptography::RSAEncryptionPadding*  left, ::System::Security::Cryptography::RSAEncryptionPadding*  right) ;

/// @brief Method op_Inequality, addr 0xa1618c0, size 0x70, virtual false, abstract: false, final false
static inline bool op_Inequality(::System::Security::Cryptography::RSAEncryptionPadding*  left, ::System::Security::Cryptography::RSAEncryptionPadding*  right) ;

static inline void setStaticF_s_oaepSHA1(::System::Security::Cryptography::RSAEncryptionPadding*  value) ;

static inline void setStaticF_s_oaepSHA256(::System::Security::Cryptography::RSAEncryptionPadding*  value) ;

static inline void setStaticF_s_oaepSHA384(::System::Security::Cryptography::RSAEncryptionPadding*  value) ;

static inline void setStaticF_s_oaepSHA512(::System::Security::Cryptography::RSAEncryptionPadding*  value) ;

static inline void setStaticF_s_pkcs1(::System::Security::Cryptography::RSAEncryptionPadding*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RSAEncryptionPadding() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RSAEncryptionPadding", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RSAEncryptionPadding(RSAEncryptionPadding && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RSAEncryptionPadding", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RSAEncryptionPadding(RSAEncryptionPadding const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6064};

/// @brief Field _mode, offset: 0x10, size: 0x4, def value: None
 ::System::Security::Cryptography::RSAEncryptionPaddingMode  ____mode;

/// @brief Field _oaepHashAlgorithm, offset: 0x18, size: 0x8, def value: None
 ::System::Security::Cryptography::HashAlgorithmName  ____oaepHashAlgorithm;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Security::Cryptography::RSAEncryptionPadding, ____mode) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::RSAEncryptionPadding, ____oaepHashAlgorithm) == 0x18, "Offset mismatch!");

static_assert(sizeof(::System::Security::Cryptography::RSAEncryptionPadding) == 0x20, "Size mismatch!");

} // namespace end def System::Security::Cryptography
