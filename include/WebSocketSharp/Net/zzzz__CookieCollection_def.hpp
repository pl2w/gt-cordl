#pragma once
// IWYU pragma private; include "WebSocketSharp/Net/CookieCollection.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CookieCollection)
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
namespace System::Text {
class Encoding;
}
namespace System {
class Object;
}
namespace WebSocketSharp::Net {
class Cookie;
}
// Forward declare root types
namespace WebSocketSharp::Net {
class CookieCollection;
}
// Write type traits
MARK_REF_T(::WebSocketSharp::Net::CookieCollection*);
DEFINE_IL2CPP_CLASS(::WebSocketSharp::Net::CookieCollection*, "WebSocketSharp.Net", "CookieCollection");
// [DefaultMember("Item")]
// Dependencies System.Object
namespace WebSocketSharp::Net {
// Is value type: false
// CS Name: WebSocketSharp.Net.CookieCollection
class CORDL_TYPE CookieCollection : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_Sorted)) ::System::Collections::Generic::IEnumerable_1<::WebSocketSharp::Net::Cookie*>*  Sorted;

/// @brief Field _list, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__list, put=__cordl_internal_set__list)) ::System::Collections::Generic::List_1<::WebSocketSharp::Net::Cookie*>*  _list;

/// @brief Field _readOnly, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get__readOnly, put=__cordl_internal_set__readOnly)) bool  _readOnly;

/// @brief Field _sync, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__sync, put=__cordl_internal_set__sync)) ::System::Object*  _sync;

/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<::WebSocketSharp::Net::Cookie*>"
constexpr operator  ::System::Collections::Generic::ICollection_1<::WebSocketSharp::Net::Cookie*>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::WebSocketSharp::Net::Cookie*>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::WebSocketSharp::Net::Cookie*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Method Add, addr 0xb986464, size 0xb0, virtual true, abstract: false, final true
inline void Add(::WebSocketSharp::Net::Cookie*  cookie) ;

/// @brief Method Clear, addr 0xb986514, size 0xc0, virtual true, abstract: false, final true
inline void Clear() ;

/// @brief Method Contains, addr 0xb9865d4, size 0x64, virtual true, abstract: false, final true
inline bool Contains(::WebSocketSharp::Net::Cookie*  cookie) ;

/// @brief Method CopyTo, addr 0xb986638, size 0x168, virtual true, abstract: false, final true
inline void CopyTo(::ArrayW<::WebSocketSharp::Net::Cookie*>  array, int32_t  index) ;

/// @brief Method GetEnumerator, addr 0xb9867a0, size 0x90, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::WebSocketSharp::Net::Cookie*>* GetEnumerator() ;

static inline ::WebSocketSharp::Net::CookieCollection* New_ctor() ;

/// @brief Method Parse, addr 0xb975028, size 0xe0, virtual false, abstract: false, final false
static inline ::WebSocketSharp::Net::CookieCollection* Parse(::StringW  value, bool  response) ;

/// @brief Method Remove, addr 0xb986830, size 0x118, virtual true, abstract: false, final true
inline bool Remove(::WebSocketSharp::Net::Cookie*  cookie) ;

/// @brief Method SetOrRemove, addr 0xb986310, size 0x154, virtual false, abstract: false, final false
inline void SetOrRemove(::WebSocketSharp::Net::Cookie*  cookie) ;

/// @brief Method SetOrRemove, addr 0xb97cdac, size 0x134, virtual false, abstract: false, final false
inline void SetOrRemove(::WebSocketSharp::Net::CookieCollection*  cookies) ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0xb986948, size 0x90, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

constexpr ::System::Collections::Generic::List_1<::WebSocketSharp::Net::Cookie*>* const& __cordl_internal_get__list() const;

constexpr ::System::Collections::Generic::List_1<::WebSocketSharp::Net::Cookie*>*& __cordl_internal_get__list() ;

constexpr bool const& __cordl_internal_get__readOnly() const;

constexpr bool& __cordl_internal_get__readOnly() ;

constexpr ::System::Object* const& __cordl_internal_get__sync() const;

constexpr ::System::Object*& __cordl_internal_get__sync() ;

constexpr void __cordl_internal_set__list(::System::Collections::Generic::List_1<::WebSocketSharp::Net::Cookie*>*  value) ;

constexpr void __cordl_internal_set__readOnly(bool  value) ;

constexpr void __cordl_internal_set__sync(::System::Object*  value) ;

/// @brief Method .ctor, addr 0xb974f10, size 0x118, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method add, addr 0xb985004, size 0xf4, virtual false, abstract: false, final false
inline void add(::WebSocketSharp::Net::Cookie*  cookie) ;

/// @brief Method compareForSorted, addr 0xb985198, size 0x6c, virtual false, abstract: false, final false
static inline int32_t compareForSorted(::WebSocketSharp::Net::Cookie*  x, ::WebSocketSharp::Net::Cookie*  y) ;

/// @brief Method get_Count, addr 0xb97b574, size 0x48, virtual true, abstract: false, final true
inline int32_t get_Count() ;

/// @brief Method get_IsReadOnly, addr 0xb984ffc, size 0x8, virtual true, abstract: false, final true
inline bool get_IsReadOnly() ;

/// @brief Method get_Sorted, addr 0xb9834cc, size 0x104, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::WebSocketSharp::Net::Cookie*>* get_Sorted() ;

/// @brief Convert to "::System::Collections::Generic::ICollection_1<::WebSocketSharp::Net::Cookie*>"
constexpr ::System::Collections::Generic::ICollection_1<::WebSocketSharp::Net::Cookie*>* i___System__Collections__Generic__ICollection_1___WebSocketSharp__Net__Cookie__() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::WebSocketSharp::Net::Cookie*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::WebSocketSharp::Net::Cookie*>* i___System__Collections__Generic__IEnumerable_1___WebSocketSharp__Net__Cookie__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Method parseRequest, addr 0xb985204, size 0x4c4, virtual false, abstract: false, final false
static inline ::WebSocketSharp::Net::CookieCollection* parseRequest(::StringW  value) ;

/// @brief Method parseResponse, addr 0xb9856c8, size 0x9d4, virtual false, abstract: false, final false
static inline ::WebSocketSharp::Net::CookieCollection* parseResponse(::StringW  value) ;

/// @brief Method search, addr 0xb9850f8, size 0xa0, virtual false, abstract: false, final false
inline int32_t search(::WebSocketSharp::Net::Cookie*  cookie) ;

/// @brief Method urlDecode, addr 0xb98609c, size 0x150, virtual false, abstract: false, final false
static inline ::StringW urlDecode(::StringW  s, ::System::Text::Encoding*  encoding) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CookieCollection() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CookieCollection", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CookieCollection(CookieCollection && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CookieCollection", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CookieCollection(CookieCollection const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30359};

/// @brief Field _list, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::WebSocketSharp::Net::Cookie*>*  ____list;

/// @brief Field _readOnly, offset: 0x18, size: 0x1, def value: None
 bool  ____readOnly;

/// @brief Field _sync, offset: 0x20, size: 0x8, def value: None
 ::System::Object*  ____sync;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WebSocketSharp::Net::CookieCollection, ____list) == 0x10, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::Net::CookieCollection, ____readOnly) == 0x18, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::Net::CookieCollection, ____sync) == 0x20, "Offset mismatch!");

static_assert(sizeof(::WebSocketSharp::Net::CookieCollection) == 0x28, "Size mismatch!");

} // namespace end def WebSocketSharp::Net
