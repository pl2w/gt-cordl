#pragma once
// IWYU pragma private; include "Fusion/CodeGen/FixedStorage@1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/CodeGen/zzzz__FixedStorage@1__Data_e__FixedBuffer_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(FixedStorage@1)
namespace Fusion {
class INetworkStruct;
}
namespace GlobalNamespace {
struct FixedStorage@1__Data_e__FixedBuffer;
}
// Forward declare root types
namespace Fusion::CodeGen {
struct FixedStorage@1;
}
// Write type traits
MARK_VAL_T(::Fusion::CodeGen::FixedStorage@1);
DEFINE_IL2CPP_CLASS(::Fusion::CodeGen::FixedStorage@1, "Fusion.CodeGen", "FixedStorage@1");
// [WeaverGenerated]
// [NetworkStructWeaved(1)]
// Dependencies Fusion.CodeGen.FixedStorage@1::<Data>e__FixedBuffer
namespace Fusion::CodeGen {
// Is value type: true
// CS Name: Fusion.CodeGen.FixedStorage@1
struct CORDL_TYPE FixedStorage@1 {
public:
// Declarations
using _Data_e__FixedBuffer = ::GlobalNamespace::FixedStorage@1__Data_e__FixedBuffer;

/// @brief Field Data, offset 0x0, size 0x4 
 __declspec(property(get=__cordl_internal_get_Data, put=__cordl_internal_set_Data)) ::GlobalNamespace::FixedStorage@1__Data_e__FixedBuffer  Data;

/// @brief Convert operator to "::Fusion::INetworkStruct"
constexpr operator  ::Fusion::INetworkStruct*() ;

constexpr ::GlobalNamespace::FixedStorage@1__Data_e__FixedBuffer const& __cordl_internal_get_Data() const;

constexpr ::GlobalNamespace::FixedStorage@1__Data_e__FixedBuffer& __cordl_internal_get_Data() ;

constexpr void __cordl_internal_set_Data(::GlobalNamespace::FixedStorage@1__Data_e__FixedBuffer  value) ;

/// @brief Convert to "::Fusion::INetworkStruct"
constexpr ::Fusion::INetworkStruct* i___Fusion__INetworkStruct() ;

// Ctor Parameters []
// @brief default ctor
constexpr FixedStorage@1() ;

// Ctor Parameters [CppParam { name: "Data", ty: "::GlobalNamespace::FixedStorage@1__Data_e__FixedBuffer", modifiers: "", def_value: None, comment: None }]
constexpr FixedStorage@1(::GlobalNamespace::FixedStorage@1__Data_e__FixedBuffer  Data) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___Data_padding[0x0];
/// [FixedBuffer(typeof(System.Int32), 1)]
/// [WeaverGenerated]
/// @brief Field Data, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::FixedStorage@1__Data_e__FixedBuffer  ___Data;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___Data_padding_forAlignment[0x0];
/// [FixedBuffer(typeof(System.Int32), 1)]
/// [WeaverGenerated]
/// @brief Field Data, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::FixedStorage@1__Data_e__FixedBuffer  ___Data_forAlignment;
};
};
public:

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5253};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(sizeof(::Fusion::CodeGen::FixedStorage@1) == 0x4, "Size mismatch!");

} // namespace end def Fusion::CodeGen
