#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/Core/Parsing/Selector.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Localization/SmartFormat/Core/Parsing/zzzz__FormatItem_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Selector)
// Forward declare root types
namespace UnityEngine::Localization::SmartFormat::Core::Parsing {
class Selector;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::SmartFormat::Core::Parsing::Selector*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::SmartFormat::Core::Parsing::Selector*, "UnityEngine.Localization.SmartFormat.Core.Parsing", "Selector");
// Dependencies UnityEngine.Localization.SmartFormat.Core.Parsing.FormatItem
namespace UnityEngine::Localization::SmartFormat::Core::Parsing {
// Is value type: false
// CS Name: UnityEngine.Localization.SmartFormat.Core.Parsing.Selector
class CORDL_TYPE Selector : public ::UnityEngine::Localization::SmartFormat::Core::Parsing::FormatItem {
public:
// Declarations
 __declspec(property(get=get_Operator)) ::StringW  Operator;

 __declspec(property(get=get_SelectorIndex, put=set_SelectorIndex)) int32_t  SelectorIndex;

/// @brief Field <SelectorIndex>k__BackingField, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get__SelectorIndex_k__BackingField, put=__cordl_internal_set__SelectorIndex_k__BackingField)) int32_t  _SelectorIndex_k__BackingField;

/// @brief Field m_Operator, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Operator, put=__cordl_internal_set_m_Operator)) ::StringW  m_Operator;

/// @brief Field operatorStart, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_operatorStart, put=__cordl_internal_set_operatorStart)) int32_t  operatorStart;

/// @brief Method Clear, addr 0xb04815c, size 0x24, virtual true, abstract: false, final false
inline void Clear() ;

static inline ::UnityEngine::Localization::SmartFormat::Core::Parsing::Selector* New_ctor() ;

constexpr int32_t const& __cordl_internal_get__SelectorIndex_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__SelectorIndex_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get_m_Operator() const;

constexpr ::StringW& __cordl_internal_get_m_Operator() ;

constexpr int32_t const& __cordl_internal_get_operatorStart() const;

constexpr int32_t& __cordl_internal_get_operatorStart() ;

constexpr void __cordl_internal_set__SelectorIndex_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set_m_Operator(::StringW  value) ;

constexpr void __cordl_internal_set_operatorStart(int32_t  value) ;

/// @brief Method .ctor, addr 0xb0481e8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Operator, addr 0xb048190, size 0x58, virtual false, abstract: false, final false
inline ::StringW get_Operator() ;

/// [CompilerGenerated]
/// @brief Method get_SelectorIndex, addr 0xb048180, size 0x8, virtual false, abstract: false, final false
inline int32_t get_SelectorIndex() ;

/// [CompilerGenerated]
/// @brief Method set_SelectorIndex, addr 0xb048188, size 0x8, virtual false, abstract: false, final false
inline void set_SelectorIndex(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Selector() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Selector", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Selector(Selector && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Selector", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Selector(Selector const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25230};

/// @brief Field m_Operator, offset: 0x40, size: 0x8, def value: None
 ::StringW  ___m_Operator;

/// @brief Field operatorStart, offset: 0x48, size: 0x4, def value: None
 int32_t  ___operatorStart;

/// [CompilerGenerated]
/// @brief Field <SelectorIndex>k__BackingField, offset: 0x4c, size: 0x4, def value: None
 int32_t  ____SelectorIndex_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Core::Parsing::Selector, ___m_Operator) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Core::Parsing::Selector, ___operatorStart) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Core::Parsing::Selector, ____SelectorIndex_k__BackingField) == 0x4c, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Localization::SmartFormat::Core::Parsing::Selector) == 0x50, "Size mismatch!");

} // namespace end def UnityEngine::Localization::SmartFormat::Core::Parsing
