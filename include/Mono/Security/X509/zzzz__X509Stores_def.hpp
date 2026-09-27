#pragma once
// IWYU pragma private; include "Mono/Security/X509/X509Stores.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(X509Stores)
namespace Mono::Security::X509 {
class X509Store;
}
namespace Mono::Security::X509 {
class X509Stores_Names;
}
// Forward declare root types
namespace Mono::Security::X509 {
class X509Stores;
}
namespace Mono::Security::X509 {
class X509Stores_Names;
}
// Write type traits
MARK_REF_T(::Mono::Security::X509::X509Stores*);
MARK_REF_T(::Mono::Security::X509::X509Stores_Names*);
DEFINE_IL2CPP_CLASS(::Mono::Security::X509::X509Stores*, "Mono.Security.X509", "X509Stores");
DEFINE_IL2CPP_CLASS(::Mono::Security::X509::X509Stores_Names*, "Mono.Security.X509", "X509Stores/Names");
// Dependencies System.Object
namespace Mono::Security::X509 {
// Is value type: false
// CS Name: Mono.Security.X509.X509Stores
class CORDL_TYPE X509Stores : public ::System::Object {
public:
// Declarations
using Names = ::Mono::Security::X509::X509Stores_Names;

 __declspec(property(get=get_IntermediateCA)) ::Mono::Security::X509::X509Store*  IntermediateCA;

 __declspec(property(get=get_OtherPeople)) ::Mono::Security::X509::X509Store*  OtherPeople;

 __declspec(property(get=get_Personal)) ::Mono::Security::X509::X509Store*  Personal;

 __declspec(property(get=get_TrustedRoot)) ::Mono::Security::X509::X509Store*  TrustedRoot;

 __declspec(property(get=get_Untrusted)) ::Mono::Security::X509::X509Store*  Untrusted;

/// @brief Field _intermediate, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__intermediate, put=__cordl_internal_set__intermediate)) ::Mono::Security::X509::X509Store*  _intermediate;

/// @brief Field _newFormat, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get__newFormat, put=__cordl_internal_set__newFormat)) bool  _newFormat;

/// @brief Field _other, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__other, put=__cordl_internal_set__other)) ::Mono::Security::X509::X509Store*  _other;

/// @brief Field _personal, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__personal, put=__cordl_internal_set__personal)) ::Mono::Security::X509::X509Store*  _personal;

/// @brief Field _storePath, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__storePath, put=__cordl_internal_set__storePath)) ::StringW  _storePath;

/// @brief Field _trusted, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__trusted, put=__cordl_internal_set__trusted)) ::Mono::Security::X509::X509Store*  _trusted;

/// @brief Field _untrusted, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__untrusted, put=__cordl_internal_set__untrusted)) ::Mono::Security::X509::X509Store*  _untrusted;

/// @brief Method Clear, addr 0xa0f6da0, size 0xec, virtual false, abstract: false, final false
inline void Clear() ;

static inline ::Mono::Security::X509::X509Stores* New_ctor(::StringW  path, bool  newFormat) ;

/// @brief Method Open, addr 0xa0f6e8c, size 0x120, virtual false, abstract: false, final false
inline ::Mono::Security::X509::X509Store* Open(::StringW  storeName, bool  create) ;

constexpr ::Mono::Security::X509::X509Store* const& __cordl_internal_get__intermediate() const;

constexpr ::Mono::Security::X509::X509Store*& __cordl_internal_get__intermediate() ;

constexpr bool const& __cordl_internal_get__newFormat() const;

constexpr bool& __cordl_internal_get__newFormat() ;

constexpr ::Mono::Security::X509::X509Store* const& __cordl_internal_get__other() const;

constexpr ::Mono::Security::X509::X509Store*& __cordl_internal_get__other() ;

constexpr ::Mono::Security::X509::X509Store* const& __cordl_internal_get__personal() const;

constexpr ::Mono::Security::X509::X509Store*& __cordl_internal_get__personal() ;

constexpr ::StringW const& __cordl_internal_get__storePath() const;

constexpr ::StringW& __cordl_internal_get__storePath() ;

constexpr ::Mono::Security::X509::X509Store* const& __cordl_internal_get__trusted() const;

constexpr ::Mono::Security::X509::X509Store*& __cordl_internal_get__trusted() ;

constexpr ::Mono::Security::X509::X509Store* const& __cordl_internal_get__untrusted() const;

constexpr ::Mono::Security::X509::X509Store*& __cordl_internal_get__untrusted() ;

constexpr void __cordl_internal_set__intermediate(::Mono::Security::X509::X509Store*  value) ;

constexpr void __cordl_internal_set__newFormat(bool  value) ;

constexpr void __cordl_internal_set__other(::Mono::Security::X509::X509Store*  value) ;

constexpr void __cordl_internal_set__personal(::Mono::Security::X509::X509Store*  value) ;

constexpr void __cordl_internal_set__storePath(::StringW  value) ;

constexpr void __cordl_internal_set__trusted(::Mono::Security::X509::X509Store*  value) ;

constexpr void __cordl_internal_set__untrusted(::Mono::Security::X509::X509Store*  value) ;

/// @brief Method .ctor, addr 0xa0f641c, size 0x3c, virtual false, abstract: false, final false
inline void _ctor(::StringW  path, bool  newFormat) ;

/// @brief Method get_IntermediateCA, addr 0xa0f6718, size 0xf0, virtual false, abstract: false, final false
inline ::Mono::Security::X509::X509Store* get_IntermediateCA() ;

/// @brief Method get_OtherPeople, addr 0xa0f6cc4, size 0xdc, virtual false, abstract: false, final false
inline ::Mono::Security::X509::X509Store* get_OtherPeople() ;

/// @brief Method get_Personal, addr 0xa0f6be8, size 0xdc, virtual false, abstract: false, final false
inline ::Mono::Security::X509::X509Store* get_Personal() ;

/// @brief Method get_TrustedRoot, addr 0xa0f68bc, size 0xf0, virtual false, abstract: false, final false
inline ::Mono::Security::X509::X509Store* get_TrustedRoot() ;

/// @brief Method get_Untrusted, addr 0xa0f6afc, size 0xec, virtual false, abstract: false, final false
inline ::Mono::Security::X509::X509Store* get_Untrusted() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr X509Stores() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "X509Stores", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
X509Stores(X509Stores && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "X509Stores", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
X509Stores(X509Stores const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27826};

/// @brief Field _storePath, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____storePath;

/// @brief Field _newFormat, offset: 0x18, size: 0x1, def value: None
 bool  ____newFormat;

/// @brief Field _personal, offset: 0x20, size: 0x8, def value: None
 ::Mono::Security::X509::X509Store*  ____personal;

/// @brief Field _other, offset: 0x28, size: 0x8, def value: None
 ::Mono::Security::X509::X509Store*  ____other;

/// @brief Field _intermediate, offset: 0x30, size: 0x8, def value: None
 ::Mono::Security::X509::X509Store*  ____intermediate;

/// @brief Field _trusted, offset: 0x38, size: 0x8, def value: None
 ::Mono::Security::X509::X509Store*  ____trusted;

/// @brief Field _untrusted, offset: 0x40, size: 0x8, def value: None
 ::Mono::Security::X509::X509Store*  ____untrusted;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mono::Security::X509::X509Stores, ____storePath) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::X509::X509Stores, ____newFormat) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::X509::X509Stores, ____personal) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::X509::X509Stores, ____other) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::X509::X509Stores, ____intermediate) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::X509::X509Stores, ____trusted) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::X509::X509Stores, ____untrusted) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Mono::Security::X509::X509Stores) == 0x48, "Size mismatch!");

} // namespace end def Mono::Security::X509
// Dependencies System.Object
namespace Mono::Security::X509 {
// Is value type: false
// CS Name: Mono.Security.X509.X509Stores/Names
class CORDL_TYPE X509Stores_Names : public ::System::Object {
public:
// Declarations
static inline ::Mono::Security::X509::X509Stores_Names* New_ctor() ;

/// @brief Method .ctor, addr 0xa0f6fac, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr X509Stores_Names() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "X509Stores_Names", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
X509Stores_Names(X509Stores_Names && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "X509Stores_Names", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
X509Stores_Names(X509Stores_Names const& ) = delete;

/// @brief Field IntermediateCA offset 0xffffffff size 0x8
static constexpr ::ConstString  IntermediateCA{u"CA"};

/// @brief Field OtherPeople offset 0xffffffff size 0x8
static constexpr ::ConstString  OtherPeople{u"AddressBook"};

/// @brief Field Personal offset 0xffffffff size 0x8
static constexpr ::ConstString  Personal{u"My"};

/// @brief Field TrustedRoot offset 0xffffffff size 0x8
static constexpr ::ConstString  TrustedRoot{u"Trust"};

/// @brief Field Untrusted offset 0xffffffff size 0x8
static constexpr ::ConstString  Untrusted{u"Disallowed"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27825};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mono::Security::X509::X509Stores_Names) == 0x10, "Size mismatch!");

} // namespace end def Mono::Security::X509
