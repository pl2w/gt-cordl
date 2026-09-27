#pragma once
// IWYU pragma private; include "GlobalNamespace/StaticRPCEntry.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(StaticRPCEntry)
namespace GlobalNamespace {
class NetworkSystem_StaticRPCPlaceholder;
}
namespace GlobalNamespace {
class NetworkSystem_StaticRPC;
}
// Forward declare root types
namespace GlobalNamespace {
class StaticRPCEntry;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::StaticRPCEntry*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::StaticRPCEntry*, "", "StaticRPCEntry");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: StaticRPCEntry
class CORDL_TYPE StaticRPCEntry : public ::System::Object {
public:
// Declarations
/// @brief Field code, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_code, put=__cordl_internal_set_code)) uint8_t  code;

/// @brief Field lookupMethod, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_lookupMethod, put=__cordl_internal_set_lookupMethod)) ::GlobalNamespace::NetworkSystem_StaticRPC*  lookupMethod;

/// @brief Field placeholder, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_placeholder, put=__cordl_internal_set_placeholder)) ::GlobalNamespace::NetworkSystem_StaticRPCPlaceholder*  placeholder;

static inline ::GlobalNamespace::StaticRPCEntry* New_ctor(::GlobalNamespace::NetworkSystem_StaticRPCPlaceholder*  placeholder, uint8_t  code, ::GlobalNamespace::NetworkSystem_StaticRPC*  lookupMethod) ;

constexpr uint8_t const& __cordl_internal_get_code() const;

constexpr uint8_t& __cordl_internal_get_code() ;

constexpr ::GlobalNamespace::NetworkSystem_StaticRPC* const& __cordl_internal_get_lookupMethod() const;

constexpr ::GlobalNamespace::NetworkSystem_StaticRPC*& __cordl_internal_get_lookupMethod() ;

constexpr ::GlobalNamespace::NetworkSystem_StaticRPCPlaceholder* const& __cordl_internal_get_placeholder() const;

constexpr ::GlobalNamespace::NetworkSystem_StaticRPCPlaceholder*& __cordl_internal_get_placeholder() ;

constexpr void __cordl_internal_set_code(uint8_t  value) ;

constexpr void __cordl_internal_set_lookupMethod(::GlobalNamespace::NetworkSystem_StaticRPC*  value) ;

constexpr void __cordl_internal_set_placeholder(::GlobalNamespace::NetworkSystem_StaticRPCPlaceholder*  value) ;

/// @brief Method .ctor, addr 0x570d964, size 0x54, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::NetworkSystem_StaticRPCPlaceholder*  placeholder, uint8_t  code, ::GlobalNamespace::NetworkSystem_StaticRPC*  lookupMethod) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StaticRPCEntry() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StaticRPCEntry", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StaticRPCEntry(StaticRPCEntry && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StaticRPCEntry", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StaticRPCEntry(StaticRPCEntry const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1161};

/// @brief Field placeholder, offset: 0x10, size: 0x8, def value: None
 ::GlobalNamespace::NetworkSystem_StaticRPCPlaceholder*  ___placeholder;

/// @brief Field code, offset: 0x18, size: 0x1, def value: None
 uint8_t  ___code;

/// @brief Field lookupMethod, offset: 0x20, size: 0x8, def value: None
 ::GlobalNamespace::NetworkSystem_StaticRPC*  ___lookupMethod;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::StaticRPCEntry, ___placeholder) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StaticRPCEntry, ___code) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StaticRPCEntry, ___lookupMethod) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::StaticRPCEntry) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
