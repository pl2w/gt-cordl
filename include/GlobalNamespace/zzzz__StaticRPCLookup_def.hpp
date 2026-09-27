#pragma once
// IWYU pragma private; include "GlobalNamespace/StaticRPCLookup.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(StaticRPCLookup)
namespace GlobalNamespace {
class NetworkSystem_StaticRPCPlaceholder;
}
namespace GlobalNamespace {
class NetworkSystem_StaticRPC;
}
namespace GlobalNamespace {
class StaticRPCEntry;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class StaticRPCLookup;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::StaticRPCLookup*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::StaticRPCLookup*, "", "StaticRPCLookup");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: StaticRPCLookup
class CORDL_TYPE StaticRPCLookup : public ::System::Object {
public:
// Declarations
/// @brief Field entries, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_entries, put=__cordl_internal_set_entries)) ::System::Collections::Generic::List_1<::GlobalNamespace::StaticRPCEntry*>*  entries;

/// @brief Field eventCodeEntryLookup, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_eventCodeEntryLookup, put=__cordl_internal_set_eventCodeEntryLookup)) ::System::Collections::Generic::Dictionary_2<uint8_t,int32_t>*  eventCodeEntryLookup;

/// @brief Field placeholderEntryLookup, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_placeholderEntryLookup, put=__cordl_internal_set_placeholderEntryLookup)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::NetworkSystem_StaticRPCPlaceholder*,int32_t>*  placeholderEntryLookup;

/// @brief Method Add, addr 0x570d9b8, size 0x160, virtual false, abstract: false, final false
inline void Add(::GlobalNamespace::NetworkSystem_StaticRPCPlaceholder*  placeholder, uint8_t  code, ::GlobalNamespace::NetworkSystem_StaticRPC*  lookupMethod) ;

/// @brief Method CodeToMethod, addr 0x570db18, size 0x90, virtual false, abstract: false, final false
inline ::GlobalNamespace::NetworkSystem_StaticRPC* CodeToMethod(uint8_t  code) ;

static inline ::GlobalNamespace::StaticRPCLookup* New_ctor() ;

/// @brief Method PlaceholderToCode, addr 0x570dba8, size 0x90, virtual false, abstract: false, final false
inline uint8_t PlaceholderToCode(::GlobalNamespace::NetworkSystem_StaticRPCPlaceholder*  placeholder) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::StaticRPCEntry*>* const& __cordl_internal_get_entries() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::StaticRPCEntry*>*& __cordl_internal_get_entries() ;

constexpr ::System::Collections::Generic::Dictionary_2<uint8_t,int32_t>* const& __cordl_internal_get_eventCodeEntryLookup() const;

constexpr ::System::Collections::Generic::Dictionary_2<uint8_t,int32_t>*& __cordl_internal_get_eventCodeEntryLookup() ;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::NetworkSystem_StaticRPCPlaceholder*,int32_t>* const& __cordl_internal_get_placeholderEntryLookup() const;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::NetworkSystem_StaticRPCPlaceholder*,int32_t>*& __cordl_internal_get_placeholderEntryLookup() ;

constexpr void __cordl_internal_set_entries(::System::Collections::Generic::List_1<::GlobalNamespace::StaticRPCEntry*>*  value) ;

constexpr void __cordl_internal_set_eventCodeEntryLookup(::System::Collections::Generic::Dictionary_2<uint8_t,int32_t>*  value) ;

constexpr void __cordl_internal_set_placeholderEntryLookup(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::NetworkSystem_StaticRPCPlaceholder*,int32_t>*  value) ;

/// @brief Method .ctor, addr 0x570dc38, size 0x130, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StaticRPCLookup() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StaticRPCLookup", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StaticRPCLookup(StaticRPCLookup && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StaticRPCLookup", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StaticRPCLookup(StaticRPCLookup const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1162};

/// @brief Field entries, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::StaticRPCEntry*>*  ___entries;

/// @brief Field eventCodeEntryLookup, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<uint8_t,int32_t>*  ___eventCodeEntryLookup;

/// @brief Field placeholderEntryLookup, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::NetworkSystem_StaticRPCPlaceholder*,int32_t>*  ___placeholderEntryLookup;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::StaticRPCLookup, ___entries) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StaticRPCLookup, ___eventCodeEntryLookup) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StaticRPCLookup, ___placeholderEntryLookup) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::StaticRPCLookup) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
