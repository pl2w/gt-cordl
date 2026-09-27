#pragma once
// IWYU pragma private; include "GlobalNamespace/DistanceMeasure.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(DistanceMeasure)
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class DistanceMeasure;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::DistanceMeasure*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DistanceMeasure*, "", "DistanceMeasure");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: DistanceMeasure
class CORDL_TYPE DistanceMeasure : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field from, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_from, put=__cordl_internal_set_from)) ::UnityW<::UnityEngine::Transform>  from;

/// @brief Field to, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_to, put=__cordl_internal_set_to)) ::UnityW<::UnityEngine::Transform>  to;

/// @brief Method Awake, addr 0x5a1aa84, size 0xe4, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::DistanceMeasure* New_ctor() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_from() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_from() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_to() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_to() ;

constexpr void __cordl_internal_set_from(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_to(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x5a1ab68, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DistanceMeasure() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DistanceMeasure", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DistanceMeasure(DistanceMeasure && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DistanceMeasure", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DistanceMeasure(DistanceMeasure const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2798};

/// @brief Field from, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___from;

/// @brief Field to, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___to;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DistanceMeasure, ___from) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DistanceMeasure, ___to) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DistanceMeasure) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
