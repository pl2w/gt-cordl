#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ProbeReferenceVolume_CellData_PerScenarioData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ProbeReferenceVolume_CellData_PerScenarioData)
// Forward declare root types
namespace GlobalNamespace {
struct CellData_ProbeReferenceVolume_PerScenarioData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CellData_ProbeReferenceVolume_PerScenarioData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CellData_ProbeReferenceVolume_PerScenarioData, "UnityEngine.Rendering", "ProbeReferenceVolume/CellData/PerScenarioData");
// Dependencies Unity.Collections.NativeArray`1<T>
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.ProbeReferenceVolume/CellData/PerScenarioData
struct CORDL_TYPE CellData_ProbeReferenceVolume_PerScenarioData {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr CellData_ProbeReferenceVolume_PerScenarioData() ;

// Ctor Parameters [CppParam { name: "shL0L1RxData", ty: "::Unity::Collections::NativeArray_1<uint16_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "shL1GL1RyData", ty: "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "shL1BL1RzData", ty: "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "shL2Data_0", ty: "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "shL2Data_1", ty: "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "shL2Data_2", ty: "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "shL2Data_3", ty: "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "probeOcclusion", ty: "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: None, comment: None }]
constexpr CellData_ProbeReferenceVolume_PerScenarioData(::Unity::Collections::NativeArray_1<uint16_t>  shL0L1RxData, ::Unity::Collections::NativeArray_1<uint8_t>  shL1GL1RyData, ::Unity::Collections::NativeArray_1<uint8_t>  shL1BL1RzData, ::Unity::Collections::NativeArray_1<uint8_t>  shL2Data_0, ::Unity::Collections::NativeArray_1<uint8_t>  shL2Data_1, ::Unity::Collections::NativeArray_1<uint8_t>  shL2Data_2, ::Unity::Collections::NativeArray_1<uint8_t>  shL2Data_3, ::Unity::Collections::NativeArray_1<uint8_t>  probeOcclusion) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16811};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x80};

/// @brief Field shL0L1RxData, offset: 0x0, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<uint16_t>  shL0L1RxData;

/// @brief Field shL1GL1RyData, offset: 0x10, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<uint8_t>  shL1GL1RyData;

/// @brief Field shL1BL1RzData, offset: 0x20, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<uint8_t>  shL1BL1RzData;

/// @brief Field shL2Data_0, offset: 0x30, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<uint8_t>  shL2Data_0;

/// @brief Field shL2Data_1, offset: 0x40, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<uint8_t>  shL2Data_1;

/// @brief Field shL2Data_2, offset: 0x50, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<uint8_t>  shL2Data_2;

/// @brief Field shL2Data_3, offset: 0x60, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<uint8_t>  shL2Data_3;

/// @brief Field probeOcclusion, offset: 0x70, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<uint8_t>  probeOcclusion;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CellData_ProbeReferenceVolume_PerScenarioData, shL0L1RxData) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CellData_ProbeReferenceVolume_PerScenarioData, shL1GL1RyData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CellData_ProbeReferenceVolume_PerScenarioData, shL1BL1RzData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CellData_ProbeReferenceVolume_PerScenarioData, shL2Data_0) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CellData_ProbeReferenceVolume_PerScenarioData, shL2Data_1) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CellData_ProbeReferenceVolume_PerScenarioData, shL2Data_2) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CellData_ProbeReferenceVolume_PerScenarioData, shL2Data_3) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CellData_ProbeReferenceVolume_PerScenarioData, probeOcclusion) == 0x70, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CellData_ProbeReferenceVolume_PerScenarioData) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
