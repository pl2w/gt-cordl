#pragma once
// IWYU pragma private; include "ExitGames/Client/Photon/ParameterDictionary.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ParameterDictionary)
namespace ExitGames::Client::Photon::StructWrapping {
class StructWrapperPools;
}
namespace ExitGames::Client::Photon {
class Hashtable;
}
namespace ExitGames::Client::Photon {
template<typename K,typename V>
class NonAllocDictionary_2;
}
namespace GlobalNamespace {
template<typename K,typename V>
struct NonAllocDictionary_2_PairIterator;
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
template<typename TKey,typename TValue>
struct KeyValuePair_2;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Object;
}
// Forward declare root types
namespace ExitGames::Client::Photon {
class ParameterDictionary;
}
// Write type traits
MARK_REF_T(::ExitGames::Client::Photon::ParameterDictionary*);
DEFINE_IL2CPP_CLASS(::ExitGames::Client::Photon::ParameterDictionary*, "ExitGames.Client.Photon", "ParameterDictionary");
// [DefaultMember("Item")]
// Dependencies System.Object
namespace ExitGames::Client::Photon {
// Is value type: false
// CS Name: ExitGames.Client.Photon.ParameterDictionary
class CORDL_TYPE ParameterDictionary : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_Item, put=set_Item)) ::System::Object*  Item[];

/// @brief Field paramDict, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_paramDict, put=__cordl_internal_set_paramDict)) ::ExitGames::Client::Photon::NonAllocDictionary_2<uint8_t,::System::Object*>*  paramDict;

/// @brief Field wrapperPools, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_wrapperPools, put=__cordl_internal_set_wrapperPools)) ::ExitGames::Client::Photon::StructWrapping::StructWrapperPools*  wrapperPools;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<uint8_t,::System::Object*>>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<uint8_t,::System::Object*>>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Method Add, addr 0xa6c6520, size 0x100, virtual false, abstract: false, final false
inline void Add(uint8_t  code, ::ExitGames::Client::Photon::Hashtable*  value) ;

/// @brief Method Add, addr 0xa6c6420, size 0x100, virtual false, abstract: false, final false
inline void Add(uint8_t  code, ::StringW  value) ;

/// @brief Method Add, addr 0xa6c6c20, size 0x100, virtual false, abstract: false, final false
inline void Add(uint8_t  code, ::System::Object*  value) ;

/// @brief Method Add, addr 0xa6c6768, size 0x150, virtual false, abstract: false, final false
inline void Add(uint8_t  code, bool  value) ;

/// @brief Method Add, addr 0xa6c68b8, size 0x120, virtual false, abstract: false, final false
inline void Add(uint8_t  code, int16_t  value) ;

/// @brief Method Add, addr 0xa6c69d8, size 0x120, virtual false, abstract: false, final false
inline void Add(uint8_t  code, int32_t  value) ;

/// @brief Method Add, addr 0xa6c6af8, size 0x128, virtual false, abstract: false, final false
inline void Add(uint8_t  code, int64_t  value) ;

/// @brief Method Add, addr 0xa6c6620, size 0x148, virtual false, abstract: false, final false
inline void Add(uint8_t  code, uint8_t  value) ;

/// @brief Method Clear, addr 0xa6c63c0, size 0x60, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method ContainsKey, addr 0xa6c6d20, size 0x58, virtual false, abstract: false, final false
inline bool ContainsKey(uint8_t  key) ;

/// @brief Method Get, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline T Get(uint8_t  key) ;

/// @brief Method GetEnumerator, addr 0xa6c6208, size 0x50, virtual false, abstract: false, final false
inline ::GlobalNamespace::NonAllocDictionary_2_PairIterator<uint8_t,::System::Object*> GetEnumerator() ;

static inline ::ExitGames::Client::Photon::ParameterDictionary* New_ctor() ;

static inline ::ExitGames::Client::Photon::ParameterDictionary* New_ctor(int32_t  capacity) ;

/// @brief Method System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<System.Byte,System.Object>>.GetEnumerator, addr 0xa6c60c8, size 0xa0, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<uint8_t,::System::Object*>>* System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_Byte_System_Object___GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0xa6c6168, size 0xa0, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method ToStringFull, addr 0xa6c6e58, size 0xbc, virtual false, abstract: false, final false
inline ::StringW ToStringFull(bool  includeTypes) ;

/// @brief Method TryGetObject, addr 0xa6c6d78, size 0x78, virtual false, abstract: false, final false
inline ::System::Object* TryGetObject(uint8_t  key) ;

/// @brief Method TryGetValue, addr 0xa6c6df0, size 0x68, virtual false, abstract: false, final false
inline bool TryGetValue(uint8_t  key, ::by_ref<::System::Object*>  value) ;

/// @brief Method TryGetValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline bool TryGetValue(uint8_t  key, ::by_ref<T>  value) ;

/// @brief Method Unwrap, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline T Unwrap(uint8_t  key) ;

constexpr ::ExitGames::Client::Photon::NonAllocDictionary_2<uint8_t,::System::Object*>* const& __cordl_internal_get_paramDict() const;

constexpr ::ExitGames::Client::Photon::NonAllocDictionary_2<uint8_t,::System::Object*>*& __cordl_internal_get_paramDict() ;

constexpr ::ExitGames::Client::Photon::StructWrapping::StructWrapperPools* const& __cordl_internal_get_wrapperPools() const;

constexpr ::ExitGames::Client::Photon::StructWrapping::StructWrapperPools*& __cordl_internal_get_wrapperPools() ;

constexpr void __cordl_internal_set_paramDict(::ExitGames::Client::Photon::NonAllocDictionary_2<uint8_t,::System::Object*>*  value) ;

constexpr void __cordl_internal_set_wrapperPools(::ExitGames::Client::Photon::StructWrapping::StructWrapperPools*  value) ;

/// @brief Method .ctor, addr 0xa6c5f20, size 0xc4, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xa6c5fe4, size 0xd0, virtual false, abstract: false, final false
inline void _ctor(int32_t  capacity) ;

/// @brief Method get_Count, addr 0xa6c6370, size 0x50, virtual false, abstract: false, final false
inline int32_t get_Count() ;

/// @brief Method get_Item, addr 0xa6c6258, size 0xb0, virtual false, abstract: false, final false
inline ::System::Object* get_Item(uint8_t  key) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<uint8_t,::System::Object*>>"
constexpr ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<uint8_t,::System::Object*>>* i___System__Collections__Generic__IEnumerable_1___System__Collections__Generic__KeyValuePair_2_uint8_t___System__Object___() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Method op_Implicit, addr 0xa6c60b4, size 0x14, virtual false, abstract: false, final false
static inline ::ExitGames::Client::Photon::NonAllocDictionary_2<uint8_t,::System::Object*>* op_Implicit___ExitGames__Client__Photon__NonAllocDictionary_2_uint8_t___System__Object___(::ExitGames::Client::Photon::ParameterDictionary*  value) ;

/// @brief Method set_Item, addr 0xa6c6308, size 0x68, virtual false, abstract: false, final false
inline void set_Item(uint8_t  key, ::System::Object*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ParameterDictionary() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ParameterDictionary", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ParameterDictionary(ParameterDictionary && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ParameterDictionary", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ParameterDictionary(ParameterDictionary const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26438};

/// @brief Field paramDict, offset: 0x10, size: 0x8, def value: None
 ::ExitGames::Client::Photon::NonAllocDictionary_2<uint8_t,::System::Object*>*  ___paramDict;

/// @brief Field wrapperPools, offset: 0x18, size: 0x8, def value: None
 ::ExitGames::Client::Photon::StructWrapping::StructWrapperPools*  ___wrapperPools;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::ExitGames::Client::Photon::ParameterDictionary, ___paramDict) == 0x10, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::ParameterDictionary, ___wrapperPools) == 0x18, "Offset mismatch!");

static_assert(sizeof(::ExitGames::Client::Photon::ParameterDictionary) == 0x20, "Size mismatch!");

} // namespace end def ExitGames::Client::Photon
