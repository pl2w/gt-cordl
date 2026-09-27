#pragma once
// IWYU pragma private; include "GlobalNamespace/MagicCauldron_MagicCauldronData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MagicCauldron_CauldronState_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MagicCauldron_MagicCauldronData)
namespace Fusion {
class INetworkStruct;
}
namespace GlobalNamespace {
struct MagicCauldron_CauldronState;
}
// Forward declare root types
namespace GlobalNamespace {
struct MagicCauldron_MagicCauldronData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MagicCauldron_MagicCauldronData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MagicCauldron_MagicCauldronData, "", "MagicCauldron/MagicCauldronData");
// [NetworkStructWeaved(4)]
// Dependencies MagicCauldron::CauldronState
namespace GlobalNamespace {
// Is value type: true
// CS Name: MagicCauldron/MagicCauldronData
#pragma pack(push, 0)
struct CORDL_TYPE MagicCauldron_MagicCauldronData {
public:
// Declarations
 __declspec(property(get=get_CurrentRecipeIndex, put=set_CurrentRecipeIndex)) int32_t  CurrentRecipeIndex;

 __declspec(property(get=get_CurrentState, put=set_CurrentState)) ::GlobalNamespace::MagicCauldron_CauldronState  CurrentState;

 __declspec(property(get=get_CurrentStateElapsedTime, put=set_CurrentStateElapsedTime)) float_t  CurrentStateElapsedTime;

 __declspec(property(get=get_IngredientIndex, put=set_IngredientIndex)) int32_t  IngredientIndex;

/// @brief Field <CurrentRecipeIndex>k__BackingField, offset 0x4, size 0x4 
 __declspec(property(get=__cordl_internal_get__CurrentRecipeIndex_k__BackingField, put=__cordl_internal_set__CurrentRecipeIndex_k__BackingField)) int32_t  _CurrentRecipeIndex_k__BackingField;

/// @brief Field <CurrentStateElapsedTime>k__BackingField, offset 0x0, size 0x4 
 __declspec(property(get=__cordl_internal_get__CurrentStateElapsedTime_k__BackingField, put=__cordl_internal_set__CurrentStateElapsedTime_k__BackingField)) float_t  _CurrentStateElapsedTime_k__BackingField;

/// @brief Field <CurrentState>k__BackingField, offset 0x8, size 0x4 
 __declspec(property(get=__cordl_internal_get__CurrentState_k__BackingField, put=__cordl_internal_set__CurrentState_k__BackingField)) ::GlobalNamespace::MagicCauldron_CauldronState  _CurrentState_k__BackingField;

/// @brief Field <IngredientIndex>k__BackingField, offset 0xc, size 0x4 
 __declspec(property(get=__cordl_internal_get__IngredientIndex_k__BackingField, put=__cordl_internal_set__IngredientIndex_k__BackingField)) int32_t  _IngredientIndex_k__BackingField;

/// @brief Convert operator to "::Fusion::INetworkStruct"
constexpr operator  ::Fusion::INetworkStruct*() ;

constexpr int32_t const& __cordl_internal_get__CurrentRecipeIndex_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__CurrentRecipeIndex_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__CurrentStateElapsedTime_k__BackingField() const;

constexpr float_t& __cordl_internal_get__CurrentStateElapsedTime_k__BackingField() ;

constexpr ::GlobalNamespace::MagicCauldron_CauldronState const& __cordl_internal_get__CurrentState_k__BackingField() const;

constexpr ::GlobalNamespace::MagicCauldron_CauldronState& __cordl_internal_get__CurrentState_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__IngredientIndex_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__IngredientIndex_k__BackingField() ;

constexpr void __cordl_internal_set__CurrentRecipeIndex_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__CurrentStateElapsedTime_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__CurrentState_k__BackingField(::GlobalNamespace::MagicCauldron_CauldronState  value) ;

constexpr void __cordl_internal_set__IngredientIndex_k__BackingField(int32_t  value) ;

/// @brief Method .ctor, addr 0x59593d4, size 0x10, virtual false, abstract: false, final false
inline void _ctor(float_t  stateElapsedTime, int32_t  recipeIndex, ::GlobalNamespace::MagicCauldron_CauldronState  state, int32_t  ingredientIndex) ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_CurrentRecipeIndex, addr 0x5959aa0, size 0x8, virtual false, abstract: false, final false
inline int32_t get_CurrentRecipeIndex() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_CurrentState, addr 0x5959ab0, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::MagicCauldron_CauldronState get_CurrentState() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_CurrentStateElapsedTime, addr 0x5959a90, size 0x8, virtual false, abstract: false, final false
inline float_t get_CurrentStateElapsedTime() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_IngredientIndex, addr 0x5959ac0, size 0x8, virtual false, abstract: false, final false
inline int32_t get_IngredientIndex() ;

/// @brief Convert to "::Fusion::INetworkStruct"
constexpr ::Fusion::INetworkStruct* i___Fusion__INetworkStruct() ;

/// [CompilerGenerated]
/// @brief Method set_CurrentRecipeIndex, addr 0x5959aa8, size 0x8, virtual false, abstract: false, final false
inline void set_CurrentRecipeIndex(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_CurrentState, addr 0x5959ab8, size 0x8, virtual false, abstract: false, final false
inline void set_CurrentState(::GlobalNamespace::MagicCauldron_CauldronState  value) ;

/// [CompilerGenerated]
/// @brief Method set_CurrentStateElapsedTime, addr 0x5959a98, size 0x8, virtual false, abstract: false, final false
inline void set_CurrentStateElapsedTime(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_IngredientIndex, addr 0x5959ac8, size 0x8, virtual false, abstract: false, final false
inline void set_IngredientIndex(int32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr MagicCauldron_MagicCauldronData() ;

// Ctor Parameters [CppParam { name: "_CurrentStateElapsedTime_k__BackingField", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_CurrentRecipeIndex_k__BackingField", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_CurrentState_k__BackingField", ty: "::GlobalNamespace::MagicCauldron_CauldronState", modifiers: "", def_value: None, comment: None }, CppParam { name: "_IngredientIndex_k__BackingField", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr MagicCauldron_MagicCauldronData(float_t  _CurrentStateElapsedTime_k__BackingField, int32_t  _CurrentRecipeIndex_k__BackingField, ::GlobalNamespace::MagicCauldron_CauldronState  _CurrentState_k__BackingField, int32_t  _IngredientIndex_k__BackingField) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ____CurrentStateElapsedTime_k__BackingField_padding[0x0];
/// [CompilerGenerated]
/// @brief Field <CurrentStateElapsedTime>k__BackingField, offset: 0x0, size: 0x4, def value: None
 float_t  ____CurrentStateElapsedTime_k__BackingField;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ____CurrentStateElapsedTime_k__BackingField_padding_forAlignment[0x0];
/// [CompilerGenerated]
/// @brief Field <CurrentStateElapsedTime>k__BackingField, offset: 0x0, size: 0x4, def value: None
 float_t  ____CurrentStateElapsedTime_k__BackingField_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x4
 uint8_t  ____CurrentRecipeIndex_k__BackingField_padding[0x4];
/// [CompilerGenerated]
/// @brief Field <CurrentRecipeIndex>k__BackingField, offset: 0x4, size: 0x4, def value: None
 int32_t  ____CurrentRecipeIndex_k__BackingField;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x4 for alignment
 uint8_t  ____CurrentRecipeIndex_k__BackingField_padding_forAlignment[0x4];
/// [CompilerGenerated]
/// @brief Field <CurrentRecipeIndex>k__BackingField, offset: 0x4, size: 0x4, def value: None
 int32_t  ____CurrentRecipeIndex_k__BackingField_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x8
 uint8_t  ____CurrentState_k__BackingField_padding[0x8];
/// [CompilerGenerated]
/// @brief Field <CurrentState>k__BackingField, offset: 0x8, size: 0x4, def value: None
 ::GlobalNamespace::MagicCauldron_CauldronState  ____CurrentState_k__BackingField;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x8 for alignment
 uint8_t  ____CurrentState_k__BackingField_padding_forAlignment[0x8];
/// [CompilerGenerated]
/// @brief Field <CurrentState>k__BackingField, offset: 0x8, size: 0x4, def value: None
 ::GlobalNamespace::MagicCauldron_CauldronState  ____CurrentState_k__BackingField_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0xc
 uint8_t  ____IngredientIndex_k__BackingField_padding[0xc];
/// [CompilerGenerated]
/// @brief Field <IngredientIndex>k__BackingField, offset: 0xc, size: 0x4, def value: None
 int32_t  ____IngredientIndex_k__BackingField;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0xc for alignment
 uint8_t  ____IngredientIndex_k__BackingField_padding_forAlignment[0xc];
/// [CompilerGenerated]
/// @brief Field <IngredientIndex>k__BackingField, offset: 0xc, size: 0x4, def value: None
 int32_t  ____IngredientIndex_k__BackingField_forAlignment;
};
};
public:

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2329};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::MagicCauldron_MagicCauldronData) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
