#pragma once
// IWYU pragma private; include "System/Xml/Linq/XHashtable`1_XHashtableState_Entry.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XHashtable`1_XHashtableState_Entry)
// Forward declare root types
namespace GlobalNamespace {
template<typename TValue>
struct XHashtableState_XHashtable_1_Entry;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::XHashtableState_XHashtable_1_Entry);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::XHashtableState_XHashtable_1_Entry, "System.Xml.Linq", "XHashtable`1/XHashtableState/Entry");
// Dependencies 
namespace GlobalNamespace {
// cpp template
template<typename TValue>
// Is value type: true
// CS Name: System.Xml.Linq.XHashtable`1/XHashtableState/Entry<TValue>
struct CORDL_TYPE XHashtableState_XHashtable_1_Entry {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr XHashtableState_XHashtable_1_Entry() ;

// Ctor Parameters [CppParam { name: "Value", ty: "TValue", modifiers: "", def_value: None, comment: None }, CppParam { name: "HashCode", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Next", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr XHashtableState_XHashtable_1_Entry(TValue  Value, int32_t  HashCode, int32_t  Next) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32024};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field Value, offset: 0x0, size: 0x8, def value: None
 TValue  Value;

/// @brief Field HashCode, offset: 0x8, size: 0x4, def value: None
 int32_t  HashCode;

/// @brief Field Next, offset: 0xc, size: 0x4, def value: None
 int32_t  Next;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
