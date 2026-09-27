#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/Core/Parsing/FormatItem_PartialCharEnumerator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FormatItem_PartialCharEnumerator)
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace UnityEngine::Localization::SmartFormat::Core::Parsing {
class PartialCharEnumerator_FormatItem__GetEnumerator_d__4;
}
// Forward declare root types
namespace GlobalNamespace {
struct FormatItem_PartialCharEnumerator;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::FormatItem_PartialCharEnumerator);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FormatItem_PartialCharEnumerator, "UnityEngine.Localization.SmartFormat.Core.Parsing", "FormatItem/PartialCharEnumerator");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Localization.SmartFormat.Core.Parsing.FormatItem/PartialCharEnumerator
struct CORDL_TYPE FormatItem_PartialCharEnumerator {
public:
// Declarations
using _GetEnumerator_d__4 = ::UnityEngine::Localization::SmartFormat::Core::Parsing::PartialCharEnumerator_FormatItem__GetEnumerator_d__4;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<char16_t>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<char16_t>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() ;

/// [IteratorStateMachine(typeof(UnityEngine.Localization.SmartFormat.Core.Parsing.FormatItem::PartialCharEnumerator::<GetEnumerator>d__4))]
/// @brief Method GetEnumerator, addr 0xb045bfc, size 0x70, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<char16_t>* GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0xb045c94, size 0x4, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method .ctor, addr 0xb045b10, size 0x2c, virtual false, abstract: false, final false
inline void _ctor(::StringW  s, int32_t  from, int32_t  to) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<char16_t>"
constexpr ::System::Collections::Generic::IEnumerable_1<char16_t>* i___System__Collections__Generic__IEnumerable_1_char16_t_() ;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() ;

// Ctor Parameters []
// @brief default ctor
constexpr FormatItem_PartialCharEnumerator() ;

// Ctor Parameters [CppParam { name: "m_BaseString", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_From", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_To", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr FormatItem_PartialCharEnumerator(::StringW  m_BaseString, int32_t  m_From, int32_t  m_To) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25216};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_BaseString, offset: 0x0, size: 0x8, def value: None
 ::StringW  m_BaseString;

/// @brief Field m_From, offset: 0x8, size: 0x4, def value: None
 int32_t  m_From;

/// @brief Field m_To, offset: 0xc, size: 0x4, def value: None
 int32_t  m_To;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FormatItem_PartialCharEnumerator, m_BaseString) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FormatItem_PartialCharEnumerator, m_From) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FormatItem_PartialCharEnumerator, m_To) == 0xc, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FormatItem_PartialCharEnumerator) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
