#pragma once
// IWYU pragma private; include "Fusion/TickTimer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TickTimer)
namespace Fusion {
class INetworkStruct;
}
namespace Fusion {
class NetworkRunner;
}
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace Fusion {
struct TickTimer;
}
// Write type traits
MARK_VAL_T(::Fusion::TickTimer);
DEFINE_IL2CPP_CLASS(::Fusion::TickTimer, "Fusion", "TickTimer");
// [NetworkStructWeaved(1)]
// Dependencies 
namespace Fusion {
// Is value type: true
// CS Name: Fusion.TickTimer
struct CORDL_TYPE TickTimer {
public:
// Declarations
 __declspec(property(get=get_IsRunning)) bool  IsRunning;

 __declspec(property(get=get_TargetTick)) ::System::Nullable_1<int32_t>  TargetTick;

/// @brief Field _target, offset 0x0, size 0x4 
 __declspec(property(get=__cordl_internal_get__target, put=__cordl_internal_set__target)) int32_t  _target;

/// @brief Convert operator to "::Fusion::INetworkStruct"
constexpr operator  ::Fusion::INetworkStruct*() ;

/// @brief Method CreateFromSeconds, addr 0x5fa673c, size 0x104, virtual false, abstract: false, final false
static inline ::Fusion::TickTimer CreateFromSeconds(::Fusion::NetworkRunner*  runner, float_t  delayInSeconds) ;

/// @brief Method CreateFromTicks, addr 0x5fa6840, size 0x94, virtual false, abstract: false, final false
static inline ::Fusion::TickTimer CreateFromTicks(::Fusion::NetworkRunner*  runner, int32_t  ticks) ;

/// @brief Method Expired, addr 0x5fa644c, size 0xa4, virtual false, abstract: false, final false
inline bool Expired(::Fusion::NetworkRunner*  runner) ;

/// @brief Method ExpiredOrNotRunning, addr 0x5fa64f0, size 0x54, virtual false, abstract: false, final false
inline bool ExpiredOrNotRunning(::Fusion::NetworkRunner*  runner) ;

/// @brief Method RemainingTicks, addr 0x5fa6544, size 0x128, virtual false, abstract: false, final false
inline ::System::Nullable_1<int32_t> RemainingTicks(::Fusion::NetworkRunner*  runner) ;

/// @brief Method RemainingTime, addr 0x5fa666c, size 0xd0, virtual false, abstract: false, final false
inline ::System::Nullable_1<float_t> RemainingTime(::Fusion::NetworkRunner*  runner) ;

/// @brief Method ToString, addr 0x5fa68d4, size 0x8, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr int32_t const& __cordl_internal_get__target() const;

constexpr int32_t& __cordl_internal_get__target() ;

constexpr void __cordl_internal_set__target(int32_t  value) ;

/// @brief Method get_IsRunning, addr 0x5fa63d8, size 0x10, virtual false, abstract: false, final false
inline bool get_IsRunning() ;

/// @brief Method get_None, addr 0x5fa63d0, size 0x8, virtual false, abstract: false, final false
static inline ::Fusion::TickTimer get_None() ;

/// @brief Method get_TargetTick, addr 0x5fa63e8, size 0x64, virtual false, abstract: false, final false
inline ::System::Nullable_1<int32_t> get_TargetTick() ;

/// @brief Convert to "::Fusion::INetworkStruct"
constexpr ::Fusion::INetworkStruct* i___Fusion__INetworkStruct() ;

// Ctor Parameters []
// @brief default ctor
constexpr TickTimer() ;

// Ctor Parameters [CppParam { name: "_target", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr TickTimer(int32_t  _target) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ____target_padding[0x0];
/// @brief Field _target, offset: 0x0, size: 0x4, def value: None
 int32_t  ____target;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ____target_padding_forAlignment[0x0];
/// @brief Field _target, offset: 0x0, size: 0x4, def value: None
 int32_t  ____target_forAlignment;
};
};
public:

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19109};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(sizeof(::Fusion::TickTimer) == 0x4, "Size mismatch!");

} // namespace end def Fusion
