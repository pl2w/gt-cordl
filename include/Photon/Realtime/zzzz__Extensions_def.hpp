#pragma once
// IWYU pragma private; include "Photon/Realtime/Extensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Extensions)
namespace ExitGames::Client::Photon {
class Hashtable;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class IDictionary;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Photon::Realtime {
class Extensions;
}
// Write type traits
MARK_REF_T(::Photon::Realtime::Extensions*);
DEFINE_IL2CPP_CLASS(::Photon::Realtime::Extensions*, "Photon.Realtime", "Extensions");
// [Extension]
// Dependencies System.Object
namespace Photon::Realtime {
// Is value type: false
// CS Name: Photon.Realtime.Extensions
class CORDL_TYPE Extensions : public ::System::Object {
public:
// Declarations
/// @brief Field keysWithNullValue, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_keysWithNullValue, put=setStaticF_keysWithNullValue)) ::System::Collections::Generic::List_1<::System::Object*>*  keysWithNullValue;

/// [Extension]
/// @brief Method Contains, addr 0xa6f94e4, size 0x3c, virtual false, abstract: false, final false
static inline bool Contains(::ArrayW<int32_t>  target, int32_t  nr) ;

/// [Extension]
/// @brief Method Merge, addr 0xa6f7c78, size 0x408, virtual false, abstract: false, final false
static inline void Merge(::System::Collections::IDictionary*  target, ::System::Collections::IDictionary*  addHash) ;

/// [Extension]
/// @brief Method MergeStringKeys, addr 0xa6f8080, size 0x424, virtual false, abstract: false, final false
static inline void MergeStringKeys(::System::Collections::IDictionary*  target, ::System::Collections::IDictionary*  addHash) ;

/// [Extension]
/// @brief Method StripKeysWithNullValues, addr 0xa6f914c, size 0x398, virtual false, abstract: false, final false
static inline void StripKeysWithNullValues(::ExitGames::Client::Photon::Hashtable*  original) ;

/// [Extension]
/// @brief Method StripKeysWithNullValues, addr 0xa6f8b8c, size 0x5c0, virtual false, abstract: false, final false
static inline void StripKeysWithNullValues(::System::Collections::IDictionary*  original) ;

/// [Extension]
/// @brief Method StripToStringKeys, addr 0xa6f8a28, size 0x164, virtual false, abstract: false, final false
static inline ::ExitGames::Client::Photon::Hashtable* StripToStringKeys(::ExitGames::Client::Photon::Hashtable*  original) ;

/// [Extension]
/// @brief Method StripToStringKeys, addr 0xa6f863c, size 0x3ec, virtual false, abstract: false, final false
static inline ::ExitGames::Client::Photon::Hashtable* StripToStringKeys(::System::Collections::IDictionary*  original) ;

/// [Extension]
/// @brief Method ToStringFull, addr 0xa6f8500, size 0x13c, virtual false, abstract: false, final false
static inline ::StringW ToStringFull(::ArrayW<::System::Object*>  data) ;

/// [Extension]
/// @brief Method ToStringFull, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::StringW ToStringFull(::System::Collections::Generic::List_1<T>*  data) ;

/// [Extension]
/// @brief Method ToStringFull, addr 0xa6f84a4, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ToStringFull(::System::Collections::IDictionary*  origin) ;

static inline ::System::Collections::Generic::List_1<::System::Object*>* getStaticF_keysWithNullValue() ;

static inline void setStaticF_keysWithNullValue(::System::Collections::Generic::List_1<::System::Object*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Extensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Extensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Extensions(Extensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Extensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Extensions(Extensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29839};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Photon::Realtime::Extensions) == 0x10, "Size mismatch!");

} // namespace end def Photon::Realtime
