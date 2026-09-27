#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CameraState_CustomBlendableItems.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Cinemachine/zzzz__CameraState_CustomBlendableItems_Item_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CameraState_CustomBlendableItems)
namespace GlobalNamespace {
struct CustomBlendableItems_CameraState_Item;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct CameraState_CustomBlendableItems;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CameraState_CustomBlendableItems);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CameraState_CustomBlendableItems, "Unity.Cinemachine", "CameraState/CustomBlendableItems");
// Dependencies Unity.Cinemachine.CameraState::CustomBlendableItems::Item
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Cinemachine.CameraState/CustomBlendableItems
struct CORDL_TYPE CameraState_CustomBlendableItems {
public:
// Declarations
using Item = ::GlobalNamespace::CustomBlendableItems_CameraState_Item;

// Ctor Parameters []
// @brief default ctor
constexpr CameraState_CustomBlendableItems() ;

// Ctor Parameters [CppParam { name: "m_Item0", ty: "::GlobalNamespace::CustomBlendableItems_CameraState_Item", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Item1", ty: "::GlobalNamespace::CustomBlendableItems_CameraState_Item", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Item2", ty: "::GlobalNamespace::CustomBlendableItems_CameraState_Item", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Item3", ty: "::GlobalNamespace::CustomBlendableItems_CameraState_Item", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Overflow", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::CustomBlendableItems_CameraState_Item>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "NumItems", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr CameraState_CustomBlendableItems(::GlobalNamespace::CustomBlendableItems_CameraState_Item  m_Item0, ::GlobalNamespace::CustomBlendableItems_CameraState_Item  m_Item1, ::GlobalNamespace::CustomBlendableItems_CameraState_Item  m_Item2, ::GlobalNamespace::CustomBlendableItems_CameraState_Item  m_Item3, ::System::Collections::Generic::List_1<::GlobalNamespace::CustomBlendableItems_CameraState_Item>*  m_Overflow, int32_t  NumItems) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22257};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// @brief Field m_Item0, offset: 0x0, size: 0x10, def value: None
 ::GlobalNamespace::CustomBlendableItems_CameraState_Item  m_Item0;

/// @brief Field m_Item1, offset: 0x10, size: 0x10, def value: None
 ::GlobalNamespace::CustomBlendableItems_CameraState_Item  m_Item1;

/// @brief Field m_Item2, offset: 0x20, size: 0x10, def value: None
 ::GlobalNamespace::CustomBlendableItems_CameraState_Item  m_Item2;

/// @brief Field m_Item3, offset: 0x30, size: 0x10, def value: None
 ::GlobalNamespace::CustomBlendableItems_CameraState_Item  m_Item3;

/// @brief Field m_Overflow, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::CustomBlendableItems_CameraState_Item>*  m_Overflow;

/// @brief Field NumItems, offset: 0x48, size: 0x4, def value: None
 int32_t  NumItems;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CameraState_CustomBlendableItems, m_Item0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CameraState_CustomBlendableItems, m_Item1) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CameraState_CustomBlendableItems, m_Item2) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CameraState_CustomBlendableItems, m_Item3) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CameraState_CustomBlendableItems, m_Overflow) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CameraState_CustomBlendableItems, NumItems) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CameraState_CustomBlendableItems) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
