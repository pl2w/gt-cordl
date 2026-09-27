#pragma once
// IWYU pragma private; include "Fusion/RpcHeader.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__NetworkId_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RpcHeader)
namespace Fusion {
struct NetworkId;
}
// Forward declare root types
namespace Fusion {
struct RpcHeader;
}
// Write type traits
MARK_VAL_T(::Fusion::RpcHeader);
DEFINE_IL2CPP_CLASS(::Fusion::RpcHeader, "Fusion", "RpcHeader");
// Dependencies Fusion.NetworkId
namespace Fusion {
// Is value type: true
// CS Name: Fusion.RpcHeader
struct CORDL_TYPE RpcHeader {
public:
// Declarations
/// @brief Field Behaviour, offset 0x4, size 0x2 
 __declspec(property(get=__cordl_internal_get_Behaviour, put=__cordl_internal_set_Behaviour)) uint16_t  Behaviour;

/// @brief Field Method, offset 0x6, size 0x2 
 __declspec(property(get=__cordl_internal_get_Method, put=__cordl_internal_set_Method)) uint16_t  Method;

/// @brief Field Object, offset 0x0, size 0x4 
 __declspec(property(get=__cordl_internal_get_Object, put=__cordl_internal_set_Object)) ::Fusion::NetworkId  Object;

/// @brief Method Create, addr 0x5fd0990, size 0x3c, virtual false, abstract: false, final false
static inline ::Fusion::RpcHeader Create(::Fusion::NetworkId  id, int32_t  behaviour, int32_t  method) ;

/// @brief Method Create, addr 0x5fd09cc, size 0x20, virtual false, abstract: false, final false
static inline ::Fusion::RpcHeader Create(int32_t  staticRpcKey) ;

/// [Obsolete("No longer used")]
/// @brief Method Read, addr 0x5fd0980, size 0x10, virtual false, abstract: false, final false
static inline ::Fusion::RpcHeader Read(uint8_t*  data, ::by_ref<int32_t>  size) ;

/// [Obsolete("No longer used")]
/// @brief Method ReadSize, addr 0x5fd0978, size 0x8, virtual false, abstract: false, final false
static inline int32_t ReadSize(uint8_t*  data) ;

/// @brief Method ToString, addr 0x5fd09ec, size 0x270, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// [Obsolete("No longer used")]
/// @brief Method Write, addr 0x5fd0968, size 0x10, virtual false, abstract: false, final false
static inline int32_t Write(::Fusion::RpcHeader  header, uint8_t*  data) ;

constexpr uint16_t const& __cordl_internal_get_Behaviour() const;

constexpr uint16_t& __cordl_internal_get_Behaviour() ;

constexpr uint16_t const& __cordl_internal_get_Method() const;

constexpr uint16_t& __cordl_internal_get_Method() ;

constexpr ::Fusion::NetworkId const& __cordl_internal_get_Object() const;

constexpr ::Fusion::NetworkId& __cordl_internal_get_Object() ;

constexpr void __cordl_internal_set_Behaviour(uint16_t  value) ;

constexpr void __cordl_internal_set_Method(uint16_t  value) ;

constexpr void __cordl_internal_set_Object(::Fusion::NetworkId  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr RpcHeader() ;

// Ctor Parameters [CppParam { name: "Object", ty: "::Fusion::NetworkId", modifiers: "", def_value: None, comment: None }, CppParam { name: "Behaviour", ty: "uint16_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Method", ty: "uint16_t", modifiers: "", def_value: None, comment: None }]
constexpr RpcHeader(::Fusion::NetworkId  Object, uint16_t  Behaviour, uint16_t  Method) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___Object_padding[0x0];
/// @brief Field Object, offset: 0x0, size: 0x4, def value: None
 ::Fusion::NetworkId  ___Object;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___Object_padding_forAlignment[0x0];
/// @brief Field Object, offset: 0x0, size: 0x4, def value: None
 ::Fusion::NetworkId  ___Object_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x4
 uint8_t  ___Behaviour_padding[0x4];
/// @brief Field Behaviour, offset: 0x4, size: 0x2, def value: None
 uint16_t  ___Behaviour;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x4 for alignment
 uint8_t  ___Behaviour_padding_forAlignment[0x4];
/// @brief Field Behaviour, offset: 0x4, size: 0x2, def value: None
 uint16_t  ___Behaviour_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x6
 uint8_t  ___Method_padding[0x6];
/// @brief Field Method, offset: 0x6, size: 0x2, def value: None
 uint16_t  ___Method;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x6 for alignment
 uint8_t  ___Method_padding_forAlignment[0x6];
/// @brief Field Method, offset: 0x6, size: 0x2, def value: None
 uint16_t  ___Method_forAlignment;
};
};
public:

/// @brief Field SIZE offset 0xffffffff size 0x4
static constexpr int32_t  SIZE{static_cast<int32_t>(0x8)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19184};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(sizeof(::Fusion::RpcHeader) == 0x8, "Size mismatch!");

} // namespace end def Fusion
