#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRTelemetry_MarkerPoint.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRTelemetry_MarkerPoint)
namespace System {
class IDisposable;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRTelemetry_MarkerPoint;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRTelemetry_MarkerPoint);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRTelemetry_MarkerPoint, "", "OVRTelemetry/MarkerPoint");
// [IsReadOnly]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRTelemetry/MarkerPoint
struct CORDL_TYPE OVRTelemetry_MarkerPoint {
public:
// Declarations
 __declspec(property(get=get_NameHandle)) int32_t  NameHandle;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0xa64ba24, size 0x68, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method .ctor, addr 0xa64b99c, size 0x88, virtual false, abstract: false, final false
inline void _ctor(::StringW  name) ;

/// [CompilerGenerated]
/// @brief Method get_NameHandle, addr 0xa64b994, size 0x8, virtual false, abstract: false, final false
inline int32_t get_NameHandle() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr OVRTelemetry_MarkerPoint() ;

// Ctor Parameters [CppParam { name: "_NameHandle_k__BackingField", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRTelemetry_MarkerPoint(int32_t  _NameHandle_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12480};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// [CompilerGenerated]
/// @brief Field <NameHandle>k__BackingField, offset: 0x0, size: 0x4, def value: None
 int32_t  _NameHandle_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRTelemetry_MarkerPoint, _NameHandle_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRTelemetry_MarkerPoint) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
