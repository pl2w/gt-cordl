#pragma once
// IWYU pragma private; include "System/Range.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Index_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Range)
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
struct Index;
}
namespace System {
class Object;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
// Forward declare root types
namespace System {
struct Range;
}
// Write type traits
MARK_VAL_T(::System::Range);
DEFINE_IL2CPP_CLASS(::System::Range, "System", "Range");
// [IsReadOnly]
// Dependencies System.Index
namespace System {
// Is value type: true
// CS Name: System.Range
struct CORDL_TYPE Range {
public:
// Declarations
 __declspec(property(get=get_End)) ::System::Index  End;

 __declspec(property(get=get_Start)) ::System::Index  Start;

/// @brief Convert operator to "::System::IEquatable_1<::System::Range>"
constexpr operator  ::System::IEquatable_1<::System::Range>*() ;

/// @brief Method EndAt, addr 0xa2efe84, size 0x20, virtual false, abstract: false, final false
static inline ::System::Range EndAt(::System::Index  end) ;

/// @brief Method Equals, addr 0xa2efa74, size 0x58, virtual true, abstract: false, final true
inline bool Equals(::System::Range  other) ;

/// @brief Method Equals, addr 0xa2ef9c8, size 0xac, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  value) ;

/// @brief Method GetHashCode, addr 0xa2efacc, size 0x74, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method GetOffsetAndLength, addr 0xa2efea4, size 0xe0, virtual false, abstract: false, final false
inline ::System::ValueTuple_2<int32_t,int32_t> GetOffsetAndLength(int32_t  length) ;

/// @brief Method StartAt, addr 0xa2efe64, size 0x20, virtual false, abstract: false, final false
static inline ::System::Range StartAt(::System::Index  start) ;

/// @brief Method ToString, addr 0xa2efb40, size 0x280, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0xa2ef9c0, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::System::Index  start, ::System::Index  end) ;

/// [CompilerGenerated]
/// @brief Method get_End, addr 0xa2ef9b8, size 0x8, virtual false, abstract: false, final false
inline ::System::Index get_End() ;

/// [CompilerGenerated]
/// @brief Method get_Start, addr 0xa2ef9b0, size 0x8, virtual false, abstract: false, final false
inline ::System::Index get_Start() ;

/// @brief Convert to "::System::IEquatable_1<::System::Range>"
constexpr ::System::IEquatable_1<::System::Range>* i___System__IEquatable_1___System__Range_() ;

// Ctor Parameters []
// @brief default ctor
constexpr Range() ;

// Ctor Parameters [CppParam { name: "_Start_k__BackingField", ty: "::System::Index", modifiers: "", def_value: None, comment: None }, CppParam { name: "_End_k__BackingField", ty: "::System::Index", modifiers: "", def_value: None, comment: None }]
constexpr Range(::System::Index  _Start_k__BackingField, ::System::Index  _End_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5571};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// [CompilerGenerated]
/// @brief Field <Start>k__BackingField, offset: 0x0, size: 0x4, def value: None
 ::System::Index  _Start_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <End>k__BackingField, offset: 0x4, size: 0x4, def value: None
 ::System::Index  _End_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Range, _Start_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Range, _End_k__BackingField) == 0x4, "Offset mismatch!");

static_assert(sizeof(::System::Range) == 0x8, "Size mismatch!");

} // namespace end def System
