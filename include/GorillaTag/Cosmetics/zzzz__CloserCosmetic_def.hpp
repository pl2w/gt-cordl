#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/CloserCosmetic.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTag/Cosmetics/zzzz__CloserCosmetic_State_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CloserCosmetic)
namespace GlobalNamespace {
struct CloserCosmetic_State;
}
namespace GlobalNamespace {
class ITickSystemTick;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GorillaTag::Cosmetics {
class CloserCosmetic;
}
// Write type traits
MARK_REF_T(::GorillaTag::Cosmetics::CloserCosmetic*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Cosmetics::CloserCosmetic*, "GorillaTag.Cosmetics", "CloserCosmetic");
// Dependencies GorillaTag.Cosmetics.CloserCosmetic::State, UnityEngine.MonoBehaviour, UnityEngine.Quaternion, UnityEngine.Vector3
namespace GorillaTag::Cosmetics {
// Is value type: false
// CS Name: GorillaTag.Cosmetics.CloserCosmetic
class CORDL_TYPE CloserCosmetic : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using State = ::GlobalNamespace::CloserCosmetic_State;

 __declspec(property(get=get_TickRunning, put=set_TickRunning)) bool  TickRunning;

/// @brief Field <TickRunning>k__BackingField, offset 0x74, size 0x1 
 __declspec(property(get=__cordl_internal_get__TickRunning_k__BackingField, put=__cordl_internal_set__TickRunning_k__BackingField)) bool  _TickRunning_k__BackingField;

/// @brief Field currentState, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentState, put=__cordl_internal_set_currentState)) ::GlobalNamespace::CloserCosmetic_State  currentState;

/// @brief Field fingerValue, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_fingerValue, put=__cordl_internal_set_fingerValue)) float_t  fingerValue;

/// @brief Field localRotA, offset 0x4c, size 0x10 
 __declspec(property(get=__cordl_internal_get_localRotA, put=__cordl_internal_set_localRotA)) ::UnityEngine::Quaternion  localRotA;

/// @brief Field localRotB, offset 0x5c, size 0x10 
 __declspec(property(get=__cordl_internal_get_localRotB, put=__cordl_internal_set_localRotB)) ::UnityEngine::Quaternion  localRotB;

/// @brief Field maxRotationA, offset 0x30, size 0xc 
 __declspec(property(get=__cordl_internal_get_maxRotationA, put=__cordl_internal_set_maxRotationA)) ::UnityEngine::Vector3  maxRotationA;

/// @brief Field maxRotationB, offset 0x3c, size 0xc 
 __declspec(property(get=__cordl_internal_get_maxRotationB, put=__cordl_internal_set_maxRotationB)) ::UnityEngine::Vector3  maxRotationB;

/// @brief Field sideA, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_sideA, put=__cordl_internal_set_sideA)) ::UnityW<::UnityEngine::GameObject>  sideA;

/// @brief Field sideB, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_sideB, put=__cordl_internal_set_sideB)) ::UnityW<::UnityEngine::GameObject>  sideB;

/// @brief Field useFingerFlexValueAsStrength, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get_useFingerFlexValueAsStrength, put=__cordl_internal_set_useFingerFlexValueAsStrength)) bool  useFingerFlexValueAsStrength;

/// @brief Convert operator to "::GlobalNamespace::ITickSystemTick"
constexpr operator  ::GlobalNamespace::ITickSystemTick*() noexcept;

/// @brief Method Close, addr 0x5d80de4, size 0xc, virtual false, abstract: false, final false
inline void Close(bool  leftHand, float_t  fingerFlexValue) ;

/// @brief Method Closing, addr 0x5d80934, size 0x280, virtual false, abstract: false, final false
inline void Closing() ;

static inline ::GorillaTag::Cosmetics::CloserCosmetic* New_ctor() ;

/// @brief Method OnDisable, addr 0x5d808ac, size 0x6c, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5d807e8, size 0xc4, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Open, addr 0x5d80df0, size 0x10, virtual false, abstract: false, final false
inline void Open(bool  leftHand, float_t  fingerFlexValue) ;

/// @brief Method Opening, addr 0x5d80bb4, size 0x230, virtual false, abstract: false, final false
inline void Opening() ;

/// @brief Method Tick, addr 0x5d80918, size 0x1c, virtual true, abstract: false, final true
inline void Tick() ;

/// @brief Method UpdateState, addr 0x5d80e00, size 0x8, virtual false, abstract: false, final false
inline void UpdateState(::GlobalNamespace::CloserCosmetic_State  newState) ;

constexpr bool const& __cordl_internal_get__TickRunning_k__BackingField() const;

constexpr bool& __cordl_internal_get__TickRunning_k__BackingField() ;

constexpr ::GlobalNamespace::CloserCosmetic_State const& __cordl_internal_get_currentState() const;

constexpr ::GlobalNamespace::CloserCosmetic_State& __cordl_internal_get_currentState() ;

constexpr float_t const& __cordl_internal_get_fingerValue() const;

constexpr float_t& __cordl_internal_get_fingerValue() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_localRotA() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_localRotA() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_localRotB() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_localRotB() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_maxRotationA() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_maxRotationA() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_maxRotationB() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_maxRotationB() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_sideA() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_sideA() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_sideB() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_sideB() ;

constexpr bool const& __cordl_internal_get_useFingerFlexValueAsStrength() const;

constexpr bool& __cordl_internal_get_useFingerFlexValueAsStrength() ;

constexpr void __cordl_internal_set__TickRunning_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_currentState(::GlobalNamespace::CloserCosmetic_State  value) ;

constexpr void __cordl_internal_set_fingerValue(float_t  value) ;

constexpr void __cordl_internal_set_localRotA(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_localRotB(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_maxRotationA(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_maxRotationB(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_sideA(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_sideB(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_useFingerFlexValueAsStrength(bool  value) ;

/// @brief Method .ctor, addr 0x5d80e08, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_TickRunning, addr 0x5d807d8, size 0x8, virtual true, abstract: false, final true
inline bool get_TickRunning() ;

/// @brief Convert to "::GlobalNamespace::ITickSystemTick"
constexpr ::GlobalNamespace::ITickSystemTick* i___GlobalNamespace__ITickSystemTick() noexcept;

/// [CompilerGenerated]
/// @brief Method set_TickRunning, addr 0x5d807e0, size 0x8, virtual true, abstract: false, final true
inline void set_TickRunning(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CloserCosmetic() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CloserCosmetic", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CloserCosmetic(CloserCosmetic && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CloserCosmetic", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CloserCosmetic(CloserCosmetic const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4879};

/// [SerializeField]
/// @brief Field sideA, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___sideA;

/// [SerializeField]
/// @brief Field sideB, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___sideB;

/// [SerializeField]
/// @brief Field maxRotationA, offset: 0x30, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___maxRotationA;

/// [SerializeField]
/// @brief Field maxRotationB, offset: 0x3c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___maxRotationB;

/// [SerializeField]
/// @brief Field useFingerFlexValueAsStrength, offset: 0x48, size: 0x1, def value: None
 bool  ___useFingerFlexValueAsStrength;

/// @brief Field localRotA, offset: 0x4c, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___localRotA;

/// @brief Field localRotB, offset: 0x5c, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___localRotB;

/// @brief Field currentState, offset: 0x6c, size: 0x4, def value: None
 ::GlobalNamespace::CloserCosmetic_State  ___currentState;

/// @brief Field fingerValue, offset: 0x70, size: 0x4, def value: None
 float_t  ___fingerValue;

/// [CompilerGenerated]
/// @brief Field <TickRunning>k__BackingField, offset: 0x74, size: 0x1, def value: None
 bool  ____TickRunning_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Cosmetics::CloserCosmetic, ___sideA) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::CloserCosmetic, ___sideB) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::CloserCosmetic, ___maxRotationA) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::CloserCosmetic, ___maxRotationB) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::CloserCosmetic, ___useFingerFlexValueAsStrength) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::CloserCosmetic, ___localRotA) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::CloserCosmetic, ___localRotB) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::CloserCosmetic, ___currentState) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::CloserCosmetic, ___fingerValue) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::CloserCosmetic, ____TickRunning_k__BackingField) == 0x74, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Cosmetics::CloserCosmetic) == 0x78, "Size mismatch!");

} // namespace end def GorillaTag::Cosmetics
