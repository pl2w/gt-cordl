#pragma once
// IWYU pragma private; include "GlobalNamespace/CyclicalActivator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CyclicalActivator)
namespace GlobalNamespace {
class CyclicalActivator_CyclicalActivatorObjectScheduleNode;
}
namespace GlobalNamespace {
class CyclicalActivator_CyclicalActivatorObjectSchedule;
}
namespace GlobalNamespace {
class CyclicalActivator_CyclicalActivatorObject;
}
namespace GlobalNamespace {
class IGorillaSliceableSimple;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class CyclicalActivator;
}
namespace GlobalNamespace {
class CyclicalActivator_CyclicalActivatorObject;
}
namespace GlobalNamespace {
class CyclicalActivator_CyclicalActivatorObjectSchedule;
}
namespace GlobalNamespace {
class CyclicalActivator_CyclicalActivatorObjectScheduleNode;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CyclicalActivator*);
MARK_REF_T(::GlobalNamespace::CyclicalActivator_CyclicalActivatorObject*);
MARK_REF_T(::GlobalNamespace::CyclicalActivator_CyclicalActivatorObjectSchedule*);
MARK_REF_T(::GlobalNamespace::CyclicalActivator_CyclicalActivatorObjectScheduleNode*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CyclicalActivator*, "", "CyclicalActivator");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CyclicalActivator_CyclicalActivatorObject*, "", "CyclicalActivator/CyclicalActivatorObject");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CyclicalActivator_CyclicalActivatorObjectSchedule*, "", "CyclicalActivator/CyclicalActivatorObjectSchedule");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CyclicalActivator_CyclicalActivatorObjectScheduleNode*, "", "CyclicalActivator/CyclicalActivatorObjectScheduleNode");
// Dependencies CyclicalActivator::CyclicalActivatorObject, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: CyclicalActivator
class CORDL_TYPE CyclicalActivator : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using CyclicalActivatorObject = ::GlobalNamespace::CyclicalActivator_CyclicalActivatorObject;

using CyclicalActivatorObjectSchedule = ::GlobalNamespace::CyclicalActivator_CyclicalActivatorObjectSchedule;

using CyclicalActivatorObjectScheduleNode = ::GlobalNamespace::CyclicalActivator_CyclicalActivatorObjectScheduleNode;

/// @brief Field objects, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_objects, put=__cordl_internal_set_objects)) ::ArrayW<::GlobalNamespace::CyclicalActivator_CyclicalActivatorObject*>  objects;

/// @brief Field previousS, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_previousS, put=__cordl_internal_set_previousS)) float_t  previousS;

/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr operator  ::GlobalNamespace::IGorillaSliceableSimple*() noexcept;

/// @brief Method IGorillaSliceableSimple.SliceUpdate, addr 0x56fd82c, size 0x238, virtual true, abstract: false, final true
inline void IGorillaSliceableSimple_SliceUpdate() ;

static inline ::GlobalNamespace::CyclicalActivator* New_ctor() ;

/// @brief Method OnDisable, addr 0x56fd820, size 0xc, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x56fd814, size 0xc, virtual false, abstract: false, final false
inline void OnEnable() ;

constexpr ::ArrayW<::GlobalNamespace::CyclicalActivator_CyclicalActivatorObject*> const& __cordl_internal_get_objects() const;

constexpr ::ArrayW<::GlobalNamespace::CyclicalActivator_CyclicalActivatorObject*>& __cordl_internal_get_objects() ;

constexpr float_t const& __cordl_internal_get_previousS() const;

constexpr float_t& __cordl_internal_get_previousS() ;

constexpr void __cordl_internal_set_objects(::ArrayW<::GlobalNamespace::CyclicalActivator_CyclicalActivatorObject*>  value) ;

constexpr void __cordl_internal_set_previousS(float_t  value) ;

/// @brief Method .ctor, addr 0x56fdaec, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* i___GlobalNamespace__IGorillaSliceableSimple() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CyclicalActivator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CyclicalActivator", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CyclicalActivator(CyclicalActivator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CyclicalActivator", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CyclicalActivator(CyclicalActivator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{152};

/// [SerializeField]
/// @brief Field objects, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::CyclicalActivator_CyclicalActivatorObject*>  ___objects;

/// @brief Field previousS, offset: 0x28, size: 0x4, def value: None
 float_t  ___previousS;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CyclicalActivator, ___objects) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CyclicalActivator, ___previousS) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CyclicalActivator) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: CyclicalActivator/CyclicalActivatorObject
class CORDL_TYPE CyclicalActivator_CyclicalActivatorObject : public ::System::Object {
public:
// Declarations
/// @brief Field gameObject, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_gameObject, put=__cordl_internal_set_gameObject)) ::UnityW<::UnityEngine::GameObject>  gameObject;

/// @brief Field schedule, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_schedule, put=__cordl_internal_set_schedule)) ::GlobalNamespace::CyclicalActivator_CyclicalActivatorObjectSchedule*  schedule;

static inline ::GlobalNamespace::CyclicalActivator_CyclicalActivatorObject* New_ctor() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_gameObject() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_gameObject() ;

constexpr ::GlobalNamespace::CyclicalActivator_CyclicalActivatorObjectSchedule* const& __cordl_internal_get_schedule() const;

constexpr ::GlobalNamespace::CyclicalActivator_CyclicalActivatorObjectSchedule*& __cordl_internal_get_schedule() ;

constexpr void __cordl_internal_set_gameObject(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_schedule(::GlobalNamespace::CyclicalActivator_CyclicalActivatorObjectSchedule*  value) ;

/// @brief Method .ctor, addr 0x56fdb14, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CyclicalActivator_CyclicalActivatorObject() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CyclicalActivator_CyclicalActivatorObject", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CyclicalActivator_CyclicalActivatorObject(CyclicalActivator_CyclicalActivatorObject && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CyclicalActivator_CyclicalActivatorObject", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CyclicalActivator_CyclicalActivatorObject(CyclicalActivator_CyclicalActivatorObject const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{151};

/// @brief Field gameObject, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___gameObject;

/// @brief Field schedule, offset: 0x18, size: 0x8, def value: None
 ::GlobalNamespace::CyclicalActivator_CyclicalActivatorObjectSchedule*  ___schedule;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CyclicalActivator_CyclicalActivatorObject, ___gameObject) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CyclicalActivator_CyclicalActivatorObject, ___schedule) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CyclicalActivator_CyclicalActivatorObject) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies CyclicalActivator::CyclicalActivatorObjectScheduleNode, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: CyclicalActivator/CyclicalActivatorObjectSchedule
class CORDL_TYPE CyclicalActivator_CyclicalActivatorObjectSchedule : public ::System::Object {
public:
// Declarations
/// @brief Field schedule, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_schedule, put=__cordl_internal_set_schedule)) ::ArrayW<::GlobalNamespace::CyclicalActivator_CyclicalActivatorObjectScheduleNode*>  schedule;

/// @brief Field totalSeconds, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_totalSeconds, put=__cordl_internal_set_totalSeconds)) int32_t  totalSeconds;

/// @brief Method CheckTime, addr 0x56fda64, size 0x88, virtual false, abstract: false, final false
inline bool CheckTime(float_t  nowSeconds) ;

static inline ::GlobalNamespace::CyclicalActivator_CyclicalActivatorObjectSchedule* New_ctor() ;

constexpr ::ArrayW<::GlobalNamespace::CyclicalActivator_CyclicalActivatorObjectScheduleNode*> const& __cordl_internal_get_schedule() const;

constexpr ::ArrayW<::GlobalNamespace::CyclicalActivator_CyclicalActivatorObjectScheduleNode*>& __cordl_internal_get_schedule() ;

constexpr int32_t const& __cordl_internal_get_totalSeconds() const;

constexpr int32_t& __cordl_internal_get_totalSeconds() ;

constexpr void __cordl_internal_set_schedule(::ArrayW<::GlobalNamespace::CyclicalActivator_CyclicalActivatorObjectScheduleNode*>  value) ;

constexpr void __cordl_internal_set_totalSeconds(int32_t  value) ;

/// @brief Method .ctor, addr 0x56fdb04, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CyclicalActivator_CyclicalActivatorObjectSchedule() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CyclicalActivator_CyclicalActivatorObjectSchedule", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CyclicalActivator_CyclicalActivatorObjectSchedule(CyclicalActivator_CyclicalActivatorObjectSchedule && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CyclicalActivator_CyclicalActivatorObjectSchedule", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CyclicalActivator_CyclicalActivatorObjectSchedule(CyclicalActivator_CyclicalActivatorObjectSchedule const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{150};

/// [Range(10, 3599)]
/// @brief Field totalSeconds, offset: 0x10, size: 0x4, def value: None
 int32_t  ___totalSeconds;

/// @brief Field schedule, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::CyclicalActivator_CyclicalActivatorObjectScheduleNode*>  ___schedule;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CyclicalActivator_CyclicalActivatorObjectSchedule, ___totalSeconds) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CyclicalActivator_CyclicalActivatorObjectSchedule, ___schedule) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CyclicalActivator_CyclicalActivatorObjectSchedule) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object, UnityEngine.Vector2
namespace GlobalNamespace {
// Is value type: false
// CS Name: CyclicalActivator/CyclicalActivatorObjectScheduleNode
class CORDL_TYPE CyclicalActivator_CyclicalActivatorObjectScheduleNode : public ::System::Object {
public:
// Declarations
/// @brief Field secondsActiveRange, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_secondsActiveRange, put=__cordl_internal_set_secondsActiveRange)) ::UnityEngine::Vector2  secondsActiveRange;

static inline ::GlobalNamespace::CyclicalActivator_CyclicalActivatorObjectScheduleNode* New_ctor() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_secondsActiveRange() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_secondsActiveRange() ;

constexpr void __cordl_internal_set_secondsActiveRange(::UnityEngine::Vector2  value) ;

/// @brief Method .ctor, addr 0x56fdafc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CyclicalActivator_CyclicalActivatorObjectScheduleNode() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CyclicalActivator_CyclicalActivatorObjectScheduleNode", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CyclicalActivator_CyclicalActivatorObjectScheduleNode(CyclicalActivator_CyclicalActivatorObjectScheduleNode && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CyclicalActivator_CyclicalActivatorObjectScheduleNode", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CyclicalActivator_CyclicalActivatorObjectScheduleNode(CyclicalActivator_CyclicalActivatorObjectScheduleNode const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{149};

/// @brief Field secondsActiveRange, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___secondsActiveRange;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CyclicalActivator_CyclicalActivatorObjectScheduleNode, ___secondsActiveRange) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CyclicalActivator_CyclicalActivatorObjectScheduleNode) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
