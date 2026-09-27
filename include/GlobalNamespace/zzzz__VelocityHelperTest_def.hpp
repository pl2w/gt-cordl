#pragma once
// IWYU pragma private; include "GlobalNamespace/VelocityHelperTest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(VelocityHelperTest)
// Forward declare root types
namespace GlobalNamespace {
class VelocityHelperTest;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::VelocityHelperTest*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VelocityHelperTest*, "", "VelocityHelperTest");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: VelocityHelperTest
class CORDL_TYPE VelocityHelperTest : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _deltaTimes, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__deltaTimes, put=__cordl_internal_set__deltaTimes)) ::ArrayW<float_t>  _deltaTimes;

/// @brief Field lastPosition, offset 0x3c, size 0xc 
 __declspec(property(get=__cordl_internal_get_lastPosition, put=__cordl_internal_set_lastPosition)) ::UnityEngine::Vector3  lastPosition;

/// @brief Field lastVelocity, offset 0x30, size 0xc 
 __declspec(property(get=__cordl_internal_get_lastVelocity, put=__cordl_internal_set_lastVelocity)) ::UnityEngine::Vector3  lastVelocity;

/// @brief Field speed, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_speed, put=__cordl_internal_set_speed)) float_t  speed;

/// @brief Field velocity, offset 0x20, size 0xc 
 __declspec(property(get=__cordl_internal_get_velocity, put=__cordl_internal_set_velocity)) ::UnityEngine::Vector3  velocity;

/// @brief Method FixedUpdate, addr 0x5a22630, size 0x158, virtual false, abstract: false, final false
inline void FixedUpdate() ;

static inline ::GlobalNamespace::VelocityHelperTest* New_ctor() ;

/// @brief Method Setup, addr 0x5a2259c, size 0x90, virtual false, abstract: false, final false
inline void Setup() ;

/// @brief Method Start, addr 0x5a2262c, size 0x4, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x5a22788, size 0x4, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get__deltaTimes() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get__deltaTimes() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_lastPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_lastPosition() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_lastVelocity() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_lastVelocity() ;

constexpr float_t const& __cordl_internal_get_speed() const;

constexpr float_t& __cordl_internal_get_speed() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_velocity() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_velocity() ;

constexpr void __cordl_internal_set__deltaTimes(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set_lastPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_lastVelocity(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_speed(float_t  value) ;

constexpr void __cordl_internal_set_velocity(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0x5a2278c, size 0x64, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VelocityHelperTest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VelocityHelperTest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VelocityHelperTest(VelocityHelperTest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VelocityHelperTest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VelocityHelperTest(VelocityHelperTest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2847};

/// @brief Field velocity, offset: 0x20, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___velocity;

/// @brief Field speed, offset: 0x2c, size: 0x4, def value: None
 float_t  ___speed;

/// [Space]
/// @brief Field lastVelocity, offset: 0x30, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___lastVelocity;

/// @brief Field lastPosition, offset: 0x3c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___lastPosition;

/// [Space]
/// [SerializeField]
/// @brief Field _deltaTimes, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<float_t>  ____deltaTimes;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VelocityHelperTest, ___velocity) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VelocityHelperTest, ___speed) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VelocityHelperTest, ___lastVelocity) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VelocityHelperTest, ___lastPosition) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VelocityHelperTest, ____deltaTimes) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VelocityHelperTest) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
