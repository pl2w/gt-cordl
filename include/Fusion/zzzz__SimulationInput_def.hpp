#pragma once
// IWYU pragma private; include "Fusion/SimulationInput.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__PlayerRef_def.hpp"
#include "Fusion/zzzz__SimulationInputHeader_def.hpp"
#include "Fusion/zzzz__TickRate_Resolved_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SimulationInput)
namespace Fusion::Sockets {
struct NetBitBufferSerializer;
}
namespace Fusion {
class Allocator;
}
namespace Fusion {
class NetworkProjectConfig;
}
namespace Fusion {
struct PlayerRef;
}
namespace Fusion {
class SimulationConfig;
}
namespace Fusion {
struct SimulationInputHeader;
}
namespace Fusion {
class SimulationInput_Buffer;
}
namespace Fusion {
class SimulationInput_Pool;
}
namespace Fusion {
struct Tick;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename T>
class Stack_1;
}
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace Fusion {
class SimulationInput;
}
namespace Fusion {
class SimulationInput_Buffer;
}
namespace Fusion {
class SimulationInput_Pool;
}
// Write type traits
MARK_REF_T(::Fusion::SimulationInput*);
MARK_REF_T(::Fusion::SimulationInput_Buffer*);
MARK_REF_T(::Fusion::SimulationInput_Pool*);
DEFINE_IL2CPP_CLASS(::Fusion::SimulationInput*, "Fusion", "SimulationInput");
DEFINE_IL2CPP_CLASS(::Fusion::SimulationInput_Buffer*, "Fusion", "SimulationInput/Buffer");
DEFINE_IL2CPP_CLASS(::Fusion::SimulationInput_Pool*, "Fusion", "SimulationInput/Pool");
// Dependencies Fusion.PlayerRef, System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.SimulationInput
class CORDL_TYPE SimulationInput : public ::System::Object {
public:
// Declarations
using Buffer = ::Fusion::SimulationInput_Buffer;

using Pool = ::Fusion::SimulationInput_Pool;

 __declspec(property(get=get_Data)) int32_t*  Data;

 __declspec(property(get=get_Header)) ::Fusion::SimulationInputHeader*  Header;

/// @brief Field Next, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_Next, put=__cordl_internal_set_Next)) ::Fusion::SimulationInput*  Next;

 __declspec(property(get=get_Player, put=set_Player)) ::Fusion::PlayerRef  Player;

/// @brief Field Prev, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_Prev, put=__cordl_internal_set_Prev)) ::Fusion::SimulationInput*  Prev;

 __declspec(property(get=get_Sent, put=set_Sent)) int32_t  Sent;

/// @brief Field _player, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__player, put=__cordl_internal_set__player)) ::Fusion::PlayerRef  _player;

/// @brief Field _pooled, offset 0x14, size 0x1 
 __declspec(property(get=__cordl_internal_get__pooled, put=__cordl_internal_set__pooled)) bool  _pooled;

/// @brief Field _ptr, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__ptr, put=__cordl_internal_set__ptr)) int32_t*  _ptr;

/// @brief Field _sent, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__sent, put=__cordl_internal_set__sent)) int32_t  _sent;

/// @brief Method Clear, addr 0x60036e0, size 0x3c, virtual false, abstract: false, final false
inline void Clear(int32_t  wordCount) ;

/// @brief Method CopyFrom, addr 0x600371c, size 0x4c, virtual false, abstract: false, final false
inline void CopyFrom(::Fusion::SimulationInput*  source, int32_t  wordCount) ;

/// @brief Method Dispose, addr 0x60039e8, size 0x58, virtual false, abstract: false, final false
inline void Dispose(::Fusion::Allocator*  allocator) ;

static inline ::Fusion::SimulationInput* New_ctor() ;

/// @brief Method Serialize, addr 0x6003768, size 0x280, virtual false, abstract: false, final false
inline void Serialize(::Fusion::SimulationInput*  previous, ::Fusion::SimulationConfig*  config, ::Fusion::Sockets::NetBitBufferSerializer  serializer) ;

constexpr ::Fusion::SimulationInput* const& __cordl_internal_get_Next() const;

constexpr ::Fusion::SimulationInput*& __cordl_internal_get_Next() ;

constexpr ::Fusion::SimulationInput* const& __cordl_internal_get_Prev() const;

constexpr ::Fusion::SimulationInput*& __cordl_internal_get_Prev() ;

constexpr ::Fusion::PlayerRef const& __cordl_internal_get__player() const;

constexpr ::Fusion::PlayerRef& __cordl_internal_get__player() ;

constexpr bool const& __cordl_internal_get__pooled() const;

constexpr bool& __cordl_internal_get__pooled() ;

constexpr int32_t* const& __cordl_internal_get__ptr() const;

constexpr int32_t*& __cordl_internal_get__ptr() ;

constexpr int32_t const& __cordl_internal_get__sent() const;

constexpr int32_t& __cordl_internal_get__sent() ;

constexpr void __cordl_internal_set_Next(::Fusion::SimulationInput*  value) ;

constexpr void __cordl_internal_set_Prev(::Fusion::SimulationInput*  value) ;

constexpr void __cordl_internal_set__player(::Fusion::PlayerRef  value) ;

constexpr void __cordl_internal_set__pooled(bool  value) ;

constexpr void __cordl_internal_set__ptr(int32_t*  value) ;

constexpr void __cordl_internal_set__sent(int32_t  value) ;

/// @brief Method .ctor, addr 0x6003a40, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Data, addr 0x6003658, size 0x2c, virtual false, abstract: false, final false
inline int32_t* get_Data() ;

/// @brief Method get_Header, addr 0x6003630, size 0x28, virtual false, abstract: false, final false
inline ::Fusion::SimulationInputHeader* get_Header() ;

/// @brief Method get_Player, addr 0x60035d4, size 0x28, virtual false, abstract: false, final false
inline ::Fusion::PlayerRef get_Player() ;

/// @brief Method get_Sent, addr 0x6003684, size 0x28, virtual false, abstract: false, final false
inline int32_t get_Sent() ;

/// @brief Method set_Player, addr 0x60035fc, size 0x34, virtual false, abstract: false, final false
inline void set_Player(::Fusion::PlayerRef  value) ;

/// @brief Method set_Sent, addr 0x60036ac, size 0x34, virtual false, abstract: false, final false
inline void set_Sent(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SimulationInput() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SimulationInput", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SimulationInput(SimulationInput && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SimulationInput", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SimulationInput(SimulationInput const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19342};

/// @brief Field _sent, offset: 0x10, size: 0x4, def value: None
 int32_t  ____sent;

/// @brief Field _pooled, offset: 0x14, size: 0x1, def value: None
 bool  ____pooled;

/// @brief Field _player, offset: 0x18, size: 0x4, def value: None
 ::Fusion::PlayerRef  ____player;

/// @brief Field _ptr, offset: 0x20, size: 0x8, def value: None
 int32_t*  ____ptr;

/// @brief Field Prev, offset: 0x28, size: 0x8, def value: None
 ::Fusion::SimulationInput*  ___Prev;

/// @brief Field Next, offset: 0x30, size: 0x8, def value: None
 ::Fusion::SimulationInput*  ___Next;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::SimulationInput, ____sent) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::SimulationInput, ____pooled) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Fusion::SimulationInput, ____player) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::SimulationInput, ____ptr) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Fusion::SimulationInput, ___Prev) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Fusion::SimulationInput, ___Next) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Fusion::SimulationInput) == 0x38, "Size mismatch!");

} // namespace end def Fusion
// Dependencies System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.SimulationInput/Pool
class CORDL_TYPE SimulationInput_Pool : public ::System::Object {
public:
// Declarations
/// @brief Field _allocator, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__allocator, put=__cordl_internal_set__allocator)) ::Fusion::Allocator*  _allocator;

/// @brief Field _config, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__config, put=__cordl_internal_set__config)) ::Fusion::SimulationConfig*  _config;

/// @brief Field _created, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__created, put=__cordl_internal_set__created)) ::System::Collections::Generic::List_1<::Fusion::SimulationInput*>*  _created;

/// @brief Field _disposed, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get__disposed, put=__cordl_internal_set__disposed)) bool  _disposed;

/// @brief Field _pool, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__pool, put=__cordl_internal_set__pool)) ::System::Collections::Generic::Stack_1<::Fusion::SimulationInput*>*  _pool;

/// @brief Method Acquire, addr 0x600445c, size 0x1ec, virtual false, abstract: false, final false
inline ::Fusion::SimulationInput* Acquire() ;

/// @brief Method Dispose, addr 0x6004714, size 0xbc, virtual false, abstract: false, final false
inline void Dispose() ;

static inline ::Fusion::SimulationInput_Pool* New_ctor(::Fusion::SimulationConfig*  config, ::Fusion::Allocator*  allocator) ;

/// @brief Method Release, addr 0x6004648, size 0xcc, virtual false, abstract: false, final false
inline void Release(::Fusion::SimulationInput*  input) ;

constexpr ::Fusion::Allocator* const& __cordl_internal_get__allocator() const;

constexpr ::Fusion::Allocator*& __cordl_internal_get__allocator() ;

constexpr ::Fusion::SimulationConfig* const& __cordl_internal_get__config() const;

constexpr ::Fusion::SimulationConfig*& __cordl_internal_get__config() ;

constexpr ::System::Collections::Generic::List_1<::Fusion::SimulationInput*>* const& __cordl_internal_get__created() const;

constexpr ::System::Collections::Generic::List_1<::Fusion::SimulationInput*>*& __cordl_internal_get__created() ;

constexpr bool const& __cordl_internal_get__disposed() const;

constexpr bool& __cordl_internal_get__disposed() ;

constexpr ::System::Collections::Generic::Stack_1<::Fusion::SimulationInput*>* const& __cordl_internal_get__pool() const;

constexpr ::System::Collections::Generic::Stack_1<::Fusion::SimulationInput*>*& __cordl_internal_get__pool() ;

constexpr void __cordl_internal_set__allocator(::Fusion::Allocator*  value) ;

constexpr void __cordl_internal_set__config(::Fusion::SimulationConfig*  value) ;

constexpr void __cordl_internal_set__created(::System::Collections::Generic::List_1<::Fusion::SimulationInput*>*  value) ;

constexpr void __cordl_internal_set__disposed(bool  value) ;

constexpr void __cordl_internal_set__pool(::System::Collections::Generic::Stack_1<::Fusion::SimulationInput*>*  value) ;

/// @brief Method .ctor, addr 0x6004348, size 0x114, virtual false, abstract: false, final false
inline void _ctor(::Fusion::SimulationConfig*  config, ::Fusion::Allocator*  allocator) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SimulationInput_Pool() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SimulationInput_Pool", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SimulationInput_Pool(SimulationInput_Pool && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SimulationInput_Pool", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SimulationInput_Pool(SimulationInput_Pool const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19341};

/// @brief Field _allocator, offset: 0x10, size: 0x8, def value: None
 ::Fusion::Allocator*  ____allocator;

/// @brief Field _pool, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::Stack_1<::Fusion::SimulationInput*>*  ____pool;

/// @brief Field _created, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Fusion::SimulationInput*>*  ____created;

/// @brief Field _config, offset: 0x28, size: 0x8, def value: None
 ::Fusion::SimulationConfig*  ____config;

/// @brief Field _disposed, offset: 0x30, size: 0x1, def value: None
 bool  ____disposed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::SimulationInput_Pool, ____allocator) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::SimulationInput_Pool, ____pool) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::SimulationInput_Pool, ____created) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Fusion::SimulationInput_Pool, ____config) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Fusion::SimulationInput_Pool, ____disposed) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Fusion::SimulationInput_Pool) == 0x38, "Size mismatch!");

} // namespace end def Fusion
// Dependencies Fusion.SimulationInputHeader, Fusion.TickRate::Resolved, System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.SimulationInput/Buffer
class CORDL_TYPE SimulationInput_Buffer : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_Full)) bool  Full;

/// @brief Field _cfg, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__cfg, put=__cordl_internal_set__cfg)) ::Fusion::NetworkProjectConfig*  _cfg;

/// @brief Field _lastUsedInputHeaderData, offset 0x38, size 0x10 
 __declspec(property(get=__cordl_internal_get__lastUsedInputHeaderData, put=__cordl_internal_set__lastUsedInputHeaderData)) ::Fusion::SimulationInputHeader  _lastUsedInputHeaderData;

/// @brief Field _map, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__map, put=__cordl_internal_set__map)) ::System::Collections::Generic::Dictionary_2<::Fusion::Tick,::Fusion::SimulationInput*>*  _map;

/// @brief Field _rate, offset 0x18, size 0x10 
 __declspec(property(get=__cordl_internal_get__rate, put=__cordl_internal_set__rate)) ::GlobalNamespace::TickRate_Resolved  _rate;

/// @brief Field _time, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__time, put=__cordl_internal_set__time)) ::System::Collections::Generic::Dictionary_2<::Fusion::Tick,double_t>*  _time;

/// @brief Method Add, addr 0x6004148, size 0x200, virtual false, abstract: false, final false
inline bool Add(::Fusion::SimulationInput*  input, ::System::Nullable_1<double_t>  insertTime) ;

/// @brief Method Clear, addr 0x6003c74, size 0x74, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method Contains, addr 0x6003e48, size 0x58, virtual false, abstract: false, final false
inline bool Contains(::Fusion::Tick  tick) ;

/// @brief Method CopySortedTo, addr 0x6003ce8, size 0x160, virtual false, abstract: false, final false
inline int32_t CopySortedTo(::ArrayW<::Fusion::SimulationInput*>  array) ;

/// @brief Method Get, addr 0x60040b4, size 0x88, virtual false, abstract: false, final false
inline ::Fusion::SimulationInput* Get(::Fusion::Tick  tick) ;

/// @brief Method GetInsertTime, addr 0x600400c, size 0xa8, virtual false, abstract: false, final false
inline ::System::Nullable_1<double_t> GetInsertTime(::Fusion::Tick  tick) ;

/// @brief Method GetLastUsedInputHeader, addr 0x600413c, size 0xc, virtual false, abstract: false, final false
inline ::Fusion::SimulationInputHeader GetLastUsedInputHeader() ;

static inline ::Fusion::SimulationInput_Buffer* New_ctor(::Fusion::NetworkProjectConfig*  cfg) ;

/// @brief Method Remove, addr 0x6003ea0, size 0x16c, virtual false, abstract: false, final false
inline bool Remove(::Fusion::Tick  tick, ::by_ref<::Fusion::SimulationInput*>  removed) ;

constexpr ::Fusion::NetworkProjectConfig* const& __cordl_internal_get__cfg() const;

constexpr ::Fusion::NetworkProjectConfig*& __cordl_internal_get__cfg() ;

constexpr ::Fusion::SimulationInputHeader const& __cordl_internal_get__lastUsedInputHeaderData() const;

constexpr ::Fusion::SimulationInputHeader& __cordl_internal_get__lastUsedInputHeaderData() ;

constexpr ::System::Collections::Generic::Dictionary_2<::Fusion::Tick,::Fusion::SimulationInput*>* const& __cordl_internal_get__map() const;

constexpr ::System::Collections::Generic::Dictionary_2<::Fusion::Tick,::Fusion::SimulationInput*>*& __cordl_internal_get__map() ;

constexpr ::GlobalNamespace::TickRate_Resolved const& __cordl_internal_get__rate() const;

constexpr ::GlobalNamespace::TickRate_Resolved& __cordl_internal_get__rate() ;

constexpr ::System::Collections::Generic::Dictionary_2<::Fusion::Tick,double_t>* const& __cordl_internal_get__time() const;

constexpr ::System::Collections::Generic::Dictionary_2<::Fusion::Tick,double_t>*& __cordl_internal_get__time() ;

constexpr void __cordl_internal_set__cfg(::Fusion::NetworkProjectConfig*  value) ;

constexpr void __cordl_internal_set__lastUsedInputHeaderData(::Fusion::SimulationInputHeader  value) ;

constexpr void __cordl_internal_set__map(::System::Collections::Generic::Dictionary_2<::Fusion::Tick,::Fusion::SimulationInput*>*  value) ;

constexpr void __cordl_internal_set__rate(::GlobalNamespace::TickRate_Resolved  value) ;

constexpr void __cordl_internal_set__time(::System::Collections::Generic::Dictionary_2<::Fusion::Tick,double_t>*  value) ;

/// @brief Method .ctor, addr 0x6003af8, size 0x17c, virtual false, abstract: false, final false
inline void _ctor(::Fusion::NetworkProjectConfig*  cfg) ;

/// @brief Method get_Count, addr 0x6003a48, size 0x50, virtual false, abstract: false, final false
inline int32_t get_Count() ;

/// @brief Method get_Full, addr 0x6003a98, size 0x60, virtual false, abstract: false, final false
inline bool get_Full() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SimulationInput_Buffer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SimulationInput_Buffer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SimulationInput_Buffer(SimulationInput_Buffer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SimulationInput_Buffer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SimulationInput_Buffer(SimulationInput_Buffer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19340};

/// @brief Field _cfg, offset: 0x10, size: 0x8, def value: None
 ::Fusion::NetworkProjectConfig*  ____cfg;

/// @brief Field _rate, offset: 0x18, size: 0x10, def value: None
 ::GlobalNamespace::TickRate_Resolved  ____rate;

/// @brief Field _map, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::Fusion::Tick,::Fusion::SimulationInput*>*  ____map;

/// @brief Field _time, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::Fusion::Tick,double_t>*  ____time;

/// @brief Field _lastUsedInputHeaderData, offset: 0x38, size: 0x10, def value: None
 ::Fusion::SimulationInputHeader  ____lastUsedInputHeaderData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::SimulationInput_Buffer, ____cfg) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::SimulationInput_Buffer, ____rate) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::SimulationInput_Buffer, ____map) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Fusion::SimulationInput_Buffer, ____time) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Fusion::SimulationInput_Buffer, ____lastUsedInputHeaderData) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Fusion::SimulationInput_Buffer) == 0x48, "Size mismatch!");

} // namespace end def Fusion
