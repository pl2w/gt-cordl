#pragma once
// IWYU pragma private; include "System/Buffers/SequenceReader_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Buffers/zzzz__ReadOnlySequence_1_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "System/zzzz__SequencePosition_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SequenceReader_1)
namespace System::Buffers {
template<typename T>
struct ReadOnlySequence_1;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
namespace System {
struct SequencePosition;
}
// Forward declare root types
namespace System::Buffers {
template<typename T>
struct SequenceReader_1;
}
// Write type traits
MARK_GEN_VAL_T(::System::Buffers::SequenceReader_1);
DEFINE_IL2CPP_GEN_CLASS(::System::Buffers::SequenceReader_1, "System.Buffers", "SequenceReader`1");
// [IsByRefLike]
// [Obsolete("Types with embedded references are not supported in this version of your compiler.", true)]
// Dependencies System.Buffers.ReadOnlySequence`1<T>, System.ReadOnlySpan`1<T>, System.SequencePosition
namespace System::Buffers {
// cpp template
template<typename T>
// Is value type: true
// CS Name: System.Buffers.SequenceReader`1<T>
struct CORDL_TYPE SequenceReader_1 {
public:
// Declarations
 __declspec(property(get=get_Consumed, put=set_Consumed)) int64_t  Consumed;

 __declspec(property(get=get_CurrentSpan, put=set_CurrentSpan)) ::System::ReadOnlySpan_1<T>  CurrentSpan;

 __declspec(property(get=get_CurrentSpanIndex, put=set_CurrentSpanIndex)) int32_t  CurrentSpanIndex;

 __declspec(property(get=get_End)) bool  End;

 __declspec(property(get=get_Length)) int64_t  Length;

 __declspec(property(get=get_Position)) ::System::SequencePosition  Position;

 __declspec(property(get=get_Remaining)) int64_t  Remaining;

 __declspec(property(get=get_Sequence)) ::System::Buffers::ReadOnlySequence_1<T>  Sequence;

 __declspec(property(get=get_UnreadSpan)) ::System::ReadOnlySpan_1<T>  UnreadSpan;

/// @brief Method Advance, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Advance(int64_t  count) ;

/// @brief Method AdvanceCurrentSpan, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void AdvanceCurrentSpan(int64_t  count) ;

/// @brief Method AdvanceToNextSpan, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void AdvanceToNextSpan(int64_t  count) ;

/// @brief Method GetNextSpan, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void GetNextSpan() ;

/// @brief Method IsNext, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool IsNext(::System::ReadOnlySpan_1<T>  next, bool  advancePast) ;

/// @brief Method IsNextSlow, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool IsNextSlow(::System::ReadOnlySpan_1<T>  next, bool  advancePast) ;

/// [IsReadOnly]
/// @brief Method TryPeek, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool TryPeek(::by_ref<T>  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Buffers::ReadOnlySequence_1<T>  sequence) ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_Consumed, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int64_t get_Consumed() ;

/// [CompilerGenerated]
/// [IsReadOnly]
/// @brief Method get_CurrentSpan, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::ReadOnlySpan_1<T> get_CurrentSpan() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_CurrentSpanIndex, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t get_CurrentSpanIndex() ;

/// [IsReadOnly]
/// @brief Method get_End, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool get_End() ;

/// [IsReadOnly]
/// @brief Method get_Length, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int64_t get_Length() ;

/// [IsReadOnly]
/// @brief Method get_Position, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::SequencePosition get_Position() ;

/// [IsReadOnly]
/// @brief Method get_Remaining, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int64_t get_Remaining() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_Sequence, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::Buffers::ReadOnlySequence_1<T> get_Sequence() ;

/// [IsReadOnly]
/// @brief Method get_UnreadSpan, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::ReadOnlySpan_1<T> get_UnreadSpan() ;

/// [CompilerGenerated]
/// @brief Method set_Consumed, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_Consumed(int64_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_CurrentSpan, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_CurrentSpan(::System::ReadOnlySpan_1<T>  value) ;

/// [CompilerGenerated]
/// @brief Method set_CurrentSpanIndex, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_CurrentSpanIndex(int32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr SequenceReader_1() ;

// Ctor Parameters [CppParam { name: "_currentPosition", ty: "::System::SequencePosition", modifiers: "", def_value: None, comment: None }, CppParam { name: "_nextPosition", ty: "::System::SequencePosition", modifiers: "", def_value: None, comment: None }, CppParam { name: "_moreData", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_length", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_Sequence_k__BackingField", ty: "::System::Buffers::ReadOnlySequence_1<T>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_CurrentSpan_k__BackingField", ty: "::System::ReadOnlySpan_1<T>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_CurrentSpanIndex_k__BackingField", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_Consumed_k__BackingField", ty: "int64_t", modifiers: "", def_value: None, comment: None }]
constexpr SequenceReader_1(::System::SequencePosition  _currentPosition, ::System::SequencePosition  _nextPosition, bool  _moreData, int64_t  _length, ::System::Buffers::ReadOnlySequence_1<T>  _Sequence_k__BackingField, ::System::ReadOnlySpan_1<T>  _CurrentSpan_k__BackingField, int32_t  _CurrentSpanIndex_k__BackingField, int64_t  _Consumed_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6971};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x68};

/// @brief Field _currentPosition, offset: 0x0, size: 0x10, def value: None
 ::System::SequencePosition  _currentPosition;

/// @brief Field _nextPosition, offset: 0x10, size: 0x10, def value: None
 ::System::SequencePosition  _nextPosition;

/// @brief Field _moreData, offset: 0x20, size: 0x1, def value: None
 bool  _moreData;

/// @brief Field _length, offset: 0x28, size: 0x8, def value: None
 int64_t  _length;

/// [CompilerGenerated]
/// @brief Field <Sequence>k__BackingField, offset: 0x30, size: 0x18, def value: None
 ::System::Buffers::ReadOnlySequence_1<T>  _Sequence_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <CurrentSpan>k__BackingField, offset: 0x48, size: 0x10, def value: None
 ::System::ReadOnlySpan_1<T>  _CurrentSpan_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <CurrentSpanIndex>k__BackingField, offset: 0x58, size: 0x4, def value: None
 int32_t  _CurrentSpanIndex_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Consumed>k__BackingField, offset: 0x60, size: 0x8, def value: None
 int64_t  _Consumed_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Buffers
