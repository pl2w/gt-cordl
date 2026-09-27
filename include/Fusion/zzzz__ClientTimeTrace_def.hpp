#pragma once
// IWYU pragma private; include "Fusion/ClientTimeTrace.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__Simulation_TimeFeedback_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ClientTimeTrace)
namespace GlobalNamespace {
struct Simulation_TimeFeedback;
}
namespace GlobalNamespace {
struct TickRate_Resolved;
}
// Forward declare root types
namespace Fusion {
class ClientTimeTrace;
}
// Write type traits
MARK_REF_T(::Fusion::ClientTimeTrace*);
DEFINE_IL2CPP_CLASS(::Fusion::ClientTimeTrace*, "Fusion", "ClientTimeTrace");
// Dependencies Fusion.Simulation::TimeFeedback, System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.ClientTimeTrace
class CORDL_TYPE ClientTimeTrace : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_File)) ::StringW  File;

 __declspec(property(get=get_Folder)) ::StringW  Folder;

/// @brief Field FrameDeltaTime, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_FrameDeltaTime, put=__cordl_internal_set_FrameDeltaTime)) double_t  FrameDeltaTime;

/// @brief Field Frames, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_Frames, put=__cordl_internal_set_Frames)) int32_t  Frames;

/// @brief Field PacketDeltaTime, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_PacketDeltaTime, put=__cordl_internal_set_PacketDeltaTime)) double_t  PacketDeltaTime;

/// @brief Field PacketFeedback, offset 0x48, size 0x10 
 __declspec(property(get=__cordl_internal_get_PacketFeedback, put=__cordl_internal_set_PacketFeedback)) ::GlobalNamespace::Simulation_TimeFeedback  PacketFeedback;

/// @brief Field PacketNumber, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_PacketNumber, put=__cordl_internal_set_PacketNumber)) int32_t  PacketNumber;

/// @brief Field PacketReceived, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_PacketReceived, put=__cordl_internal_set_PacketReceived)) bool  PacketReceived;

/// @brief Field Packets, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_Packets, put=__cordl_internal_set_Packets)) int32_t  Packets;

/// @brief Field Player, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_Player, put=__cordl_internal_set_Player)) int32_t  Player;

/// @brief Field RoundTripTime, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_RoundTripTime, put=__cordl_internal_set_RoundTripTime)) double_t  RoundTripTime;

/// @brief Field Timestamp, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Timestamp, put=__cordl_internal_set_Timestamp)) int64_t  Timestamp;

static inline ::Fusion::ClientTimeTrace* New_ctor(int32_t  player, ::GlobalNamespace::TickRate_Resolved  tickRate) ;

/// @brief Method OnFeedback, addr 0x6009f80, size 0xc, virtual false, abstract: false, final false
inline void OnFeedback(::GlobalNamespace::Simulation_TimeFeedback  packetFeedback) ;

/// @brief Method OnFrame, addr 0x6009ca0, size 0x28, virtual false, abstract: false, final false
inline void OnFrame(double_t  frameDeltaTime) ;

/// @brief Method OnPacket, addr 0x6007574, size 0x1c, virtual false, abstract: false, final false
inline void OnPacket(int32_t  packetNumber, double_t  packetDeltaTime, double_t  roundTripTime) ;

/// @brief Method WriteHeaders, addr 0x600a4f4, size 0x36c, virtual false, abstract: false, final false
inline void WriteHeaders(::GlobalNamespace::TickRate_Resolved  tickRate) ;

/// @brief Method WriteLine, addr 0x600a860, size 0x554, virtual false, abstract: false, final false
inline void WriteLine() ;

constexpr double_t const& __cordl_internal_get_FrameDeltaTime() const;

constexpr double_t& __cordl_internal_get_FrameDeltaTime() ;

constexpr int32_t const& __cordl_internal_get_Frames() const;

constexpr int32_t& __cordl_internal_get_Frames() ;

constexpr double_t const& __cordl_internal_get_PacketDeltaTime() const;

constexpr double_t& __cordl_internal_get_PacketDeltaTime() ;

constexpr ::GlobalNamespace::Simulation_TimeFeedback const& __cordl_internal_get_PacketFeedback() const;

constexpr ::GlobalNamespace::Simulation_TimeFeedback& __cordl_internal_get_PacketFeedback() ;

constexpr int32_t const& __cordl_internal_get_PacketNumber() const;

constexpr int32_t& __cordl_internal_get_PacketNumber() ;

constexpr bool const& __cordl_internal_get_PacketReceived() const;

constexpr bool& __cordl_internal_get_PacketReceived() ;

constexpr int32_t const& __cordl_internal_get_Packets() const;

constexpr int32_t& __cordl_internal_get_Packets() ;

constexpr int32_t const& __cordl_internal_get_Player() const;

constexpr int32_t& __cordl_internal_get_Player() ;

constexpr double_t const& __cordl_internal_get_RoundTripTime() const;

constexpr double_t& __cordl_internal_get_RoundTripTime() ;

constexpr int64_t const& __cordl_internal_get_Timestamp() const;

constexpr int64_t& __cordl_internal_get_Timestamp() ;

constexpr void __cordl_internal_set_FrameDeltaTime(double_t  value) ;

constexpr void __cordl_internal_set_Frames(int32_t  value) ;

constexpr void __cordl_internal_set_PacketDeltaTime(double_t  value) ;

constexpr void __cordl_internal_set_PacketFeedback(::GlobalNamespace::Simulation_TimeFeedback  value) ;

constexpr void __cordl_internal_set_PacketNumber(int32_t  value) ;

constexpr void __cordl_internal_set_PacketReceived(bool  value) ;

constexpr void __cordl_internal_set_Packets(int32_t  value) ;

constexpr void __cordl_internal_set_Player(int32_t  value) ;

constexpr void __cordl_internal_set_RoundTripTime(double_t  value) ;

constexpr void __cordl_internal_set_Timestamp(int64_t  value) ;

/// @brief Method .ctor, addr 0x600a28c, size 0xec, virtual false, abstract: false, final false
inline void _ctor(int32_t  player, ::GlobalNamespace::TickRate_Resolved  tickRate) ;

/// @brief Method get_File, addr 0x600a3d0, size 0x124, virtual false, abstract: false, final false
inline ::StringW get_File() ;

/// @brief Method get_Folder, addr 0x600a380, size 0x50, virtual false, abstract: false, final false
inline ::StringW get_Folder() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ClientTimeTrace() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ClientTimeTrace", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ClientTimeTrace(ClientTimeTrace && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ClientTimeTrace", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ClientTimeTrace(ClientTimeTrace const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19363};

/// @brief Field Timestamp, offset: 0x10, size: 0x8, def value: None
 int64_t  ___Timestamp;

/// @brief Field Player, offset: 0x18, size: 0x4, def value: None
 int32_t  ___Player;

/// @brief Field Frames, offset: 0x1c, size: 0x4, def value: None
 int32_t  ___Frames;

/// @brief Field FrameDeltaTime, offset: 0x20, size: 0x8, def value: None
 double_t  ___FrameDeltaTime;

/// @brief Field PacketReceived, offset: 0x28, size: 0x1, def value: None
 bool  ___PacketReceived;

/// @brief Field PacketNumber, offset: 0x2c, size: 0x4, def value: None
 int32_t  ___PacketNumber;

/// @brief Field Packets, offset: 0x30, size: 0x4, def value: None
 int32_t  ___Packets;

/// @brief Field PacketDeltaTime, offset: 0x38, size: 0x8, def value: None
 double_t  ___PacketDeltaTime;

/// @brief Field RoundTripTime, offset: 0x40, size: 0x8, def value: None
 double_t  ___RoundTripTime;

/// @brief Field PacketFeedback, offset: 0x48, size: 0x10, def value: None
 ::GlobalNamespace::Simulation_TimeFeedback  ___PacketFeedback;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::ClientTimeTrace, ___Timestamp) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::ClientTimeTrace, ___Player) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::ClientTimeTrace, ___Frames) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Fusion::ClientTimeTrace, ___FrameDeltaTime) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Fusion::ClientTimeTrace, ___PacketReceived) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Fusion::ClientTimeTrace, ___PacketNumber) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Fusion::ClientTimeTrace, ___Packets) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Fusion::ClientTimeTrace, ___PacketDeltaTime) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Fusion::ClientTimeTrace, ___RoundTripTime) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Fusion::ClientTimeTrace, ___PacketFeedback) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Fusion::ClientTimeTrace) == 0x58, "Size mismatch!");

} // namespace end def Fusion
