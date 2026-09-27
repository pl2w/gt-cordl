#pragma once
// IWYU pragma private; include "Fusion/TickRate_Selection.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TickRate_Selection)
// Forward declare root types
namespace GlobalNamespace {
struct TickRate_Selection;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::TickRate_Selection);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TickRate_Selection, "Fusion", "TickRate/Selection");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Fusion.TickRate/Selection
struct CORDL_TYPE TickRate_Selection {
public:
// Declarations
/// @brief Field Client, offset 0x0, size 0x4 
 __declspec(property(get=__cordl_internal_get_Client, put=__cordl_internal_set_Client)) int32_t  Client;

/// @brief Field ClientSendIndex, offset 0x8, size 0x4 
 __declspec(property(get=__cordl_internal_get_ClientSendIndex, put=__cordl_internal_set_ClientSendIndex)) int32_t  ClientSendIndex;

/// @brief Field ServerIndex, offset 0x4, size 0x4 
 __declspec(property(get=__cordl_internal_get_ServerIndex, put=__cordl_internal_set_ServerIndex)) int32_t  ServerIndex;

/// @brief Field ServerSendIndex, offset 0xc, size 0x4 
 __declspec(property(get=__cordl_internal_get_ServerSendIndex, put=__cordl_internal_set_ServerSendIndex)) int32_t  ServerSendIndex;

constexpr int32_t const& __cordl_internal_get_Client() const;

constexpr int32_t& __cordl_internal_get_Client() ;

constexpr int32_t const& __cordl_internal_get_ClientSendIndex() const;

constexpr int32_t& __cordl_internal_get_ClientSendIndex() ;

constexpr int32_t const& __cordl_internal_get_ServerIndex() const;

constexpr int32_t& __cordl_internal_get_ServerIndex() ;

constexpr int32_t const& __cordl_internal_get_ServerSendIndex() const;

constexpr int32_t& __cordl_internal_get_ServerSendIndex() ;

constexpr void __cordl_internal_set_Client(int32_t  value) ;

constexpr void __cordl_internal_set_ClientSendIndex(int32_t  value) ;

constexpr void __cordl_internal_set_ServerIndex(int32_t  value) ;

constexpr void __cordl_internal_set_ServerSendIndex(int32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr TickRate_Selection() ;

// Ctor Parameters [CppParam { name: "Client", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ServerIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ClientSendIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ServerSendIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr TickRate_Selection(int32_t  Client, int32_t  ServerIndex, int32_t  ClientSendIndex, int32_t  ServerSendIndex) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___Client_padding[0x0];
/// @brief Field Client, offset: 0x0, size: 0x4, def value: None
 int32_t  ___Client;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___Client_padding_forAlignment[0x0];
/// @brief Field Client, offset: 0x0, size: 0x4, def value: None
 int32_t  ___Client_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x4
 uint8_t  ___ServerIndex_padding[0x4];
/// @brief Field ServerIndex, offset: 0x4, size: 0x4, def value: None
 int32_t  ___ServerIndex;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x4 for alignment
 uint8_t  ___ServerIndex_padding_forAlignment[0x4];
/// @brief Field ServerIndex, offset: 0x4, size: 0x4, def value: None
 int32_t  ___ServerIndex_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x8
 uint8_t  ___ClientSendIndex_padding[0x8];
/// @brief Field ClientSendIndex, offset: 0x8, size: 0x4, def value: None
 int32_t  ___ClientSendIndex;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x8 for alignment
 uint8_t  ___ClientSendIndex_padding_forAlignment[0x8];
/// @brief Field ClientSendIndex, offset: 0x8, size: 0x4, def value: None
 int32_t  ___ClientSendIndex_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0xc
 uint8_t  ___ServerSendIndex_padding[0xc];
/// @brief Field ServerSendIndex, offset: 0xc, size: 0x4, def value: None
 int32_t  ___ServerSendIndex;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0xc for alignment
 uint8_t  ___ServerSendIndex_padding_forAlignment[0xc];
/// @brief Field ServerSendIndex, offset: 0xc, size: 0x4, def value: None
 int32_t  ___ServerSendIndex_forAlignment;
};
};
public:

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19104};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::TickRate_Selection) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
