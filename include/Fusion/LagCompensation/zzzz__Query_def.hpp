#pragma once
// IWYU pragma private; include "Fusion/LagCompensation/Query.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__HitOptions_def.hpp"
#include "Fusion/zzzz__PlayerRef_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__QueryTriggerInteraction_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Query)
namespace Fusion::LagCompensation {
struct AABB;
}
namespace Fusion::LagCompensation {
struct HitboxCollider;
}
namespace Fusion::LagCompensation {
struct HitboxHit;
}
namespace Fusion::LagCompensation {
class IBoundsTraversalTest;
}
namespace Fusion::LagCompensation {
class IHitboxColliderContainer;
}
namespace Fusion::LagCompensation {
class PreProcessingDelegate;
}
namespace Fusion::LagCompensation {
struct QueryParams;
}
namespace Fusion {
struct HitOptions;
}
namespace Fusion {
struct LagCompensatedHit;
}
namespace Fusion {
class NetworkRunner;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Fusion::LagCompensation {
class Query;
}
// Write type traits
MARK_REF_T(::Fusion::LagCompensation::Query*);
DEFINE_IL2CPP_CLASS(::Fusion::LagCompensation::Query*, "Fusion.LagCompensation", "Query");
// Dependencies Fusion.HitOptions, Fusion.PlayerRef, System.Nullable`1<T>, System.Object, UnityEngine.LayerMask, UnityEngine.QueryTriggerInteraction
namespace Fusion::LagCompensation {
// Is value type: false
// CS Name: Fusion.LagCompensation.Query
class CORDL_TYPE Query : public ::System::Object {
public:
// Declarations
/// @brief Field Alpha, offset 0x38, size 0x10 
 __declspec(property(get=__cordl_internal_get_Alpha, put=__cordl_internal_set_Alpha)) ::System::Nullable_1<float_t>  Alpha;

/// @brief Field LayerMask, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_LayerMask, put=__cordl_internal_set_LayerMask)) ::UnityEngine::LayerMask  LayerMask;

/// @brief Field Options, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_Options, put=__cordl_internal_set_Options)) ::Fusion::HitOptions  Options;

/// @brief Field Player, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_Player, put=__cordl_internal_set_Player)) ::Fusion::PlayerRef  Player;

/// @brief Field PreProcessingDelegate, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_PreProcessingDelegate, put=__cordl_internal_set_PreProcessingDelegate)) ::Fusion::LagCompensation::PreProcessingDelegate*  PreProcessingDelegate;

/// @brief Field Tick, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get_Tick, put=__cordl_internal_set_Tick)) ::System::Nullable_1<int32_t>  Tick;

/// @brief Field TickTo, offset 0x48, size 0x10 
 __declspec(property(get=__cordl_internal_get_TickTo, put=__cordl_internal_set_TickTo)) ::System::Nullable_1<int32_t>  TickTo;

/// @brief Field TriggerInteraction, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_TriggerInteraction, put=__cordl_internal_set_TriggerInteraction)) ::UnityEngine::QueryTriggerInteraction  TriggerInteraction;

/// @brief Field UserArgs, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_UserArgs, put=__cordl_internal_set_UserArgs)) void*  UserArgs;

/// @brief Convert operator to "::Fusion::LagCompensation::IBoundsTraversalTest"
constexpr operator  ::Fusion::LagCompensation::IBoundsTraversalTest*() noexcept;

/// @brief Method Check, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool Check(::by_ref<::Fusion::LagCompensation::AABB>  bounds) ;

/// @brief Method CreateHitboxHit, addr 0x601ca54, size 0x8c, virtual false, abstract: false, final false
inline ::Fusion::LagCompensation::HitboxHit CreateHitboxHit(::by_ref<::Fusion::LagCompensation::HitboxCollider>  collider, ::UnityEngine::Vector3  point, float_t  distance, ::UnityEngine::Vector3  normal) ;

/// @brief Method Fusion.LagCompensation.IBoundsTraversalTest.Check, addr 0x601cf84, size 0xc, virtual true, abstract: false, final true
inline bool Fusion_LagCompensation_IBoundsTraversalTest_Check(::by_ref<::Fusion::LagCompensation::AABB>  bounds) ;

/// @brief Method NarrowPhase, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool NarrowPhase(::Fusion::LagCompensation::IHitboxColliderContainer*  container, ::System::Collections::Generic::HashSet_1<int32_t>*  candidates, ::System::Collections::Generic::List_1<::Fusion::LagCompensation::HitboxHit>*  hits) ;

static inline ::Fusion::LagCompensation::Query* New_ctor(::by_ref<::Fusion::LagCompensation::QueryParams>  qParams) ;

/// @brief Method PerformStaticQuery, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void PerformStaticQuery(::Fusion::NetworkRunner*  runner, ::System::Collections::Generic::List_1<::Fusion::LagCompensatedHit>*  hits, ::Fusion::HitOptions  options) ;

constexpr ::System::Nullable_1<float_t> const& __cordl_internal_get_Alpha() const;

constexpr ::System::Nullable_1<float_t>& __cordl_internal_get_Alpha() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_LayerMask() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_LayerMask() ;

constexpr ::Fusion::HitOptions const& __cordl_internal_get_Options() const;

constexpr ::Fusion::HitOptions& __cordl_internal_get_Options() ;

constexpr ::Fusion::PlayerRef const& __cordl_internal_get_Player() const;

constexpr ::Fusion::PlayerRef& __cordl_internal_get_Player() ;

constexpr ::Fusion::LagCompensation::PreProcessingDelegate* const& __cordl_internal_get_PreProcessingDelegate() const;

constexpr ::Fusion::LagCompensation::PreProcessingDelegate*& __cordl_internal_get_PreProcessingDelegate() ;

constexpr ::System::Nullable_1<int32_t> const& __cordl_internal_get_Tick() const;

constexpr ::System::Nullable_1<int32_t>& __cordl_internal_get_Tick() ;

constexpr ::System::Nullable_1<int32_t> const& __cordl_internal_get_TickTo() const;

constexpr ::System::Nullable_1<int32_t>& __cordl_internal_get_TickTo() ;

constexpr ::UnityEngine::QueryTriggerInteraction const& __cordl_internal_get_TriggerInteraction() const;

constexpr ::UnityEngine::QueryTriggerInteraction& __cordl_internal_get_TriggerInteraction() ;

constexpr void* const& __cordl_internal_get_UserArgs() const;

constexpr void*& __cordl_internal_get_UserArgs() ;

constexpr void __cordl_internal_set_Alpha(::System::Nullable_1<float_t>  value) ;

constexpr void __cordl_internal_set_LayerMask(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set_Options(::Fusion::HitOptions  value) ;

constexpr void __cordl_internal_set_Player(::Fusion::PlayerRef  value) ;

constexpr void __cordl_internal_set_PreProcessingDelegate(::Fusion::LagCompensation::PreProcessingDelegate*  value) ;

constexpr void __cordl_internal_set_Tick(::System::Nullable_1<int32_t>  value) ;

constexpr void __cordl_internal_set_TickTo(::System::Nullable_1<int32_t>  value) ;

constexpr void __cordl_internal_set_TriggerInteraction(::UnityEngine::QueryTriggerInteraction  value) ;

constexpr void __cordl_internal_set_UserArgs(void*  value) ;

/// @brief Method .ctor, addr 0x601c034, size 0xbc, virtual false, abstract: false, final false
inline void _ctor(::by_ref<::Fusion::LagCompensation::QueryParams>  qParams) ;

/// @brief Convert to "::Fusion::LagCompensation::IBoundsTraversalTest"
constexpr ::Fusion::LagCompensation::IBoundsTraversalTest* i___Fusion__LagCompensation__IBoundsTraversalTest() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Query() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Query", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Query(Query && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Query", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Query(Query const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19422};

/// @brief Field TriggerInteraction, offset: 0x10, size: 0x4, def value: None
 ::UnityEngine::QueryTriggerInteraction  ___TriggerInteraction;

/// @brief Field Options, offset: 0x14, size: 0x4, def value: None
 ::Fusion::HitOptions  ___Options;

/// @brief Field LayerMask, offset: 0x18, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___LayerMask;

/// @brief Field Player, offset: 0x1c, size: 0x4, def value: None
 ::Fusion::PlayerRef  ___Player;

/// @brief Field Tick, offset: 0x20, size: 0x10, def value: None
 ::System::Nullable_1<int32_t>  ___Tick;

/// @brief Field UserArgs, offset: 0x30, size: 0x8, def value: None
 void*  ___UserArgs;

/// @brief Field Alpha, offset: 0x38, size: 0x10, def value: None
 ::System::Nullable_1<float_t>  ___Alpha;

/// @brief Field TickTo, offset: 0x48, size: 0x10, def value: None
 ::System::Nullable_1<int32_t>  ___TickTo;

/// @brief Size padding 0x48 - 0x60 = 0x18, packed as 0x18
 uint8_t  _cordl_size_padding[0x18];

/// @brief Field PreProcessingDelegate, offset: 0x58, size: 0x8, def value: None
 ::Fusion::LagCompensation::PreProcessingDelegate*  ___PreProcessingDelegate;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::LagCompensation::Query, ___TriggerInteraction) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::LagCompensation::Query, ___Options) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Fusion::LagCompensation::Query, ___LayerMask) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::LagCompensation::Query, ___Player) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Fusion::LagCompensation::Query, ___Tick) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Fusion::LagCompensation::Query, ___UserArgs) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Fusion::LagCompensation::Query, ___Alpha) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Fusion::LagCompensation::Query, ___TickTo) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Fusion::LagCompensation::Query, ___PreProcessingDelegate) == 0x58, "Offset mismatch!");

static_assert(sizeof(::Fusion::LagCompensation::Query) == 0x48, "Size mismatch!");

} // namespace end def Fusion::LagCompensation
