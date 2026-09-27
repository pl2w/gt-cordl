#pragma once
// IWYU pragma private; include "Oculus/Interaction/ListLayoutEase.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ListLayoutEase)
namespace Oculus::Interaction {
class ListLayoutEase_ListElementEase;
}
namespace Oculus::Interaction {
class ListLayout;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine {
class AnimationCurve;
}
// Forward declare root types
namespace Oculus::Interaction {
class ListLayoutEase;
}
namespace Oculus::Interaction {
class ListLayoutEase_ListElementEase;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::ListLayoutEase*);
MARK_REF_T(::Oculus::Interaction::ListLayoutEase_ListElementEase*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::ListLayoutEase*, "Oculus.Interaction", "ListLayoutEase");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::ListLayoutEase_ListElementEase*, "Oculus.Interaction", "ListLayoutEase/ListElementEase");
// Dependencies System.Object
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.ListLayoutEase
class CORDL_TYPE ListLayoutEase : public ::System::Object {
public:
// Declarations
using ListElementEase = ::Oculus::Interaction::ListLayoutEase_ListElementEase;

/// @brief Field _curve, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__curve, put=__cordl_internal_set__curve)) ::UnityEngine::AnimationCurve*  _curve;

/// @brief Field _curveTime, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__curveTime, put=__cordl_internal_set__curveTime)) float_t  _curveTime;

/// @brief Field _elementDict, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__elementDict, put=__cordl_internal_set__elementDict)) ::System::Collections::Generic::Dictionary_2<int32_t,::Oculus::Interaction::ListLayoutEase_ListElementEase*>*  _elementDict;

/// @brief Field _listLayout, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__listLayout, put=__cordl_internal_set__listLayout)) ::Oculus::Interaction::ListLayout*  _listLayout;

/// @brief Field _time, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__time, put=__cordl_internal_set__time)) float_t  _time;

/// @brief Method GetPosition, addr 0xa460d78, size 0x64, virtual false, abstract: false, final false
inline float_t GetPosition(int32_t  id) ;

/// @brief Method HandleElementAdded, addr 0xa46097c, size 0xcc, virtual false, abstract: false, final false
inline void HandleElementAdded(int32_t  id) ;

/// @brief Method HandleElementRemoved, addr 0xa460b5c, size 0x58, virtual false, abstract: false, final false
inline void HandleElementRemoved(int32_t  id) ;

/// @brief Method HandleElementUpdated, addr 0xa460a98, size 0xa4, virtual false, abstract: false, final false
inline void HandleElementUpdated(int32_t  id, bool  sizeUpdate) ;

static inline ::Oculus::Interaction::ListLayoutEase* New_ctor(::Oculus::Interaction::ListLayout*  layout, float_t  curveTime, ::UnityEngine::AnimationCurve*  curve) ;

/// @brief Method UpdateTime, addr 0xa460bb4, size 0x168, virtual false, abstract: false, final false
inline void UpdateTime(float_t  time) ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__curve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__curve() ;

constexpr float_t const& __cordl_internal_get__curveTime() const;

constexpr float_t& __cordl_internal_get__curveTime() ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::Oculus::Interaction::ListLayoutEase_ListElementEase*>* const& __cordl_internal_get__elementDict() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::Oculus::Interaction::ListLayoutEase_ListElementEase*>*& __cordl_internal_get__elementDict() ;

constexpr ::Oculus::Interaction::ListLayout* const& __cordl_internal_get__listLayout() const;

constexpr ::Oculus::Interaction::ListLayout*& __cordl_internal_get__listLayout() ;

constexpr float_t const& __cordl_internal_get__time() const;

constexpr float_t& __cordl_internal_get__time() ;

constexpr void __cordl_internal_set__curve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set__curveTime(float_t  value) ;

constexpr void __cordl_internal_set__elementDict(::System::Collections::Generic::Dictionary_2<int32_t,::Oculus::Interaction::ListLayoutEase_ListElementEase*>*  value) ;

constexpr void __cordl_internal_set__listLayout(::Oculus::Interaction::ListLayout*  value) ;

constexpr void __cordl_internal_set__time(float_t  value) ;

/// @brief Method .ctor, addr 0xa460684, size 0x2f8, virtual false, abstract: false, final false
inline void _ctor(::Oculus::Interaction::ListLayout*  layout, float_t  curveTime, ::UnityEngine::AnimationCurve*  curve) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ListLayoutEase() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ListLayoutEase", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ListLayoutEase(ListLayoutEase && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ListLayoutEase", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ListLayoutEase(ListLayoutEase const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15875};

/// @brief Field _listLayout, offset: 0x10, size: 0x8, def value: None
 ::Oculus::Interaction::ListLayout*  ____listLayout;

/// @brief Field _elementDict, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,::Oculus::Interaction::ListLayoutEase_ListElementEase*>*  ____elementDict;

/// @brief Field _curve, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____curve;

/// @brief Field _curveTime, offset: 0x28, size: 0x4, def value: None
 float_t  ____curveTime;

/// @brief Field _time, offset: 0x2c, size: 0x4, def value: None
 float_t  ____time;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::ListLayoutEase, ____listLayout) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::ListLayoutEase, ____elementDict) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::ListLayoutEase, ____curve) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::ListLayoutEase, ____curveTime) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::ListLayoutEase, ____time) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::ListLayoutEase) == 0x30, "Size mismatch!");

} // namespace end def Oculus::Interaction
// Dependencies System.Object
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.ListLayoutEase/ListElementEase
class CORDL_TYPE ListLayoutEase_ListElementEase : public ::System::Object {
public:
// Declarations
/// @brief Field _curve, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__curve, put=__cordl_internal_set__curve)) ::UnityEngine::AnimationCurve*  _curve;

/// @brief Field _curveTime, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__curveTime, put=__cordl_internal_set__curveTime)) float_t  _curveTime;

/// @brief Field _start, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__start, put=__cordl_internal_set__start)) float_t  _start;

/// @brief Field _startTime, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get__startTime, put=__cordl_internal_set__startTime)) float_t  _startTime;

/// @brief Field _target, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__target, put=__cordl_internal_set__target)) float_t  _target;

/// @brief Field position, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_position, put=__cordl_internal_set_position)) float_t  position;

static inline ::Oculus::Interaction::ListLayoutEase_ListElementEase* New_ctor(::UnityEngine::AnimationCurve*  curve, float_t  easeTime, float_t  position) ;

/// @brief Method SetTarget, addr 0xa460b3c, size 0x20, virtual false, abstract: false, final false
inline void SetTarget(float_t  target, float_t  time, bool  skipEase) ;

/// @brief Method UpdateTime, addr 0xa460d1c, size 0x5c, virtual false, abstract: false, final false
inline void UpdateTime(float_t  time) ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__curve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__curve() ;

constexpr float_t const& __cordl_internal_get__curveTime() const;

constexpr float_t& __cordl_internal_get__curveTime() ;

constexpr float_t const& __cordl_internal_get__start() const;

constexpr float_t& __cordl_internal_get__start() ;

constexpr float_t const& __cordl_internal_get__startTime() const;

constexpr float_t& __cordl_internal_get__startTime() ;

constexpr float_t const& __cordl_internal_get__target() const;

constexpr float_t& __cordl_internal_get__target() ;

constexpr float_t const& __cordl_internal_get_position() const;

constexpr float_t& __cordl_internal_get_position() ;

constexpr void __cordl_internal_set__curve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set__curveTime(float_t  value) ;

constexpr void __cordl_internal_set__start(float_t  value) ;

constexpr void __cordl_internal_set__startTime(float_t  value) ;

constexpr void __cordl_internal_set__target(float_t  value) ;

constexpr void __cordl_internal_set_position(float_t  value) ;

/// @brief Method .ctor, addr 0xa460a48, size 0x50, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::AnimationCurve*  curve, float_t  easeTime, float_t  position) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ListLayoutEase_ListElementEase() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ListLayoutEase_ListElementEase", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ListLayoutEase_ListElementEase(ListLayoutEase_ListElementEase && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ListLayoutEase_ListElementEase", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ListLayoutEase_ListElementEase(ListLayoutEase_ListElementEase const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15874};

/// @brief Field _curve, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____curve;

/// @brief Field _curveTime, offset: 0x18, size: 0x4, def value: None
 float_t  ____curveTime;

/// @brief Field _startTime, offset: 0x1c, size: 0x4, def value: None
 float_t  ____startTime;

/// @brief Field _start, offset: 0x20, size: 0x4, def value: None
 float_t  ____start;

/// @brief Field _target, offset: 0x24, size: 0x4, def value: None
 float_t  ____target;

/// @brief Field position, offset: 0x28, size: 0x4, def value: None
 float_t  ___position;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::ListLayoutEase_ListElementEase, ____curve) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::ListLayoutEase_ListElementEase, ____curveTime) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::ListLayoutEase_ListElementEase, ____startTime) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::ListLayoutEase_ListElementEase, ____start) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::ListLayoutEase_ListElementEase, ____target) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::ListLayoutEase_ListElementEase, ___position) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::ListLayoutEase_ListElementEase) == 0x30, "Size mismatch!");

} // namespace end def Oculus::Interaction
