#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/Extensions/ValueTupleSource.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ValueTupleSource)
namespace UnityEngine::Localization::SmartFormat::Core::Extensions {
class ISelectorInfo;
}
namespace UnityEngine::Localization::SmartFormat::Core::Extensions {
class ISource;
}
namespace UnityEngine::Localization::SmartFormat {
class SmartFormatter;
}
// Forward declare root types
namespace UnityEngine::Localization::SmartFormat::Extensions {
class ValueTupleSource;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::SmartFormat::Extensions::ValueTupleSource*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::SmartFormat::Extensions::ValueTupleSource*, "UnityEngine.Localization.SmartFormat.Extensions", "ValueTupleSource");
// Dependencies System.Object
namespace UnityEngine::Localization::SmartFormat::Extensions {
// Is value type: false
// CS Name: UnityEngine.Localization.SmartFormat.Extensions.ValueTupleSource
class CORDL_TYPE ValueTupleSource : public ::System::Object {
public:
// Declarations
/// @brief Field m_Formatter, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Formatter, put=__cordl_internal_set_m_Formatter)) ::UnityEngine::Localization::SmartFormat::SmartFormatter*  m_Formatter;

/// @brief Convert operator to "::UnityEngine::Localization::SmartFormat::Core::Extensions::ISource"
constexpr operator  ::UnityEngine::Localization::SmartFormat::Core::Extensions::ISource*() noexcept;

static inline ::UnityEngine::Localization::SmartFormat::Extensions::ValueTupleSource* New_ctor(::UnityEngine::Localization::SmartFormat::SmartFormatter*  formatter) ;

/// @brief Method TryEvaluateSelector, addr 0xb043ed8, size 0x588, virtual true, abstract: false, final true
inline bool TryEvaluateSelector(::UnityEngine::Localization::SmartFormat::Core::Extensions::ISelectorInfo*  selectorInfo) ;

constexpr ::UnityEngine::Localization::SmartFormat::SmartFormatter* const& __cordl_internal_get_m_Formatter() const;

constexpr ::UnityEngine::Localization::SmartFormat::SmartFormatter*& __cordl_internal_get_m_Formatter() ;

constexpr void __cordl_internal_set_m_Formatter(::UnityEngine::Localization::SmartFormat::SmartFormatter*  value) ;

/// @brief Method .ctor, addr 0xb028084, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Localization::SmartFormat::SmartFormatter*  formatter) ;

/// @brief Convert to "::UnityEngine::Localization::SmartFormat::Core::Extensions::ISource"
constexpr ::UnityEngine::Localization::SmartFormat::Core::Extensions::ISource* i___UnityEngine__Localization__SmartFormat__Core__Extensions__ISource() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ValueTupleSource() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ValueTupleSource", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ValueTupleSource(ValueTupleSource && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ValueTupleSource", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ValueTupleSource(ValueTupleSource const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25206};

/// @brief Field m_Formatter, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::Localization::SmartFormat::SmartFormatter*  ___m_Formatter;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Extensions::ValueTupleSource, ___m_Formatter) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Localization::SmartFormat::Extensions::ValueTupleSource) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::Localization::SmartFormat::Extensions
