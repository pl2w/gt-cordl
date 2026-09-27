#pragma once
// IWYU pragma private; include "Sirenix/OdinInspector/ValueDropdownList_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Sirenix/OdinInspector/zzzz__ValueDropdownItem_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
CORDL_MODULE_EXPORT(ValueDropdownList_1)
// Forward declare root types
namespace Sirenix::OdinInspector {
template<typename T>
class ValueDropdownList_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Sirenix::OdinInspector::ValueDropdownList_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Sirenix::OdinInspector::ValueDropdownList_1, "Sirenix.OdinInspector", "ValueDropdownList`1");
// Dependencies Sirenix.OdinInspector.ValueDropdownItem`1<T>, System.Collections.Generic.List`1<T>
namespace Sirenix::OdinInspector {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Sirenix.OdinInspector.ValueDropdownList`1<T>
class CORDL_TYPE ValueDropdownList_1 : public ::System::Collections::Generic::List_1<::Sirenix::OdinInspector::ValueDropdownItem_1<T>> {
public:
// Declarations
static inline ::Sirenix::OdinInspector::ValueDropdownList_1<T>* New_ctor() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ValueDropdownList_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ValueDropdownList_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ValueDropdownList_1(ValueDropdownList_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ValueDropdownList_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ValueDropdownList_1(ValueDropdownList_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{33047};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Sirenix::OdinInspector
