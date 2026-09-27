#pragma once
// IWYU pragma private; include "GlobalNamespace/Oscillator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__Oscillator_WaveTypeEnum_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Oscillator)
namespace GlobalNamespace {
struct Oscillator_WaveTypeEnum;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class Oscillator;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::Oscillator*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Oscillator*, "", "Oscillator");
// Dependencies Oscillator::WaveTypeEnum, UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: Oscillator
class CORDL_TYPE Oscillator : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using WaveTypeEnum = ::GlobalNamespace::Oscillator_WaveTypeEnum;

/// @brief Field Center, offset 0x34, size 0xc 
 __declspec(property(get=__cordl_internal_get_Center, put=__cordl_internal_set_Center)) ::UnityEngine::Vector3  Center;

/// @brief Field Frequency, offset 0x4c, size 0xc 
 __declspec(property(get=__cordl_internal_get_Frequency, put=__cordl_internal_set_Frequency)) ::UnityEngine::Vector3  Frequency;

/// @brief Field Phase, offset 0x58, size 0xc 
 __declspec(property(get=__cordl_internal_get_Phase, put=__cordl_internal_set_Phase)) ::UnityEngine::Vector3  Phase;

/// @brief Field Radius, offset 0x40, size 0xc 
 __declspec(property(get=__cordl_internal_get_Radius, put=__cordl_internal_set_Radius)) ::UnityEngine::Vector3  Radius;

/// @brief Field UseCenter, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_UseCenter, put=__cordl_internal_set_UseCenter)) bool  UseCenter;

/// @brief Field WaveType, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_WaveType, put=__cordl_internal_set_WaveType)) ::GlobalNamespace::Oscillator_WaveTypeEnum  WaveType;

/// @brief Field m_initCenter, offset 0x24, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_initCenter, put=__cordl_internal_set_m_initCenter)) ::UnityEngine::Vector3  m_initCenter;

/// @brief Method Init, addr 0x55eb2d4, size 0x34, virtual false, abstract: false, final false
inline void Init(::UnityEngine::Vector3  center, ::UnityEngine::Vector3  radius, ::UnityEngine::Vector3  frequency, ::UnityEngine::Vector3  startPhase) ;

static inline ::GlobalNamespace::Oscillator* New_ctor() ;

/// @brief Method OnEnable, addr 0x55eb414, size 0x30, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method SampleWave, addr 0x55eb308, size 0x10c, virtual false, abstract: false, final false
inline float_t SampleWave(float_t  phase) ;

/// @brief Method Update, addr 0x55eb444, size 0x144, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_Center() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_Center() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_Frequency() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_Frequency() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_Phase() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_Phase() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_Radius() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_Radius() ;

constexpr bool const& __cordl_internal_get_UseCenter() const;

constexpr bool& __cordl_internal_get_UseCenter() ;

constexpr ::GlobalNamespace::Oscillator_WaveTypeEnum const& __cordl_internal_get_WaveType() const;

constexpr ::GlobalNamespace::Oscillator_WaveTypeEnum& __cordl_internal_get_WaveType() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_initCenter() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_initCenter() ;

constexpr void __cordl_internal_set_Center(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_Frequency(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_Phase(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_Radius(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_UseCenter(bool  value) ;

constexpr void __cordl_internal_set_WaveType(::GlobalNamespace::Oscillator_WaveTypeEnum  value) ;

constexpr void __cordl_internal_set_m_initCenter(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0x55eb588, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Oscillator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Oscillator", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Oscillator(Oscillator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Oscillator", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Oscillator(Oscillator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{40};

/// @brief Field WaveType, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::Oscillator_WaveTypeEnum  ___WaveType;

/// @brief Field m_initCenter, offset: 0x24, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_initCenter;

/// @brief Field UseCenter, offset: 0x30, size: 0x1, def value: None
 bool  ___UseCenter;

/// @brief Field Center, offset: 0x34, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___Center;

/// @brief Field Radius, offset: 0x40, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___Radius;

/// @brief Field Frequency, offset: 0x4c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___Frequency;

/// @brief Field Phase, offset: 0x58, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___Phase;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Oscillator, ___WaveType) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Oscillator, ___m_initCenter) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Oscillator, ___UseCenter) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Oscillator, ___Center) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Oscillator, ___Radius) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Oscillator, ___Frequency) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Oscillator, ___Phase) == 0x58, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Oscillator) == 0x68, "Size mismatch!");

} // namespace end def GlobalNamespace
