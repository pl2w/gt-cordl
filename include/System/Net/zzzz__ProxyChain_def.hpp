#pragma once
// IWYU pragma private; include "System/Net/ProxyChain.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ProxyChain)
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
class HttpAbortDelegate;
}
namespace System::Net {
class HttpWebRequest;
}
namespace System::Net {
class ProxyChain_ProxyEnumerator;
}
namespace System::Net {
class WebException;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace System::Net {
class ProxyChain;
}
namespace System::Net {
class ProxyChain_ProxyEnumerator;
}
// Write type traits
MARK_REF_T(::System::Net::ProxyChain*);
MARK_REF_T(::System::Net::ProxyChain_ProxyEnumerator*);
DEFINE_IL2CPP_CLASS(::System::Net::ProxyChain*, "System.Net", "ProxyChain");
DEFINE_IL2CPP_CLASS(::System::Net::ProxyChain_ProxyEnumerator*, "System.Net", "ProxyChain/ProxyEnumerator");
// Dependencies System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.ProxyChain
class CORDL_TYPE ProxyChain : public ::System::Object {
public:
// Declarations
using ProxyEnumerator = ::System::Net::ProxyChain_ProxyEnumerator;

 __declspec(property(get=get_Destination)) ::System::Uri*  Destination;

 __declspec(property(get=get_Enumerator)) ::System::Collections::Generic::IEnumerator_1<::System::Uri*>*  Enumerator;

 __declspec(property(get=get_HttpAbortDelegate)) ::System::Net::HttpAbortDelegate*  HttpAbortDelegate;

/// @brief Field m_Cache, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Cache, put=__cordl_internal_set_m_Cache)) ::System::Collections::Generic::List_1<::System::Uri*>*  m_Cache;

/// @brief Field m_CacheComplete, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_CacheComplete, put=__cordl_internal_set_m_CacheComplete)) bool  m_CacheComplete;

/// @brief Field m_Destination, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Destination, put=__cordl_internal_set_m_Destination)) ::System::Uri*  m_Destination;

/// @brief Field m_HttpAbortDelegate, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_HttpAbortDelegate, put=__cordl_internal_set_m_HttpAbortDelegate)) ::System::Net::HttpAbortDelegate*  m_HttpAbortDelegate;

/// @brief Field m_MainEnumerator, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_MainEnumerator, put=__cordl_internal_set_m_MainEnumerator)) ::System::Net::ProxyChain_ProxyEnumerator*  m_MainEnumerator;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Uri*>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::System::Uri*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Abort, addr 0xac73518, size 0x4, virtual true, abstract: false, final false
inline void Abort() ;

/// @brief Method Dispose, addr 0xac734f8, size 0x4, virtual true, abstract: false, final false
inline void Dispose() ;

/// @brief Method GetEnumerator, addr 0xac73434, size 0x88, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::System::Uri*>* GetEnumerator() ;

/// @brief Method GetNextProxy, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool GetNextProxy(::by_ref<::System::Uri*>  proxy) ;

/// @brief Method HttpAbort, addr 0xac7351c, size 0x1c, virtual false, abstract: false, final false
inline bool HttpAbort(::System::Net::HttpWebRequest*  request, ::System::Net::WebException*  webException) ;

static inline ::System::Net::ProxyChain* New_ctor(::System::Uri*  destination) ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0xac734f4, size 0x4, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

constexpr ::System::Collections::Generic::List_1<::System::Uri*>* const& __cordl_internal_get_m_Cache() const;

constexpr ::System::Collections::Generic::List_1<::System::Uri*>*& __cordl_internal_get_m_Cache() ;

constexpr bool const& __cordl_internal_get_m_CacheComplete() const;

constexpr bool& __cordl_internal_get_m_CacheComplete() ;

constexpr ::System::Uri* const& __cordl_internal_get_m_Destination() const;

constexpr ::System::Uri*& __cordl_internal_get_m_Destination() ;

constexpr ::System::Net::HttpAbortDelegate* const& __cordl_internal_get_m_HttpAbortDelegate() const;

constexpr ::System::Net::HttpAbortDelegate*& __cordl_internal_get_m_HttpAbortDelegate() ;

constexpr ::System::Net::ProxyChain_ProxyEnumerator* const& __cordl_internal_get_m_MainEnumerator() const;

constexpr ::System::Net::ProxyChain_ProxyEnumerator*& __cordl_internal_get_m_MainEnumerator() ;

constexpr void __cordl_internal_set_m_Cache(::System::Collections::Generic::List_1<::System::Uri*>*  value) ;

constexpr void __cordl_internal_set_m_CacheComplete(bool  value) ;

constexpr void __cordl_internal_set_m_Destination(::System::Uri*  value) ;

constexpr void __cordl_internal_set_m_HttpAbortDelegate(::System::Net::HttpAbortDelegate*  value) ;

constexpr void __cordl_internal_set_m_MainEnumerator(::System::Net::ProxyChain_ProxyEnumerator*  value) ;

/// @brief Method .ctor, addr 0xac73398, size 0x9c, virtual false, abstract: false, final false
inline void _ctor(::System::Uri*  destination) ;

/// @brief Method get_Destination, addr 0xac73510, size 0x8, virtual false, abstract: false, final false
inline ::System::Uri* get_Destination() ;

/// @brief Method get_Enumerator, addr 0xac734fc, size 0x14, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerator_1<::System::Uri*>* get_Enumerator() ;

/// @brief Method get_HttpAbortDelegate, addr 0xac73538, size 0x90, virtual false, abstract: false, final false
inline ::System::Net::HttpAbortDelegate* get_HttpAbortDelegate() ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Uri*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::System::Uri*>* i___System__Collections__Generic__IEnumerable_1___System__Uri__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProxyChain() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProxyChain", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProxyChain(ProxyChain && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProxyChain", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProxyChain(ProxyChain const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10597};

/// @brief Field m_Cache, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::System::Uri*>*  ___m_Cache;

/// @brief Field m_CacheComplete, offset: 0x18, size: 0x1, def value: None
 bool  ___m_CacheComplete;

/// @brief Field m_MainEnumerator, offset: 0x20, size: 0x8, def value: None
 ::System::Net::ProxyChain_ProxyEnumerator*  ___m_MainEnumerator;

/// @brief Field m_Destination, offset: 0x28, size: 0x8, def value: None
 ::System::Uri*  ___m_Destination;

/// @brief Field m_HttpAbortDelegate, offset: 0x30, size: 0x8, def value: None
 ::System::Net::HttpAbortDelegate*  ___m_HttpAbortDelegate;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::ProxyChain, ___m_Cache) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::ProxyChain, ___m_CacheComplete) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::ProxyChain, ___m_MainEnumerator) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::ProxyChain, ___m_Destination) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::ProxyChain, ___m_HttpAbortDelegate) == 0x30, "Offset mismatch!");

static_assert(sizeof(::System::Net::ProxyChain) == 0x38, "Size mismatch!");

} // namespace end def System::Net
// Dependencies System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.ProxyChain/ProxyEnumerator
class CORDL_TYPE ProxyChain_ProxyEnumerator : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Current)) ::System::Uri*  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field m_Chain, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Chain, put=__cordl_internal_set_m_Chain)) ::System::Net::ProxyChain*  m_Chain;

/// @brief Field m_CurrentIndex, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_CurrentIndex, put=__cordl_internal_set_m_CurrentIndex)) int32_t  m_CurrentIndex;

/// @brief Field m_Finished, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_Finished, put=__cordl_internal_set_m_Finished)) bool  m_Finished;

/// @brief Field m_TriedDirect, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_TriedDirect, put=__cordl_internal_set_m_TriedDirect)) bool  m_TriedDirect;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Uri*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Uri*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0xac73934, size 0x4, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method MoveNext, addr 0xac73684, size 0x2a0, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::System::Net::ProxyChain_ProxyEnumerator* New_ctor(::System::Net::ProxyChain*  chain) ;

/// @brief Method Reset, addr 0xac73924, size 0x10, virtual true, abstract: false, final true
inline void Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0xac73680, size 0x4, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

constexpr ::System::Net::ProxyChain* const& __cordl_internal_get_m_Chain() const;

constexpr ::System::Net::ProxyChain*& __cordl_internal_get_m_Chain() ;

constexpr int32_t const& __cordl_internal_get_m_CurrentIndex() const;

constexpr int32_t& __cordl_internal_get_m_CurrentIndex() ;

constexpr bool const& __cordl_internal_get_m_Finished() const;

constexpr bool& __cordl_internal_get_m_Finished() ;

constexpr bool const& __cordl_internal_get_m_TriedDirect() const;

constexpr bool& __cordl_internal_get_m_TriedDirect() ;

constexpr void __cordl_internal_set_m_Chain(::System::Net::ProxyChain*  value) ;

constexpr void __cordl_internal_set_m_CurrentIndex(int32_t  value) ;

constexpr void __cordl_internal_set_m_Finished(bool  value) ;

constexpr void __cordl_internal_set_m_TriedDirect(bool  value) ;

/// @brief Method .ctor, addr 0xac734bc, size 0x38, virtual false, abstract: false, final false
inline void _ctor(::System::Net::ProxyChain*  chain) ;

/// @brief Method get_Current, addr 0xac735c8, size 0xb8, virtual true, abstract: false, final true
inline ::System::Uri* get_Current() ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Uri*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Uri*>* i___System__Collections__Generic__IEnumerator_1___System__Uri__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProxyChain_ProxyEnumerator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProxyChain_ProxyEnumerator", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProxyChain_ProxyEnumerator(ProxyChain_ProxyEnumerator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProxyChain_ProxyEnumerator", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProxyChain_ProxyEnumerator(ProxyChain_ProxyEnumerator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10596};

/// @brief Field m_Chain, offset: 0x10, size: 0x8, def value: None
 ::System::Net::ProxyChain*  ___m_Chain;

/// @brief Field m_Finished, offset: 0x18, size: 0x1, def value: None
 bool  ___m_Finished;

/// @brief Field m_CurrentIndex, offset: 0x1c, size: 0x4, def value: None
 int32_t  ___m_CurrentIndex;

/// @brief Field m_TriedDirect, offset: 0x20, size: 0x1, def value: None
 bool  ___m_TriedDirect;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::ProxyChain_ProxyEnumerator, ___m_Chain) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::ProxyChain_ProxyEnumerator, ___m_Finished) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::ProxyChain_ProxyEnumerator, ___m_CurrentIndex) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::System::Net::ProxyChain_ProxyEnumerator, ___m_TriedDirect) == 0x20, "Offset mismatch!");

static_assert(sizeof(::System::Net::ProxyChain_ProxyEnumerator) == 0x28, "Size mismatch!");

} // namespace end def System::Net
