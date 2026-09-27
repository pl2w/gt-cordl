#pragma once
// IWYU pragma private; include "GlobalNamespace/CallLimiter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CallLimiter)
// Forward declare root types
namespace GlobalNamespace {
class CallLimiter;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CallLimiter*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CallLimiter*, "", "CallLimiter");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: CallLimiter
class CORDL_TYPE CallLimiter : public ::System::Object {
public:
// Declarations
/// @brief Field blockCall, offset 0x2c, size 0x1 
 __declspec(property(get=__cordl_internal_get_blockCall, put=__cordl_internal_set_blockCall)) bool  blockCall;

/// @brief Field blockStartTime, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_blockStartTime, put=__cordl_internal_set_blockStartTime)) float_t  blockStartTime;

/// @brief Field callHistoryLength, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_callHistoryLength, put=__cordl_internal_set_callHistoryLength)) int32_t  callHistoryLength;

/// @brief Field callTimeHistory, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_callTimeHistory, put=__cordl_internal_set_callTimeHistory)) ::ArrayW<float_t>  callTimeHistory;

/// @brief Field maxLatency, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_maxLatency, put=__cordl_internal_set_maxLatency)) double_t  maxLatency;

/// @brief Field oldTimeIndex, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_oldTimeIndex, put=__cordl_internal_set_oldTimeIndex)) int32_t  oldTimeIndex;

/// @brief Field timeCooldown, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_timeCooldown, put=__cordl_internal_set_timeCooldown)) float_t  timeCooldown;

/// @brief Method CheckCallServerTime, addr 0x5ac40a8, size 0x158, virtual false, abstract: false, final false
inline bool CheckCallServerTime(double_t  time) ;

/// @brief Method CheckCallTime, addr 0x5ac4200, size 0x7c, virtual true, abstract: false, final false
inline bool CheckCallTime(float_t  time) ;

/// @brief Method GetCopy, addr 0x5ac4034, size 0x74, virtual true, abstract: false, final false
inline ::GlobalNamespace::CallLimiter* GetCopy() ;

static inline ::GlobalNamespace::CallLimiter* New_ctor() ;

static inline ::GlobalNamespace::CallLimiter* New_ctor(int32_t  historyLength, float_t  coolDown, float_t  latencyMax) ;

/// @brief Method Reset, addr 0x5ac427c, size 0x50, virtual true, abstract: false, final false
inline void Reset() ;

constexpr bool const& __cordl_internal_get_blockCall() const;

constexpr bool& __cordl_internal_get_blockCall() ;

constexpr float_t const& __cordl_internal_get_blockStartTime() const;

constexpr float_t& __cordl_internal_get_blockStartTime() ;

constexpr int32_t const& __cordl_internal_get_callHistoryLength() const;

constexpr int32_t& __cordl_internal_get_callHistoryLength() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get_callTimeHistory() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get_callTimeHistory() ;

constexpr double_t const& __cordl_internal_get_maxLatency() const;

constexpr double_t& __cordl_internal_get_maxLatency() ;

constexpr int32_t const& __cordl_internal_get_oldTimeIndex() const;

constexpr int32_t& __cordl_internal_get_oldTimeIndex() ;

constexpr float_t const& __cordl_internal_get_timeCooldown() const;

constexpr float_t& __cordl_internal_get_timeCooldown() ;

constexpr void __cordl_internal_set_blockCall(bool  value) ;

constexpr void __cordl_internal_set_blockStartTime(float_t  value) ;

constexpr void __cordl_internal_set_callHistoryLength(int32_t  value) ;

constexpr void __cordl_internal_set_callTimeHistory(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set_maxLatency(double_t  value) ;

constexpr void __cordl_internal_set_oldTimeIndex(int32_t  value) ;

constexpr void __cordl_internal_set_timeCooldown(float_t  value) ;

/// @brief Method .ctor, addr 0x5ac3f58, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x5ac3f60, size 0xd4, virtual false, abstract: false, final false
inline void _ctor(int32_t  historyLength, float_t  coolDown, float_t  latencyMax) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CallLimiter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CallLimiter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CallLimiter(CallLimiter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CallLimiter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CallLimiter(CallLimiter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3359};

/// @brief Field k_serverMaxTime offset 0xffffffff size 0x8
static constexpr double_t  k_serverMaxTime{static_cast<double_t>(4294967.295)};

/// [SerializeField]
/// @brief Field callTimeHistory, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<float_t>  ___callTimeHistory;

/// [Space]
/// [SerializeField]
/// @brief Field callHistoryLength, offset: 0x18, size: 0x4, def value: None
 int32_t  ___callHistoryLength;

/// [SerializeField]
/// @brief Field timeCooldown, offset: 0x1c, size: 0x4, def value: None
 float_t  ___timeCooldown;

/// [SerializeField]
/// @brief Field maxLatency, offset: 0x20, size: 0x8, def value: None
 double_t  ___maxLatency;

/// @brief Field oldTimeIndex, offset: 0x28, size: 0x4, def value: None
 int32_t  ___oldTimeIndex;

/// @brief Field blockCall, offset: 0x2c, size: 0x1, def value: None
 bool  ___blockCall;

/// @brief Field blockStartTime, offset: 0x30, size: 0x4, def value: None
 float_t  ___blockStartTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CallLimiter, ___callTimeHistory) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CallLimiter, ___callHistoryLength) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CallLimiter, ___timeCooldown) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CallLimiter, ___maxLatency) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CallLimiter, ___oldTimeIndex) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CallLimiter, ___blockCall) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CallLimiter, ___blockStartTime) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CallLimiter) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
