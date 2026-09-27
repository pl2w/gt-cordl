#pragma once
// IWYU pragma private; include "Fusion/NetworkObjectHeaderSnapshotRef.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkObjectHeaderSnapshotRef)
namespace Fusion {
class NetworkBehaviour;
}
namespace Fusion {
class NetworkObjectHeaderSnapshot;
}
namespace Fusion {
struct NetworkObjectHeader;
}
namespace Fusion {
class NetworkObjectMeta;
}
namespace Fusion {
struct Tick;
}
namespace System {
template<typename T>
struct Span_1;
}
// Forward declare root types
namespace Fusion {
struct NetworkObjectHeaderSnapshotRef;
}
// Write type traits
MARK_VAL_T(::Fusion::NetworkObjectHeaderSnapshotRef);
DEFINE_IL2CPP_CLASS(::Fusion::NetworkObjectHeaderSnapshotRef, "Fusion", "NetworkObjectHeaderSnapshotRef");
// [IsByRefLike]
// [Obsolete("Types with embedded references are not supported in this version of your compiler.", true)]
// [IsReadOnly]
// Dependencies 
namespace Fusion {
// Is value type: true
// CS Name: Fusion.NetworkObjectHeaderSnapshotRef
struct CORDL_TYPE NetworkObjectHeaderSnapshotRef {
public:
// Declarations
 __declspec(property(get=get_Header)) ::Fusion::NetworkObjectHeader  Header;

 __declspec(property(get=get_Raw)) ::System::Span_1<int32_t>  Raw;

 __declspec(property(get=get_SnapshotCRC)) uint64_t  SnapshotCRC;

 __declspec(property(get=get_Tick)) ::Fusion::Tick  Tick;

/// @brief Method CopyFrom, addr 0x5fabfe4, size 0xa8, virtual false, abstract: false, final false
inline void CopyFrom(::Fusion::NetworkObjectHeaderSnapshotRef  target) ;

/// @brief Method CopyFrom, addr 0x5fabf38, size 0xac, virtual false, abstract: false, final false
inline void CopyFrom(::Fusion::NetworkObjectMeta*  target) ;

/// @brief Method CopyTo, addr 0x5fac138, size 0xb0, virtual false, abstract: false, final false
inline void CopyTo(::ArrayW<int32_t>  target) ;

/// @brief Method CopyTo, addr 0x5fac1e8, size 0xa8, virtual false, abstract: false, final false
inline void CopyTo(::Fusion::NetworkObjectHeaderSnapshotRef  target) ;

/// @brief Method CopyTo, addr 0x5fac08c, size 0xac, virtual false, abstract: false, final false
inline void CopyTo(::Fusion::NetworkObjectMeta*  target) ;

/// @brief Method GetBehaviourPtr, addr 0x5fac290, size 0x28, virtual false, abstract: false, final false
inline int32_t* GetBehaviourPtr(::Fusion::NetworkBehaviour*  behaviour) ;

/// @brief Method .ctor, addr 0x5fabdc8, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::Fusion::NetworkObjectHeaderSnapshot*  snapshot) ;

/// @brief Method get_Header, addr 0x5fabdec, size 0x18, virtual false, abstract: false, final false
inline ::by_ref<::Fusion::NetworkObjectHeader> get_Header() ;

/// @brief Method get_Raw, addr 0x5fabedc, size 0x5c, virtual false, abstract: false, final false
inline ::System::Span_1<int32_t> get_Raw() ;

/// @brief Method get_SnapshotCRC, addr 0x5fabe04, size 0x14, virtual false, abstract: false, final false
inline uint64_t get_SnapshotCRC() ;

/// @brief Method get_Tick, addr 0x5fabdd4, size 0x18, virtual false, abstract: false, final false
inline ::Fusion::Tick get_Tick() ;

/// @brief Method op_Implicit, addr 0x5fabdd0, size 0x4, virtual false, abstract: false, final false
static inline ::Fusion::NetworkObjectHeaderSnapshotRef op_Implicit___Fusion__NetworkObjectHeaderSnapshotRef(::Fusion::NetworkObjectHeaderSnapshot*  snapshot) ;

// Ctor Parameters []
// @brief default ctor
constexpr NetworkObjectHeaderSnapshotRef() ;

// Ctor Parameters [CppParam { name: "_snapshot_P", ty: "::Fusion::NetworkObjectHeaderSnapshot*", modifiers: "", def_value: None, comment: None }]
constexpr NetworkObjectHeaderSnapshotRef(::Fusion::NetworkObjectHeaderSnapshot*  _snapshot_P) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19144};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <snapshot>P, offset: 0x0, size: 0x8, def value: None
 ::Fusion::NetworkObjectHeaderSnapshot*  _snapshot_P;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::NetworkObjectHeaderSnapshotRef, _snapshot_P) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Fusion::NetworkObjectHeaderSnapshotRef) == 0x8, "Size mismatch!");

} // namespace end def Fusion
