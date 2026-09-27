#pragma once
// IWYU pragma private; include "Mono/Security/X509/X509ExtensionCollection.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/zzzz__CollectionBase_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(X509ExtensionCollection)
namespace Mono::Security::X509 {
class X509Extension;
}
namespace Mono::Security {
class ASN1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
// Forward declare root types
namespace Mono::Security::X509 {
class X509ExtensionCollection;
}
// Write type traits
MARK_REF_T(::Mono::Security::X509::X509ExtensionCollection*);
DEFINE_IL2CPP_CLASS(::Mono::Security::X509::X509ExtensionCollection*, "Mono.Security.X509", "X509ExtensionCollection");
// [DefaultMember("Item")]
// Dependencies System.Collections.CollectionBase
namespace Mono::Security::X509 {
// Is value type: false
// CS Name: Mono.Security.X509.X509ExtensionCollection
class CORDL_TYPE X509ExtensionCollection : public ::System::Collections::CollectionBase {
public:
// Declarations
 __declspec(property(get=get_Item)) ::Mono::Security::X509::X509Extension*  Item[];

 __declspec(property(get=get_Item)) ::Mono::Security::X509::X509Extension*  Item[];

/// @brief Field readOnly, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_readOnly, put=__cordl_internal_set_readOnly)) bool  readOnly;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Method Add, addr 0xa0f3b60, size 0xac, virtual false, abstract: false, final false
inline int32_t Add(::Mono::Security::X509::X509Extension*  extension) ;

/// @brief Method AddRange, addr 0xa0f3d0c, size 0x10c, virtual false, abstract: false, final false
inline void AddRange(::Mono::Security::X509::X509ExtensionCollection*  collection) ;

/// @brief Method AddRange, addr 0xa0f3c0c, size 0x100, virtual false, abstract: false, final false
inline void AddRange(::ArrayW<::Mono::Security::X509::X509Extension*>  extension) ;

/// @brief Method Contains, addr 0xa0f3eb0, size 0x18, virtual false, abstract: false, final false
inline bool Contains(::Mono::Security::X509::X509Extension*  extension) ;

/// @brief Method Contains, addr 0xa0f3ffc, size 0x18, virtual false, abstract: false, final false
inline bool Contains(::StringW  oid) ;

/// @brief Method CopyTo, addr 0xa0f414c, size 0x70, virtual false, abstract: false, final false
inline void CopyTo(::ArrayW<::Mono::Security::X509::X509Extension*>  extensions, int32_t  index) ;

/// @brief Method GetBytes, addr 0xa0f1548, size 0x154, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> GetBytes() ;

/// @brief Method IndexOf, addr 0xa0f3ec8, size 0x134, virtual false, abstract: false, final false
inline int32_t IndexOf(::Mono::Security::X509::X509Extension*  extension) ;

/// @brief Method IndexOf, addr 0xa0f4014, size 0x138, virtual false, abstract: false, final false
inline int32_t IndexOf(::StringW  oid) ;

/// @brief Method Insert, addr 0xa0f41bc, size 0x70, virtual false, abstract: false, final false
inline void Insert(int32_t  index, ::Mono::Security::X509::X509Extension*  extension) ;

static inline ::Mono::Security::X509::X509ExtensionCollection* New_ctor() ;

static inline ::Mono::Security::X509::X509ExtensionCollection* New_ctor(::Mono::Security::ASN1*  asn1) ;

/// @brief Method Remove, addr 0xa0f422c, size 0x70, virtual false, abstract: false, final false
inline void Remove(::Mono::Security::X509::X509Extension*  extension) ;

/// @brief Method Remove, addr 0xa0f429c, size 0x8c, virtual false, abstract: false, final false
inline void Remove(::StringW  oid) ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0xa0f4328, size 0x20, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

constexpr bool const& __cordl_internal_get_readOnly() const;

constexpr bool& __cordl_internal_get_readOnly() ;

constexpr void __cordl_internal_set_readOnly(bool  value) ;

/// @brief Method .ctor, addr 0xa0f0d08, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xa0f3a24, size 0x13c, virtual false, abstract: false, final false
inline void _ctor(::Mono::Security::ASN1*  asn1) ;

/// @brief Method get_Item, addr 0xa0f3e18, size 0x98, virtual false, abstract: false, final false
inline ::Mono::Security::X509::X509Extension* get_Item(int32_t  index) ;

/// @brief Method get_Item, addr 0xa0f2f3c, size 0xb0, virtual false, abstract: false, final false
inline ::Mono::Security::X509::X509Extension* get_Item(::StringW  oid) ;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr X509ExtensionCollection() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "X509ExtensionCollection", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
X509ExtensionCollection(X509ExtensionCollection && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "X509ExtensionCollection", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
X509ExtensionCollection(X509ExtensionCollection const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27822};

/// @brief Field readOnly, offset: 0x18, size: 0x1, def value: None
 bool  ___readOnly;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mono::Security::X509::X509ExtensionCollection, ___readOnly) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Mono::Security::X509::X509ExtensionCollection) == 0x20, "Size mismatch!");

} // namespace end def Mono::Security::X509
