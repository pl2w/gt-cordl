#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/STP_StpConstantBufferData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__STP_StpConstantBufferData___StpSetupPerViewConstants_e__FixedBuffer_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(STP_StpConstantBufferData)
namespace GlobalNamespace {
struct StpConstantBufferData_STP___StpSetupPerViewConstants_e__FixedBuffer;
}
// Forward declare root types
namespace GlobalNamespace {
struct STP_StpConstantBufferData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::STP_StpConstantBufferData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::STP_StpConstantBufferData, "UnityEngine.Rendering", "STP/StpConstantBufferData");
// [GenerateHLSL((UnityEngine.Rendering.PackingRules)0, true, false, false, 1, false, false, false, -1, ".\\Library\\PackageCache\\com.unity.render-pipelines.core@04755ad51d99\\Runtime\\STP\\STP.cs", needAccessors = false, generateCBuffer = true)]
// Dependencies UnityEngine.Rendering.STP::StpConstantBufferData::<_StpSetupPerViewConstants>e__FixedBuffer, UnityEngine.Vector4
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.STP/StpConstantBufferData
struct CORDL_TYPE STP_StpConstantBufferData {
public:
// Declarations
using __StpSetupPerViewConstants_e__FixedBuffer = ::GlobalNamespace::StpConstantBufferData_STP___StpSetupPerViewConstants_e__FixedBuffer;

// Ctor Parameters []
// @brief default ctor
constexpr STP_StpConstantBufferData() ;

// Ctor Parameters [CppParam { name: "_StpCommonConstant", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None, comment: None }, CppParam { name: "_StpSetupConstants0", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None, comment: None }, CppParam { name: "_StpSetupConstants1", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None, comment: None }, CppParam { name: "_StpSetupConstants2", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None, comment: None }, CppParam { name: "_StpSetupConstants3", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None, comment: None }, CppParam { name: "_StpSetupConstants4", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None, comment: None }, CppParam { name: "_StpSetupConstants5", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None, comment: None }, CppParam { name: "_StpSetupPerViewConstants", ty: "::GlobalNamespace::StpConstantBufferData_STP___StpSetupPerViewConstants_e__FixedBuffer", modifiers: "", def_value: None, comment: None }, CppParam { name: "_StpDilConstants0", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None, comment: None }, CppParam { name: "_StpTaaConstants0", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None, comment: None }, CppParam { name: "_StpTaaConstants1", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None, comment: None }, CppParam { name: "_StpTaaConstants2", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None, comment: None }, CppParam { name: "_StpTaaConstants3", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None, comment: None }]
constexpr STP_StpConstantBufferData(::UnityEngine::Vector4  _StpCommonConstant, ::UnityEngine::Vector4  _StpSetupConstants0, ::UnityEngine::Vector4  _StpSetupConstants1, ::UnityEngine::Vector4  _StpSetupConstants2, ::UnityEngine::Vector4  _StpSetupConstants3, ::UnityEngine::Vector4  _StpSetupConstants4, ::UnityEngine::Vector4  _StpSetupConstants5, ::GlobalNamespace::StpConstantBufferData_STP___StpSetupPerViewConstants_e__FixedBuffer  _StpSetupPerViewConstants, ::UnityEngine::Vector4  _StpDilConstants0, ::UnityEngine::Vector4  _StpTaaConstants0, ::UnityEngine::Vector4  _StpTaaConstants1, ::UnityEngine::Vector4  _StpTaaConstants2, ::UnityEngine::Vector4  _StpTaaConstants3) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16947};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1c0};

/// @brief Field _StpCommonConstant, offset: 0x0, size: 0x10, def value: None
 ::UnityEngine::Vector4  _StpCommonConstant;

/// @brief Field _StpSetupConstants0, offset: 0x10, size: 0x10, def value: None
 ::UnityEngine::Vector4  _StpSetupConstants0;

/// @brief Field _StpSetupConstants1, offset: 0x20, size: 0x10, def value: None
 ::UnityEngine::Vector4  _StpSetupConstants1;

/// @brief Field _StpSetupConstants2, offset: 0x30, size: 0x10, def value: None
 ::UnityEngine::Vector4  _StpSetupConstants2;

/// @brief Field _StpSetupConstants3, offset: 0x40, size: 0x10, def value: None
 ::UnityEngine::Vector4  _StpSetupConstants3;

/// @brief Field _StpSetupConstants4, offset: 0x50, size: 0x10, def value: None
 ::UnityEngine::Vector4  _StpSetupConstants4;

/// @brief Field _StpSetupConstants5, offset: 0x60, size: 0x10, def value: None
 ::UnityEngine::Vector4  _StpSetupConstants5;

/// [FixedBuffer(typeof(System.Single), 64)]
/// [HLSLArray(16, typeof(UnityEngine.Vector4))]
/// @brief Field _StpSetupPerViewConstants, offset: 0x70, size: 0x100, def value: None
 ::GlobalNamespace::StpConstantBufferData_STP___StpSetupPerViewConstants_e__FixedBuffer  _StpSetupPerViewConstants;

/// @brief Field _StpDilConstants0, offset: 0x170, size: 0x10, def value: None
 ::UnityEngine::Vector4  _StpDilConstants0;

/// @brief Field _StpTaaConstants0, offset: 0x180, size: 0x10, def value: None
 ::UnityEngine::Vector4  _StpTaaConstants0;

/// @brief Field _StpTaaConstants1, offset: 0x190, size: 0x10, def value: None
 ::UnityEngine::Vector4  _StpTaaConstants1;

/// @brief Field _StpTaaConstants2, offset: 0x1a0, size: 0x10, def value: None
 ::UnityEngine::Vector4  _StpTaaConstants2;

/// @brief Field _StpTaaConstants3, offset: 0x1b0, size: 0x10, def value: None
 ::UnityEngine::Vector4  _StpTaaConstants3;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::STP_StpConstantBufferData, _StpCommonConstant) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::STP_StpConstantBufferData, _StpSetupConstants0) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::STP_StpConstantBufferData, _StpSetupConstants1) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::STP_StpConstantBufferData, _StpSetupConstants2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::STP_StpConstantBufferData, _StpSetupConstants3) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::STP_StpConstantBufferData, _StpSetupConstants4) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::STP_StpConstantBufferData, _StpSetupConstants5) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::STP_StpConstantBufferData, _StpSetupPerViewConstants) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::STP_StpConstantBufferData, _StpDilConstants0) == 0x170, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::STP_StpConstantBufferData, _StpTaaConstants0) == 0x180, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::STP_StpConstantBufferData, _StpTaaConstants1) == 0x190, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::STP_StpConstantBufferData, _StpTaaConstants2) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::STP_StpConstantBufferData, _StpTaaConstants3) == 0x1b0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::STP_StpConstantBufferData) == 0x1c0, "Size mismatch!");

} // namespace end def GlobalNamespace
