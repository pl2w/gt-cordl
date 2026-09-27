#pragma once
// IWYU pragma private; include "GlobalNamespace/ServerTimeRevolution.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTime_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ServerTimeRevolution)
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class ServerTimeRevolution;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ServerTimeRevolution*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ServerTimeRevolution*, "", "ServerTimeRevolution");
// Dependencies System.DateTime, UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: ServerTimeRevolution
class CORDL_TYPE ServerTimeRevolution : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field anchor, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_anchor, put=__cordl_internal_set_anchor)) ::System::DateTime  anchor;

/// @brief Field orbit, offset 0x20, size 0xc 
 __declspec(property(get=__cordl_internal_get_orbit, put=__cordl_internal_set_orbit)) ::UnityEngine::Vector3  orbit;

/// @brief Field pivot, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_pivot, put=__cordl_internal_set_pivot)) ::UnityW<::UnityEngine::Transform>  pivot;

/// @brief Field pivotOffset, offset 0x38, size 0xc 
 __declspec(property(get=__cordl_internal_get_pivotOffset, put=__cordl_internal_set_pivotOffset)) ::UnityEngine::Vector3  pivotOffset;

/// @brief Field speed, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_speed, put=__cordl_internal_set_speed)) double_t  speed;

/// @brief Method LateUpdate, addr 0x5b1de54, size 0x190, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::GlobalNamespace::ServerTimeRevolution* New_ctor() ;

constexpr ::System::DateTime const& __cordl_internal_get_anchor() const;

constexpr ::System::DateTime& __cordl_internal_get_anchor() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_orbit() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_orbit() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_pivot() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_pivot() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_pivotOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_pivotOffset() ;

constexpr double_t const& __cordl_internal_get_speed() const;

constexpr double_t& __cordl_internal_get_speed() ;

constexpr void __cordl_internal_set_anchor(::System::DateTime  value) ;

constexpr void __cordl_internal_set_orbit(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_pivot(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_pivotOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_speed(double_t  value) ;

/// @brief Method .ctor, addr 0x5b1dfe4, size 0x50, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ServerTimeRevolution() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ServerTimeRevolution", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ServerTimeRevolution(ServerTimeRevolution && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ServerTimeRevolution", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ServerTimeRevolution(ServerTimeRevolution const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3589};

/// [SerializeField]
/// @brief Field orbit, offset: 0x20, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___orbit;

/// [SerializeField]
/// @brief Field pivot, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___pivot;

/// [SerializeField]
/// @brief Field pivotOffset, offset: 0x38, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___pivotOffset;

/// [SerializeField]
/// @brief Field speed, offset: 0x48, size: 0x8, def value: None
 double_t  ___speed;

/// @brief Field anchor, offset: 0x50, size: 0x8, def value: None
 ::System::DateTime  ___anchor;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ServerTimeRevolution, ___orbit) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ServerTimeRevolution, ___pivot) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ServerTimeRevolution, ___pivotOffset) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ServerTimeRevolution, ___speed) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ServerTimeRevolution, ___anchor) == 0x50, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ServerTimeRevolution) == 0x58, "Size mismatch!");

} // namespace end def GlobalNamespace
