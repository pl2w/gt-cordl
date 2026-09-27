#pragma once
// IWYU pragma private; include "Fusion/Sockets/ReliableKey.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/Sockets/zzzz__ReliableKey__Data_e__FixedBuffer_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ReliableKey)
namespace GlobalNamespace {
struct ReliableKey__Data_e__FixedBuffer;
}
// Forward declare root types
namespace Fusion::Sockets {
struct ReliableKey;
}
// Write type traits
MARK_VAL_T(::Fusion::Sockets::ReliableKey);
DEFINE_IL2CPP_CLASS(::Fusion::Sockets::ReliableKey, "Fusion.Sockets", "ReliableKey");
// Dependencies Fusion.Sockets.ReliableKey::<Data>e__FixedBuffer
namespace Fusion::Sockets {
// Is value type: true
// CS Name: Fusion.Sockets.ReliableKey
struct CORDL_TYPE ReliableKey {
public:
// Declarations
using _Data_e__FixedBuffer = ::GlobalNamespace::ReliableKey__Data_e__FixedBuffer;

/// @brief Field Data, offset 0x0, size 0x10 
 __declspec(property(get=__cordl_internal_get_Data, put=__cordl_internal_set_Data)) ::GlobalNamespace::ReliableKey__Data_e__FixedBuffer  Data;

constexpr ::GlobalNamespace::ReliableKey__Data_e__FixedBuffer const& __cordl_internal_get_Data() const;

constexpr ::GlobalNamespace::ReliableKey__Data_e__FixedBuffer& __cordl_internal_get_Data() ;

constexpr void __cordl_internal_set_Data(::GlobalNamespace::ReliableKey__Data_e__FixedBuffer  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr ReliableKey() ;

// Ctor Parameters [CppParam { name: "Data", ty: "::GlobalNamespace::ReliableKey__Data_e__FixedBuffer", modifiers: "", def_value: None, comment: None }]
constexpr ReliableKey(::GlobalNamespace::ReliableKey__Data_e__FixedBuffer  Data) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___Data_padding[0x0];
/// [FixedBuffer(typeof(System.Byte), 16)]
/// @brief Field Data, offset: 0x0, size: 0x10, def value: None
 ::GlobalNamespace::ReliableKey__Data_e__FixedBuffer  ___Data;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___Data_padding_forAlignment[0x0];
/// [FixedBuffer(typeof(System.Byte), 16)]
/// @brief Field Data, offset: 0x0, size: 0x10, def value: None
 ::GlobalNamespace::ReliableKey__Data_e__FixedBuffer  ___Data_forAlignment;
};
};
public:

/// @brief Field SIZE offset 0xffffffff size 0x4
static constexpr int32_t  SIZE{static_cast<int32_t>(0x10)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29386};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(sizeof(::Fusion::Sockets::ReliableKey) == 0x10, "Size mismatch!");

} // namespace end def Fusion::Sockets
