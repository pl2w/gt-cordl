#pragma once
// IWYU pragma private; include "Fusion/SimulationMessageInternal_SetPlayerObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__NetworkId_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SimulationMessageInternal_SetPlayerObject)
// Forward declare root types
namespace Fusion {
struct SimulationMessageInternal_SetPlayerObject;
}
// Write type traits
MARK_VAL_T(::Fusion::SimulationMessageInternal_SetPlayerObject);
DEFINE_IL2CPP_CLASS(::Fusion::SimulationMessageInternal_SetPlayerObject, "Fusion", "SimulationMessageInternal_SetPlayerObject");
// Dependencies Fusion.NetworkId
namespace Fusion {
// Is value type: true
// CS Name: Fusion.SimulationMessageInternal_SetPlayerObject
struct CORDL_TYPE SimulationMessageInternal_SetPlayerObject {
public:
// Declarations
/// @brief Field Object, offset 0x0, size 0x4 
 __declspec(property(get=__cordl_internal_get_Object, put=__cordl_internal_set_Object)) ::Fusion::NetworkId  Object;

constexpr ::Fusion::NetworkId const& __cordl_internal_get_Object() const;

constexpr ::Fusion::NetworkId& __cordl_internal_get_Object() ;

constexpr void __cordl_internal_set_Object(::Fusion::NetworkId  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr SimulationMessageInternal_SetPlayerObject() ;

// Ctor Parameters [CppParam { name: "Object", ty: "::Fusion::NetworkId", modifiers: "", def_value: None, comment: None }]
constexpr SimulationMessageInternal_SetPlayerObject(::Fusion::NetworkId  Object) noexcept;

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
};
public:

/// @brief Field SIZE offset 0xffffffff size 0x4
static constexpr int32_t  SIZE{static_cast<int32_t>(0x4)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19349};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(sizeof(::Fusion::SimulationMessageInternal_SetPlayerObject) == 0x4, "Size mismatch!");

} // namespace end def Fusion
