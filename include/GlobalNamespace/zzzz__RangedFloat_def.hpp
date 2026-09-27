#pragma once
// IWYU pragma private; include "GlobalNamespace/RangedFloat.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(RangedFloat)
namespace GlobalNamespace {
template<typename T>
class IRangedVariable_1;
}
namespace GlobalNamespace {
template<typename T>
class IVariable_1;
}
namespace GlobalNamespace {
class IVariable;
}
namespace UnityEngine {
class AnimationCurve;
}
// Forward declare root types
namespace GlobalNamespace {
class RangedFloat;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::RangedFloat*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RangedFloat*, "", "RangedFloat");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: RangedFloat
class CORDL_TYPE RangedFloat : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_Curve)) ::UnityEngine::AnimationCurve*  Curve;

 __declspec(property(get=get_Max, put=set_Max)) float_t  Max;

 __declspec(property(get=get_Min, put=set_Min)) float_t  Min;

 __declspec(property(get=get_Range)) float_t  Range;

/// @brief Field _curve, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__curve, put=__cordl_internal_set__curve)) ::UnityEngine::AnimationCurve*  _curve;

/// @brief Field _max, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__max, put=__cordl_internal_set__max)) float_t  _max;

/// @brief Field _min, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__min, put=__cordl_internal_set__min)) float_t  _min;

/// @brief Field _value, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__value, put=__cordl_internal_set__value)) float_t  _value;

 __declspec(property(get=get_curved)) float_t  curved;

 __declspec(property(get=get_normalized, put=set_normalized)) float_t  normalized;

/// @brief Convert operator to "::GlobalNamespace::IRangedVariable_1<float_t>"
constexpr operator  ::GlobalNamespace::IRangedVariable_1<float_t>*() noexcept;

/// @brief Convert operator to "::GlobalNamespace::IVariable"
constexpr operator  ::GlobalNamespace::IVariable*() noexcept;

/// @brief Convert operator to "::GlobalNamespace::IVariable_1<float_t>"
constexpr operator  ::GlobalNamespace::IVariable_1<float_t>*() noexcept;

/// @brief Method Get, addr 0x597eb4c, size 0x8, virtual true, abstract: false, final true
inline float_t Get() ;

static inline ::GlobalNamespace::RangedFloat* New_ctor() ;

/// @brief Method Set, addr 0x597eb54, size 0x1c, virtual true, abstract: false, final true
inline void Set(float_t  f) ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__curve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__curve() ;

constexpr float_t const& __cordl_internal_get__max() const;

constexpr float_t& __cordl_internal_get__max() ;

constexpr float_t const& __cordl_internal_get__min() const;

constexpr float_t& __cordl_internal_get__min() ;

constexpr float_t const& __cordl_internal_get__value() const;

constexpr float_t& __cordl_internal_get__value() ;

constexpr void __cordl_internal_set__curve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set__max(float_t  value) ;

constexpr void __cordl_internal_set__min(float_t  value) ;

constexpr void __cordl_internal_set__value(float_t  value) ;

/// @brief Method .ctor, addr 0x597eb70, size 0x50, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Curve, addr 0x597ea0c, size 0x8, virtual true, abstract: false, final true
inline ::UnityEngine::AnimationCurve* get_Curve() ;

/// @brief Method get_Max, addr 0x597ea30, size 0x8, virtual true, abstract: false, final true
inline float_t get_Max() ;

/// @brief Method get_Min, addr 0x597ea20, size 0x8, virtual true, abstract: false, final true
inline float_t get_Min() ;

/// @brief Method get_Range, addr 0x597ea14, size 0xc, virtual true, abstract: false, final true
inline float_t get_Range() ;

/// @brief Method get_curved, addr 0x597eafc, size 0x50, virtual false, abstract: false, final false
inline float_t get_curved() ;

/// @brief Method get_normalized, addr 0x597ea40, size 0x8c, virtual false, abstract: false, final false
inline float_t get_normalized() ;

/// @brief Convert to "::GlobalNamespace::IRangedVariable_1<float_t>"
constexpr ::GlobalNamespace::IRangedVariable_1<float_t>* i___GlobalNamespace__IRangedVariable_1_float_t_() noexcept;

/// @brief Convert to "::GlobalNamespace::IVariable"
constexpr ::GlobalNamespace::IVariable* i___GlobalNamespace__IVariable() noexcept;

/// @brief Convert to "::GlobalNamespace::IVariable_1<float_t>"
constexpr ::GlobalNamespace::IVariable_1<float_t>* i___GlobalNamespace__IVariable_1_float_t_() noexcept;

/// @brief Method set_Max, addr 0x597ea38, size 0x8, virtual true, abstract: false, final true
inline void set_Max(float_t  value) ;

/// @brief Method set_Min, addr 0x597ea28, size 0x8, virtual true, abstract: false, final true
inline void set_Min(float_t  value) ;

/// @brief Method set_normalized, addr 0x597eacc, size 0x30, virtual false, abstract: false, final false
inline void set_normalized(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RangedFloat() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RangedFloat", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RangedFloat(RangedFloat && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RangedFloat", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RangedFloat(RangedFloat const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2526};

/// [SerializeField]
/// @brief Field _value, offset: 0x20, size: 0x4, def value: None
 float_t  ____value;

/// [SerializeField]
/// @brief Field _min, offset: 0x24, size: 0x4, def value: None
 float_t  ____min;

/// [SerializeField]
/// @brief Field _max, offset: 0x28, size: 0x4, def value: None
 float_t  ____max;

/// [SerializeField]
/// @brief Field _curve, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____curve;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RangedFloat, ____value) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RangedFloat, ____min) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RangedFloat, ____max) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RangedFloat, ____curve) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RangedFloat) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
