#pragma once
// IWYU pragma private; include "GlobalNamespace/GenericCounter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GenericCounter)
namespace UnityEngine::Events {
class UnityEvent;
}
// Forward declare root types
namespace GlobalNamespace {
class GenericCounter;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GenericCounter*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GenericCounter*, "", "GenericCounter");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GenericCounter
class CORDL_TYPE GenericCounter : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field Threshold, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_Threshold, put=__cordl_internal_set_Threshold)) int32_t  Threshold;

/// @brief Field currentCount, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentCount, put=__cordl_internal_set_currentCount)) int32_t  currentCount;

/// @brief Field whenEqual, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_whenEqual, put=__cordl_internal_set_whenEqual)) ::UnityEngine::Events::UnityEvent*  whenEqual;

/// @brief Field whenGreaterThan, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_whenGreaterThan, put=__cordl_internal_set_whenGreaterThan)) ::UnityEngine::Events::UnityEvent*  whenGreaterThan;

/// @brief Field whenLessThan, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_whenLessThan, put=__cordl_internal_set_whenLessThan)) ::UnityEngine::Events::UnityEvent*  whenLessThan;

/// @brief Method CountDown, addr 0x579d2a8, size 0x10, virtual false, abstract: false, final false
inline void CountDown() ;

/// @brief Method CountUp, addr 0x579d254, size 0x10, virtual false, abstract: false, final false
inline void CountUp() ;

/// @brief Method DoCallbacks, addr 0x579d264, size 0x44, virtual false, abstract: false, final false
inline void DoCallbacks() ;

static inline ::GlobalNamespace::GenericCounter* New_ctor() ;

/// @brief Method ResetCounter, addr 0x579d2b8, size 0x8, virtual false, abstract: false, final false
inline void ResetCounter() ;

constexpr int32_t const& __cordl_internal_get_Threshold() const;

constexpr int32_t& __cordl_internal_get_Threshold() ;

constexpr int32_t const& __cordl_internal_get_currentCount() const;

constexpr int32_t& __cordl_internal_get_currentCount() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_whenEqual() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_whenEqual() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_whenGreaterThan() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_whenGreaterThan() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_whenLessThan() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_whenLessThan() ;

constexpr void __cordl_internal_set_Threshold(int32_t  value) ;

constexpr void __cordl_internal_set_currentCount(int32_t  value) ;

constexpr void __cordl_internal_set_whenEqual(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_whenGreaterThan(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_whenLessThan(::UnityEngine::Events::UnityEvent*  value) ;

/// @brief Method .ctor, addr 0x579d2c0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GenericCounter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GenericCounter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GenericCounter(GenericCounter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GenericCounter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GenericCounter(GenericCounter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1495};

/// [SerializeField]
/// @brief Field Threshold, offset: 0x20, size: 0x4, def value: None
 int32_t  ___Threshold;

/// [SerializeField]
/// @brief Field whenLessThan, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___whenLessThan;

/// [SerializeField]
/// @brief Field whenEqual, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___whenEqual;

/// [SerializeField]
/// @brief Field whenGreaterThan, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___whenGreaterThan;

/// @brief Field currentCount, offset: 0x40, size: 0x4, def value: None
 int32_t  ___currentCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GenericCounter, ___Threshold) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GenericCounter, ___whenLessThan) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GenericCounter, ___whenEqual) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GenericCounter, ___whenGreaterThan) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GenericCounter, ___currentCount) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GenericCounter) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
