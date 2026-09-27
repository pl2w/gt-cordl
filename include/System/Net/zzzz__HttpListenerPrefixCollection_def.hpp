#pragma once
// IWYU pragma private; include "System/Net/HttpListenerPrefixCollection.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HttpListenerPrefixCollection)
namespace System::Collections::Generic {
template<typename T>
class ICollection_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Net {
class HttpListener;
}
namespace System {
class Array;
}
// Forward declare root types
namespace System::Net {
class HttpListenerPrefixCollection;
}
// Write type traits
MARK_REF_T(::System::Net::HttpListenerPrefixCollection*);
DEFINE_IL2CPP_CLASS(::System::Net::HttpListenerPrefixCollection*, "System.Net", "HttpListenerPrefixCollection");
// Dependencies System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.HttpListenerPrefixCollection
class CORDL_TYPE HttpListenerPrefixCollection : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_IsSynchronized)) bool  IsSynchronized;

/// @brief Field listener, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_listener, put=__cordl_internal_set_listener)) ::System::Net::HttpListener*  listener;

/// @brief Field prefixes, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_prefixes, put=__cordl_internal_set_prefixes)) ::System::Collections::Generic::List_1<::StringW>*  prefixes;

/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<::StringW>"
constexpr operator  ::System::Collections::Generic::ICollection_1<::StringW>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::StringW>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::StringW>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Method Add, addr 0xac9ae74, size 0x138, virtual true, abstract: false, final true
inline void Add(::StringW  uriPrefix) ;

/// @brief Method Clear, addr 0xac9b2d8, size 0xbc, virtual true, abstract: false, final true
inline void Clear() ;

/// @brief Method Contains, addr 0xac9b394, size 0x64, virtual true, abstract: false, final true
inline bool Contains(::StringW  uriPrefix) ;

/// @brief Method CopyTo, addr 0xac9b3f8, size 0x74, virtual true, abstract: false, final true
inline void CopyTo(::ArrayW<::StringW>  array, int32_t  offset) ;

/// @brief Method CopyTo, addr 0xac9b46c, size 0xc4, virtual false, abstract: false, final false
inline void CopyTo(::System::Array*  array, int32_t  offset) ;

/// @brief Method GetEnumerator, addr 0xac9b530, size 0x90, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::StringW>* GetEnumerator() ;

static inline ::System::Net::HttpListenerPrefixCollection* New_ctor() ;

static inline ::System::Net::HttpListenerPrefixCollection* New_ctor(::System::Net::HttpListener*  listener) ;

/// @brief Method Remove, addr 0xac9b650, size 0x104, virtual true, abstract: false, final true
inline bool Remove(::StringW  uriPrefix) ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0xac9b5c0, size 0x90, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

constexpr ::System::Net::HttpListener* const& __cordl_internal_get_listener() const;

constexpr ::System::Net::HttpListener*& __cordl_internal_get_listener() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_prefixes() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_prefixes() ;

constexpr void __cordl_internal_set_listener(::System::Net::HttpListener*  value) ;

constexpr void __cordl_internal_set_prefixes(::System::Collections::Generic::List_1<::StringW>*  value) ;

/// @brief Method .ctor, addr 0xac9b754, size 0x38, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xac97c48, size 0x9c, virtual false, abstract: false, final false
inline void _ctor(::System::Net::HttpListener*  listener) ;

/// @brief Method get_Count, addr 0xac99f0c, size 0x48, virtual true, abstract: false, final true
inline int32_t get_Count() ;

/// @brief Method get_IsReadOnly, addr 0xac9ae64, size 0x8, virtual true, abstract: false, final true
inline bool get_IsReadOnly() ;

/// @brief Method get_IsSynchronized, addr 0xac9ae6c, size 0x8, virtual false, abstract: false, final false
inline bool get_IsSynchronized() ;

/// @brief Convert to "::System::Collections::Generic::ICollection_1<::StringW>"
constexpr ::System::Collections::Generic::ICollection_1<::StringW>* i___System__Collections__Generic__ICollection_1___StringW_() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::StringW>"
constexpr ::System::Collections::Generic::IEnumerable_1<::StringW>* i___System__Collections__Generic__IEnumerable_1___StringW_() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HttpListenerPrefixCollection() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HttpListenerPrefixCollection", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HttpListenerPrefixCollection(HttpListenerPrefixCollection && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HttpListenerPrefixCollection", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HttpListenerPrefixCollection(HttpListenerPrefixCollection const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10683};

/// @brief Field prefixes, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___prefixes;

/// @brief Field listener, offset: 0x18, size: 0x8, def value: None
 ::System::Net::HttpListener*  ___listener;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::HttpListenerPrefixCollection, ___prefixes) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpListenerPrefixCollection, ___listener) == 0x18, "Offset mismatch!");

static_assert(sizeof(::System::Net::HttpListenerPrefixCollection) == 0x20, "Size mismatch!");

} // namespace end def System::Net
