#pragma once
// IWYU pragma private; include "System/Net/SecChannelBindings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SecChannelBindings)
// Forward declare root types
namespace System::Net {
class SecChannelBindings;
}
// Write type traits
MARK_REF_T(::System::Net::SecChannelBindings*);
DEFINE_IL2CPP_CLASS(::System::Net::SecChannelBindings*, "System.Net", "SecChannelBindings");
// Dependencies System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.SecChannelBindings
class CORDL_TYPE SecChannelBindings : public ::System::Object {
public:
// Declarations
/// @brief Field cbAcceptorLength, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_cbAcceptorLength, put=__cordl_internal_set_cbAcceptorLength)) int32_t  cbAcceptorLength;

/// @brief Field cbApplicationDataLength, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_cbApplicationDataLength, put=__cordl_internal_set_cbApplicationDataLength)) int32_t  cbApplicationDataLength;

/// @brief Field cbInitiatorLength, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_cbInitiatorLength, put=__cordl_internal_set_cbInitiatorLength)) int32_t  cbInitiatorLength;

/// @brief Field dwAcceptorAddrType, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_dwAcceptorAddrType, put=__cordl_internal_set_dwAcceptorAddrType)) int32_t  dwAcceptorAddrType;

/// @brief Field dwAcceptorOffset, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_dwAcceptorOffset, put=__cordl_internal_set_dwAcceptorOffset)) int32_t  dwAcceptorOffset;

/// @brief Field dwApplicationDataOffset, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_dwApplicationDataOffset, put=__cordl_internal_set_dwApplicationDataOffset)) int32_t  dwApplicationDataOffset;

/// @brief Field dwInitiatorAddrType, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_dwInitiatorAddrType, put=__cordl_internal_set_dwInitiatorAddrType)) int32_t  dwInitiatorAddrType;

/// @brief Field dwInitiatorOffset, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_dwInitiatorOffset, put=__cordl_internal_set_dwInitiatorOffset)) int32_t  dwInitiatorOffset;

static inline ::System::Net::SecChannelBindings* New_ctor() ;

constexpr int32_t const& __cordl_internal_get_cbAcceptorLength() const;

constexpr int32_t& __cordl_internal_get_cbAcceptorLength() ;

constexpr int32_t const& __cordl_internal_get_cbApplicationDataLength() const;

constexpr int32_t& __cordl_internal_get_cbApplicationDataLength() ;

constexpr int32_t const& __cordl_internal_get_cbInitiatorLength() const;

constexpr int32_t& __cordl_internal_get_cbInitiatorLength() ;

constexpr int32_t const& __cordl_internal_get_dwAcceptorAddrType() const;

constexpr int32_t& __cordl_internal_get_dwAcceptorAddrType() ;

constexpr int32_t const& __cordl_internal_get_dwAcceptorOffset() const;

constexpr int32_t& __cordl_internal_get_dwAcceptorOffset() ;

constexpr int32_t const& __cordl_internal_get_dwApplicationDataOffset() const;

constexpr int32_t& __cordl_internal_get_dwApplicationDataOffset() ;

constexpr int32_t const& __cordl_internal_get_dwInitiatorAddrType() const;

constexpr int32_t& __cordl_internal_get_dwInitiatorAddrType() ;

constexpr int32_t const& __cordl_internal_get_dwInitiatorOffset() const;

constexpr int32_t& __cordl_internal_get_dwInitiatorOffset() ;

constexpr void __cordl_internal_set_cbAcceptorLength(int32_t  value) ;

constexpr void __cordl_internal_set_cbApplicationDataLength(int32_t  value) ;

constexpr void __cordl_internal_set_cbInitiatorLength(int32_t  value) ;

constexpr void __cordl_internal_set_dwAcceptorAddrType(int32_t  value) ;

constexpr void __cordl_internal_set_dwAcceptorOffset(int32_t  value) ;

constexpr void __cordl_internal_set_dwApplicationDataOffset(int32_t  value) ;

constexpr void __cordl_internal_set_dwInitiatorAddrType(int32_t  value) ;

constexpr void __cordl_internal_set_dwInitiatorOffset(int32_t  value) ;

/// @brief Method .ctor, addr 0xac5acf0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SecChannelBindings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SecChannelBindings", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SecChannelBindings(SecChannelBindings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SecChannelBindings", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SecChannelBindings(SecChannelBindings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10527};

/// @brief Field dwInitiatorAddrType, offset: 0x10, size: 0x4, def value: None
 int32_t  ___dwInitiatorAddrType;

/// @brief Field cbInitiatorLength, offset: 0x14, size: 0x4, def value: None
 int32_t  ___cbInitiatorLength;

/// @brief Field dwInitiatorOffset, offset: 0x18, size: 0x4, def value: None
 int32_t  ___dwInitiatorOffset;

/// @brief Field dwAcceptorAddrType, offset: 0x1c, size: 0x4, def value: None
 int32_t  ___dwAcceptorAddrType;

/// @brief Field cbAcceptorLength, offset: 0x20, size: 0x4, def value: None
 int32_t  ___cbAcceptorLength;

/// @brief Field dwAcceptorOffset, offset: 0x24, size: 0x4, def value: None
 int32_t  ___dwAcceptorOffset;

/// @brief Field cbApplicationDataLength, offset: 0x28, size: 0x4, def value: None
 int32_t  ___cbApplicationDataLength;

/// @brief Field dwApplicationDataOffset, offset: 0x2c, size: 0x4, def value: None
 int32_t  ___dwApplicationDataOffset;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::SecChannelBindings, ___dwInitiatorAddrType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::SecChannelBindings, ___cbInitiatorLength) == 0x14, "Offset mismatch!");

static_assert(offsetof(::System::Net::SecChannelBindings, ___dwInitiatorOffset) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::SecChannelBindings, ___dwAcceptorAddrType) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::System::Net::SecChannelBindings, ___cbAcceptorLength) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::SecChannelBindings, ___dwAcceptorOffset) == 0x24, "Offset mismatch!");

static_assert(offsetof(::System::Net::SecChannelBindings, ___cbApplicationDataLength) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::SecChannelBindings, ___dwApplicationDataOffset) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::System::Net::SecChannelBindings) == 0x30, "Size mismatch!");

} // namespace end def System::Net
