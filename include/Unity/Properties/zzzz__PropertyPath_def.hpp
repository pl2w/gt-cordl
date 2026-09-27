#pragma once
// IWYU pragma private; include "Unity/Properties/PropertyPath.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Properties/zzzz__PropertyPathPart_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PropertyPath)
namespace GlobalNamespace {
struct PropertyPath___c__DisplayClass36_0;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
namespace Unity::Properties {
class IProperty;
}
namespace Unity::Properties {
struct PropertyPathPart;
}
// Forward declare root types
namespace Unity::Properties {
struct PropertyPath;
}
// Write type traits
MARK_VAL_T(::Unity::Properties::PropertyPath);
DEFINE_IL2CPP_CLASS(::Unity::Properties::PropertyPath, "Unity.Properties", "PropertyPath");
// [IsReadOnly]
// [DefaultMember("Item")]
// Dependencies Unity.Properties.PropertyPathPart
namespace Unity::Properties {
// Is value type: true
// CS Name: Unity.Properties.PropertyPath
struct CORDL_TYPE PropertyPath {
public:
// Declarations
using __c__DisplayClass36_0 = ::GlobalNamespace::PropertyPath___c__DisplayClass36_0;

 __declspec(property(get=get_IsEmpty)) bool  IsEmpty;

 __declspec(property(get=get_Item)) ::Unity::Properties::PropertyPathPart  Item[];

 __declspec(property(get=get_Length)) int32_t  Length;

/// @brief Convert operator to "::System::IEquatable_1<::Unity::Properties::PropertyPath>"
constexpr operator  ::System::IEquatable_1<::Unity::Properties::PropertyPath>*() ;

/// @brief Method AppendIndex, addr 0xb6970a8, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Properties::PropertyPath AppendIndex(/* [IsReadOnly] */ ::by_ref<::Unity::Properties::PropertyPath>  path, int32_t  index) ;

/// @brief Method AppendPart, addr 0xb696d74, size 0x334, virtual false, abstract: false, final false
static inline ::Unity::Properties::PropertyPath AppendPart(/* [IsReadOnly] */ ::by_ref<::Unity::Properties::PropertyPath>  path, /* [IsReadOnly] */ ::by_ref<::Unity::Properties::PropertyPathPart>  part) ;

/// @brief Method AppendProperty, addr 0xb697148, size 0x328, virtual false, abstract: false, final false
static inline ::Unity::Properties::PropertyPath AppendProperty(/* [IsReadOnly] */ ::by_ref<::Unity::Properties::PropertyPath>  path, ::Unity::Properties::IProperty*  property) ;

/// @brief Method AppendToBuilder, addr 0xb697b0c, size 0xb4, virtual false, abstract: false, final false
static inline void AppendToBuilder(/* [IsReadOnly] */ ::by_ref<::Unity::Properties::PropertyPathPart>  part, ::System::Text::StringBuilder*  builder) ;

/// @brief Method Combine, addr 0xb696930, size 0x350, virtual false, abstract: false, final false
static inline ::Unity::Properties::PropertyPath Combine(/* [IsReadOnly] */ ::by_ref<::Unity::Properties::PropertyPath>  path, /* [IsReadOnly] */ ::by_ref<::Unity::Properties::PropertyPath>  pathToAppend) ;

/// @brief Method ConstructFromPath, addr 0xb6952a0, size 0x11ec, virtual false, abstract: false, final false
static inline ::Unity::Properties::PropertyPath ConstructFromPath(::StringW  path) ;

/// @brief Method Equals, addr 0xb697e74, size 0x90, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0xb697d84, size 0x9c, virtual true, abstract: false, final true
inline bool Equals(::Unity::Properties::PropertyPath  other) ;

/// @brief Method FromIndex, addr 0xb69686c, size 0xc4, virtual false, abstract: false, final false
static inline ::Unity::Properties::PropertyPath FromIndex(int32_t  index) ;

/// @brief Method GetHashCode, addr 0xb697f04, size 0xf8, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method GetParts, addr 0xb696c80, size 0xf4, virtual false, abstract: false, final false
static inline void GetParts(/* [IsReadOnly] */ ::by_ref<::Unity::Properties::PropertyPath>  path, ::System::Collections::Generic::List_1<::Unity::Properties::PropertyPathPart>*  parts) ;

/// @brief Method Pop, addr 0xb697470, size 0x3c, virtual false, abstract: false, final false
static inline ::Unity::Properties::PropertyPath Pop(/* [IsReadOnly] */ ::by_ref<::Unity::Properties::PropertyPath>  path) ;

/// @brief Method SubPath, addr 0xb6974ac, size 0x4d4, virtual false, abstract: false, final false
static inline ::Unity::Properties::PropertyPath SubPath(/* [IsReadOnly] */ ::by_ref<::Unity::Properties::PropertyPath>  path, int32_t  startIndex, int32_t  length) ;

/// @brief Method ToString, addr 0xb697980, size 0x18c, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// [CompilerGenerated]
/// @brief Method <ConstructFromPath>g__ReadNext|36_1, addr 0xb697c10, size 0x140, virtual false, abstract: false, final false
static inline void _ConstructFromPath_g__ReadNext_36_1(::by_ref<::GlobalNamespace::PropertyPath___c__DisplayClass36_0>  _cordl_fixed_empty_name_whitespace) ;

/// [CompilerGenerated]
/// @brief Method <ConstructFromPath>g__TrimStart|36_0, addr 0xb697bc0, size 0x50, virtual false, abstract: false, final false
static inline void _ConstructFromPath_g__TrimStart_36_0(::by_ref<::GlobalNamespace::PropertyPath___c__DisplayClass36_0>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method .ctor, addr 0xb69648c, size 0x4c, virtual false, abstract: false, final false
inline void _ctor(/* [IsReadOnly] */ ::by_ref<::Unity::Properties::PropertyPathPart>  part) ;

/// @brief Method .ctor, addr 0xb6964d8, size 0x68, virtual false, abstract: false, final false
inline void _ctor(/* [IsReadOnly] */ ::by_ref<::Unity::Properties::PropertyPathPart>  part0, /* [IsReadOnly] */ ::by_ref<::Unity::Properties::PropertyPathPart>  part1) ;

/// @brief Method .ctor, addr 0xb696540, size 0x7c, virtual false, abstract: false, final false
inline void _ctor(/* [IsReadOnly] */ ::by_ref<::Unity::Properties::PropertyPathPart>  part0, /* [IsReadOnly] */ ::by_ref<::Unity::Properties::PropertyPathPart>  part1, /* [IsReadOnly] */ ::by_ref<::Unity::Properties::PropertyPathPart>  part2) ;

/// @brief Method .ctor, addr 0xb6965bc, size 0x94, virtual false, abstract: false, final false
inline void _ctor(/* [IsReadOnly] */ ::by_ref<::Unity::Properties::PropertyPathPart>  part0, /* [IsReadOnly] */ ::by_ref<::Unity::Properties::PropertyPathPart>  part1, /* [IsReadOnly] */ ::by_ref<::Unity::Properties::PropertyPathPart>  part2, /* [IsReadOnly] */ ::by_ref<::Unity::Properties::PropertyPathPart>  part3) ;

/// @brief Method .ctor, addr 0xb696650, size 0x21c, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::Generic::List_1<::Unity::Properties::PropertyPathPart>*  parts) ;

/// @brief Method .ctor, addr 0xb6951f0, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::StringW  path) ;

/// @brief Method get_IsEmpty, addr 0xb6950ec, size 0x10, virtual false, abstract: false, final false
inline bool get_IsEmpty() ;

/// @brief Method get_Item, addr 0xb6950fc, size 0xf4, virtual false, abstract: false, final false
inline ::Unity::Properties::PropertyPathPart get_Item(int32_t  index) ;

/// [CompilerGenerated]
/// @brief Method get_Length, addr 0xb6950e4, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Length() ;

/// @brief Convert to "::System::IEquatable_1<::Unity::Properties::PropertyPath>"
constexpr ::System::IEquatable_1<::Unity::Properties::PropertyPath>* i___System__IEquatable_1___Unity__Properties__PropertyPath_() ;

/// @brief Method op_Equality, addr 0xb697d50, size 0x34, virtual false, abstract: false, final false
static inline bool op_Equality(::Unity::Properties::PropertyPath  lhs, ::Unity::Properties::PropertyPath  rhs) ;

/// @brief Method op_Inequality, addr 0xb697e20, size 0x54, virtual false, abstract: false, final false
static inline bool op_Inequality(::Unity::Properties::PropertyPath  lhs, ::Unity::Properties::PropertyPath  rhs) ;

// Ctor Parameters []
// @brief default ctor
constexpr PropertyPath() ;

// Ctor Parameters [CppParam { name: "m_Part0", ty: "::Unity::Properties::PropertyPathPart", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Part1", ty: "::Unity::Properties::PropertyPathPart", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Part2", ty: "::Unity::Properties::PropertyPathPart", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Part3", ty: "::Unity::Properties::PropertyPathPart", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_AdditionalParts", ty: "::ArrayW<::Unity::Properties::PropertyPathPart>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_Length_k__BackingField", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr PropertyPath(::Unity::Properties::PropertyPathPart  m_Part0, ::Unity::Properties::PropertyPathPart  m_Part1, ::Unity::Properties::PropertyPathPart  m_Part2, ::Unity::Properties::PropertyPathPart  m_Part3, ::ArrayW<::Unity::Properties::PropertyPathPart>  m_AdditionalParts, int32_t  _Length_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29445};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x90};

/// @brief Field k_InlineCount offset 0xffffffff size 0x4
static constexpr int32_t  k_InlineCount{static_cast<int32_t>(0x4)};

/// @brief Field m_Part0, offset: 0x0, size: 0x20, def value: None
 ::Unity::Properties::PropertyPathPart  m_Part0;

/// @brief Field m_Part1, offset: 0x20, size: 0x20, def value: None
 ::Unity::Properties::PropertyPathPart  m_Part1;

/// @brief Field m_Part2, offset: 0x40, size: 0x20, def value: None
 ::Unity::Properties::PropertyPathPart  m_Part2;

/// @brief Field m_Part3, offset: 0x60, size: 0x20, def value: None
 ::Unity::Properties::PropertyPathPart  m_Part3;

/// @brief Field m_AdditionalParts, offset: 0x80, size: 0x8, def value: None
 ::ArrayW<::Unity::Properties::PropertyPathPart>  m_AdditionalParts;

/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// [CompilerGenerated]
/// @brief Field <Length>k__BackingField, offset: 0x88, size: 0x4, def value: None
 int32_t  _Length_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Properties::PropertyPath, m_Part0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Properties::PropertyPath, m_Part1) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Properties::PropertyPath, m_Part2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Unity::Properties::PropertyPath, m_Part3) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Unity::Properties::PropertyPath, m_AdditionalParts) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Unity::Properties::PropertyPath, _Length_k__BackingField) == 0x88, "Offset mismatch!");

static_assert(sizeof(::Unity::Properties::PropertyPath) == 0x90, "Size mismatch!");

} // namespace end def Unity::Properties
