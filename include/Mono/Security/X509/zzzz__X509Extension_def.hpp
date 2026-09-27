#pragma once
// IWYU pragma private; include "Mono/Security/X509/X509Extension.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(X509Extension)
namespace Mono::Security {
class ASN1;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Mono::Security::X509 {
class X509Extension;
}
// Write type traits
MARK_REF_T(::Mono::Security::X509::X509Extension*);
DEFINE_IL2CPP_CLASS(::Mono::Security::X509::X509Extension*, "Mono.Security.X509", "X509Extension");
// Dependencies System.Object
namespace Mono::Security::X509 {
// Is value type: false
// CS Name: Mono.Security.X509.X509Extension
class CORDL_TYPE X509Extension : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_ASN1)) ::Mono::Security::ASN1*  ASN1;

 __declspec(property(get=get_Critical, put=set_Critical)) bool  Critical;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_Oid)) ::StringW  Oid;

 __declspec(property(get=get_Value)) ::Mono::Security::ASN1*  Value;

/// @brief Field extnCritical, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_extnCritical, put=__cordl_internal_set_extnCritical)) bool  extnCritical;

/// @brief Field extnOid, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_extnOid, put=__cordl_internal_set_extnOid)) ::StringW  extnOid;

/// @brief Field extnValue, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_extnValue, put=__cordl_internal_set_extnValue)) ::Mono::Security::ASN1*  extnValue;

/// @brief Method Decode, addr 0xa0f3458, size 0x4, virtual true, abstract: false, final false
inline void Decode() ;

/// @brief Method Encode, addr 0xa0f345c, size 0x4, virtual true, abstract: false, final false
inline void Encode() ;

/// @brief Method Equals, addr 0xa0f3598, size 0x140, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetBytes, addr 0xa0f36d8, size 0x20, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> GetBytes() ;

/// @brief Method GetHashCode, addr 0xa0f36f8, size 0x1c, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

static inline ::Mono::Security::X509::X509Extension* New_ctor() ;

static inline ::Mono::Security::X509::X509Extension* New_ctor(::Mono::Security::ASN1*  asn1) ;

static inline ::Mono::Security::X509::X509Extension* New_ctor(::Mono::Security::X509::X509Extension*  extension) ;

/// @brief Method ToString, addr 0xa0f3940, size 0xe4, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method WriteLine, addr 0xa0f3714, size 0x22c, virtual false, abstract: false, final false
inline void WriteLine(::System::Text::StringBuilder*  sb, int32_t  n, int32_t  pos) ;

constexpr bool const& __cordl_internal_get_extnCritical() const;

constexpr bool& __cordl_internal_get_extnCritical() ;

constexpr ::StringW const& __cordl_internal_get_extnOid() const;

constexpr ::StringW& __cordl_internal_get_extnOid() ;

constexpr ::Mono::Security::ASN1* const& __cordl_internal_get_extnValue() const;

constexpr ::Mono::Security::ASN1*& __cordl_internal_get_extnValue() ;

constexpr void __cordl_internal_set_extnCritical(bool  value) ;

constexpr void __cordl_internal_set_extnOid(::StringW  value) ;

constexpr void __cordl_internal_set_extnValue(::Mono::Security::ASN1*  value) ;

/// @brief Method .ctor, addr 0xa0f2ff0, size 0x1c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xa0f300c, size 0x2d4, virtual false, abstract: false, final false
inline void _ctor(::Mono::Security::ASN1*  asn1) ;

/// @brief Method .ctor, addr 0xa0f32e0, size 0x14c, virtual false, abstract: false, final false
inline void _ctor(::Mono::Security::X509::X509Extension*  extension) ;

/// @brief Method get_ASN1, addr 0xa0f3460, size 0x118, virtual false, abstract: false, final false
inline ::Mono::Security::ASN1* get_ASN1() ;

/// @brief Method get_Critical, addr 0xa0f3580, size 0x8, virtual false, abstract: false, final false
inline bool get_Critical() ;

/// @brief Method get_Name, addr 0xa0f3590, size 0x8, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_Oid, addr 0xa0f3578, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Oid() ;

/// @brief Method get_Value, addr 0xa0f342c, size 0x2c, virtual false, abstract: false, final false
inline ::Mono::Security::ASN1* get_Value() ;

/// @brief Method set_Critical, addr 0xa0f3588, size 0x8, virtual false, abstract: false, final false
inline void set_Critical(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr X509Extension() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "X509Extension", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
X509Extension(X509Extension && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "X509Extension", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
X509Extension(X509Extension const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27821};

/// @brief Field extnOid, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___extnOid;

/// @brief Field extnCritical, offset: 0x18, size: 0x1, def value: None
 bool  ___extnCritical;

/// @brief Field extnValue, offset: 0x20, size: 0x8, def value: None
 ::Mono::Security::ASN1*  ___extnValue;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mono::Security::X509::X509Extension, ___extnOid) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::X509::X509Extension, ___extnCritical) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::X509::X509Extension, ___extnValue) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Mono::Security::X509::X509Extension) == 0x28, "Size mismatch!");

} // namespace end def Mono::Security::X509
