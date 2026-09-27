#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/HID/HIDParser_HIDReportData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/HID/zzzz__HID_HIDReportType_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HIDParser_HIDReportData)
namespace GlobalNamespace {
struct HID_HIDReportType;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct HIDParser_HIDReportData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::HIDParser_HIDReportData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HIDParser_HIDReportData, "UnityEngine.InputSystem.HID", "HIDParser/HIDReportData");
// Dependencies UnityEngine.InputSystem.HID.HID::HIDReportType
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.HID.HIDParser/HIDReportData
struct CORDL_TYPE HIDParser_HIDReportData {
public:
// Declarations
/// @brief Method FindOrAddReport, addr 0xafe46e4, size 0x188, virtual false, abstract: false, final false
static inline int32_t FindOrAddReport(::System::Nullable_1<int32_t>  reportId, ::GlobalNamespace::HID_HIDReportType  reportType, ::System::Collections::Generic::List_1<::GlobalNamespace::HIDParser_HIDReportData>*  reports) ;

// Ctor Parameters []
// @brief default ctor
constexpr HIDParser_HIDReportData() ;

// Ctor Parameters [CppParam { name: "reportId", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "reportType", ty: "::GlobalNamespace::HID_HIDReportType", modifiers: "", def_value: None, comment: None }, CppParam { name: "currentBitOffset", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr HIDParser_HIDReportData(int32_t  reportId, ::GlobalNamespace::HID_HIDReportType  reportType, int32_t  currentBitOffset) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13628};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field reportId, offset: 0x0, size: 0x4, def value: None
 int32_t  reportId;

/// @brief Field reportType, offset: 0x4, size: 0x4, def value: None
 ::GlobalNamespace::HID_HIDReportType  reportType;

/// @brief Field currentBitOffset, offset: 0x8, size: 0x4, def value: None
 int32_t  currentBitOffset;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HIDParser_HIDReportData, reportId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HIDParser_HIDReportData, reportType) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HIDParser_HIDReportData, currentBitOffset) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HIDParser_HIDReportData) == 0xc, "Size mismatch!");

} // namespace end def GlobalNamespace
