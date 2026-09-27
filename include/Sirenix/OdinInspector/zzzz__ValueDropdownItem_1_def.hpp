#pragma once
// IWYU pragma private; include "Sirenix/OdinInspector/ValueDropdownItem_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ValueDropdownItem_1)
// Forward declare root types
namespace Sirenix::OdinInspector {
template<typename T>
struct ValueDropdownItem_1;
}
// Write type traits
MARK_GEN_VAL_T(::Sirenix::OdinInspector::ValueDropdownItem_1);
DEFINE_IL2CPP_GEN_CLASS(::Sirenix::OdinInspector::ValueDropdownItem_1, "Sirenix.OdinInspector", "ValueDropdownItem`1");
// Dependencies 
namespace Sirenix::OdinInspector {
// cpp template
template<typename T>
// Is value type: true
// CS Name: Sirenix.OdinInspector.ValueDropdownItem`1<T>
struct CORDL_TYPE ValueDropdownItem_1 {
public:
// Declarations
/// @brief Method ToString, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::StringW  text, T  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr ValueDropdownItem_1() ;

// Ctor Parameters [CppParam { name: "Text", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "Value", ty: "T", modifiers: "", def_value: None, comment: None }]
constexpr ValueDropdownItem_1(::StringW  Text, T  Value) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{33049};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field Text, offset: 0x0, size: 0x8, def value: None
 ::StringW  Text;

/// @brief Field Value, offset: 0x8, size: 0x8, def value: None
 T  Value;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Sirenix::OdinInspector
