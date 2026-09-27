#pragma once
// IWYU pragma private; include "Fusion/NetworkObjectHeaderSnapshot.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__Tick_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkObjectHeaderSnapshot)
namespace Fusion {
class Allocator;
}
namespace Fusion {
class NetworkBehaviour;
}
namespace Fusion {
struct NetworkObjectHeaderPtr;
}
namespace Fusion {
struct NetworkObjectHeaderSnapshotRef;
}
namespace Fusion {
struct NetworkObjectHeader;
}
namespace Fusion {
class NetworkObjectMeta;
}
namespace Fusion {
class Simulation;
}
namespace System {
template<typename T>
struct Span_1;
}
// Forward declare root types
namespace Fusion {
class NetworkObjectHeaderSnapshot;
}
// Write type traits
MARK_REF_T(::Fusion::NetworkObjectHeaderSnapshot*);
DEFINE_IL2CPP_CLASS(::Fusion::NetworkObjectHeaderSnapshot*, "Fusion", "NetworkObjectHeaderSnapshot");
// Dependencies Fusion.Tick, System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.NetworkObjectHeaderSnapshot
class CORDL_TYPE NetworkObjectHeaderSnapshot : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Header)) ::Fusion::NetworkObjectHeader  Header;

 __declspec(property(get=get_HeaderPtr)) ::Fusion::NetworkObjectHeaderPtr  HeaderPtr;

/// @brief Field Next, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Next, put=__cordl_internal_set_Next)) ::Fusion::NetworkObjectHeaderSnapshot*  Next;

/// @brief Field Prev, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Prev, put=__cordl_internal_set_Prev)) ::Fusion::NetworkObjectHeaderSnapshot*  Prev;

 __declspec(property(get=get_Raw)) ::System::Span_1<int32_t>  Raw;

/// @brief Field Tick, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_Tick, put=__cordl_internal_set_Tick)) ::Fusion::Tick  Tick;

/// @brief Field WordCount, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_WordCount, put=__cordl_internal_set_WordCount)) int32_t  WordCount;

/// @brief Field <allocator>P, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__allocator_P, put=__cordl_internal_set__allocator_P)) ::Fusion::Allocator*  _allocator_P;

/// @brief Field _ptr, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__ptr, put=__cordl_internal_set__ptr)) int32_t*  _ptr;

/// @brief Method BuildCRC, addr 0x5fabe18, size 0xc4, virtual false, abstract: false, final false
inline uint64_t BuildCRC() ;

/// @brief Method Clone, addr 0x5fac4c4, size 0xc4, virtual false, abstract: false, final false
inline ::Fusion::NetworkObjectHeaderSnapshot* Clone(::Fusion::Simulation*  simulation) ;

/// @brief Method CopyFrom, addr 0x5fac630, size 0xa8, virtual false, abstract: false, final false
inline void CopyFrom(::Fusion::NetworkObjectMeta*  meta) ;

/// @brief Method CopyFrom, addr 0x5fac780, size 0xa4, virtual false, abstract: false, final false
inline void CopyFrom(::Fusion::NetworkObjectHeaderSnapshot*  target) ;

/// @brief Method CopyFrom, addr 0x5fac8c8, size 0xa4, virtual false, abstract: false, final false
inline void CopyFrom(::Fusion::NetworkObjectHeaderSnapshotRef  target) ;

/// @brief Method CopyTo, addr 0x5fac6d8, size 0xa8, virtual false, abstract: false, final false
inline void CopyTo(::Fusion::NetworkObjectMeta*  meta) ;

/// @brief Method CopyTo, addr 0x5fac588, size 0xa8, virtual false, abstract: false, final false
inline void CopyTo(::ArrayW<int32_t>  target) ;

/// @brief Method CopyTo, addr 0x5fac824, size 0xa4, virtual false, abstract: false, final false
inline void CopyTo(::Fusion::NetworkObjectHeaderSnapshot*  target) ;

/// @brief Method CopyTo, addr 0x5fac96c, size 0xa4, virtual false, abstract: false, final false
inline void CopyTo(::Fusion::NetworkObjectHeaderSnapshotRef  target) ;

/// @brief Method GetBehaviourPtr, addr 0x5fac2b8, size 0x1c, virtual false, abstract: false, final false
inline int32_t* GetBehaviourPtr(::Fusion::NetworkBehaviour*  behaviour) ;

/// @brief Method Init, addr 0x5fac358, size 0xc8, virtual false, abstract: false, final false
inline void Init(::Fusion::NetworkObjectMeta*  meta, bool  copyData) ;

/// @brief Method Init, addr 0x5fac420, size 0x54, virtual false, abstract: false, final false
inline void Init(int32_t  wordCount) ;

static inline ::Fusion::NetworkObjectHeaderSnapshot* New_ctor(::Fusion::Allocator*  allocator) ;

/// @brief Method Release, addr 0x5fac474, size 0x50, virtual false, abstract: false, final false
inline void Release() ;

constexpr ::Fusion::NetworkObjectHeaderSnapshot* const& __cordl_internal_get_Next() const;

constexpr ::Fusion::NetworkObjectHeaderSnapshot*& __cordl_internal_get_Next() ;

constexpr ::Fusion::NetworkObjectHeaderSnapshot* const& __cordl_internal_get_Prev() const;

constexpr ::Fusion::NetworkObjectHeaderSnapshot*& __cordl_internal_get_Prev() ;

constexpr ::Fusion::Tick const& __cordl_internal_get_Tick() const;

constexpr ::Fusion::Tick& __cordl_internal_get_Tick() ;

constexpr int32_t const& __cordl_internal_get_WordCount() const;

constexpr int32_t& __cordl_internal_get_WordCount() ;

constexpr ::Fusion::Allocator* const& __cordl_internal_get__allocator_P() const;

constexpr ::Fusion::Allocator*& __cordl_internal_get__allocator_P() ;

constexpr int32_t* const& __cordl_internal_get__ptr() const;

constexpr int32_t*& __cordl_internal_get__ptr() ;

constexpr void __cordl_internal_set_Next(::Fusion::NetworkObjectHeaderSnapshot*  value) ;

constexpr void __cordl_internal_set_Prev(::Fusion::NetworkObjectHeaderSnapshot*  value) ;

constexpr void __cordl_internal_set_Tick(::Fusion::Tick  value) ;

constexpr void __cordl_internal_set_WordCount(int32_t  value) ;

constexpr void __cordl_internal_set__allocator_P(::Fusion::Allocator*  value) ;

constexpr void __cordl_internal_set__ptr(int32_t*  value) ;

/// @brief Method .ctor, addr 0x5fac2d4, size 0x20, virtual false, abstract: false, final false
inline void _ctor(::Fusion::Allocator*  allocator) ;

/// @brief Method get_Header, addr 0x5fac2fc, size 0x8, virtual false, abstract: false, final false
inline ::by_ref<::Fusion::NetworkObjectHeader> get_Header() ;

/// @brief Method get_HeaderPtr, addr 0x5fac2f4, size 0x8, virtual false, abstract: false, final false
inline ::Fusion::NetworkObjectHeaderPtr get_HeaderPtr() ;

/// @brief Method get_Raw, addr 0x5fac304, size 0x54, virtual false, abstract: false, final false
inline ::System::Span_1<int32_t> get_Raw() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkObjectHeaderSnapshot() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkObjectHeaderSnapshot", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkObjectHeaderSnapshot(NetworkObjectHeaderSnapshot && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkObjectHeaderSnapshot", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkObjectHeaderSnapshot(NetworkObjectHeaderSnapshot const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19145};

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <allocator>P, offset: 0x10, size: 0x8, def value: None
 ::Fusion::Allocator*  ____allocator_P;

/// @brief Field Prev, offset: 0x18, size: 0x8, def value: None
 ::Fusion::NetworkObjectHeaderSnapshot*  ___Prev;

/// @brief Field Next, offset: 0x20, size: 0x8, def value: None
 ::Fusion::NetworkObjectHeaderSnapshot*  ___Next;

/// @brief Field Tick, offset: 0x28, size: 0x4, def value: None
 ::Fusion::Tick  ___Tick;

/// @brief Field WordCount, offset: 0x2c, size: 0x4, def value: None
 int32_t  ___WordCount;

/// @brief Field _ptr, offset: 0x30, size: 0x8, def value: None
 int32_t*  ____ptr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::NetworkObjectHeaderSnapshot, ____allocator_P) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkObjectHeaderSnapshot, ___Prev) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkObjectHeaderSnapshot, ___Next) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkObjectHeaderSnapshot, ___Tick) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkObjectHeaderSnapshot, ___WordCount) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkObjectHeaderSnapshot, ____ptr) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Fusion::NetworkObjectHeaderSnapshot) == 0x38, "Size mismatch!");

} // namespace end def Fusion
