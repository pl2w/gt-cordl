#pragma once
// IWYU pragma private; include "Fusion/Sockets/ReliableHeader.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/Sockets/zzzz__ReliableId_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ReliableHeader)
// Forward declare root types
namespace Fusion::Sockets {
struct ReliableHeader;
}
// Write type traits
MARK_VAL_T(::Fusion::Sockets::ReliableHeader);
DEFINE_IL2CPP_CLASS(::Fusion::Sockets::ReliableHeader, "Fusion.Sockets", "ReliableHeader");
// Dependencies Fusion.Sockets.ReliableId
namespace Fusion::Sockets {
// Is value type: true
// CS Name: Fusion.Sockets.ReliableHeader
struct CORDL_TYPE ReliableHeader {
public:
// Declarations
/// @brief Field Id, offset 0x10, size 0x30 
 __declspec(property(get=__cordl_internal_get_Id, put=__cordl_internal_set_Id)) ::Fusion::Sockets::ReliableId  Id;

/// @brief Field Next, offset 0x0, size 0x8 
 __declspec(property(get=__cordl_internal_get_Next, put=__cordl_internal_set_Next)) ::Fusion::Sockets::ReliableHeader*  Next;

/// @brief Field Prev, offset 0x8, size 0x8 
 __declspec(property(get=__cordl_internal_get_Prev, put=__cordl_internal_set_Prev)) ::Fusion::Sockets::ReliableHeader*  Prev;

/// @brief Method GetData, addr 0x6033b58, size 0x20, virtual false, abstract: false, final false
static inline uint8_t* GetData(::Fusion::Sockets::ReliableHeader*  header) ;

constexpr ::Fusion::Sockets::ReliableId const& __cordl_internal_get_Id() const;

constexpr ::Fusion::Sockets::ReliableId& __cordl_internal_get_Id() ;

constexpr ::Fusion::Sockets::ReliableHeader* const& __cordl_internal_get_Next() const;

constexpr ::Fusion::Sockets::ReliableHeader*& __cordl_internal_get_Next() ;

constexpr ::Fusion::Sockets::ReliableHeader* const& __cordl_internal_get_Prev() const;

constexpr ::Fusion::Sockets::ReliableHeader*& __cordl_internal_get_Prev() ;

constexpr void __cordl_internal_set_Id(::Fusion::Sockets::ReliableId  value) ;

constexpr void __cordl_internal_set_Next(::Fusion::Sockets::ReliableHeader*  value) ;

constexpr void __cordl_internal_set_Prev(::Fusion::Sockets::ReliableHeader*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr ReliableHeader() ;

// Ctor Parameters [CppParam { name: "Next", ty: "::Fusion::Sockets::ReliableHeader*", modifiers: "", def_value: None, comment: None }, CppParam { name: "Prev", ty: "::Fusion::Sockets::ReliableHeader*", modifiers: "", def_value: None, comment: None }, CppParam { name: "Id", ty: "::Fusion::Sockets::ReliableId", modifiers: "", def_value: None, comment: None }]
constexpr ReliableHeader(::Fusion::Sockets::ReliableHeader*  Next, ::Fusion::Sockets::ReliableHeader*  Prev, ::Fusion::Sockets::ReliableId  Id) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___Next_padding[0x0];
/// @brief Field Next, offset: 0x0, size: 0x8, def value: None
 ::Fusion::Sockets::ReliableHeader*  ___Next;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___Next_padding_forAlignment[0x0];
/// @brief Field Next, offset: 0x0, size: 0x8, def value: None
 ::Fusion::Sockets::ReliableHeader*  ___Next_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x8
 uint8_t  ___Prev_padding[0x8];
/// @brief Field Prev, offset: 0x8, size: 0x8, def value: None
 ::Fusion::Sockets::ReliableHeader*  ___Prev;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x8 for alignment
 uint8_t  ___Prev_padding_forAlignment[0x8];
/// @brief Field Prev, offset: 0x8, size: 0x8, def value: None
 ::Fusion::Sockets::ReliableHeader*  ___Prev_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x10
 uint8_t  ___Id_padding[0x10];
/// @brief Field Id, offset: 0x10, size: 0x30, def value: None
 ::Fusion::Sockets::ReliableId  ___Id;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x10 for alignment
 uint8_t  ___Id_padding_forAlignment[0x10];
/// @brief Field Id, offset: 0x10, size: 0x30, def value: None
 ::Fusion::Sockets::ReliableId  ___Id_forAlignment;
};
};
public:

/// @brief Field SIZE offset 0xffffffff size 0x4
static constexpr int32_t  SIZE{static_cast<int32_t>(0x40)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29388};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(sizeof(::Fusion::Sockets::ReliableHeader) == 0x40, "Size mismatch!");

} // namespace end def Fusion::Sockets
