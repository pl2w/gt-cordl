#pragma once
// IWYU pragma private; include "System/Net/SplitWritesState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/zzzz__BufferOffsetSize_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SplitWritesState)
namespace System::Net {
class BufferOffsetSize;
}
// Forward declare root types
namespace System::Net {
class SplitWritesState;
}
// Write type traits
MARK_REF_T(::System::Net::SplitWritesState*);
DEFINE_IL2CPP_CLASS(::System::Net::SplitWritesState*, "System.Net", "SplitWritesState");
// Dependencies System.Net.BufferOffsetSize, System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.SplitWritesState
class CORDL_TYPE SplitWritesState : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_IsDone)) bool  IsDone;

/// @brief Field _Index, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__Index, put=__cordl_internal_set__Index)) int32_t  _Index;

/// @brief Field _LastBufferConsumed, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get__LastBufferConsumed, put=__cordl_internal_set__LastBufferConsumed)) int32_t  _LastBufferConsumed;

/// @brief Field _RealBuffers, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__RealBuffers, put=__cordl_internal_set__RealBuffers)) ::ArrayW<::System::Net::BufferOffsetSize*>  _RealBuffers;

/// @brief Field _UserBuffers, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__UserBuffers, put=__cordl_internal_set__UserBuffers)) ::ArrayW<::System::Net::BufferOffsetSize*>  _UserBuffers;

/// @brief Method GetNextBuffers, addr 0xac5bb90, size 0x328, virtual false, abstract: false, final false
inline ::ArrayW<::System::Net::BufferOffsetSize*> GetNextBuffers() ;

static inline ::System::Net::SplitWritesState* New_ctor(::ArrayW<::System::Net::BufferOffsetSize*>  buffers) ;

constexpr int32_t const& __cordl_internal_get__Index() const;

constexpr int32_t& __cordl_internal_get__Index() ;

constexpr int32_t const& __cordl_internal_get__LastBufferConsumed() const;

constexpr int32_t& __cordl_internal_get__LastBufferConsumed() ;

constexpr ::ArrayW<::System::Net::BufferOffsetSize*> const& __cordl_internal_get__RealBuffers() const;

constexpr ::ArrayW<::System::Net::BufferOffsetSize*>& __cordl_internal_get__RealBuffers() ;

constexpr ::ArrayW<::System::Net::BufferOffsetSize*> const& __cordl_internal_get__UserBuffers() const;

constexpr ::ArrayW<::System::Net::BufferOffsetSize*>& __cordl_internal_get__UserBuffers() ;

constexpr void __cordl_internal_set__Index(int32_t  value) ;

constexpr void __cordl_internal_set__LastBufferConsumed(int32_t  value) ;

constexpr void __cordl_internal_set__RealBuffers(::ArrayW<::System::Net::BufferOffsetSize*>  value) ;

constexpr void __cordl_internal_set__UserBuffers(::ArrayW<::System::Net::BufferOffsetSize*>  value) ;

/// @brief Method .ctor, addr 0xac5bacc, size 0x44, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<::System::Net::BufferOffsetSize*>  buffers) ;

/// @brief Method get_IsDone, addr 0xac5bb10, size 0x80, virtual false, abstract: false, final false
inline bool get_IsDone() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SplitWritesState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SplitWritesState", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SplitWritesState(SplitWritesState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SplitWritesState", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SplitWritesState(SplitWritesState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10542};

/// @brief Field c_SplitEncryptedBuffersSize offset 0xffffffff size 0x4
static constexpr int32_t  c_SplitEncryptedBuffersSize{static_cast<int32_t>(0x10000)};

/// @brief Field _UserBuffers, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::System::Net::BufferOffsetSize*>  ____UserBuffers;

/// @brief Field _Index, offset: 0x18, size: 0x4, def value: None
 int32_t  ____Index;

/// @brief Field _LastBufferConsumed, offset: 0x1c, size: 0x4, def value: None
 int32_t  ____LastBufferConsumed;

/// @brief Field _RealBuffers, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::System::Net::BufferOffsetSize*>  ____RealBuffers;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::SplitWritesState, ____UserBuffers) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::SplitWritesState, ____Index) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::SplitWritesState, ____LastBufferConsumed) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::System::Net::SplitWritesState, ____RealBuffers) == 0x20, "Offset mismatch!");

static_assert(sizeof(::System::Net::SplitWritesState) == 0x28, "Size mismatch!");

} // namespace end def System::Net
