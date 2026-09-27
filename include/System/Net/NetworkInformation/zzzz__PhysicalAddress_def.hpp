#pragma once
// IWYU pragma private; include "System/Net/NetworkInformation/PhysicalAddress.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PhysicalAddress)
namespace System {
class Object;
}
// Forward declare root types
namespace System::Net::NetworkInformation {
class PhysicalAddress;
}
// Write type traits
MARK_REF_T(::System::Net::NetworkInformation::PhysicalAddress*);
DEFINE_IL2CPP_CLASS(::System::Net::NetworkInformation::PhysicalAddress*, "System.Net.NetworkInformation", "PhysicalAddress");
// Dependencies System.Object
namespace System::Net::NetworkInformation {
// Is value type: false
// CS Name: System.Net.NetworkInformation.PhysicalAddress
class CORDL_TYPE PhysicalAddress : public ::System::Object {
public:
// Declarations
/// @brief Field None, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_None, put=setStaticF_None)) ::System::Net::NetworkInformation::PhysicalAddress*  None;

/// @brief Field address, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_address, put=__cordl_internal_set_address)) ::ArrayW<uint8_t>  address;

/// @brief Field changed, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_changed, put=__cordl_internal_set_changed)) bool  changed;

/// @brief Field hash, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_hash, put=__cordl_internal_set_hash)) int32_t  hash;

/// @brief Method Equals, addr 0xacc8340, size 0xe0, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  comparand) ;

/// @brief Method GetHashCode, addr 0xacc8220, size 0x120, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

static inline ::System::Net::NetworkInformation::PhysicalAddress* New_ctor(::ArrayW<uint8_t>  address) ;

/// @brief Method ToString, addr 0xacc8420, size 0xf4, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_address() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_address() ;

constexpr bool const& __cordl_internal_get_changed() const;

constexpr bool& __cordl_internal_get_changed() ;

constexpr int32_t const& __cordl_internal_get_hash() const;

constexpr int32_t& __cordl_internal_get_hash() ;

constexpr void __cordl_internal_set_address(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set_changed(bool  value) ;

constexpr void __cordl_internal_set_hash(int32_t  value) ;

/// @brief Method .ctor, addr 0xacc81e8, size 0x38, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<uint8_t>  address) ;

static inline ::System::Net::NetworkInformation::PhysicalAddress* getStaticF_None() ;

static inline void setStaticF_None(::System::Net::NetworkInformation::PhysicalAddress*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PhysicalAddress() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PhysicalAddress", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PhysicalAddress(PhysicalAddress && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PhysicalAddress", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PhysicalAddress(PhysicalAddress const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10769};

/// @brief Field address, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___address;

/// @brief Field changed, offset: 0x18, size: 0x1, def value: None
 bool  ___changed;

/// @brief Field hash, offset: 0x1c, size: 0x4, def value: None
 int32_t  ___hash;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::NetworkInformation::PhysicalAddress, ___address) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::NetworkInformation::PhysicalAddress, ___changed) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::NetworkInformation::PhysicalAddress, ___hash) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::System::Net::NetworkInformation::PhysicalAddress) == 0x20, "Size mismatch!");

} // namespace end def System::Net::NetworkInformation
