#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/DataBindingManager_ChangesFromUI.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DataBindingManager_ChangesFromUI)
namespace UnityEngine::UIElements {
class Binding;
}
namespace UnityEngine::UIElements {
class DataBindingManager_BindingData;
}
// Forward declare root types
namespace GlobalNamespace {
struct DataBindingManager_ChangesFromUI;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::DataBindingManager_ChangesFromUI);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DataBindingManager_ChangesFromUI, "UnityEngine.UIElements", "DataBindingManager/ChangesFromUI");
// [IsReadOnly]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.UIElements.DataBindingManager/ChangesFromUI
struct CORDL_TYPE DataBindingManager_ChangesFromUI {
public:
// Declarations
 __declspec(property(get=get_IsValid)) bool  IsValid;

/// @brief Method .ctor, addr 0xb729abc, size 0x40, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::UIElements::DataBindingManager_BindingData*  bindingData) ;

/// @brief Method get_IsValid, addr 0xb729afc, size 0x3c, virtual false, abstract: false, final false
inline bool get_IsValid() ;

// Ctor Parameters []
// @brief default ctor
constexpr DataBindingManager_ChangesFromUI() ;

// Ctor Parameters [CppParam { name: "version", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "binding", ty: "::UnityEngine::UIElements::Binding*", modifiers: "", def_value: None, comment: None }, CppParam { name: "bindingData", ty: "::UnityEngine::UIElements::DataBindingManager_BindingData*", modifiers: "", def_value: None, comment: None }]
constexpr DataBindingManager_ChangesFromUI(int64_t  version, ::UnityEngine::UIElements::Binding*  binding, ::UnityEngine::UIElements::DataBindingManager_BindingData*  bindingData) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7201};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field version, offset: 0x0, size: 0x8, def value: None
 int64_t  version;

/// @brief Field binding, offset: 0x8, size: 0x8, def value: None
 ::UnityEngine::UIElements::Binding*  binding;

/// @brief Field bindingData, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::UIElements::DataBindingManager_BindingData*  bindingData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DataBindingManager_ChangesFromUI, version) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DataBindingManager_ChangesFromUI, binding) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DataBindingManager_ChangesFromUI, bindingData) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DataBindingManager_ChangesFromUI) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
