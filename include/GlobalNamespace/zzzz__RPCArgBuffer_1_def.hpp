#pragma once
// IWYU pragma private; include "GlobalNamespace/RPCArgBuffer_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RPCArgBuffer_1)
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
struct RPCArgBuffer_1;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::RPCArgBuffer_1);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::RPCArgBuffer_1, "", "RPCArgBuffer`1");
// Dependencies 
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: true
// CS Name: RPCArgBuffer`1<T>
struct CORDL_TYPE RPCArgBuffer_1 {
public:
// Declarations
/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(T  argStruct) ;

// Ctor Parameters []
// @brief default ctor
constexpr RPCArgBuffer_1() ;

// Ctor Parameters [CppParam { name: "Args", ty: "T", modifiers: "", def_value: None, comment: None }, CppParam { name: "Data", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "DataLength", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr RPCArgBuffer_1(T  Args, ::ArrayW<uint8_t>  Data, int32_t  DataLength) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1108};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field Args, offset: 0x0, size: 0x8, def value: None
 T  Args;

/// @brief Field Data, offset: 0x8, size: 0x8, def value: None
 ::ArrayW<uint8_t>  Data;

/// @brief Field DataLength, offset: 0x10, size: 0x4, def value: None
 int32_t  DataLength;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
