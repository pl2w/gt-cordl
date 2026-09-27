#pragma once
// IWYU pragma private; include "Fusion/HostMigrationToken.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__GameMode_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HostMigrationToken)
namespace Fusion::Protocol {
class Snapshot;
}
namespace Fusion {
class CloudCommunicator;
}
namespace Fusion {
struct GameMode;
}
namespace Fusion {
struct NetworkId;
}
namespace Fusion {
struct Tick;
}
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace Fusion {
class HostMigrationToken;
}
// Write type traits
MARK_REF_T(::Fusion::HostMigrationToken*);
DEFINE_IL2CPP_CLASS(::Fusion::HostMigrationToken*, "Fusion", "HostMigrationToken");
// Dependencies Fusion.GameMode, System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.HostMigrationToken
class CORDL_TYPE HostMigrationToken : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_CloudCommunicator, put=set_CloudCommunicator)) ::Fusion::CloudCommunicator*  CloudCommunicator;

 __declspec(property(get=get_GameMode, put=set_GameMode)) ::Fusion::GameMode  GameMode;

 __declspec(property(get=get_HostSnapshot)) ::Fusion::Protocol::Snapshot*  HostSnapshot;

 __declspec(property(get=get_ResumeId)) ::System::Nullable_1<::Fusion::NetworkId>  ResumeId;

 __declspec(property(get=get_ResumeState)) ::ArrayW<uint8_t>  ResumeState;

 __declspec(property(get=get_ResumeTick)) ::System::Nullable_1<::Fusion::Tick>  ResumeTick;

/// @brief Field <CloudCommunicator>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__CloudCommunicator_k__BackingField, put=__cordl_internal_set__CloudCommunicator_k__BackingField)) ::Fusion::CloudCommunicator*  _CloudCommunicator_k__BackingField;

/// @brief Field <GameMode>k__BackingField, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__GameMode_k__BackingField, put=__cordl_internal_set__GameMode_k__BackingField)) ::Fusion::GameMode  _GameMode_k__BackingField;

/// @brief Field <HostSnapshot>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__HostSnapshot_k__BackingField, put=__cordl_internal_set__HostSnapshot_k__BackingField)) ::Fusion::Protocol::Snapshot*  _HostSnapshot_k__BackingField;

static inline ::Fusion::HostMigrationToken* New_ctor(::Fusion::Protocol::Snapshot*  hostSnapshot, ::Fusion::CloudCommunicator*  cloudCommunicator, ::Fusion::GameMode  gameMode) ;

constexpr ::Fusion::CloudCommunicator* const& __cordl_internal_get__CloudCommunicator_k__BackingField() const;

constexpr ::Fusion::CloudCommunicator*& __cordl_internal_get__CloudCommunicator_k__BackingField() ;

constexpr ::Fusion::GameMode const& __cordl_internal_get__GameMode_k__BackingField() const;

constexpr ::Fusion::GameMode& __cordl_internal_get__GameMode_k__BackingField() ;

constexpr ::Fusion::Protocol::Snapshot* const& __cordl_internal_get__HostSnapshot_k__BackingField() const;

constexpr ::Fusion::Protocol::Snapshot*& __cordl_internal_get__HostSnapshot_k__BackingField() ;

constexpr void __cordl_internal_set__CloudCommunicator_k__BackingField(::Fusion::CloudCommunicator*  value) ;

constexpr void __cordl_internal_set__GameMode_k__BackingField(::Fusion::GameMode  value) ;

constexpr void __cordl_internal_set__HostSnapshot_k__BackingField(::Fusion::Protocol::Snapshot*  value) ;

/// @brief Method .ctor, addr 0x5fd18d4, size 0x58, virtual false, abstract: false, final false
inline void _ctor(::Fusion::Protocol::Snapshot*  hostSnapshot, ::Fusion::CloudCommunicator*  cloudCommunicator, ::Fusion::GameMode  gameMode) ;

/// [CompilerGenerated]
/// @brief Method get_CloudCommunicator, addr 0x5fd1764, size 0x8, virtual false, abstract: false, final false
inline ::Fusion::CloudCommunicator* get_CloudCommunicator() ;

/// [CompilerGenerated]
/// @brief Method get_GameMode, addr 0x5fd1754, size 0x8, virtual false, abstract: false, final false
inline ::Fusion::GameMode get_GameMode() ;

/// [CompilerGenerated]
/// @brief Method get_HostSnapshot, addr 0x5fd18cc, size 0x8, virtual false, abstract: false, final false
inline ::Fusion::Protocol::Snapshot* get_HostSnapshot() ;

/// @brief Method get_ResumeId, addr 0x5fd1848, size 0x84, virtual false, abstract: false, final false
inline ::System::Nullable_1<::Fusion::NetworkId> get_ResumeId() ;

/// @brief Method get_ResumeState, addr 0x5fd1774, size 0x18, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> get_ResumeState() ;

/// @brief Method get_ResumeTick, addr 0x5fd178c, size 0xbc, virtual false, abstract: false, final false
inline ::System::Nullable_1<::Fusion::Tick> get_ResumeTick() ;

/// [CompilerGenerated]
/// @brief Method set_CloudCommunicator, addr 0x5fd176c, size 0x8, virtual false, abstract: false, final false
inline void set_CloudCommunicator(::Fusion::CloudCommunicator*  value) ;

/// [CompilerGenerated]
/// @brief Method set_GameMode, addr 0x5fd175c, size 0x8, virtual false, abstract: false, final false
inline void set_GameMode(::Fusion::GameMode  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HostMigrationToken() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HostMigrationToken", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HostMigrationToken(HostMigrationToken && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HostMigrationToken", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HostMigrationToken(HostMigrationToken const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19199};

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <GameMode>k__BackingField, offset: 0x10, size: 0x4, def value: None
 ::Fusion::GameMode  ____GameMode_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <CloudCommunicator>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::Fusion::CloudCommunicator*  ____CloudCommunicator_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <HostSnapshot>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::Fusion::Protocol::Snapshot*  ____HostSnapshot_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::HostMigrationToken, ____GameMode_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::HostMigrationToken, ____CloudCommunicator_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::HostMigrationToken, ____HostSnapshot_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Fusion::HostMigrationToken) == 0x28, "Size mismatch!");

} // namespace end def Fusion
