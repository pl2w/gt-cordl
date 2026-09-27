#pragma once
// IWYU pragma private; include "NanoSockets/Address.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Address)
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace NanoSockets {
struct Address;
}
// Write type traits
MARK_VAL_T(::NanoSockets::Address);
DEFINE_IL2CPP_CLASS(::NanoSockets::Address, "NanoSockets", "Address");
// Dependencies 
namespace NanoSockets {
// Is value type: true
// CS Name: NanoSockets.Address
#pragma pack(push, 0)
struct CORDL_TYPE Address {
public:
// Declarations
/// @brief Field Port, offset 0x10, size 0x2 
 __declspec(property(get=__cordl_internal_get_Port, put=__cordl_internal_set_Port)) uint16_t  Port;

/// @brief Field _address0, offset 0x0, size 0x8 
 __declspec(property(get=__cordl_internal_get__address0, put=__cordl_internal_set__address0)) uint64_t  _address0;

/// @brief Field _address1, offset 0x8, size 0x8 
 __declspec(property(get=__cordl_internal_get__address1, put=__cordl_internal_set__address1)) uint64_t  _address1;

/// @brief Convert operator to "::System::IEquatable_1<::NanoSockets::Address>"
constexpr operator  ::System::IEquatable_1<::NanoSockets::Address>*() ;

/// @brief Method Equals, addr 0xa3679c0, size 0x98, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0xa367984, size 0x3c, virtual true, abstract: false, final true
inline bool Equals(::NanoSockets::Address  other) ;

/// @brief Method GetHashCode, addr 0xa367a58, size 0x58, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToString, addr 0xa367ab0, size 0x134, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr uint16_t const& __cordl_internal_get_Port() const;

constexpr uint16_t& __cordl_internal_get_Port() ;

constexpr uint64_t const& __cordl_internal_get__address0() const;

constexpr uint64_t& __cordl_internal_get__address0() ;

constexpr uint64_t const& __cordl_internal_get__address1() const;

constexpr uint64_t& __cordl_internal_get__address1() ;

constexpr void __cordl_internal_set_Port(uint16_t  value) ;

constexpr void __cordl_internal_set__address0(uint64_t  value) ;

constexpr void __cordl_internal_set__address1(uint64_t  value) ;

/// @brief Convert to "::System::IEquatable_1<::NanoSockets::Address>"
constexpr ::System::IEquatable_1<::NanoSockets::Address>* i___System__IEquatable_1___NanoSockets__Address_() ;

// Ctor Parameters []
// @brief default ctor
constexpr Address() ;

// Ctor Parameters [CppParam { name: "_address0", ty: "uint64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_address1", ty: "uint64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Port", ty: "uint16_t", modifiers: "", def_value: None, comment: None }]
constexpr Address(uint64_t  _address0, uint64_t  _address1, uint16_t  Port) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ____address0_padding[0x0];
/// @brief Field _address0, offset: 0x0, size: 0x8, def value: None
 uint64_t  ____address0;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ____address0_padding_forAlignment[0x0];
/// @brief Field _address0, offset: 0x0, size: 0x8, def value: None
 uint64_t  ____address0_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x8
 uint8_t  ____address1_padding[0x8];
/// @brief Field _address1, offset: 0x8, size: 0x8, def value: None
 uint64_t  ____address1;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x8 for alignment
 uint8_t  ____address1_padding_forAlignment[0x8];
/// @brief Field _address1, offset: 0x8, size: 0x8, def value: None
 uint64_t  ____address1_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x10
 uint8_t  ___Port_padding[0x10];
/// @brief Field Port, offset: 0x10, size: 0x2, def value: None
 uint16_t  ___Port;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x10 for alignment
 uint8_t  ___Port_padding_forAlignment[0x10];
/// @brief Field Port, offset: 0x10, size: 0x2, def value: None
 uint16_t  ___Port_forAlignment;
};
};
public:

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{33105};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::NanoSockets::Address) == 0x18, "Size mismatch!");

} // namespace end def NanoSockets
