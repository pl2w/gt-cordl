#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputRemoting_ChangeUsageMsg_Data.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputRemoting_ChangeUsageMsg_Data)
// Forward declare root types
namespace GlobalNamespace {
struct ChangeUsageMsg_InputRemoting_Data;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ChangeUsageMsg_InputRemoting_Data);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ChangeUsageMsg_InputRemoting_Data, "UnityEngine.InputSystem", "InputRemoting/ChangeUsageMsg/Data");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputRemoting/ChangeUsageMsg/Data
struct CORDL_TYPE ChangeUsageMsg_InputRemoting_Data {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr ChangeUsageMsg_InputRemoting_Data() ;

// Ctor Parameters [CppParam { name: "deviceId", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "usages", ty: "::ArrayW<::StringW>", modifiers: "", def_value: None, comment: None }]
constexpr ChangeUsageMsg_InputRemoting_Data(int32_t  deviceId, ::ArrayW<::StringW>  usages) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13480};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field deviceId, offset: 0x0, size: 0x4, def value: None
 int32_t  deviceId;

/// @brief Field usages, offset: 0x8, size: 0x8, def value: None
 ::ArrayW<::StringW>  usages;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ChangeUsageMsg_InputRemoting_Data, deviceId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ChangeUsageMsg_InputRemoting_Data, usages) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ChangeUsageMsg_InputRemoting_Data) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
