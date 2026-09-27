#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineCore_BlendEventParams.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(CinemachineCore_BlendEventParams)
namespace Unity::Cinemachine {
class CinemachineBlend;
}
namespace Unity::Cinemachine {
class ICinemachineMixer;
}
// Forward declare root types
namespace GlobalNamespace {
struct CinemachineCore_BlendEventParams;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CinemachineCore_BlendEventParams);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CinemachineCore_BlendEventParams, "Unity.Cinemachine", "CinemachineCore/BlendEventParams");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Cinemachine.CinemachineCore/BlendEventParams
struct CORDL_TYPE CinemachineCore_BlendEventParams {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineCore_BlendEventParams() ;

// Ctor Parameters [CppParam { name: "Origin", ty: "::Unity::Cinemachine::ICinemachineMixer*", modifiers: "", def_value: None, comment: None }, CppParam { name: "Blend", ty: "::Unity::Cinemachine::CinemachineBlend*", modifiers: "", def_value: None, comment: None }]
constexpr CinemachineCore_BlendEventParams(::Unity::Cinemachine::ICinemachineMixer*  Origin, ::Unity::Cinemachine::CinemachineBlend*  Blend) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22283};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field Origin, offset: 0x0, size: 0x8, def value: None
 ::Unity::Cinemachine::ICinemachineMixer*  Origin;

/// @brief Field Blend, offset: 0x8, size: 0x8, def value: None
 ::Unity::Cinemachine::CinemachineBlend*  Blend;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CinemachineCore_BlendEventParams, Origin) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CinemachineCore_BlendEventParams, Blend) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CinemachineCore_BlendEventParams) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
