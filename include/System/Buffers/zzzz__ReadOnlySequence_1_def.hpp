#pragma once
// IWYU pragma private; include "System/Buffers/ReadOnlySequence_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ReadOnlySequence_1)
namespace GlobalNamespace {
template<typename T>
struct ReadOnlySequence_1_SequenceType;
}
namespace System::Buffers {
template<typename T>
class ReadOnlySequenceSegment_1;
}
namespace System::Buffers {
template<typename T>
class ReadOnlySequence_1___c;
}
namespace System::Buffers {
template<typename T,typename TArg>
class SpanAction_2;
}
namespace System {
struct ExceptionArgument;
}
namespace System {
class Object;
}
namespace System {
template<typename T>
struct ReadOnlyMemory_1;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
namespace System {
struct SequencePosition;
}
namespace System {
template<typename T>
struct Span_1;
}
// Forward declare root types
namespace System::Buffers {
template<typename T>
class ReadOnlySequence_1___c;
}
namespace System::Buffers {
template<typename T>
struct ReadOnlySequence_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::System::Buffers::ReadOnlySequence_1___c);
MARK_GEN_VAL_T(::System::Buffers::ReadOnlySequence_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::System::Buffers::ReadOnlySequence_1___c, "System.Buffers", "ReadOnlySequence`1/<>c");
DEFINE_IL2CPP_GEN_CLASS(::System::Buffers::ReadOnlySequence_1, "System.Buffers", "ReadOnlySequence`1");
// [DebuggerTypeProxy(typeof(System.Buffers.ReadOnlySequenceDebugView`1<T>))]
// [DebuggerDisplay("{ToString(),raw}")]
// [IsReadOnly]
// Dependencies 
namespace System::Buffers {
// cpp template
template<typename T>
// Is value type: true
// CS Name: System.Buffers.ReadOnlySequence`1<T>
struct CORDL_TYPE ReadOnlySequence_1 {
public:
// Declarations
using SequenceType = ::GlobalNamespace::ReadOnlySequence_1_SequenceType<T>;

using __c = ::System::Buffers::ReadOnlySequence_1___c<T>;

/// @brief Field Empty, offset 0xffffffff, size 0x18 
 __declspec(property(get=getStaticF_Empty, put=setStaticF_Empty)) ::System::Buffers::ReadOnlySequence_1<T>  Empty;

 __declspec(property(get=get_First)) ::System::ReadOnlyMemory_1<T>  First;

 __declspec(property(get=get_IsSingleSegment)) bool  IsSingleSegment;

 __declspec(property(get=get_Length)) int64_t  Length;

 __declspec(property(get=get_Start)) ::System::SequencePosition  Start;

/// @brief Method GetFirstBuffer, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::ReadOnlyMemory_1<T> GetFirstBuffer() ;

/// @brief Method GetFirstBufferSlow, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::ReadOnlyMemory_1<T> GetFirstBufferSlow(::System::Object*  startObject, bool  isMultiSegment) ;

/// @brief Method GetFirstSpan, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void GetFirstSpan(::by_ref<::System::ReadOnlySpan_1<T>>  first, ::by_ref<::System::SequencePosition>  next) ;

/// @brief Method GetFirstSpanSlow, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::System::ReadOnlySpan_1<T> GetFirstSpanSlow(::System::Object*  startObject, int32_t  startIndex, int32_t  endIndex, bool  hasMultipleSegments) ;

/// @brief Method GetIndex, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline int32_t GetIndex(int32_t  Integer) ;

/// @brief Method GetIndex, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline int32_t GetIndex(/* [IsReadOnly] */ ::by_ref<::System::SequencePosition>  position) ;

/// @brief Method GetLength, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int64_t GetLength() ;

/// @brief Method GetPosition, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::SequencePosition GetPosition(int64_t  offset, ::System::SequencePosition  origin) ;

/// @brief Method GetSequenceType, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::GlobalNamespace::ReadOnlySequence_1_SequenceType<T> GetSequenceType() ;

/// @brief Method Seek, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::SequencePosition Seek(/* [IsReadOnly] */ ::by_ref<::System::SequencePosition>  start, int64_t  offset) ;

/// @brief Method SeekMultiSegment, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::System::SequencePosition SeekMultiSegment(::System::Buffers::ReadOnlySequenceSegment_1<T>*  currentSegment, ::System::Object*  endObject, int32_t  endIndex, int64_t  offset, ::System::ExceptionArgument  argument) ;

/// @brief Method ToString, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method TryGet, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool TryGet(::by_ref<::System::SequencePosition>  position, ::by_ref<::System::ReadOnlyMemory_1<T>>  memory, bool  advance) ;

/// @brief Method TryGetBuffer, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool TryGetBuffer(/* [IsReadOnly] */ ::by_ref<::System::SequencePosition>  position, ::by_ref<::System::ReadOnlyMemory_1<T>>  memory, ::by_ref<::System::SequencePosition>  next) ;

/// @brief Method TryGetString, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool TryGetString(::by_ref<::StringW>  text, ::by_ref<int32_t>  start, ::by_ref<int32_t>  length) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<T>  array) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::ReadOnlyMemory_1<T>  memory) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Buffers::ReadOnlySequenceSegment_1<T>*  startSegment, int32_t  startIndex, ::System::Buffers::ReadOnlySequenceSegment_1<T>*  endSegment, int32_t  endIndex) ;

static inline ::System::Buffers::ReadOnlySequence_1<T> getStaticF_Empty() ;

/// @brief Method get_First, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::ReadOnlyMemory_1<T> get_First() ;

/// @brief Method get_IsSingleSegment, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool get_IsSingleSegment() ;

/// @brief Method get_Length, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int64_t get_Length() ;

/// @brief Method get_Start, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::SequencePosition get_Start() ;

static inline void setStaticF_Empty(::System::Buffers::ReadOnlySequence_1<T>  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr ReadOnlySequence_1() ;

// Ctor Parameters [CppParam { name: "_startObject", ty: "::System::Object*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_endObject", ty: "::System::Object*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_startInteger", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_endInteger", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ReadOnlySequence_1(::System::Object*  _startObject, ::System::Object*  _endObject, int32_t  _startInteger, int32_t  _endInteger) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6965};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field _startObject, offset: 0x0, size: 0x8, def value: None
 ::System::Object*  _startObject;

/// @brief Field _endObject, offset: 0x8, size: 0x8, def value: None
 ::System::Object*  _endObject;

/// @brief Field _startInteger, offset: 0x10, size: 0x4, def value: None
 int32_t  _startInteger;

/// @brief Field _endInteger, offset: 0x14, size: 0x4, def value: None
 int32_t  _endInteger;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Buffers
// [CompilerGenerated]
// Dependencies System.Object
namespace System::Buffers {
// cpp template
template<typename T>
// Is value type: false
// CS Name: System.Buffers.ReadOnlySequence`1/<>c<T>
class CORDL_TYPE ReadOnlySequence_1___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::System::Buffers::ReadOnlySequence_1___c<T>*  __9;

/// @brief Field <>9__33_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__33_0, put=setStaticF___9__33_0)) ::System::Buffers::SpanAction_2<char16_t,::System::Buffers::ReadOnlySequence_1<char16_t>>*  __9__33_0;

static inline ::System::Buffers::ReadOnlySequence_1___c<T>* New_ctor() ;

/// @brief Method <ToString>b__33_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ToString_b__33_0(::System::Span_1<char16_t>  span, ::System::Buffers::ReadOnlySequence_1<char16_t>  sequence) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Buffers::ReadOnlySequence_1___c<T>* getStaticF___9() ;

static inline ::System::Buffers::SpanAction_2<char16_t,::System::Buffers::ReadOnlySequence_1<char16_t>>* getStaticF___9__33_0() ;

static inline void setStaticF___9(::System::Buffers::ReadOnlySequence_1___c<T>*  value) ;

static inline void setStaticF___9__33_0(::System::Buffers::SpanAction_2<char16_t,::System::Buffers::ReadOnlySequence_1<char16_t>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ReadOnlySequence_1___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ReadOnlySequence_1___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ReadOnlySequence_1___c(ReadOnlySequence_1___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ReadOnlySequence_1___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ReadOnlySequence_1___c(ReadOnlySequence_1___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6964};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Buffers
