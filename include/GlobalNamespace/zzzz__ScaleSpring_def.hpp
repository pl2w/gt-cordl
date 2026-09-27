#pragma once
// IWYU pragma private; include "GlobalNamespace/ScaleSpring.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BoingKit/zzzz__Vector3Spring_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ScaleSpring)
// Forward declare root types
namespace GlobalNamespace {
class ScaleSpring;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ScaleSpring*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ScaleSpring*, "", "ScaleSpring");
// Dependencies BoingKit.Vector3Spring, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: ScaleSpring
class CORDL_TYPE ScaleSpring : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field kInterval, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_kInterval, put=setStaticF_kInterval)) float_t  kInterval;

/// @brief Field kLargeScale, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_kLargeScale, put=setStaticF_kLargeScale)) float_t  kLargeScale;

/// @brief Field kMoveDistance, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_kMoveDistance, put=setStaticF_kMoveDistance)) float_t  kMoveDistance;

/// @brief Field kSmallScale, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_kSmallScale, put=setStaticF_kSmallScale)) float_t  kSmallScale;

/// @brief Field m_lastTickTime, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_lastTickTime, put=__cordl_internal_set_m_lastTickTime)) float_t  m_lastTickTime;

/// @brief Field m_spring, offset 0x20, size 0x20 
 __declspec(property(get=__cordl_internal_get_m_spring, put=__cordl_internal_set_m_spring)) ::BoingKit::Vector3Spring  m_spring;

/// @brief Field m_targetScale, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_targetScale, put=__cordl_internal_set_m_targetScale)) float_t  m_targetScale;

/// @brief Method FixedUpdate, addr 0x55e8d40, size 0x1ac, virtual false, abstract: false, final false
inline void FixedUpdate() ;

static inline ::GlobalNamespace::ScaleSpring* New_ctor() ;

/// @brief Method Start, addr 0x55e8c88, size 0xb8, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Tick, addr 0x55e8b70, size 0x118, virtual false, abstract: false, final false
inline void Tick() ;

constexpr float_t const& __cordl_internal_get_m_lastTickTime() const;

constexpr float_t& __cordl_internal_get_m_lastTickTime() ;

constexpr ::BoingKit::Vector3Spring const& __cordl_internal_get_m_spring() const;

constexpr ::BoingKit::Vector3Spring& __cordl_internal_get_m_spring() ;

constexpr float_t const& __cordl_internal_get_m_targetScale() const;

constexpr float_t& __cordl_internal_get_m_targetScale() ;

constexpr void __cordl_internal_set_m_lastTickTime(float_t  value) ;

constexpr void __cordl_internal_set_m_spring(::BoingKit::Vector3Spring  value) ;

constexpr void __cordl_internal_set_m_targetScale(float_t  value) ;

/// @brief Method .ctor, addr 0x55e8eec, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline float_t getStaticF_kInterval() ;

static inline float_t getStaticF_kLargeScale() ;

static inline float_t getStaticF_kMoveDistance() ;

static inline float_t getStaticF_kSmallScale() ;

static inline void setStaticF_kInterval(float_t  value) ;

static inline void setStaticF_kLargeScale(float_t  value) ;

static inline void setStaticF_kMoveDistance(float_t  value) ;

static inline void setStaticF_kSmallScale(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ScaleSpring() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ScaleSpring", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ScaleSpring(ScaleSpring && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ScaleSpring", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ScaleSpring(ScaleSpring const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32};

/// @brief Field m_spring, offset: 0x20, size: 0x20, def value: None
 ::BoingKit::Vector3Spring  ___m_spring;

/// @brief Field m_targetScale, offset: 0x40, size: 0x4, def value: None
 float_t  ___m_targetScale;

/// @brief Field m_lastTickTime, offset: 0x44, size: 0x4, def value: None
 float_t  ___m_lastTickTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ScaleSpring, ___m_spring) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScaleSpring, ___m_targetScale) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScaleSpring, ___m_lastTickTime) == 0x44, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ScaleSpring) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
