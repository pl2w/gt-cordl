#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/HID/HIDParser_HIDItemStateLocal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Nullable_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HIDParser_HIDItemStateLocal)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct HIDParser_HIDItemStateLocal;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::HIDParser_HIDItemStateLocal);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HIDParser_HIDItemStateLocal, "UnityEngine.InputSystem.HID", "HIDParser/HIDItemStateLocal");
// Dependencies System.Nullable`1<T>
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.HID.HIDParser/HIDItemStateLocal
struct CORDL_TYPE HIDParser_HIDItemStateLocal {
public:
// Declarations
/// @brief Method GetUsage, addr 0xafe4564, size 0x110, virtual false, abstract: false, final false
inline int32_t GetUsage(int32_t  index) ;

/// @brief Method Reset, addr 0xafe4674, size 0x70, virtual false, abstract: false, final false
static inline void Reset(::by_ref<::GlobalNamespace::HIDParser_HIDItemStateLocal>  state) ;

/// @brief Method SetUsage, addr 0xafe4358, size 0x180, virtual false, abstract: false, final false
inline void SetUsage(int32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr HIDParser_HIDItemStateLocal() ;

// Ctor Parameters [CppParam { name: "usage", ty: "::System::Nullable_1<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "usageMinimum", ty: "::System::Nullable_1<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "usageMaximum", ty: "::System::Nullable_1<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "designatorIndex", ty: "::System::Nullable_1<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "designatorMinimum", ty: "::System::Nullable_1<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "designatorMaximum", ty: "::System::Nullable_1<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "stringIndex", ty: "::System::Nullable_1<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "stringMinimum", ty: "::System::Nullable_1<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "stringMaximum", ty: "::System::Nullable_1<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "usageList", ty: "::System::Collections::Generic::List_1<int32_t>*", modifiers: "", def_value: None, comment: None }]
constexpr HIDParser_HIDItemStateLocal(::System::Nullable_1<int32_t>  usage, ::System::Nullable_1<int32_t>  usageMinimum, ::System::Nullable_1<int32_t>  usageMaximum, ::System::Nullable_1<int32_t>  designatorIndex, ::System::Nullable_1<int32_t>  designatorMinimum, ::System::Nullable_1<int32_t>  designatorMaximum, ::System::Nullable_1<int32_t>  stringIndex, ::System::Nullable_1<int32_t>  stringMinimum, ::System::Nullable_1<int32_t>  stringMaximum, ::System::Collections::Generic::List_1<int32_t>*  usageList) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13630};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// @brief Field usage, offset: 0x0, size: 0x10, def value: None
 ::System::Nullable_1<int32_t>  usage;

/// @brief Field usageMinimum, offset: 0x10, size: 0x10, def value: None
 ::System::Nullable_1<int32_t>  usageMinimum;

/// @brief Field usageMaximum, offset: 0x20, size: 0x10, def value: None
 ::System::Nullable_1<int32_t>  usageMaximum;

/// @brief Field designatorIndex, offset: 0x30, size: 0x10, def value: None
 ::System::Nullable_1<int32_t>  designatorIndex;

/// @brief Field designatorMinimum, offset: 0x40, size: 0x10, def value: None
 ::System::Nullable_1<int32_t>  designatorMinimum;

/// @brief Size padding 0x50 - 0x98 = 0x48, packed as 0x48
 uint8_t  _cordl_size_padding[0x48];

/// @brief Field designatorMaximum, offset: 0x50, size: 0x10, def value: None
 ::System::Nullable_1<int32_t>  designatorMaximum;

/// @brief Field stringIndex, offset: 0x60, size: 0x10, def value: None
 ::System::Nullable_1<int32_t>  stringIndex;

/// @brief Field stringMinimum, offset: 0x70, size: 0x10, def value: None
 ::System::Nullable_1<int32_t>  stringMinimum;

/// @brief Field stringMaximum, offset: 0x80, size: 0x10, def value: None
 ::System::Nullable_1<int32_t>  stringMaximum;

/// @brief Field usageList, offset: 0x90, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  usageList;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HIDParser_HIDItemStateLocal, usage) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HIDParser_HIDItemStateLocal, usageMinimum) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HIDParser_HIDItemStateLocal, usageMaximum) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HIDParser_HIDItemStateLocal, designatorIndex) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HIDParser_HIDItemStateLocal, designatorMinimum) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HIDParser_HIDItemStateLocal, designatorMaximum) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HIDParser_HIDItemStateLocal, stringIndex) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HIDParser_HIDItemStateLocal, stringMinimum) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HIDParser_HIDItemStateLocal, stringMaximum) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HIDParser_HIDItemStateLocal, usageList) == 0x90, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HIDParser_HIDItemStateLocal) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
