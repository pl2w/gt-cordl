#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/NetworkedRandomProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTag/Cosmetics/zzzz__NetworkedRandomProvider_OutputMode_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkedRandomProvider)
namespace GlobalNamespace {
struct NetworkedRandomProvider_OutputMode;
}
namespace GlobalNamespace {
class TransferrableObject;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GorillaTag::Cosmetics {
class NetworkedRandomProvider;
}
// Write type traits
MARK_REF_T(::GorillaTag::Cosmetics::NetworkedRandomProvider*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Cosmetics::NetworkedRandomProvider*, "GorillaTag.Cosmetics", "NetworkedRandomProvider");
// Dependencies GorillaTag.Cosmetics.NetworkedRandomProvider::OutputMode, UnityEngine.MonoBehaviour, UnityEngine.Vector2
namespace GorillaTag::Cosmetics {
// Is value type: false
// CS Name: GorillaTag.Cosmetics.NetworkedRandomProvider
class CORDL_TYPE NetworkedRandomProvider : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using OutputMode = ::GlobalNamespace::NetworkedRandomProvider_OutputMode;

/// @brief Field OwnerID, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_OwnerID, put=__cordl_internal_set_OwnerID)) int32_t  OwnerID;

/// @brief Field debugResult, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_debugResult, put=__cordl_internal_set_debugResult)) float_t  debugResult;

/// @brief Field debugWindow, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_debugWindow, put=__cordl_internal_set_debugWindow)) int64_t  debugWindow;

/// @brief Field doubleMax, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_doubleMax, put=__cordl_internal_set_doubleMax)) double_t  doubleMax;

/// @brief Field doubleMin, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_doubleMin, put=__cordl_internal_set_doubleMin)) double_t  doubleMin;

/// @brief Field floatRange, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_floatRange, put=__cordl_internal_set_floatRange)) ::UnityEngine::Vector2  floatRange;

/// @brief Field includeRoomNameInSeed, offset 0x24, size 0x1 
 __declspec(property(get=__cordl_internal_get_includeRoomNameInSeed, put=__cordl_internal_set_includeRoomNameInSeed)) bool  includeRoomNameInSeed;

/// @brief Field objectSalt, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_objectSalt, put=__cordl_internal_set_objectSalt)) int32_t  objectSalt;

/// @brief Field outputMode, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_outputMode, put=__cordl_internal_set_outputMode)) ::GlobalNamespace::NetworkedRandomProvider_OutputMode  outputMode;

/// @brief Field parentTransferable, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_parentTransferable, put=__cordl_internal_set_parentTransferable)) ::UnityW<::GlobalNamespace::TransferrableObject>  parentTransferable;

/// @brief Field windowSeconds, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_windowSeconds, put=__cordl_internal_set_windowSeconds)) float_t  windowSeconds;

/// @brief Method Awake, addr 0x5d99b78, size 0xa4, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method BuildSeed, addr 0x5d99e84, size 0x40, virtual false, abstract: false, final false
static inline uint64_t BuildSeed(int64_t  windowIndex, int32_t  ownerId, int32_t  objectSalt, uint32_t  roomSalt) ;

/// @brief Method EnsureOwner, addr 0x5d99c2c, size 0x10, virtual false, abstract: false, final false
inline void EnsureOwner() ;

/// @brief Method GetHierarchyPath, addr 0x5d9a6c4, size 0x158, virtual false, abstract: false, final false
static inline ::StringW GetHierarchyPath(::UnityEngine::Transform*  t) ;

/// @brief Method GetSelectedAsDouble, addr 0x5d9a424, size 0x90, virtual false, abstract: false, final false
inline double_t GetSelectedAsDouble() ;

/// @brief Method GetSelectedAsFloat, addr 0x5d9a394, size 0x90, virtual false, abstract: false, final false
inline float_t GetSelectedAsFloat() ;

/// @brief Method GetSharedTime, addr 0x5d99d0c, size 0x84, virtual false, abstract: false, final false
inline double_t GetSharedTime() ;

/// @brief Method GetWindowIndex, addr 0x5d99db0, size 0x88, virtual false, abstract: false, final false
inline int64_t GetWindowIndex() ;

/// @brief Method Mix64, addr 0x5d99e38, size 0x4c, virtual false, abstract: false, final false
static inline uint64_t Mix64(uint64_t  x) ;

static inline ::GorillaTag::Cosmetics::NetworkedRandomProvider* New_ctor() ;

/// @brief Method NextDouble, addr 0x5d9a200, size 0x194, virtual false, abstract: false, final false
inline double_t NextDouble(double_t  min, double_t  max) ;

/// @brief Method NextFloat, addr 0x5d9a1b0, size 0x50, virtual false, abstract: false, final false
inline float_t NextFloat(float_t  min, float_t  max) ;

/// @brief Method NextFloat01, addr 0x5d99fc0, size 0x164, virtual false, abstract: false, final false
inline float_t NextFloat01() ;

/// @brief Method OnEnable, addr 0x5d99c1c, size 0x10, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnValidate, addr 0x5d99c3c, size 0x44, virtual false, abstract: false, final false
inline void OnValidate() ;

/// @brief Method ShowDoubleRange, addr 0x5d99da0, size 0x10, virtual false, abstract: false, final false
inline bool ShowDoubleRange() ;

/// @brief Method ShowFloatRange, addr 0x5d99d90, size 0x10, virtual false, abstract: false, final false
inline bool ShowFloatRange() ;

/// @brief Method StableHash, addr 0x5d9a124, size 0x8c, virtual false, abstract: false, final false
static inline uint32_t StableHash(::StringW  s) ;

/// @brief Method TrySetID, addr 0x5d9a4b4, size 0x210, virtual false, abstract: false, final false
inline void TrySetID() ;

/// @brief Method UnitDouble01, addr 0x5d99f40, size 0x80, virtual false, abstract: false, final false
static inline double_t UnitDouble01(int64_t  windowIndex, int32_t  ownerId, int32_t  objectSalt, uint32_t  roomSalt) ;

/// @brief Method UnitFloat01, addr 0x5d99ec4, size 0x7c, virtual false, abstract: false, final false
static inline float_t UnitFloat01(int64_t  windowIndex, int32_t  ownerId, int32_t  objectSalt, uint32_t  roomSalt) ;

/// @brief Method Update, addr 0x5d99c80, size 0x8c, virtual false, abstract: false, final false
inline void Update() ;

constexpr int32_t const& __cordl_internal_get_OwnerID() const;

constexpr int32_t& __cordl_internal_get_OwnerID() ;

constexpr float_t const& __cordl_internal_get_debugResult() const;

constexpr float_t& __cordl_internal_get_debugResult() ;

constexpr int64_t const& __cordl_internal_get_debugWindow() const;

constexpr int64_t& __cordl_internal_get_debugWindow() ;

constexpr double_t const& __cordl_internal_get_doubleMax() const;

constexpr double_t& __cordl_internal_get_doubleMax() ;

constexpr double_t const& __cordl_internal_get_doubleMin() const;

constexpr double_t& __cordl_internal_get_doubleMin() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_floatRange() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_floatRange() ;

constexpr bool const& __cordl_internal_get_includeRoomNameInSeed() const;

constexpr bool& __cordl_internal_get_includeRoomNameInSeed() ;

constexpr int32_t const& __cordl_internal_get_objectSalt() const;

constexpr int32_t& __cordl_internal_get_objectSalt() ;

constexpr ::GlobalNamespace::NetworkedRandomProvider_OutputMode const& __cordl_internal_get_outputMode() const;

constexpr ::GlobalNamespace::NetworkedRandomProvider_OutputMode& __cordl_internal_get_outputMode() ;

constexpr ::UnityW<::GlobalNamespace::TransferrableObject> const& __cordl_internal_get_parentTransferable() const;

constexpr ::UnityW<::GlobalNamespace::TransferrableObject>& __cordl_internal_get_parentTransferable() ;

constexpr float_t const& __cordl_internal_get_windowSeconds() const;

constexpr float_t& __cordl_internal_get_windowSeconds() ;

constexpr void __cordl_internal_set_OwnerID(int32_t  value) ;

constexpr void __cordl_internal_set_debugResult(float_t  value) ;

constexpr void __cordl_internal_set_debugWindow(int64_t  value) ;

constexpr void __cordl_internal_set_doubleMax(double_t  value) ;

constexpr void __cordl_internal_set_doubleMin(double_t  value) ;

constexpr void __cordl_internal_set_floatRange(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_includeRoomNameInSeed(bool  value) ;

constexpr void __cordl_internal_set_objectSalt(int32_t  value) ;

constexpr void __cordl_internal_set_outputMode(::GlobalNamespace::NetworkedRandomProvider_OutputMode  value) ;

constexpr void __cordl_internal_set_parentTransferable(::UnityW<::GlobalNamespace::TransferrableObject>  value) ;

constexpr void __cordl_internal_set_windowSeconds(float_t  value) ;

/// @brief Method .ctor, addr 0x5d9a81c, size 0x2c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkedRandomProvider() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkedRandomProvider", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkedRandomProvider(NetworkedRandomProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkedRandomProvider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkedRandomProvider(NetworkedRandomProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4951};

/// [Header("Time Granularity")]
/// [Min(0.01)]
/// [Tooltip("Length of the time bucket (seconds). Within a bucket the pick is fixed; re-rolls next bucket.")]
/// [SerializeField]
/// @brief Field windowSeconds, offset: 0x20, size: 0x4, def value: None
 float_t  ___windowSeconds;

/// [Tooltip("Mix room name into seed so different rooms never collide.")]
/// [SerializeField]
/// @brief Field includeRoomNameInSeed, offset: 0x24, size: 0x1, def value: None
 bool  ___includeRoomNameInSeed;

/// [Tooltip("Optional - If multiple component live on the same cosmetic, use different salts.")]
/// [SerializeField]
/// @brief Field objectSalt, offset: 0x28, size: 0x4, def value: None
 int32_t  ___objectSalt;

/// [Header("Output")]
/// [SerializeField]
/// @brief Field outputMode, offset: 0x2c, size: 0x4, def value: None
 ::GlobalNamespace::NetworkedRandomProvider_OutputMode  ___outputMode;

/// [SerializeField]
/// @brief Field floatRange, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___floatRange;

/// [SerializeField]
/// @brief Field doubleMin, offset: 0x38, size: 0x8, def value: None
 double_t  ___doubleMin;

/// [SerializeField]
/// @brief Field doubleMax, offset: 0x40, size: 0x8, def value: None
 double_t  ___doubleMax;

/// @brief Field parentTransferable, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::TransferrableObject>  ___parentTransferable;

/// @brief Field OwnerID, offset: 0x50, size: 0x4, def value: None
 int32_t  ___OwnerID;

/// [Header("Debug")]
/// [SerializeField]
/// @brief Field debugWindow, offset: 0x58, size: 0x8, def value: None
 int64_t  ___debugWindow;

/// [SerializeField]
/// @brief Field debugResult, offset: 0x60, size: 0x4, def value: None
 float_t  ___debugResult;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Cosmetics::NetworkedRandomProvider, ___windowSeconds) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::NetworkedRandomProvider, ___includeRoomNameInSeed) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::NetworkedRandomProvider, ___objectSalt) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::NetworkedRandomProvider, ___outputMode) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::NetworkedRandomProvider, ___floatRange) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::NetworkedRandomProvider, ___doubleMin) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::NetworkedRandomProvider, ___doubleMax) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::NetworkedRandomProvider, ___parentTransferable) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::NetworkedRandomProvider, ___OwnerID) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::NetworkedRandomProvider, ___debugWindow) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::NetworkedRandomProvider, ___debugResult) == 0x60, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Cosmetics::NetworkedRandomProvider) == 0x68, "Size mismatch!");

} // namespace end def GorillaTag::Cosmetics
