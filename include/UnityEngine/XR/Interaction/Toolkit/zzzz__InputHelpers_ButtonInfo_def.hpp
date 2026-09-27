#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/InputHelpers_ButtonInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__InputHelpers_ButtonReadType_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(InputHelpers_ButtonInfo)
namespace GlobalNamespace {
struct InputHelpers_ButtonReadType;
}
// Forward declare root types
namespace GlobalNamespace {
struct InputHelpers_ButtonInfo;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::InputHelpers_ButtonInfo);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InputHelpers_ButtonInfo, "UnityEngine.XR.Interaction.Toolkit", "InputHelpers/ButtonInfo");
// Dependencies UnityEngine.XR.Interaction.Toolkit.InputHelpers::ButtonReadType
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.XR.Interaction.Toolkit.InputHelpers/ButtonInfo
struct CORDL_TYPE InputHelpers_ButtonInfo {
public:
// Declarations
/// @brief Method .ctor, addr 0xb41c170, size 0x28, virtual false, abstract: false, final false
inline void _ctor(::StringW  name, ::GlobalNamespace::InputHelpers_ButtonReadType  type) ;

// Ctor Parameters []
// @brief default ctor
constexpr InputHelpers_ButtonInfo() ;

// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "type", ty: "::GlobalNamespace::InputHelpers_ButtonReadType", modifiers: "", def_value: None, comment: None }]
constexpr InputHelpers_ButtonInfo(::StringW  name, ::GlobalNamespace::InputHelpers_ButtonReadType  type) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11132};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field name, offset: 0x0, size: 0x8, def value: None
 ::StringW  name;

/// @brief Field type, offset: 0x8, size: 0x4, def value: None
 ::GlobalNamespace::InputHelpers_ButtonReadType  type;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InputHelpers_ButtonInfo, name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputHelpers_ButtonInfo, type) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InputHelpers_ButtonInfo) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
