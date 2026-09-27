#pragma once
// IWYU pragma private; include "Fusion/SimulationInputHeader.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__Tick_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SimulationInputHeader)
// Forward declare root types
namespace Fusion {
struct SimulationInputHeader;
}
// Write type traits
MARK_VAL_T(::Fusion::SimulationInputHeader);
DEFINE_IL2CPP_CLASS(::Fusion::SimulationInputHeader, "Fusion", "SimulationInputHeader");
// Dependencies Fusion.Tick
namespace Fusion {
// Is value type: true
// CS Name: Fusion.SimulationInputHeader
struct CORDL_TYPE SimulationInputHeader {
public:
// Declarations
/// @brief Field InterpAlpha, offset 0x4, size 0x4 
 __declspec(property(get=__cordl_internal_get_InterpAlpha, put=__cordl_internal_set_InterpAlpha)) float_t  InterpAlpha;

/// @brief Field InterpFrom, offset 0x8, size 0x4 
 __declspec(property(get=__cordl_internal_get_InterpFrom, put=__cordl_internal_set_InterpFrom)) ::Fusion::Tick  InterpFrom;

/// @brief Field InterpTo, offset 0xc, size 0x4 
 __declspec(property(get=__cordl_internal_get_InterpTo, put=__cordl_internal_set_InterpTo)) ::Fusion::Tick  InterpTo;

/// @brief Field Tick, offset 0x0, size 0x4 
 __declspec(property(get=__cordl_internal_get_Tick, put=__cordl_internal_set_Tick)) ::Fusion::Tick  Tick;

constexpr float_t const& __cordl_internal_get_InterpAlpha() const;

constexpr float_t& __cordl_internal_get_InterpAlpha() ;

constexpr ::Fusion::Tick const& __cordl_internal_get_InterpFrom() const;

constexpr ::Fusion::Tick& __cordl_internal_get_InterpFrom() ;

constexpr ::Fusion::Tick const& __cordl_internal_get_InterpTo() const;

constexpr ::Fusion::Tick& __cordl_internal_get_InterpTo() ;

constexpr ::Fusion::Tick const& __cordl_internal_get_Tick() const;

constexpr ::Fusion::Tick& __cordl_internal_get_Tick() ;

constexpr void __cordl_internal_set_InterpAlpha(float_t  value) ;

constexpr void __cordl_internal_set_InterpFrom(::Fusion::Tick  value) ;

constexpr void __cordl_internal_set_InterpTo(::Fusion::Tick  value) ;

constexpr void __cordl_internal_set_Tick(::Fusion::Tick  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr SimulationInputHeader() ;

// Ctor Parameters [CppParam { name: "Tick", ty: "::Fusion::Tick", modifiers: "", def_value: None, comment: None }, CppParam { name: "InterpAlpha", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "InterpFrom", ty: "::Fusion::Tick", modifiers: "", def_value: None, comment: None }, CppParam { name: "InterpTo", ty: "::Fusion::Tick", modifiers: "", def_value: None, comment: None }]
constexpr SimulationInputHeader(::Fusion::Tick  Tick, float_t  InterpAlpha, ::Fusion::Tick  InterpFrom, ::Fusion::Tick  InterpTo) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___Tick_padding[0x0];
/// @brief Field Tick, offset: 0x0, size: 0x4, def value: None
 ::Fusion::Tick  ___Tick;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___Tick_padding_forAlignment[0x0];
/// @brief Field Tick, offset: 0x0, size: 0x4, def value: None
 ::Fusion::Tick  ___Tick_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x4
 uint8_t  ___InterpAlpha_padding[0x4];
/// @brief Field InterpAlpha, offset: 0x4, size: 0x4, def value: None
 float_t  ___InterpAlpha;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x4 for alignment
 uint8_t  ___InterpAlpha_padding_forAlignment[0x4];
/// @brief Field InterpAlpha, offset: 0x4, size: 0x4, def value: None
 float_t  ___InterpAlpha_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x8
 uint8_t  ___InterpFrom_padding[0x8];
/// @brief Field InterpFrom, offset: 0x8, size: 0x4, def value: None
 ::Fusion::Tick  ___InterpFrom;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x8 for alignment
 uint8_t  ___InterpFrom_padding_forAlignment[0x8];
/// @brief Field InterpFrom, offset: 0x8, size: 0x4, def value: None
 ::Fusion::Tick  ___InterpFrom_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0xc
 uint8_t  ___InterpTo_padding[0xc];
/// @brief Field InterpTo, offset: 0xc, size: 0x4, def value: None
 ::Fusion::Tick  ___InterpTo;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0xc for alignment
 uint8_t  ___InterpTo_padding_forAlignment[0xc];
/// @brief Field InterpTo, offset: 0xc, size: 0x4, def value: None
 ::Fusion::Tick  ___InterpTo_forAlignment;
};
};
public:

/// @brief Field SIZE offset 0xffffffff size 0x4
static constexpr int32_t  SIZE{static_cast<int32_t>(0x10)};

/// @brief Field WORD_COUNT offset 0xffffffff size 0x4
static constexpr int32_t  WORD_COUNT{static_cast<int32_t>(0x4)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19344};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(sizeof(::Fusion::SimulationInputHeader) == 0x10, "Size mismatch!");

} // namespace end def Fusion
