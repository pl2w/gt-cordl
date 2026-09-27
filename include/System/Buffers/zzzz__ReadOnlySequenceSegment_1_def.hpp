#pragma once
// IWYU pragma private; include "System/Buffers/ReadOnlySequenceSegment_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ReadOnlyMemory_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ReadOnlySequenceSegment_1)
namespace System {
template<typename T>
struct ReadOnlyMemory_1;
}
// Forward declare root types
namespace System::Buffers {
template<typename T>
class ReadOnlySequenceSegment_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::System::Buffers::ReadOnlySequenceSegment_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::System::Buffers::ReadOnlySequenceSegment_1, "System.Buffers", "ReadOnlySequenceSegment`1");
// Dependencies System.Object, System.ReadOnlyMemory`1<T>
namespace System::Buffers {
// cpp template
template<typename T>
// Is value type: false
// CS Name: System.Buffers.ReadOnlySequenceSegment`1<T>
class CORDL_TYPE ReadOnlySequenceSegment_1 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Memory, put=set_Memory)) ::System::ReadOnlyMemory_1<T>  Memory;

 __declspec(property(get=get_Next, put=set_Next)) ::System::Buffers::ReadOnlySequenceSegment_1<T>*  Next;

 __declspec(property(get=get_RunningIndex, put=set_RunningIndex)) int64_t  RunningIndex;

/// @brief Field <Memory>k__BackingField, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get__Memory_k__BackingField, put=__cordl_internal_set__Memory_k__BackingField)) ::System::ReadOnlyMemory_1<T>  _Memory_k__BackingField;

/// @brief Field <Next>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__Next_k__BackingField, put=__cordl_internal_set__Next_k__BackingField)) ::System::Buffers::ReadOnlySequenceSegment_1<T>*  _Next_k__BackingField;

/// @brief Field <RunningIndex>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__RunningIndex_k__BackingField, put=__cordl_internal_set__RunningIndex_k__BackingField)) int64_t  _RunningIndex_k__BackingField;

static inline ::System::Buffers::ReadOnlySequenceSegment_1<T>* New_ctor() ;

constexpr ::System::ReadOnlyMemory_1<T> const& __cordl_internal_get__Memory_k__BackingField() const;

constexpr ::System::ReadOnlyMemory_1<T>& __cordl_internal_get__Memory_k__BackingField() ;

constexpr ::System::Buffers::ReadOnlySequenceSegment_1<T>* const& __cordl_internal_get__Next_k__BackingField() const;

constexpr ::System::Buffers::ReadOnlySequenceSegment_1<T>*& __cordl_internal_get__Next_k__BackingField() ;

constexpr int64_t const& __cordl_internal_get__RunningIndex_k__BackingField() const;

constexpr int64_t& __cordl_internal_get__RunningIndex_k__BackingField() ;

constexpr void __cordl_internal_set__Memory_k__BackingField(::System::ReadOnlyMemory_1<T>  value) ;

constexpr void __cordl_internal_set__Next_k__BackingField(::System::Buffers::ReadOnlySequenceSegment_1<T>*  value) ;

constexpr void __cordl_internal_set__RunningIndex_k__BackingField(int64_t  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_Memory, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::ReadOnlyMemory_1<T> get_Memory() ;

/// [CompilerGenerated]
/// @brief Method get_Next, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::Buffers::ReadOnlySequenceSegment_1<T>* get_Next() ;

/// [CompilerGenerated]
/// @brief Method get_RunningIndex, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int64_t get_RunningIndex() ;

/// [CompilerGenerated]
/// @brief Method set_Memory, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_Memory(::System::ReadOnlyMemory_1<T>  value) ;

/// [CompilerGenerated]
/// @brief Method set_Next, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_Next(::System::Buffers::ReadOnlySequenceSegment_1<T>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_RunningIndex, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_RunningIndex(int64_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ReadOnlySequenceSegment_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ReadOnlySequenceSegment_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ReadOnlySequenceSegment_1(ReadOnlySequenceSegment_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ReadOnlySequenceSegment_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ReadOnlySequenceSegment_1(ReadOnlySequenceSegment_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6968};

/// [CompilerGenerated]
/// @brief Field <Memory>k__BackingField, offset: 0x10, size: 0x10, def value: None
 ::System::ReadOnlyMemory_1<T>  ____Memory_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Next>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::System::Buffers::ReadOnlySequenceSegment_1<T>*  ____Next_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <RunningIndex>k__BackingField, offset: 0x28, size: 0x8, def value: None
 int64_t  ____RunningIndex_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Buffers
