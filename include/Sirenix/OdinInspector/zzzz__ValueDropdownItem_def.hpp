#pragma once
// IWYU pragma private; include "Sirenix/OdinInspector/ValueDropdownItem.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ValueDropdownItem)
namespace System {
class Object;
}
// Forward declare root types
namespace Sirenix::OdinInspector {
struct ValueDropdownItem;
}
// Write type traits
MARK_VAL_T(::Sirenix::OdinInspector::ValueDropdownItem);
DEFINE_IL2CPP_CLASS(::Sirenix::OdinInspector::ValueDropdownItem, "Sirenix.OdinInspector", "ValueDropdownItem");
// Dependencies 
namespace Sirenix::OdinInspector {
// Is value type: true
// CS Name: Sirenix.OdinInspector.ValueDropdownItem
struct CORDL_TYPE ValueDropdownItem {
public:
// Declarations
/// @brief Method ToString, addr 0xa84e804, size 0x68, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0xa84e7d4, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::StringW  text, ::System::Object*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr ValueDropdownItem() ;

// Ctor Parameters [CppParam { name: "Text", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "Value", ty: "::System::Object*", modifiers: "", def_value: None, comment: None }]
constexpr ValueDropdownItem(::StringW  Text, ::System::Object*  Value) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{33048};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field Text, offset: 0x0, size: 0x8, def value: None
 ::StringW  Text;

/// @brief Field Value, offset: 0x8, size: 0x8, def value: None
 ::System::Object*  Value;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Sirenix::OdinInspector::ValueDropdownItem, Text) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Sirenix::OdinInspector::ValueDropdownItem, Value) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Sirenix::OdinInspector::ValueDropdownItem) == 0x10, "Size mismatch!");

} // namespace end def Sirenix::OdinInspector
