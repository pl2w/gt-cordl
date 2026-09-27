#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Zip/Compression/InflaterDynHeader.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(InflaterDynHeader)
namespace ICSharpCode::SharpZipLib::Zip::Compression::Streams {
class StreamManipulator;
}
namespace ICSharpCode::SharpZipLib::Zip::Compression {
class InflaterDynHeader__CreateStateMachine_d__7;
}
namespace ICSharpCode::SharpZipLib::Zip::Compression {
class InflaterHuffmanTree;
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
class IEnumerable;
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
// Forward declare root types
namespace ICSharpCode::SharpZipLib::Zip::Compression {
class InflaterDynHeader;
}
namespace ICSharpCode::SharpZipLib::Zip::Compression {
class InflaterDynHeader__CreateStateMachine_d__7;
}
// Write type traits
MARK_REF_T(::ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader*);
MARK_REF_T(::ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader__CreateStateMachine_d__7*);
DEFINE_IL2CPP_CLASS(::ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader*, "ICSharpCode.SharpZipLib.Zip.Compression", "InflaterDynHeader");
DEFINE_IL2CPP_CLASS(::ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader__CreateStateMachine_d__7*, "ICSharpCode.SharpZipLib.Zip.Compression", "InflaterDynHeader/<CreateStateMachine>d__7");
// Dependencies System.Object
namespace ICSharpCode::SharpZipLib::Zip::Compression {
// Is value type: false
// CS Name: ICSharpCode.SharpZipLib.Zip.Compression.InflaterDynHeader
class CORDL_TYPE InflaterDynHeader : public ::System::Object {
public:
// Declarations
using _CreateStateMachine_d__7 = ::ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader__CreateStateMachine_d__7;

 __declspec(property(get=get_DistanceTree)) ::ICSharpCode::SharpZipLib::Zip::Compression::InflaterHuffmanTree*  DistanceTree;

 __declspec(property(get=get_LiteralLengthTree)) ::ICSharpCode::SharpZipLib::Zip::Compression::InflaterHuffmanTree*  LiteralLengthTree;

/// @brief Field MetaCodeLengthIndex, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_MetaCodeLengthIndex, put=setStaticF_MetaCodeLengthIndex)) ::ArrayW<int32_t>  MetaCodeLengthIndex;

/// @brief Field codeLengths, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_codeLengths, put=__cordl_internal_set_codeLengths)) ::ArrayW<uint8_t>  codeLengths;

/// @brief Field distTree, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_distTree, put=__cordl_internal_set_distTree)) ::ICSharpCode::SharpZipLib::Zip::Compression::InflaterHuffmanTree*  distTree;

/// @brief Field distanceCodeCount, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_distanceCodeCount, put=__cordl_internal_set_distanceCodeCount)) int32_t  distanceCodeCount;

/// @brief Field input, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_input, put=__cordl_internal_set_input)) ::ICSharpCode::SharpZipLib::Zip::Compression::Streams::StreamManipulator*  input;

/// @brief Field litLenCodeCount, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_litLenCodeCount, put=__cordl_internal_set_litLenCodeCount)) int32_t  litLenCodeCount;

/// @brief Field litLenTree, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_litLenTree, put=__cordl_internal_set_litLenTree)) ::ICSharpCode::SharpZipLib::Zip::Compression::InflaterHuffmanTree*  litLenTree;

/// @brief Field metaCodeCount, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_metaCodeCount, put=__cordl_internal_set_metaCodeCount)) int32_t  metaCodeCount;

/// @brief Field state, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_state, put=__cordl_internal_set_state)) ::System::Collections::Generic::IEnumerator_1<bool>*  state;

/// @brief Field stateMachine, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_stateMachine, put=__cordl_internal_set_stateMachine)) ::System::Collections::Generic::IEnumerable_1<bool>*  stateMachine;

/// @brief Method AttemptRead, addr 0x9fd77e8, size 0x128, virtual false, abstract: false, final false
inline bool AttemptRead() ;

/// [IteratorStateMachine(typeof(ICSharpCode.SharpZipLib.Zip.Compression.InflaterDynHeader::<CreateStateMachine>d__7))]
/// @brief Method CreateStateMachine, addr 0x9fd8450, size 0x80, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<bool>* CreateStateMachine() ;

static inline ::ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader* New_ctor(::ICSharpCode::SharpZipLib::Zip::Compression::Streams::StreamManipulator*  input) ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_codeLengths() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_codeLengths() ;

constexpr ::ICSharpCode::SharpZipLib::Zip::Compression::InflaterHuffmanTree* const& __cordl_internal_get_distTree() const;

constexpr ::ICSharpCode::SharpZipLib::Zip::Compression::InflaterHuffmanTree*& __cordl_internal_get_distTree() ;

constexpr int32_t const& __cordl_internal_get_distanceCodeCount() const;

constexpr int32_t& __cordl_internal_get_distanceCodeCount() ;

constexpr ::ICSharpCode::SharpZipLib::Zip::Compression::Streams::StreamManipulator* const& __cordl_internal_get_input() const;

constexpr ::ICSharpCode::SharpZipLib::Zip::Compression::Streams::StreamManipulator*& __cordl_internal_get_input() ;

constexpr int32_t const& __cordl_internal_get_litLenCodeCount() const;

constexpr int32_t& __cordl_internal_get_litLenCodeCount() ;

constexpr ::ICSharpCode::SharpZipLib::Zip::Compression::InflaterHuffmanTree* const& __cordl_internal_get_litLenTree() const;

constexpr ::ICSharpCode::SharpZipLib::Zip::Compression::InflaterHuffmanTree*& __cordl_internal_get_litLenTree() ;

constexpr int32_t const& __cordl_internal_get_metaCodeCount() const;

constexpr int32_t& __cordl_internal_get_metaCodeCount() ;

constexpr ::System::Collections::Generic::IEnumerator_1<bool>* const& __cordl_internal_get_state() const;

constexpr ::System::Collections::Generic::IEnumerator_1<bool>*& __cordl_internal_get_state() ;

constexpr ::System::Collections::Generic::IEnumerable_1<bool>* const& __cordl_internal_get_stateMachine() const;

constexpr ::System::Collections::Generic::IEnumerable_1<bool>*& __cordl_internal_get_stateMachine() ;

constexpr void __cordl_internal_set_codeLengths(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set_distTree(::ICSharpCode::SharpZipLib::Zip::Compression::InflaterHuffmanTree*  value) ;

constexpr void __cordl_internal_set_distanceCodeCount(int32_t  value) ;

constexpr void __cordl_internal_set_input(::ICSharpCode::SharpZipLib::Zip::Compression::Streams::StreamManipulator*  value) ;

constexpr void __cordl_internal_set_litLenCodeCount(int32_t  value) ;

constexpr void __cordl_internal_set_litLenTree(::ICSharpCode::SharpZipLib::Zip::Compression::InflaterHuffmanTree*  value) ;

constexpr void __cordl_internal_set_metaCodeCount(int32_t  value) ;

constexpr void __cordl_internal_set_state(::System::Collections::Generic::IEnumerator_1<bool>*  value) ;

constexpr void __cordl_internal_set_stateMachine(::System::Collections::Generic::IEnumerable_1<bool>*  value) ;

/// @brief Method .ctor, addr 0x9fd75b8, size 0x124, virtual false, abstract: false, final false
inline void _ctor(::ICSharpCode::SharpZipLib::Zip::Compression::Streams::StreamManipulator*  input) ;

static inline ::ArrayW<int32_t> getStaticF_MetaCodeLengthIndex() ;

/// @brief Method get_DistanceTree, addr 0x9fd7968, size 0x58, virtual false, abstract: false, final false
inline ::ICSharpCode::SharpZipLib::Zip::Compression::InflaterHuffmanTree* get_DistanceTree() ;

/// @brief Method get_LiteralLengthTree, addr 0x9fd7910, size 0x58, virtual false, abstract: false, final false
inline ::ICSharpCode::SharpZipLib::Zip::Compression::InflaterHuffmanTree* get_LiteralLengthTree() ;

static inline void setStaticF_MetaCodeLengthIndex(::ArrayW<int32_t>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InflaterDynHeader() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InflaterDynHeader", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InflaterDynHeader(InflaterDynHeader && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InflaterDynHeader", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InflaterDynHeader(InflaterDynHeader const& ) = delete;

/// @brief Field CODELEN_MAX offset 0xffffffff size 0x4
static constexpr int32_t  CODELEN_MAX{static_cast<int32_t>(0x13c)};

/// @brief Field DIST_MAX offset 0xffffffff size 0x4
static constexpr int32_t  DIST_MAX{static_cast<int32_t>(0x1e)};

/// @brief Field LITLEN_MAX offset 0xffffffff size 0x4
static constexpr int32_t  LITLEN_MAX{static_cast<int32_t>(0x11e)};

/// @brief Field META_MAX offset 0xffffffff size 0x4
static constexpr int32_t  META_MAX{static_cast<int32_t>(0x13)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17380};

/// @brief Field input, offset: 0x10, size: 0x8, def value: None
 ::ICSharpCode::SharpZipLib::Zip::Compression::Streams::StreamManipulator*  ___input;

/// @brief Field state, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::IEnumerator_1<bool>*  ___state;

/// @brief Field stateMachine, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::IEnumerable_1<bool>*  ___stateMachine;

/// @brief Field codeLengths, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___codeLengths;

/// @brief Field litLenTree, offset: 0x30, size: 0x8, def value: None
 ::ICSharpCode::SharpZipLib::Zip::Compression::InflaterHuffmanTree*  ___litLenTree;

/// @brief Field distTree, offset: 0x38, size: 0x8, def value: None
 ::ICSharpCode::SharpZipLib::Zip::Compression::InflaterHuffmanTree*  ___distTree;

/// @brief Field litLenCodeCount, offset: 0x40, size: 0x4, def value: None
 int32_t  ___litLenCodeCount;

/// @brief Field distanceCodeCount, offset: 0x44, size: 0x4, def value: None
 int32_t  ___distanceCodeCount;

/// @brief Field metaCodeCount, offset: 0x48, size: 0x4, def value: None
 int32_t  ___metaCodeCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader, ___input) == 0x10, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader, ___state) == 0x18, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader, ___stateMachine) == 0x20, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader, ___codeLengths) == 0x28, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader, ___litLenTree) == 0x30, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader, ___distTree) == 0x38, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader, ___litLenCodeCount) == 0x40, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader, ___distanceCodeCount) == 0x44, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader, ___metaCodeCount) == 0x48, "Offset mismatch!");

static_assert(sizeof(::ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader) == 0x50, "Size mismatch!");

} // namespace end def ICSharpCode::SharpZipLib::Zip::Compression
// [CompilerGenerated]
// Dependencies System.Object
namespace ICSharpCode::SharpZipLib::Zip::Compression {
// Is value type: false
// CS Name: ICSharpCode.SharpZipLib.Zip.Compression.InflaterDynHeader/<CreateStateMachine>d__7
class CORDL_TYPE InflaterDynHeader__CreateStateMachine_d__7 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Boolean__get_Current)) bool  System_Collections_Generic_IEnumerator_System_Boolean__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x14, size 0x1 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) bool  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader*  __4__this;

/// @brief Field <>l__initialThreadId, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get___l__initialThreadId, put=__cordl_internal_set___l__initialThreadId)) int32_t  __l__initialThreadId;

/// @brief Field <codeLength>5__6, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get__codeLength_5__6, put=__cordl_internal_set__codeLength_5__6)) uint8_t  _codeLength_5__6;

/// @brief Field <dataCodeCount>5__2, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__dataCodeCount_5__2, put=__cordl_internal_set__dataCodeCount_5__2)) int32_t  _dataCodeCount_5__2;

/// @brief Field <i>5__5, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get__i_5__5, put=__cordl_internal_set__i_5__5)) int32_t  _i_5__5;

/// @brief Field <index>5__4, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__index_5__4, put=__cordl_internal_set__index_5__4)) int32_t  _index_5__4;

/// @brief Field <metaCodeTree>5__3, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__metaCodeTree_5__3, put=__cordl_internal_set__metaCodeTree_5__3)) ::ICSharpCode::SharpZipLib::Zip::Compression::InflaterHuffmanTree*  _metaCodeTree_5__3;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<bool>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<bool>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<bool>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<bool>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x9fd85a8, size 0x70c, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader__CreateStateMachine_d__7* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerable<System.Boolean>.GetEnumerator, addr 0x9fd8e0c, size 0xa4, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<bool>* System_Collections_Generic_IEnumerable_System_Boolean__GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Boolean>.get_Current, addr 0x9fd8da4, size 0x8, virtual true, abstract: false, final true
inline bool System_Collections_Generic_IEnumerator_System_Boolean__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x9fd8eb0, size 0x4, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x9fd8dac, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x9fd8de4, size 0x28, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x9fd85a4, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr bool const& __cordl_internal_get___2__current() const;

constexpr bool& __cordl_internal_get___2__current() ;

constexpr ::ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader* const& __cordl_internal_get___4__this() const;

constexpr ::ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader*& __cordl_internal_get___4__this() ;

constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

constexpr int32_t& __cordl_internal_get___l__initialThreadId() ;

constexpr uint8_t const& __cordl_internal_get__codeLength_5__6() const;

constexpr uint8_t& __cordl_internal_get__codeLength_5__6() ;

constexpr int32_t const& __cordl_internal_get__dataCodeCount_5__2() const;

constexpr int32_t& __cordl_internal_get__dataCodeCount_5__2() ;

constexpr int32_t const& __cordl_internal_get__i_5__5() const;

constexpr int32_t& __cordl_internal_get__i_5__5() ;

constexpr int32_t const& __cordl_internal_get__index_5__4() const;

constexpr int32_t& __cordl_internal_get__index_5__4() ;

constexpr ::ICSharpCode::SharpZipLib::Zip::Compression::InflaterHuffmanTree* const& __cordl_internal_get__metaCodeTree_5__3() const;

constexpr ::ICSharpCode::SharpZipLib::Zip::Compression::InflaterHuffmanTree*& __cordl_internal_get__metaCodeTree_5__3() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(bool  value) ;

constexpr void __cordl_internal_set___4__this(::ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader*  value) ;

constexpr void __cordl_internal_set___l__initialThreadId(int32_t  value) ;

constexpr void __cordl_internal_set__codeLength_5__6(uint8_t  value) ;

constexpr void __cordl_internal_set__dataCodeCount_5__2(int32_t  value) ;

constexpr void __cordl_internal_set__i_5__5(int32_t  value) ;

constexpr void __cordl_internal_set__index_5__4(int32_t  value) ;

constexpr void __cordl_internal_set__metaCodeTree_5__3(::ICSharpCode::SharpZipLib::Zip::Compression::InflaterHuffmanTree*  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x9fd84d0, size 0x34, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<bool>"
constexpr ::System::Collections::Generic::IEnumerable_1<bool>* i___System__Collections__Generic__IEnumerable_1_bool_() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<bool>"
constexpr ::System::Collections::Generic::IEnumerator_1<bool>* i___System__Collections__Generic__IEnumerator_1_bool_() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InflaterDynHeader__CreateStateMachine_d__7() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InflaterDynHeader__CreateStateMachine_d__7", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InflaterDynHeader__CreateStateMachine_d__7(InflaterDynHeader__CreateStateMachine_d__7 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InflaterDynHeader__CreateStateMachine_d__7", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InflaterDynHeader__CreateStateMachine_d__7(InflaterDynHeader__CreateStateMachine_d__7 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17379};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x14, size: 0x1, def value: None
 bool  _____2__current;

/// @brief Field <>l__initialThreadId, offset: 0x18, size: 0x4, def value: None
 int32_t  _____l__initialThreadId;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader*  _____4__this;

/// @brief Field <dataCodeCount>5__2, offset: 0x28, size: 0x4, def value: None
 int32_t  ____dataCodeCount_5__2;

/// @brief Field <metaCodeTree>5__3, offset: 0x30, size: 0x8, def value: None
 ::ICSharpCode::SharpZipLib::Zip::Compression::InflaterHuffmanTree*  ____metaCodeTree_5__3;

/// @brief Field <index>5__4, offset: 0x38, size: 0x4, def value: None
 int32_t  ____index_5__4;

/// @brief Field <i>5__5, offset: 0x3c, size: 0x4, def value: None
 int32_t  ____i_5__5;

/// @brief Field <codeLength>5__6, offset: 0x40, size: 0x1, def value: None
 uint8_t  ____codeLength_5__6;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader__CreateStateMachine_d__7, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader__CreateStateMachine_d__7, _____2__current) == 0x14, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader__CreateStateMachine_d__7, _____l__initialThreadId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader__CreateStateMachine_d__7, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader__CreateStateMachine_d__7, ____dataCodeCount_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader__CreateStateMachine_d__7, ____metaCodeTree_5__3) == 0x30, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader__CreateStateMachine_d__7, ____index_5__4) == 0x38, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader__CreateStateMachine_d__7, ____i_5__5) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader__CreateStateMachine_d__7, ____codeLength_5__6) == 0x40, "Offset mismatch!");

static_assert(sizeof(::ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader__CreateStateMachine_d__7) == 0x48, "Size mismatch!");

} // namespace end def ICSharpCode::SharpZipLib::Zip::Compression
