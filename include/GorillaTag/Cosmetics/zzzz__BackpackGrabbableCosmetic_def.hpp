#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/BackpackGrabbableCosmetic.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__HoldableObject_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BackpackGrabbableCosmetic)
namespace GlobalNamespace {
class InteractionPoint;
}
namespace UnityEngine::Events {
class UnityEvent;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GorillaTag::Cosmetics {
class BackpackGrabbableCosmetic;
}
// Write type traits
MARK_REF_T(::GorillaTag::Cosmetics::BackpackGrabbableCosmetic*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Cosmetics::BackpackGrabbableCosmetic*, "GorillaTag.Cosmetics", "BackpackGrabbableCosmetic");
// Dependencies HoldableObject
namespace GorillaTag::Cosmetics {
// Is value type: false
// CS Name: GorillaTag.Cosmetics.BackpackGrabbableCosmetic
class CORDL_TYPE BackpackGrabbableCosmetic : public ::GlobalNamespace::HoldableObject {
public:
// Declarations
/// @brief Field OnFullyEmptied, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnFullyEmptied, put=__cordl_internal_set_OnFullyEmptied)) ::UnityEngine::Events::UnityEvent*  OnFullyEmptied;

/// @brief Field OnReachedMaxCapacity, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnReachedMaxCapacity, put=__cordl_internal_set_OnReachedMaxCapacity)) ::UnityEngine::Events::UnityEvent*  OnReachedMaxCapacity;

/// @brief Field OnRefilled, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnRefilled, put=__cordl_internal_set_OnRefilled)) ::UnityEngine::Events::UnityEvent*  OnRefilled;

/// @brief Field canGrab, offset 0x54, size 0x1 
 __declspec(property(get=__cordl_internal_get_canGrab, put=__cordl_internal_set_canGrab)) bool  canGrab;

/// @brief Field coolDownTimer, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_coolDownTimer, put=__cordl_internal_set_coolDownTimer)) float_t  coolDownTimer;

/// @brief Field currentItemsCount, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentItemsCount, put=__cordl_internal_set_currentItemsCount)) int32_t  currentItemsCount;

/// @brief Field lastGrabTime, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastGrabTime, put=__cordl_internal_set_lastGrabTime)) float_t  lastGrabTime;

/// @brief Field materialIndex, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_materialIndex, put=__cordl_internal_set_materialIndex)) int32_t  materialIndex;

/// @brief Field maxCapacity, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxCapacity, put=__cordl_internal_set_maxCapacity)) int32_t  maxCapacity;

/// @brief Field startItemsCount, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_startItemsCount, put=__cordl_internal_set_startItemsCount)) int32_t  startItemsCount;

/// @brief Field useCapacity, offset 0x24, size 0x1 
 __declspec(property(get=__cordl_internal_get_useCapacity, put=__cordl_internal_set_useCapacity)) bool  useCapacity;

/// @brief Method AddItem, addr 0x5d7efec, size 0xa8, virtual false, abstract: false, final false
inline void AddItem() ;

/// @brief Method Awake, addr 0x5d7ed2c, size 0x14, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method DropItemCleanup, addr 0x5d7ed44, size 0x4, virtual true, abstract: false, final false
inline void DropItemCleanup() ;

/// @brief Method EmptyBackpack, addr 0x5d7f108, size 0x1c, virtual false, abstract: false, final false
inline void EmptyBackpack() ;

/// @brief Method IsEmpty, addr 0x5d7ef2c, size 0x20, virtual false, abstract: false, final false
inline bool IsEmpty() ;

/// @brief Method IsFull, addr 0x5d7f124, size 0x24, virtual false, abstract: false, final false
inline bool IsFull() ;

static inline ::GorillaTag::Cosmetics::BackpackGrabbableCosmetic* New_ctor() ;

/// @brief Method OnGrab, addr 0x5d7ed88, size 0x1a4, virtual true, abstract: false, final false
inline void OnGrab(::GlobalNamespace::InteractionPoint*  pointGrabbed, ::UnityEngine::GameObject*  grabbingHand) ;

/// @brief Method OnHover, addr 0x5d7ed40, size 0x4, virtual true, abstract: false, final false
inline void OnHover(::GlobalNamespace::InteractionPoint*  pointHovered, ::UnityEngine::GameObject*  hoveringHand) ;

/// @brief Method RefillBackpack, addr 0x5d7f0e4, size 0x24, virtual false, abstract: false, final false
inline void RefillBackpack() ;

/// @brief Method RemoveItem, addr 0x5d7ef4c, size 0xa0, virtual false, abstract: false, final false
inline void RemoveItem() ;

/// @brief Method Update, addr 0x5d7ed48, size 0x40, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateState, addr 0x5d7f094, size 0x50, virtual false, abstract: false, final false
inline void UpdateState() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_OnFullyEmptied() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_OnFullyEmptied() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_OnReachedMaxCapacity() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_OnReachedMaxCapacity() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_OnRefilled() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_OnRefilled() ;

constexpr bool const& __cordl_internal_get_canGrab() const;

constexpr bool& __cordl_internal_get_canGrab() ;

constexpr float_t const& __cordl_internal_get_coolDownTimer() const;

constexpr float_t& __cordl_internal_get_coolDownTimer() ;

constexpr int32_t const& __cordl_internal_get_currentItemsCount() const;

constexpr int32_t& __cordl_internal_get_currentItemsCount() ;

constexpr float_t const& __cordl_internal_get_lastGrabTime() const;

constexpr float_t& __cordl_internal_get_lastGrabTime() ;

constexpr int32_t const& __cordl_internal_get_materialIndex() const;

constexpr int32_t& __cordl_internal_get_materialIndex() ;

constexpr int32_t const& __cordl_internal_get_maxCapacity() const;

constexpr int32_t& __cordl_internal_get_maxCapacity() ;

constexpr int32_t const& __cordl_internal_get_startItemsCount() const;

constexpr int32_t& __cordl_internal_get_startItemsCount() ;

constexpr bool const& __cordl_internal_get_useCapacity() const;

constexpr bool& __cordl_internal_get_useCapacity() ;

constexpr void __cordl_internal_set_OnFullyEmptied(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_OnReachedMaxCapacity(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_OnRefilled(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_canGrab(bool  value) ;

constexpr void __cordl_internal_set_coolDownTimer(float_t  value) ;

constexpr void __cordl_internal_set_currentItemsCount(int32_t  value) ;

constexpr void __cordl_internal_set_lastGrabTime(float_t  value) ;

constexpr void __cordl_internal_set_materialIndex(int32_t  value) ;

constexpr void __cordl_internal_set_maxCapacity(int32_t  value) ;

constexpr void __cordl_internal_set_startItemsCount(int32_t  value) ;

constexpr void __cordl_internal_set_useCapacity(bool  value) ;

/// @brief Method .ctor, addr 0x5d7f148, size 0x18, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BackpackGrabbableCosmetic() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BackpackGrabbableCosmetic", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BackpackGrabbableCosmetic(BackpackGrabbableCosmetic && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BackpackGrabbableCosmetic", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BackpackGrabbableCosmetic(BackpackGrabbableCosmetic const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4874};

/// [GorillaSoundLookup]
/// @brief Field materialIndex, offset: 0x20, size: 0x4, def value: None
 int32_t  ___materialIndex;

/// [SerializeField]
/// @brief Field useCapacity, offset: 0x24, size: 0x1, def value: None
 bool  ___useCapacity;

/// [SerializeField]
/// @brief Field coolDownTimer, offset: 0x28, size: 0x4, def value: None
 float_t  ___coolDownTimer;

/// [SerializeField]
/// @brief Field maxCapacity, offset: 0x2c, size: 0x4, def value: None
 int32_t  ___maxCapacity;

/// [SerializeField]
/// @brief Field startItemsCount, offset: 0x30, size: 0x4, def value: None
 int32_t  ___startItemsCount;

/// [Space]
/// @brief Field OnReachedMaxCapacity, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___OnReachedMaxCapacity;

/// @brief Field OnFullyEmptied, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___OnFullyEmptied;

/// @brief Field OnRefilled, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___OnRefilled;

/// @brief Field currentItemsCount, offset: 0x50, size: 0x4, def value: None
 int32_t  ___currentItemsCount;

/// @brief Field canGrab, offset: 0x54, size: 0x1, def value: None
 bool  ___canGrab;

/// @brief Field lastGrabTime, offset: 0x58, size: 0x4, def value: None
 float_t  ___lastGrabTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Cosmetics::BackpackGrabbableCosmetic, ___materialIndex) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::BackpackGrabbableCosmetic, ___useCapacity) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::BackpackGrabbableCosmetic, ___coolDownTimer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::BackpackGrabbableCosmetic, ___maxCapacity) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::BackpackGrabbableCosmetic, ___startItemsCount) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::BackpackGrabbableCosmetic, ___OnReachedMaxCapacity) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::BackpackGrabbableCosmetic, ___OnFullyEmptied) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::BackpackGrabbableCosmetic, ___OnRefilled) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::BackpackGrabbableCosmetic, ___currentItemsCount) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::BackpackGrabbableCosmetic, ___canGrab) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::BackpackGrabbableCosmetic, ___lastGrabTime) == 0x58, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Cosmetics::BackpackGrabbableCosmetic) == 0x60, "Size mismatch!");

} // namespace end def GorillaTag::Cosmetics
