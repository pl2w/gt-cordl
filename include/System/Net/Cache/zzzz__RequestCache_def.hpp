#pragma once
// IWYU pragma private; include "System/Net/Cache/RequestCache.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(RequestCache)
// Forward declare root types
namespace System::Net::Cache {
class RequestCache;
}
// Write type traits
MARK_REF_T(::System::Net::Cache::RequestCache*);
DEFINE_IL2CPP_CLASS(::System::Net::Cache::RequestCache*, "System.Net.Cache", "RequestCache");
// Dependencies System.Object
namespace System::Net::Cache {
// Is value type: false
// CS Name: System.Net.Cache.RequestCache
class CORDL_TYPE RequestCache : public ::System::Object {
public:
// Declarations
/// @brief Field LineSplits, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_LineSplits, put=setStaticF_LineSplits)) ::ArrayW<char16_t>  LineSplits;

/// @brief Field _CanWrite, offset 0x11, size 0x1 
 __declspec(property(get=__cordl_internal_get__CanWrite, put=__cordl_internal_set__CanWrite)) bool  _CanWrite;

/// @brief Field _IsPrivateCache, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsPrivateCache, put=__cordl_internal_set__IsPrivateCache)) bool  _IsPrivateCache;

constexpr bool const& __cordl_internal_get__CanWrite() const;

constexpr bool& __cordl_internal_get__CanWrite() ;

constexpr bool const& __cordl_internal_get__IsPrivateCache() const;

constexpr bool& __cordl_internal_get__IsPrivateCache() ;

constexpr void __cordl_internal_set__CanWrite(bool  value) ;

constexpr void __cordl_internal_set__IsPrivateCache(bool  value) ;

static inline ::ArrayW<char16_t> getStaticF_LineSplits() ;

static inline void setStaticF_LineSplits(::ArrayW<char16_t>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RequestCache() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RequestCache", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RequestCache(RequestCache && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RequestCache", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RequestCache(RequestCache const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10823};

/// @brief Field _IsPrivateCache, offset: 0x10, size: 0x1, def value: None
 bool  ____IsPrivateCache;

/// @brief Field _CanWrite, offset: 0x11, size: 0x1, def value: None
 bool  ____CanWrite;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::Cache::RequestCache, ____IsPrivateCache) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::Cache::RequestCache, ____CanWrite) == 0x11, "Offset mismatch!");

static_assert(sizeof(::System::Net::Cache::RequestCache) == 0x18, "Size mismatch!");

} // namespace end def System::Net::Cache
