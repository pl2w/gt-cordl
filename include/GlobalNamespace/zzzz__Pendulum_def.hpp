#pragma once
// IWYU pragma private; include "GlobalNamespace/Pendulum.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Pendulum)
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class Pendulum;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::Pendulum*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Pendulum*, "", "Pendulum");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: Pendulum
class CORDL_TYPE Pendulum : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field ClockPendulum, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_ClockPendulum, put=__cordl_internal_set_ClockPendulum)) ::UnityW<::UnityEngine::Transform>  ClockPendulum;

/// @brief Field MaxAngleDeflection, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_MaxAngleDeflection, put=__cordl_internal_set_MaxAngleDeflection)) float_t  MaxAngleDeflection;

/// @brief Field SpeedOfPendulum, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_SpeedOfPendulum, put=__cordl_internal_set_SpeedOfPendulum)) float_t  SpeedOfPendulum;

/// @brief Field pendulum, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_pendulum, put=__cordl_internal_set_pendulum)) ::UnityW<::UnityEngine::Transform>  pendulum;

static inline ::GlobalNamespace::Pendulum* New_ctor() ;

/// @brief Method Start, addr 0x5bffccc, size 0x7c, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x5bffd48, size 0xc8, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_ClockPendulum() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_ClockPendulum() ;

constexpr float_t const& __cordl_internal_get_MaxAngleDeflection() const;

constexpr float_t& __cordl_internal_get_MaxAngleDeflection() ;

constexpr float_t const& __cordl_internal_get_SpeedOfPendulum() const;

constexpr float_t& __cordl_internal_get_SpeedOfPendulum() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_pendulum() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_pendulum() ;

constexpr void __cordl_internal_set_ClockPendulum(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_MaxAngleDeflection(float_t  value) ;

constexpr void __cordl_internal_set_SpeedOfPendulum(float_t  value) ;

constexpr void __cordl_internal_set_pendulum(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x5bffe10, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Pendulum() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Pendulum", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Pendulum(Pendulum && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Pendulum", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Pendulum(Pendulum const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{415};

/// @brief Field MaxAngleDeflection, offset: 0x20, size: 0x4, def value: None
 float_t  ___MaxAngleDeflection;

/// @brief Field SpeedOfPendulum, offset: 0x24, size: 0x4, def value: None
 float_t  ___SpeedOfPendulum;

/// @brief Field ClockPendulum, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___ClockPendulum;

/// @brief Field pendulum, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___pendulum;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Pendulum, ___MaxAngleDeflection) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Pendulum, ___SpeedOfPendulum) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Pendulum, ___ClockPendulum) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Pendulum, ___pendulum) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Pendulum) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
