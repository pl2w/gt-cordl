#pragma once
// IWYU pragma private; include "Fusion/ReaderWriterCache.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ReaderWriterCache)
namespace Fusion {
template<typename T>
class IElementReaderWriter_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Fusion {
class ReaderWriterCache;
}
// Write type traits
MARK_REF_T(::Fusion::ReaderWriterCache*);
DEFINE_IL2CPP_CLASS(::Fusion::ReaderWriterCache*, "Fusion", "ReaderWriterCache");
// Dependencies System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.ReaderWriterCache
class CORDL_TYPE ReaderWriterCache : public ::System::Object {
public:
// Declarations
/// @brief Field _readerWriters, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__readerWriters, put=setStaticF__readerWriters)) ::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Object*>*  _readerWriters;

/// @brief Method Get, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::Fusion::IElementReaderWriter_1<T>* Get(::System::Type*  readerWriterType) ;

static inline ::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Object*>* getStaticF__readerWriters() ;

static inline void setStaticF__readerWriters(::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Object*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ReaderWriterCache() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ReaderWriterCache", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ReaderWriterCache(ReaderWriterCache && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ReaderWriterCache", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ReaderWriterCache(ReaderWriterCache const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19084};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::ReaderWriterCache) == 0x10, "Size mismatch!");

} // namespace end def Fusion
