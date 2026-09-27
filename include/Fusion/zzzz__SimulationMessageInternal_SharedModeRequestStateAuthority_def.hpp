#pragma once
// IWYU pragma private; include "Fusion/SimulationMessageInternal_SharedModeRequestStateAuthority.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__NetworkId_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SimulationMessageInternal_SharedModeRequestStateAuthority)
// Forward declare root types
namespace Fusion {
struct SimulationMessageInternal_SharedModeRequestStateAuthority;
}
// Write type traits
MARK_VAL_T(::Fusion::SimulationMessageInternal_SharedModeRequestStateAuthority);
DEFINE_IL2CPP_CLASS(::Fusion::SimulationMessageInternal_SharedModeRequestStateAuthority, "Fusion", "SimulationMessageInternal_SharedModeRequestStateAuthority");
// Dependencies Fusion.NetworkId
namespace Fusion {
// Is value type: true
// CS Name: Fusion.SimulationMessageInternal_SharedModeRequestStateAuthority
struct CORDL_TYPE SimulationMessageInternal_SharedModeRequestStateAuthority {
public:
// Declarations
/// @brief Field Acquire, offset 0x4, size 0x4 
 __declspec(property(get=__cordl_internal_get_Acquire, put=__cordl_internal_set_Acquire)) int32_t  Acquire;

/// @brief Field Object, offset 0x0, size 0x4 
 __declspec(property(get=__cordl_internal_get_Object, put=__cordl_internal_set_Object)) ::Fusion::NetworkId  Object;

constexpr int32_t const& __cordl_internal_get_Acquire() const;

constexpr int32_t& __cordl_internal_get_Acquire() ;

constexpr ::Fusion::NetworkId const& __cordl_internal_get_Object() const;

constexpr ::Fusion::NetworkId& __cordl_internal_get_Object() ;

constexpr void __cordl_internal_set_Acquire(int32_t  value) ;

constexpr void __cordl_internal_set_Object(::Fusion::NetworkId  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr SimulationMessageInternal_SharedModeRequestStateAuthority() ;

// Ctor Parameters [CppParam { name: "Object", ty: "::Fusion::NetworkId", modifiers: "", def_value: None, comment: None }, CppParam { name: "Acquire", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr SimulationMessageInternal_SharedModeRequestStateAuthority(::Fusion::NetworkId  Object, int32_t  Acquire) noexcept;

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
 uint8_t  ___Acquire_padding[0x4];
/// @brief Field Acquire, offset: 0x4, size: 0x4, def value: None
 int32_t  ___Acquire;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x4 for alignment
 uint8_t  ___Acquire_padding_forAlignment[0x4];
/// @brief Field Acquire, offset: 0x4, size: 0x4, def value: None
 int32_t  ___Acquire_forAlignment;
};
};
public:

/// @brief Field SIZE offset 0xffffffff size 0x4
static constexpr int32_t  SIZE{static_cast<int32_t>(0x8)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19351};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(sizeof(::Fusion::SimulationMessageInternal_SharedModeRequestStateAuthority) == 0x8, "Size mismatch!");

} // namespace end def Fusion
