#pragma once
// IWYU pragma private; include "Fusion/SimulationMessage.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__PlayerRef_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SimulationMessage)
namespace Fusion {
class ILogDumpable;
}
namespace Fusion {
struct PlayerRef;
}
namespace Fusion {
class Simulation;
}
namespace GlobalNamespace {
struct SimulationMessage_BuiltInFlags;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
template<typename T>
struct Span_1;
}
// Forward declare root types
namespace Fusion {
struct SimulationMessage;
}
// Write type traits
MARK_VAL_T(::Fusion::SimulationMessage);
DEFINE_IL2CPP_CLASS(::Fusion::SimulationMessage, "Fusion", "SimulationMessage");
// Dependencies Fusion.PlayerRef
namespace Fusion {
// Is value type: true
// CS Name: Fusion.SimulationMessage
struct CORDL_TYPE SimulationMessage {
public:
// Declarations
using BuiltInFlags = ::GlobalNamespace::SimulationMessage_BuiltInFlags;

/// @brief Field Capacity, offset 0x8, size 0x4 
 __declspec(property(get=__cordl_internal_get_Capacity, put=__cordl_internal_set_Capacity)) int32_t  Capacity;

/// @brief Field Flags, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_Flags, put=__cordl_internal_set_Flags)) int32_t  Flags;

 __declspec(property(get=get_IsUnreliable)) bool  IsUnreliable;

/// @brief Field Offset, offset 0xc, size 0x4 
 __declspec(property(get=__cordl_internal_get_Offset, put=__cordl_internal_set_Offset)) int32_t  Offset;

/// @brief Field References, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_References, put=__cordl_internal_set_References)) int32_t  References;

/// @brief Field Source, offset 0x4, size 0x4 
 __declspec(property(get=__cordl_internal_get_Source, put=__cordl_internal_set_Source)) ::Fusion::PlayerRef  Source;

/// @brief Field Target, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_Target, put=__cordl_internal_set_Target)) ::Fusion::PlayerRef  Target;

/// @brief Field Tick, offset 0x0, size 0x4 
 __declspec(property(get=__cordl_internal_get_Tick, put=__cordl_internal_set_Tick)) int32_t  Tick;

/// @brief Convert operator to "::Fusion::ILogDumpable"
constexpr operator  ::Fusion::ILogDumpable*() ;

/// @brief Method Allocate, addr 0x6004d48, size 0x194, virtual false, abstract: false, final false
static inline ::Fusion::SimulationMessage* Allocate(::Fusion::Simulation*  sim, int32_t  capacityInBytes) ;

/// @brief Method CanAllocateUserPayload, addr 0x60050cc, size 0xc, virtual false, abstract: false, final false
static inline bool CanAllocateUserPayload(int32_t  capacityInBytes) ;

/// @brief Method Clone, addr 0x6004ca8, size 0xa0, virtual false, abstract: false, final false
static inline ::Fusion::SimulationMessage* Clone(::Fusion::Simulation*  sim, ::Fusion::SimulationMessage*  message) ;

/// @brief Method DumpContents, addr 0x6005690, size 0x260, virtual false, abstract: false, final false
static inline ::StringW DumpContents(::Fusion::SimulationMessage*  message) ;

/// @brief Method Free, addr 0x6004edc, size 0x150, virtual false, abstract: false, final false
static inline void Free(::Fusion::Simulation*  sim, ::by_ref<::Fusion::SimulationMessage*>  message) ;

/// @brief Method Fusion.ILogDumpable.Dump, addr 0x60058f0, size 0x8c, virtual true, abstract: false, final true
inline void Fusion_ILogDumpable_Dump(::System::Text::StringBuilder*  builder) ;

/// [Obsolete("Use GetRawData instead")]
/// @brief Method GetData, addr 0x600502c, size 0x8, virtual false, abstract: false, final false
static inline uint8_t* GetData(::Fusion::SimulationMessage*  message) ;

/// @brief Method GetFlag, addr 0x6004c7c, size 0x10, virtual false, abstract: false, final false
inline bool GetFlag(int32_t  flag) ;

/// @brief Method GetRawData, addr 0x6005034, size 0x98, virtual false, abstract: false, final false
static inline ::System::Span_1<uint8_t> GetRawData(::Fusion::SimulationMessage*  message) ;

/// @brief Method IsTargeted, addr 0x6004c8c, size 0x10, virtual false, abstract: false, final false
inline bool IsTargeted() ;

/// @brief Method ReferenceCountAdd, addr 0x6004b74, size 0x10, virtual false, abstract: false, final false
inline void ReferenceCountAdd() ;

/// @brief Method ReferenceCountSub, addr 0x6004b84, size 0x38, virtual false, abstract: false, final false
inline bool ReferenceCountSub() ;

/// @brief Method SetDummy, addr 0x6004c68, size 0x14, virtual false, abstract: false, final false
inline void SetDummy() ;

/// @brief Method SetNotTickAligned, addr 0x6004c58, size 0x10, virtual false, abstract: false, final false
inline void SetNotTickAligned() ;

/// @brief Method SetStatic, addr 0x6004c38, size 0x10, virtual false, abstract: false, final false
inline void SetStatic() ;

/// @brief Method SetTarget, addr 0x6004bbc, size 0x7c, virtual false, abstract: false, final false
inline void SetTarget(::Fusion::PlayerRef  target) ;

/// @brief Method SetUnreliable, addr 0x6004c48, size 0x10, virtual false, abstract: false, final false
inline void SetUnreliable() ;

/// @brief Method ToString, addr 0x60050d8, size 0x8, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method ToString, addr 0x60050e0, size 0x5b0, virtual false, abstract: false, final false
inline ::StringW ToString(bool  useBrackets) ;

constexpr int32_t const& __cordl_internal_get_Capacity() const;

constexpr int32_t& __cordl_internal_get_Capacity() ;

constexpr int32_t const& __cordl_internal_get_Flags() const;

constexpr int32_t& __cordl_internal_get_Flags() ;

constexpr int32_t const& __cordl_internal_get_Offset() const;

constexpr int32_t& __cordl_internal_get_Offset() ;

constexpr int32_t const& __cordl_internal_get_References() const;

constexpr int32_t& __cordl_internal_get_References() ;

constexpr ::Fusion::PlayerRef const& __cordl_internal_get_Source() const;

constexpr ::Fusion::PlayerRef& __cordl_internal_get_Source() ;

constexpr ::Fusion::PlayerRef const& __cordl_internal_get_Target() const;

constexpr ::Fusion::PlayerRef& __cordl_internal_get_Target() ;

constexpr int32_t const& __cordl_internal_get_Tick() const;

constexpr int32_t& __cordl_internal_get_Tick() ;

constexpr void __cordl_internal_set_Capacity(int32_t  value) ;

constexpr void __cordl_internal_set_Flags(int32_t  value) ;

constexpr void __cordl_internal_set_Offset(int32_t  value) ;

constexpr void __cordl_internal_set_References(int32_t  value) ;

constexpr void __cordl_internal_set_Source(::Fusion::PlayerRef  value) ;

constexpr void __cordl_internal_set_Target(::Fusion::PlayerRef  value) ;

constexpr void __cordl_internal_set_Tick(int32_t  value) ;

/// @brief Method get_IsUnreliable, addr 0x6004c9c, size 0xc, virtual false, abstract: false, final false
inline bool get_IsUnreliable() ;

/// @brief Convert to "::Fusion::ILogDumpable"
constexpr ::Fusion::ILogDumpable* i___Fusion__ILogDumpable() ;

// Ctor Parameters []
// @brief default ctor
constexpr SimulationMessage() ;

// Ctor Parameters [CppParam { name: "Tick", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Source", ty: "::Fusion::PlayerRef", modifiers: "", def_value: None, comment: None }, CppParam { name: "Capacity", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Offset", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "References", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Flags", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Target", ty: "::Fusion::PlayerRef", modifiers: "", def_value: None, comment: None }]
constexpr SimulationMessage(int32_t  Tick, ::Fusion::PlayerRef  Source, int32_t  Capacity, int32_t  Offset, int32_t  References, int32_t  Flags, ::Fusion::PlayerRef  Target) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___Tick_padding[0x0];
/// @brief Field Tick, offset: 0x0, size: 0x4, def value: None
 int32_t  ___Tick;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___Tick_padding_forAlignment[0x0];
/// @brief Field Tick, offset: 0x0, size: 0x4, def value: None
 int32_t  ___Tick_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x4
 uint8_t  ___Source_padding[0x4];
/// @brief Field Source, offset: 0x4, size: 0x4, def value: None
 ::Fusion::PlayerRef  ___Source;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x4 for alignment
 uint8_t  ___Source_padding_forAlignment[0x4];
/// @brief Field Source, offset: 0x4, size: 0x4, def value: None
 ::Fusion::PlayerRef  ___Source_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x8
 uint8_t  ___Capacity_padding[0x8];
/// @brief Field Capacity, offset: 0x8, size: 0x4, def value: None
 int32_t  ___Capacity;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x8 for alignment
 uint8_t  ___Capacity_padding_forAlignment[0x8];
/// @brief Field Capacity, offset: 0x8, size: 0x4, def value: None
 int32_t  ___Capacity_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0xc
 uint8_t  ___Offset_padding[0xc];
/// @brief Field Offset, offset: 0xc, size: 0x4, def value: None
 int32_t  ___Offset;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0xc for alignment
 uint8_t  ___Offset_padding_forAlignment[0xc];
/// @brief Field Offset, offset: 0xc, size: 0x4, def value: None
 int32_t  ___Offset_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x10
 uint8_t  ___References_padding[0x10];
/// @brief Field References, offset: 0x10, size: 0x4, def value: None
 int32_t  ___References;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x10 for alignment
 uint8_t  ___References_padding_forAlignment[0x10];
/// @brief Field References, offset: 0x10, size: 0x4, def value: None
 int32_t  ___References_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x14
 uint8_t  ___Flags_padding[0x14];
/// @brief Field Flags, offset: 0x14, size: 0x4, def value: None
 int32_t  ___Flags;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x14 for alignment
 uint8_t  ___Flags_padding_forAlignment[0x14];
/// @brief Field Flags, offset: 0x14, size: 0x4, def value: None
 int32_t  ___Flags_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x18
 uint8_t  ___Target_padding[0x18];
/// @brief Field Target, offset: 0x18, size: 0x4, def value: None
 ::Fusion::PlayerRef  ___Target;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x18 for alignment
 uint8_t  ___Target_padding_forAlignment[0x18];
/// @brief Field Target, offset: 0x18, size: 0x4, def value: None
 ::Fusion::PlayerRef  ___Target_forAlignment;
};
};
public:

/// @brief Field FLAGS_RESERVED offset 0xffffffff size 0x4
static constexpr int32_t  FLAGS_RESERVED{static_cast<int32_t>(0xffff)};

/// @brief Field FLAGS_RESERVED_BITS offset 0xffffffff size 0x4
static constexpr int32_t  FLAGS_RESERVED_BITS{static_cast<int32_t>(0x10)};

/// @brief Field FLAG_DUMMY offset 0xffffffff size 0x4
static constexpr int32_t  FLAG_DUMMY{static_cast<int32_t>(0x100)};

/// @brief Field FLAG_INTERNAL offset 0xffffffff size 0x4
static constexpr int32_t  FLAG_INTERNAL{static_cast<int32_t>(0x40)};

/// @brief Field FLAG_NOT_TICK_ALIGNED offset 0xffffffff size 0x4
static constexpr int32_t  FLAG_NOT_TICK_ALIGNED{static_cast<int32_t>(0x80)};

/// @brief Field FLAG_REMOTE offset 0xffffffff size 0x4
static constexpr int32_t  FLAG_REMOTE{static_cast<int32_t>(0x2)};

/// @brief Field FLAG_STATIC offset 0xffffffff size 0x4
static constexpr int32_t  FLAG_STATIC{static_cast<int32_t>(0x4)};

/// @brief Field FLAG_TARGET_PLAYER offset 0xffffffff size 0x4
static constexpr int32_t  FLAG_TARGET_PLAYER{static_cast<int32_t>(0x10)};

/// @brief Field FLAG_TARGET_SERVER offset 0xffffffff size 0x4
static constexpr int32_t  FLAG_TARGET_SERVER{static_cast<int32_t>(0x20)};

/// @brief Field FLAG_UNRELIABLE offset 0xffffffff size 0x4
static constexpr int32_t  FLAG_UNRELIABLE{static_cast<int32_t>(0x8)};

/// @brief Field FLAG_USER_FLAGS_START offset 0xffffffff size 0x4
static constexpr int32_t  FLAG_USER_FLAGS_START{static_cast<int32_t>(0x10000)};

/// @brief Field FLAG_USER_MESSAGE offset 0xffffffff size 0x4
static constexpr int32_t  FLAG_USER_MESSAGE{static_cast<int32_t>(0x1)};

/// @brief Field MAX_PAYLOAD_SIZE offset 0xffffffff size 0x4
static constexpr int32_t  MAX_PAYLOAD_SIZE{static_cast<int32_t>(0x200)};

/// @brief Field SIZE offset 0xffffffff size 0x4
static constexpr int32_t  SIZE{static_cast<int32_t>(0x1c)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19346};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1c};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(sizeof(::Fusion::SimulationMessage) == 0x1c, "Size mismatch!");

} // namespace end def Fusion
