#pragma once
// IWYU pragma private; include "GlobalNamespace/SpinRotation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SpinRotation)
namespace GlobalNamespace {
class ITickSystemTick;
}
// Forward declare root types
namespace GlobalNamespace {
class SpinRotation;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SpinRotation*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SpinRotation*, "", "SpinRotation");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Quaternion, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: SpinRotation
class CORDL_TYPE SpinRotation : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_TickRunning, put=set_TickRunning)) bool  TickRunning;

/// @brief Field <TickRunning>k__BackingField, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get__TickRunning_k__BackingField, put=__cordl_internal_set__TickRunning_k__BackingField)) bool  _TickRunning_k__BackingField;

/// @brief Field baseRotation, offset 0x2c, size 0x10 
 __declspec(property(get=__cordl_internal_get_baseRotation, put=__cordl_internal_set_baseRotation)) ::UnityEngine::Quaternion  baseRotation;

/// @brief Field baseTime, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_baseTime, put=__cordl_internal_set_baseTime)) float_t  baseTime;

/// @brief Field rotationPerSecondEuler, offset 0x20, size 0xc 
 __declspec(property(get=__cordl_internal_get_rotationPerSecondEuler, put=__cordl_internal_set_rotationPerSecondEuler)) ::UnityEngine::Vector3  rotationPerSecondEuler;

/// @brief Convert operator to "::GlobalNamespace::ITickSystemTick"
constexpr operator  ::GlobalNamespace::ITickSystemTick*() noexcept;

/// @brief Method Awake, addr 0x565b690, size 0x30, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::SpinRotation* New_ctor() ;

/// @brief Method OnDisable, addr 0x565b73c, size 0x6c, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x565b6c0, size 0x7c, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Tick, addr 0x565b594, size 0xfc, virtual true, abstract: false, final true
inline void Tick() ;

constexpr bool const& __cordl_internal_get__TickRunning_k__BackingField() const;

constexpr bool& __cordl_internal_get__TickRunning_k__BackingField() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_baseRotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_baseRotation() ;

constexpr float_t const& __cordl_internal_get_baseTime() const;

constexpr float_t& __cordl_internal_get_baseTime() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_rotationPerSecondEuler() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_rotationPerSecondEuler() ;

constexpr void __cordl_internal_set__TickRunning_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_baseRotation(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_baseTime(float_t  value) ;

constexpr void __cordl_internal_set_rotationPerSecondEuler(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0x565b7a8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_TickRunning, addr 0x565b584, size 0x8, virtual true, abstract: false, final true
inline bool get_TickRunning() ;

/// @brief Convert to "::GlobalNamespace::ITickSystemTick"
constexpr ::GlobalNamespace::ITickSystemTick* i___GlobalNamespace__ITickSystemTick() noexcept;

/// [CompilerGenerated]
/// @brief Method set_TickRunning, addr 0x565b58c, size 0x8, virtual true, abstract: false, final true
inline void set_TickRunning(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SpinRotation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SpinRotation", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SpinRotation(SpinRotation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SpinRotation", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SpinRotation(SpinRotation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{765};

/// [SerializeField]
/// @brief Field rotationPerSecondEuler, offset: 0x20, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___rotationPerSecondEuler;

/// @brief Field baseRotation, offset: 0x2c, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___baseRotation;

/// @brief Field baseTime, offset: 0x3c, size: 0x4, def value: None
 float_t  ___baseTime;

/// [CompilerGenerated]
/// @brief Field <TickRunning>k__BackingField, offset: 0x40, size: 0x1, def value: None
 bool  ____TickRunning_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SpinRotation, ___rotationPerSecondEuler) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpinRotation, ___baseRotation) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpinRotation, ___baseTime) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpinRotation, ____TickRunning_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SpinRotation) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
