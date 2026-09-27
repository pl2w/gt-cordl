#pragma once
// IWYU pragma private; include "GlobalNamespace/PushableSlider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PushableSlider)
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class PushableSlider;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PushableSlider*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PushableSlider*, "", "PushableSlider");
// Dependencies UnityEngine.Matrix4x4, UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: PushableSlider
class CORDL_TYPE PushableSlider : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _cachedProgress, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get__cachedProgress, put=__cordl_internal_set__cachedProgress)) float_t  _cachedProgress;

/// @brief Field _initialized, offset 0x88, size 0x1 
 __declspec(property(get=__cordl_internal_get__initialized, put=__cordl_internal_set__initialized)) bool  _initialized;

/// @brief Field _localSpace, offset 0x2c, size 0x40 
 __declspec(property(get=__cordl_internal_get__localSpace, put=__cordl_internal_set__localSpace)) ::UnityEngine::Matrix4x4  _localSpace;

/// @brief Field _previousLocalPosition, offset 0x78, size 0xc 
 __declspec(property(get=__cordl_internal_get__previousLocalPosition, put=__cordl_internal_set__previousLocalPosition)) ::UnityEngine::Vector3  _previousLocalPosition;

/// @brief Field _startingPos, offset 0x6c, size 0xc 
 __declspec(property(get=__cordl_internal_get__startingPos, put=__cordl_internal_set__startingPos)) ::UnityEngine::Vector3  _startingPos;

/// @brief Field farPushDist, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_farPushDist, put=__cordl_internal_set_farPushDist)) float_t  farPushDist;

/// @brief Field maxXOffset, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxXOffset, put=__cordl_internal_set_maxXOffset)) float_t  maxXOffset;

/// @brief Field minXOffset, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_minXOffset, put=__cordl_internal_set_minXOffset)) float_t  minXOffset;

/// @brief Method Awake, addr 0x5788cd4, size 0x4, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method GetProgress, addr 0x57884fc, size 0x98, virtual false, abstract: false, final false
inline float_t GetProgress() ;

/// @brief Method GetXOffsetVector, addr 0x5789060, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetXOffsetVector(float_t  x) ;

/// @brief Method Initialize, addr 0x5788cd8, size 0x7c, virtual false, abstract: false, final false
inline void Initialize() ;

static inline ::GlobalNamespace::PushableSlider* New_ctor() ;

/// @brief Method OnTriggerStay, addr 0x5788d54, size 0x30c, virtual false, abstract: false, final false
inline void OnTriggerStay(::UnityEngine::Collider*  other) ;

/// @brief Method SetProgress, addr 0x5787790, size 0x8c, virtual false, abstract: false, final false
inline void SetProgress(float_t  value) ;

constexpr float_t const& __cordl_internal_get__cachedProgress() const;

constexpr float_t& __cordl_internal_get__cachedProgress() ;

constexpr bool const& __cordl_internal_get__initialized() const;

constexpr bool& __cordl_internal_get__initialized() ;

constexpr ::UnityEngine::Matrix4x4 const& __cordl_internal_get__localSpace() const;

constexpr ::UnityEngine::Matrix4x4& __cordl_internal_get__localSpace() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__previousLocalPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__previousLocalPosition() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__startingPos() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__startingPos() ;

constexpr float_t const& __cordl_internal_get_farPushDist() const;

constexpr float_t& __cordl_internal_get_farPushDist() ;

constexpr float_t const& __cordl_internal_get_maxXOffset() const;

constexpr float_t& __cordl_internal_get_maxXOffset() ;

constexpr float_t const& __cordl_internal_get_minXOffset() const;

constexpr float_t& __cordl_internal_get_minXOffset() ;

constexpr void __cordl_internal_set__cachedProgress(float_t  value) ;

constexpr void __cordl_internal_set__initialized(bool  value) ;

constexpr void __cordl_internal_set__localSpace(::UnityEngine::Matrix4x4  value) ;

constexpr void __cordl_internal_set__previousLocalPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__startingPos(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_farPushDist(float_t  value) ;

constexpr void __cordl_internal_set_maxXOffset(float_t  value) ;

constexpr void __cordl_internal_set_minXOffset(float_t  value) ;

/// @brief Method .ctor, addr 0x5789068, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PushableSlider() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PushableSlider", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PushableSlider(PushableSlider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PushableSlider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PushableSlider(PushableSlider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1416};

/// [SerializeField]
/// @brief Field farPushDist, offset: 0x20, size: 0x4, def value: None
 float_t  ___farPushDist;

/// [SerializeField]
/// @brief Field maxXOffset, offset: 0x24, size: 0x4, def value: None
 float_t  ___maxXOffset;

/// [SerializeField]
/// @brief Field minXOffset, offset: 0x28, size: 0x4, def value: None
 float_t  ___minXOffset;

/// @brief Field _localSpace, offset: 0x2c, size: 0x40, def value: None
 ::UnityEngine::Matrix4x4  ____localSpace;

/// @brief Field _startingPos, offset: 0x6c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____startingPos;

/// @brief Field _previousLocalPosition, offset: 0x78, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____previousLocalPosition;

/// @brief Field _cachedProgress, offset: 0x84, size: 0x4, def value: None
 float_t  ____cachedProgress;

/// @brief Field _initialized, offset: 0x88, size: 0x1, def value: None
 bool  ____initialized;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PushableSlider, ___farPushDist) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PushableSlider, ___maxXOffset) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PushableSlider, ___minXOffset) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PushableSlider, ____localSpace) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PushableSlider, ____startingPos) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PushableSlider, ____previousLocalPosition) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PushableSlider, ____cachedProgress) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PushableSlider, ____initialized) == 0x88, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PushableSlider) == 0x90, "Size mismatch!");

} // namespace end def GlobalNamespace
