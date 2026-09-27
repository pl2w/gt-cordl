#pragma once
// IWYU pragma private; include "Fusion/Simulation_SimulationPacketHeader.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Simulation_SimulationPacketHeader)
namespace Fusion::Sockets {
struct NetBitBuffer;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
struct Simulation_SimulationPacketHeader;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Simulation_SimulationPacketHeader);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Simulation_SimulationPacketHeader, "Fusion", "Simulation/SimulationPacketHeader");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Fusion.Simulation/SimulationPacketHeader
struct CORDL_TYPE Simulation_SimulationPacketHeader {
public:
// Declarations
/// @brief Field Cells, offset 0x1, size 0x1 
 __declspec(property(get=__cordl_internal_get_Cells, put=__cordl_internal_set_Cells)) uint8_t  Cells;

/// @brief Field Inputs, offset 0x1, size 0x1 
 __declspec(property(get=__cordl_internal_get_Inputs, put=__cordl_internal_set_Inputs)) uint8_t  Inputs;

/// @brief Field ObjectDestroys, offset 0x3, size 0x1 
 __declspec(property(get=__cordl_internal_get_ObjectDestroys, put=__cordl_internal_set_ObjectDestroys)) uint8_t  ObjectDestroys;

/// @brief Field ObjectUpdates, offset 0x2, size 0x1 
 __declspec(property(get=__cordl_internal_get_ObjectUpdates, put=__cordl_internal_set_ObjectUpdates)) uint8_t  ObjectUpdates;

/// @brief Field SimulationMessages, offset 0x0, size 0x1 
 __declspec(property(get=__cordl_internal_get_SimulationMessages, put=__cordl_internal_set_SimulationMessages)) uint8_t  SimulationMessages;

/// @brief Field Tick, offset 0x4, size 0x4 
 __declspec(property(get=__cordl_internal_get_Tick, put=__cordl_internal_set_Tick)) int32_t  Tick;

/// @brief Method Equals, addr 0x5ff67d0, size 0xa8, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x5ff6788, size 0x48, virtual false, abstract: false, final false
inline bool Equals(::GlobalNamespace::Simulation_SimulationPacketHeader  other) ;

/// @brief Method GetHashCode, addr 0x5ff6878, size 0x80, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method Read, addr 0x5ff6980, size 0xec, virtual false, abstract: false, final false
inline void Read(::Fusion::Sockets::NetBitBuffer*  buffer) ;

/// @brief Method ToString, addr 0x5ff6a6c, size 0x418, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method Write, addr 0x5ff68f8, size 0x88, virtual false, abstract: false, final false
inline void Write(::Fusion::Sockets::NetBitBuffer*  buffer) ;

constexpr uint8_t const& __cordl_internal_get_Cells() const;

constexpr uint8_t& __cordl_internal_get_Cells() ;

constexpr uint8_t const& __cordl_internal_get_Inputs() const;

constexpr uint8_t& __cordl_internal_get_Inputs() ;

constexpr uint8_t const& __cordl_internal_get_ObjectDestroys() const;

constexpr uint8_t& __cordl_internal_get_ObjectDestroys() ;

constexpr uint8_t const& __cordl_internal_get_ObjectUpdates() const;

constexpr uint8_t& __cordl_internal_get_ObjectUpdates() ;

constexpr uint8_t const& __cordl_internal_get_SimulationMessages() const;

constexpr uint8_t& __cordl_internal_get_SimulationMessages() ;

constexpr int32_t const& __cordl_internal_get_Tick() const;

constexpr int32_t& __cordl_internal_get_Tick() ;

constexpr void __cordl_internal_set_Cells(uint8_t  value) ;

constexpr void __cordl_internal_set_Inputs(uint8_t  value) ;

constexpr void __cordl_internal_set_ObjectDestroys(uint8_t  value) ;

constexpr void __cordl_internal_set_ObjectUpdates(uint8_t  value) ;

constexpr void __cordl_internal_set_SimulationMessages(uint8_t  value) ;

constexpr void __cordl_internal_set_Tick(int32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr Simulation_SimulationPacketHeader() ;

// Ctor Parameters [CppParam { name: "SimulationMessages", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Cells", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Inputs", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ObjectUpdates", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ObjectDestroys", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Tick", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Simulation_SimulationPacketHeader(uint8_t  SimulationMessages, uint8_t  Cells, uint8_t  Inputs, uint8_t  ObjectUpdates, uint8_t  ObjectDestroys, int32_t  Tick) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___SimulationMessages_padding[0x0];
/// @brief Field SimulationMessages, offset: 0x0, size: 0x1, def value: None
 uint8_t  ___SimulationMessages;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___SimulationMessages_padding_forAlignment[0x0];
/// @brief Field SimulationMessages, offset: 0x0, size: 0x1, def value: None
 uint8_t  ___SimulationMessages_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x1
 uint8_t  ___Cells_padding[0x1];
/// @brief Field Cells, offset: 0x1, size: 0x1, def value: None
 uint8_t  ___Cells;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x1 for alignment
 uint8_t  ___Cells_padding_forAlignment[0x1];
/// @brief Field Cells, offset: 0x1, size: 0x1, def value: None
 uint8_t  ___Cells_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x1
 uint8_t  ___Inputs_padding[0x1];
/// @brief Field Inputs, offset: 0x1, size: 0x1, def value: None
 uint8_t  ___Inputs;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x1 for alignment
 uint8_t  ___Inputs_padding_forAlignment[0x1];
/// @brief Field Inputs, offset: 0x1, size: 0x1, def value: None
 uint8_t  ___Inputs_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x2
 uint8_t  ___ObjectUpdates_padding[0x2];
/// @brief Field ObjectUpdates, offset: 0x2, size: 0x1, def value: None
 uint8_t  ___ObjectUpdates;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x2 for alignment
 uint8_t  ___ObjectUpdates_padding_forAlignment[0x2];
/// @brief Field ObjectUpdates, offset: 0x2, size: 0x1, def value: None
 uint8_t  ___ObjectUpdates_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x3
 uint8_t  ___ObjectDestroys_padding[0x3];
/// @brief Field ObjectDestroys, offset: 0x3, size: 0x1, def value: None
 uint8_t  ___ObjectDestroys;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x3 for alignment
 uint8_t  ___ObjectDestroys_padding_forAlignment[0x3];
/// @brief Field ObjectDestroys, offset: 0x3, size: 0x1, def value: None
 uint8_t  ___ObjectDestroys_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x4
 uint8_t  ___Tick_padding[0x4];
/// @brief Field Tick, offset: 0x4, size: 0x4, def value: None
 int32_t  ___Tick;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x4 for alignment
 uint8_t  ___Tick_padding_forAlignment[0x4];
/// @brief Field Tick, offset: 0x4, size: 0x4, def value: None
 int32_t  ___Tick_forAlignment;
};
};
public:

/// @brief Field WIRE_SIZE_IN_BITS offset 0xffffffff size 0x4
static constexpr int32_t  WIRE_SIZE_IN_BITS{static_cast<int32_t>(0x40)};

/// @brief Field WIRE_SIZE_IN_BYTES offset 0xffffffff size 0x4
static constexpr int32_t  WIRE_SIZE_IN_BYTES{static_cast<int32_t>(0x8)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19315};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::Simulation_SimulationPacketHeader) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
