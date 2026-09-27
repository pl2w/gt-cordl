#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/Core/Parsing/FormatItem.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Localization/SmartFormat/Core/Parsing/zzzz__FormatItem_PartialCharEnumerator_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FormatItem)
namespace GlobalNamespace {
struct FormatItem_PartialCharEnumerator;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine::Localization::SmartFormat::Core::Settings {
class SmartSettings;
}
// Forward declare root types
namespace UnityEngine::Localization::SmartFormat::Core::Parsing {
class FormatItem;
}
namespace UnityEngine::Localization::SmartFormat::Core::Parsing {
class PartialCharEnumerator_FormatItem__GetEnumerator_d__4;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::SmartFormat::Core::Parsing::FormatItem*);
MARK_REF_T(::UnityEngine::Localization::SmartFormat::Core::Parsing::PartialCharEnumerator_FormatItem__GetEnumerator_d__4*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::SmartFormat::Core::Parsing::FormatItem*, "UnityEngine.Localization.SmartFormat.Core.Parsing", "FormatItem");
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::SmartFormat::Core::Parsing::PartialCharEnumerator_FormatItem__GetEnumerator_d__4*, "UnityEngine.Localization.SmartFormat.Core.Parsing", "FormatItem/PartialCharEnumerator/<GetEnumerator>d__4");
// Dependencies System.Object
namespace UnityEngine::Localization::SmartFormat::Core::Parsing {
// Is value type: false
// CS Name: UnityEngine.Localization.SmartFormat.Core.Parsing.FormatItem
class CORDL_TYPE FormatItem : public ::System::Object {
public:
// Declarations
using PartialCharEnumerator = ::GlobalNamespace::FormatItem_PartialCharEnumerator;

 __declspec(property(get=get_Parent, put=set_Parent)) ::UnityEngine::Localization::SmartFormat::Core::Parsing::FormatItem*  Parent;

 __declspec(property(get=get_RawText)) ::StringW  RawText;

/// @brief Field SmartSettings, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_SmartSettings, put=__cordl_internal_set_SmartSettings)) ::UnityEngine::Localization::SmartFormat::Core::Settings::SmartSettings*  SmartSettings;

/// @brief Field <Parent>k__BackingField, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__Parent_k__BackingField, put=__cordl_internal_set__Parent_k__BackingField)) ::UnityEngine::Localization::SmartFormat::Core::Parsing::FormatItem*  _Parent_k__BackingField;

/// @brief Field baseString, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_baseString, put=__cordl_internal_set_baseString)) ::StringW  baseString;

/// @brief Field endIndex, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_endIndex, put=__cordl_internal_set_endIndex)) int32_t  endIndex;

/// @brief Field m_RawText, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_RawText, put=__cordl_internal_set_m_RawText)) ::StringW  m_RawText;

/// @brief Field startIndex, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_startIndex, put=__cordl_internal_set_startIndex)) int32_t  startIndex;

/// @brief Method Clear, addr 0xb045ac0, size 0x50, virtual true, abstract: false, final false
inline void Clear() ;

/// @brief Method Init, addr 0xb02d118, size 0x64, virtual false, abstract: false, final false
inline void Init(::UnityEngine::Localization::SmartFormat::Core::Settings::SmartSettings*  smartSettings, ::UnityEngine::Localization::SmartFormat::Core::Parsing::FormatItem*  parent, ::StringW  baseString, int32_t  startIndex, int32_t  endIndex) ;

/// @brief Method Init, addr 0xb02cf58, size 0x24, virtual false, abstract: false, final false
inline void Init(::UnityEngine::Localization::SmartFormat::Core::Settings::SmartSettings*  smartSettings, ::UnityEngine::Localization::SmartFormat::Core::Parsing::FormatItem*  parent, int32_t  startIndex) ;

/// @brief Method Init, addr 0xb02d038, size 0x1c, virtual false, abstract: false, final false
inline void Init(::UnityEngine::Localization::SmartFormat::Core::Settings::SmartSettings*  smartSettings, ::UnityEngine::Localization::SmartFormat::Core::Parsing::FormatItem*  parent, int32_t  startIndex, int32_t  endIndex) ;

static inline ::UnityEngine::Localization::SmartFormat::Core::Parsing::FormatItem* New_ctor() ;

/// @brief Method ToEnumerable, addr 0xb02c658, size 0x78, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<char16_t>* ToEnumerable() ;

/// @brief Method ToString, addr 0xb045b3c, size 0xc0, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::UnityEngine::Localization::SmartFormat::Core::Settings::SmartSettings* const& __cordl_internal_get_SmartSettings() const;

constexpr ::UnityEngine::Localization::SmartFormat::Core::Settings::SmartSettings*& __cordl_internal_get_SmartSettings() ;

constexpr ::UnityEngine::Localization::SmartFormat::Core::Parsing::FormatItem* const& __cordl_internal_get__Parent_k__BackingField() const;

constexpr ::UnityEngine::Localization::SmartFormat::Core::Parsing::FormatItem*& __cordl_internal_get__Parent_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get_baseString() const;

constexpr ::StringW& __cordl_internal_get_baseString() ;

constexpr int32_t const& __cordl_internal_get_endIndex() const;

constexpr int32_t& __cordl_internal_get_endIndex() ;

constexpr ::StringW const& __cordl_internal_get_m_RawText() const;

constexpr ::StringW& __cordl_internal_get_m_RawText() ;

constexpr int32_t const& __cordl_internal_get_startIndex() const;

constexpr int32_t& __cordl_internal_get_startIndex() ;

constexpr void __cordl_internal_set_SmartSettings(::UnityEngine::Localization::SmartFormat::Core::Settings::SmartSettings*  value) ;

constexpr void __cordl_internal_set__Parent_k__BackingField(::UnityEngine::Localization::SmartFormat::Core::Parsing::FormatItem*  value) ;

constexpr void __cordl_internal_set_baseString(::StringW  value) ;

constexpr void __cordl_internal_set_endIndex(int32_t  value) ;

constexpr void __cordl_internal_set_m_RawText(::StringW  value) ;

constexpr void __cordl_internal_set_startIndex(int32_t  value) ;

/// @brief Method .ctor, addr 0xb045530, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_Parent, addr 0xb045ab0, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Localization::SmartFormat::Core::Parsing::FormatItem* get_Parent() ;

/// @brief Method get_RawText, addr 0xb02bb5c, size 0x58, virtual false, abstract: false, final false
inline ::StringW get_RawText() ;

/// [CompilerGenerated]
/// @brief Method set_Parent, addr 0xb045ab8, size 0x8, virtual false, abstract: false, final false
inline void set_Parent(::UnityEngine::Localization::SmartFormat::Core::Parsing::FormatItem*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FormatItem() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FormatItem", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FormatItem(FormatItem && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FormatItem", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FormatItem(FormatItem const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25217};

/// @brief Field baseString, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___baseString;

/// @brief Field endIndex, offset: 0x18, size: 0x4, def value: None
 int32_t  ___endIndex;

/// @brief Field SmartSettings, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::Localization::SmartFormat::Core::Settings::SmartSettings*  ___SmartSettings;

/// @brief Field startIndex, offset: 0x28, size: 0x4, def value: None
 int32_t  ___startIndex;

/// @brief Field m_RawText, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___m_RawText;

/// [CompilerGenerated]
/// @brief Field <Parent>k__BackingField, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Localization::SmartFormat::Core::Parsing::FormatItem*  ____Parent_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Core::Parsing::FormatItem, ___baseString) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Core::Parsing::FormatItem, ___endIndex) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Core::Parsing::FormatItem, ___SmartSettings) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Core::Parsing::FormatItem, ___startIndex) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Core::Parsing::FormatItem, ___m_RawText) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Core::Parsing::FormatItem, ____Parent_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Localization::SmartFormat::Core::Parsing::FormatItem) == 0x40, "Size mismatch!");

} // namespace end def UnityEngine::Localization::SmartFormat::Core::Parsing
// [CompilerGenerated]
// Dependencies System.Object, UnityEngine.Localization.SmartFormat.Core.Parsing.FormatItem::PartialCharEnumerator
namespace UnityEngine::Localization::SmartFormat::Core::Parsing {
// Is value type: false
// CS Name: UnityEngine.Localization.SmartFormat.Core.Parsing.FormatItem/PartialCharEnumerator/<GetEnumerator>d__4
class CORDL_TYPE PartialCharEnumerator_FormatItem__GetEnumerator_d__4 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Char__get_Current)) char16_t  System_Collections_Generic_IEnumerator_System_Char__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x14, size 0x2 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) char16_t  __2__current;

/// @brief Field <>4__this, offset 0x18, size 0x10 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::GlobalNamespace::FormatItem_PartialCharEnumerator  __4__this;

/// @brief Field <i>5__2, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__i_5__2, put=__cordl_internal_set__i_5__2)) int32_t  _i_5__2;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<char16_t>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<char16_t>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0xb045c9c, size 0x7c, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::UnityEngine::Localization::SmartFormat::Core::Parsing::PartialCharEnumerator_FormatItem__GetEnumerator_d__4* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Char>.get_Current, addr 0xb045d18, size 0x8, virtual true, abstract: false, final true
inline char16_t System_Collections_Generic_IEnumerator_System_Char__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0xb045d20, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0xb045d58, size 0x28, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0xb045c98, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr char16_t const& __cordl_internal_get___2__current() const;

constexpr char16_t& __cordl_internal_get___2__current() ;

constexpr ::GlobalNamespace::FormatItem_PartialCharEnumerator const& __cordl_internal_get___4__this() const;

constexpr ::GlobalNamespace::FormatItem_PartialCharEnumerator& __cordl_internal_get___4__this() ;

constexpr int32_t const& __cordl_internal_get__i_5__2() const;

constexpr int32_t& __cordl_internal_get__i_5__2() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(char16_t  value) ;

constexpr void __cordl_internal_set___4__this(::GlobalNamespace::FormatItem_PartialCharEnumerator  value) ;

constexpr void __cordl_internal_set__i_5__2(int32_t  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0xb045c6c, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<char16_t>"
constexpr ::System::Collections::Generic::IEnumerator_1<char16_t>* i___System__Collections__Generic__IEnumerator_1_char16_t_() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PartialCharEnumerator_FormatItem__GetEnumerator_d__4() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PartialCharEnumerator_FormatItem__GetEnumerator_d__4", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PartialCharEnumerator_FormatItem__GetEnumerator_d__4(PartialCharEnumerator_FormatItem__GetEnumerator_d__4 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PartialCharEnumerator_FormatItem__GetEnumerator_d__4", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PartialCharEnumerator_FormatItem__GetEnumerator_d__4(PartialCharEnumerator_FormatItem__GetEnumerator_d__4 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25215};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x14, size: 0x2, def value: None
 char16_t  _____2__current;

/// @brief Field <>4__this, offset: 0x18, size: 0x10, def value: None
 ::GlobalNamespace::FormatItem_PartialCharEnumerator  _____4__this;

/// @brief Field <i>5__2, offset: 0x28, size: 0x4, def value: None
 int32_t  ____i_5__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Core::Parsing::PartialCharEnumerator_FormatItem__GetEnumerator_d__4, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Core::Parsing::PartialCharEnumerator_FormatItem__GetEnumerator_d__4, _____2__current) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Core::Parsing::PartialCharEnumerator_FormatItem__GetEnumerator_d__4, _____4__this) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Core::Parsing::PartialCharEnumerator_FormatItem__GetEnumerator_d__4, ____i_5__2) == 0x28, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Localization::SmartFormat::Core::Parsing::PartialCharEnumerator_FormatItem__GetEnumerator_d__4) == 0x30, "Size mismatch!");

} // namespace end def UnityEngine::Localization::SmartFormat::Core::Parsing
