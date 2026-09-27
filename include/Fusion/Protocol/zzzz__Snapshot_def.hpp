#pragma once
// IWYU pragma private; include "Fusion/Protocol/Snapshot.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/Protocol/zzzz__Message_def.hpp"
#include "Fusion/Protocol/zzzz__SnapshotType_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Snapshot)
namespace Fusion::Protocol {
class BitStream;
}
namespace Fusion::Protocol {
class Message;
}
namespace Fusion::Protocol {
struct ProtocolMessageVersion;
}
namespace Fusion::Protocol {
struct SnapshotType;
}
namespace System {
class Version;
}
// Forward declare root types
namespace Fusion::Protocol {
class Snapshot;
}
// Write type traits
MARK_REF_T(::Fusion::Protocol::Snapshot*);
DEFINE_IL2CPP_CLASS(::Fusion::Protocol::Snapshot*, "Fusion.Protocol", "Snapshot");
// Dependencies Fusion.Protocol.Message, Fusion.Protocol.SnapshotType
namespace Fusion::Protocol {
// Is value type: false
// CS Name: Fusion.Protocol.Snapshot
class CORDL_TYPE Snapshot : public ::Fusion::Protocol::Message {
public:
// Declarations
 __declspec(property(get=get_CRC, put=set_CRC)) uint64_t  CRC;

 __declspec(property(get=get_Data, put=set_Data)) ::ArrayW<uint8_t>  Data;

 __declspec(property(get=get_IsValid)) bool  IsValid;

 __declspec(property(get=get_NetworkID, put=set_NetworkID)) uint32_t  NetworkID;

 __declspec(property(get=get_SnapshotType, put=set_SnapshotType)) ::Fusion::Protocol::SnapshotType  SnapshotType;

 __declspec(property(get=get_Tick, put=set_Tick)) int32_t  Tick;

 __declspec(property(get=get_TotalSize, put=set_TotalSize)) int32_t  TotalSize;

/// @brief Field <CRC>k__BackingField, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__CRC_k__BackingField, put=__cordl_internal_set__CRC_k__BackingField)) uint64_t  _CRC_k__BackingField;

/// @brief Field <Data>k__BackingField, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__Data_k__BackingField, put=__cordl_internal_set__Data_k__BackingField)) ::ArrayW<uint8_t>  _Data_k__BackingField;

/// @brief Field <NetworkID>k__BackingField, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__NetworkID_k__BackingField, put=__cordl_internal_set__NetworkID_k__BackingField)) uint32_t  _NetworkID_k__BackingField;

/// @brief Field <SnapshotType>k__BackingField, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get__SnapshotType_k__BackingField, put=__cordl_internal_set__SnapshotType_k__BackingField)) ::Fusion::Protocol::SnapshotType  _SnapshotType_k__BackingField;

/// @brief Field <Tick>k__BackingField, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__Tick_k__BackingField, put=__cordl_internal_set__Tick_k__BackingField)) int32_t  _Tick_k__BackingField;

/// @brief Field <TotalSize>k__BackingField, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__TotalSize_k__BackingField, put=__cordl_internal_set__TotalSize_k__BackingField)) int32_t  _TotalSize_k__BackingField;

/// @brief Method Clone, addr 0x6025450, size 0x58, virtual true, abstract: false, final false
inline ::Fusion::Protocol::Message* Clone() ;

/// @brief Method ComputeCRC, addr 0x6025224, size 0x84, virtual false, abstract: false, final false
static inline uint64_t ComputeCRC(::ArrayW<uint8_t>  data, int32_t  length) ;

static inline ::Fusion::Protocol::Snapshot* New_ctor() ;

static inline ::Fusion::Protocol::Snapshot* New_ctor(int32_t  tick, uint32_t  networkID, ::Fusion::Protocol::SnapshotType  snapshotType, int32_t  snapshotSize, ::ArrayW<uint8_t>  data, ::Fusion::Protocol::ProtocolMessageVersion  protocolVersion, ::System::Version*  serializationVersion) ;

/// @brief Method SerializeProtected, addr 0x6025348, size 0x108, virtual true, abstract: false, final false
inline void SerializeProtected(::Fusion::Protocol::BitStream*  stream) ;

/// @brief Method ToString, addr 0x60254a8, size 0x480, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr uint64_t const& __cordl_internal_get__CRC_k__BackingField() const;

constexpr uint64_t& __cordl_internal_get__CRC_k__BackingField() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get__Data_k__BackingField() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get__Data_k__BackingField() ;

constexpr uint32_t const& __cordl_internal_get__NetworkID_k__BackingField() const;

constexpr uint32_t& __cordl_internal_get__NetworkID_k__BackingField() ;

constexpr ::Fusion::Protocol::SnapshotType const& __cordl_internal_get__SnapshotType_k__BackingField() const;

constexpr ::Fusion::Protocol::SnapshotType& __cordl_internal_get__SnapshotType_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__Tick_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__Tick_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__TotalSize_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__TotalSize_k__BackingField() ;

constexpr void __cordl_internal_set__CRC_k__BackingField(uint64_t  value) ;

constexpr void __cordl_internal_set__Data_k__BackingField(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set__NetworkID_k__BackingField(uint32_t  value) ;

constexpr void __cordl_internal_set__SnapshotType_k__BackingField(::Fusion::Protocol::SnapshotType  value) ;

constexpr void __cordl_internal_set__Tick_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__TotalSize_k__BackingField(int32_t  value) ;

/// @brief Method .ctor, addr 0x60252c8, size 0xc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x60252d4, size 0x74, virtual false, abstract: false, final false
inline void _ctor(int32_t  tick, uint32_t  networkID, ::Fusion::Protocol::SnapshotType  snapshotType, int32_t  snapshotSize, ::ArrayW<uint8_t>  data, ::Fusion::Protocol::ProtocolMessageVersion  protocolVersion, ::System::Version*  serializationVersion) ;

/// [CompilerGenerated]
/// @brief Method get_CRC, addr 0x60252b8, size 0x8, virtual false, abstract: false, final false
inline uint64_t get_CRC() ;

/// [CompilerGenerated]
/// @brief Method get_Data, addr 0x60252a8, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> get_Data() ;

/// @brief Method get_IsValid, addr 0x60251e8, size 0x3c, virtual true, abstract: false, final false
inline bool get_IsValid() ;

/// [CompilerGenerated]
/// @brief Method get_NetworkID, addr 0x60251b8, size 0x8, virtual false, abstract: false, final false
inline uint32_t get_NetworkID() ;

/// [CompilerGenerated]
/// @brief Method get_SnapshotType, addr 0x60251c8, size 0x8, virtual false, abstract: false, final false
inline ::Fusion::Protocol::SnapshotType get_SnapshotType() ;

/// [CompilerGenerated]
/// @brief Method get_Tick, addr 0x60251a8, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Tick() ;

/// [CompilerGenerated]
/// @brief Method get_TotalSize, addr 0x60251d8, size 0x8, virtual false, abstract: false, final false
inline int32_t get_TotalSize() ;

/// [CompilerGenerated]
/// @brief Method set_CRC, addr 0x60252c0, size 0x8, virtual false, abstract: false, final false
inline void set_CRC(uint64_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_Data, addr 0x60252b0, size 0x8, virtual false, abstract: false, final false
inline void set_Data(::ArrayW<uint8_t>  value) ;

/// [CompilerGenerated]
/// @brief Method set_NetworkID, addr 0x60251c0, size 0x8, virtual false, abstract: false, final false
inline void set_NetworkID(uint32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_SnapshotType, addr 0x60251d0, size 0x8, virtual false, abstract: false, final false
inline void set_SnapshotType(::Fusion::Protocol::SnapshotType  value) ;

/// [CompilerGenerated]
/// @brief Method set_Tick, addr 0x60251b0, size 0x8, virtual false, abstract: false, final false
inline void set_Tick(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_TotalSize, addr 0x60251e0, size 0x8, virtual false, abstract: false, final false
inline void set_TotalSize(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Snapshot() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Snapshot", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Snapshot(Snapshot && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Snapshot", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Snapshot(Snapshot const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29329};

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <Tick>k__BackingField, offset: 0x28, size: 0x4, def value: None
 int32_t  ____Tick_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <NetworkID>k__BackingField, offset: 0x2c, size: 0x4, def value: None
 uint32_t  ____NetworkID_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <SnapshotType>k__BackingField, offset: 0x30, size: 0x1, def value: None
 ::Fusion::Protocol::SnapshotType  ____SnapshotType_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <TotalSize>k__BackingField, offset: 0x34, size: 0x4, def value: None
 int32_t  ____TotalSize_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <Data>k__BackingField, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ____Data_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <CRC>k__BackingField, offset: 0x40, size: 0x8, def value: None
 uint64_t  ____CRC_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Protocol::Snapshot, ____Tick_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Fusion::Protocol::Snapshot, ____NetworkID_k__BackingField) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Fusion::Protocol::Snapshot, ____SnapshotType_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Fusion::Protocol::Snapshot, ____TotalSize_k__BackingField) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Fusion::Protocol::Snapshot, ____Data_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Fusion::Protocol::Snapshot, ____CRC_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Fusion::Protocol::Snapshot) == 0x48, "Size mismatch!");

} // namespace end def Fusion::Protocol
