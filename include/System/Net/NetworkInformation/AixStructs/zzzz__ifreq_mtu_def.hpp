#pragma once
// IWYU pragma private; include "System/Net/NetworkInformation/AixStructs/ifreq_mtu.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/NetworkInformation/AixStructs/zzzz__ifreq_mtu__ifr_name_e__FixedBuffer_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ifreq_mtu)
namespace GlobalNamespace {
struct ifreq_mtu__ifr_name_e__FixedBuffer;
}
// Forward declare root types
namespace System::Net::NetworkInformation::AixStructs {
struct ifreq_mtu;
}
// Write type traits
MARK_VAL_T(::System::Net::NetworkInformation::AixStructs::ifreq_mtu);
DEFINE_IL2CPP_CLASS(::System::Net::NetworkInformation::AixStructs::ifreq_mtu, "System.Net.NetworkInformation.AixStructs", "ifreq_mtu");
// Dependencies System.Net.NetworkInformation.AixStructs.ifreq_mtu::<ifr_name>e__FixedBuffer
namespace System::Net::NetworkInformation::AixStructs {
// Is value type: true
// CS Name: System.Net.NetworkInformation.AixStructs.ifreq_mtu
#pragma pack(push, 0)
struct CORDL_TYPE ifreq_mtu {
public:
// Declarations
using _ifr_name_e__FixedBuffer = ::GlobalNamespace::ifreq_mtu__ifr_name_e__FixedBuffer;

/// @brief Field ifr_name, offset 0x0, size 0x10 
 __declspec(property(get=__cordl_internal_get_ifr_name, put=__cordl_internal_set_ifr_name)) ::GlobalNamespace::ifreq_mtu__ifr_name_e__FixedBuffer  ifr_name;

/// @brief Field ifru_mtu, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_ifru_mtu, put=__cordl_internal_set_ifru_mtu)) int32_t  ifru_mtu;

constexpr ::GlobalNamespace::ifreq_mtu__ifr_name_e__FixedBuffer const& __cordl_internal_get_ifr_name() const;

constexpr ::GlobalNamespace::ifreq_mtu__ifr_name_e__FixedBuffer& __cordl_internal_get_ifr_name() ;

constexpr int32_t const& __cordl_internal_get_ifru_mtu() const;

constexpr int32_t& __cordl_internal_get_ifru_mtu() ;

constexpr void __cordl_internal_set_ifr_name(::GlobalNamespace::ifreq_mtu__ifr_name_e__FixedBuffer  value) ;

constexpr void __cordl_internal_set_ifru_mtu(int32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr ifreq_mtu() ;

// Ctor Parameters [CppParam { name: "ifr_name", ty: "::GlobalNamespace::ifreq_mtu__ifr_name_e__FixedBuffer", modifiers: "", def_value: None, comment: None }, CppParam { name: "ifru_mtu", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ifreq_mtu(::GlobalNamespace::ifreq_mtu__ifr_name_e__FixedBuffer  ifr_name, int32_t  ifru_mtu) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___ifr_name_padding[0x0];
/// [FixedBuffer(typeof(System.Byte), 16)]
/// @brief Field ifr_name, offset: 0x0, size: 0x10, def value: None
 ::GlobalNamespace::ifreq_mtu__ifr_name_e__FixedBuffer  ___ifr_name;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___ifr_name_padding_forAlignment[0x0];
/// [FixedBuffer(typeof(System.Byte), 16)]
/// @brief Field ifr_name, offset: 0x0, size: 0x10, def value: None
 ::GlobalNamespace::ifreq_mtu__ifr_name_e__FixedBuffer  ___ifr_name_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x10
 uint8_t  ___ifru_mtu_padding[0x10];
/// @brief Field ifru_mtu, offset: 0x10, size: 0x4, def value: None
 int32_t  ___ifru_mtu;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x10 for alignment
 uint8_t  ___ifru_mtu_padding_forAlignment[0x10];
/// @brief Field ifru_mtu, offset: 0x10, size: 0x4, def value: None
 int32_t  ___ifru_mtu_forAlignment;
};
};
public:

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10813};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x14};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::System::Net::NetworkInformation::AixStructs::ifreq_mtu) == 0x14, "Size mismatch!");

} // namespace end def System::Net::NetworkInformation::AixStructs
