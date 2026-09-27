#pragma once
// IWYU pragma private; include "GorillaTag/SimpleAABB.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(SimpleAABB)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GorillaTag {
class SimpleAABB;
}
// Write type traits
MARK_REF_T(::GorillaTag::SimpleAABB*);
DEFINE_IL2CPP_CLASS(::GorillaTag::SimpleAABB*, "GorillaTag", "SimpleAABB");
// Dependencies UnityEngine.Bounds, UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GorillaTag {
// Is value type: false
// CS Name: GorillaTag.SimpleAABB
class CORDL_TYPE SimpleAABB : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field m_bounds, offset 0x38, size 0x18 
 __declspec(property(get=__cordl_internal_get_m_bounds, put=__cordl_internal_set_m_bounds)) ::UnityEngine::Bounds  m_bounds;

/// @brief Field m_center, offset 0x20, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_center, put=__cordl_internal_set_m_center)) ::UnityEngine::Vector3  m_center;

/// @brief Field m_size, offset 0x2c, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_size, put=__cordl_internal_set_m_size)) ::UnityEngine::Vector3  m_size;

/// @brief Method Awake, addr 0x5d367b8, size 0x34, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method IsInBounds, addr 0x5d367ec, size 0x58, virtual false, abstract: false, final false
inline bool IsInBounds(::UnityEngine::Vector3  point) ;

static inline ::GorillaTag::SimpleAABB* New_ctor() ;

constexpr ::UnityEngine::Bounds const& __cordl_internal_get_m_bounds() const;

constexpr ::UnityEngine::Bounds& __cordl_internal_get_m_bounds() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_center() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_center() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_size() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_size() ;

constexpr void __cordl_internal_set_m_bounds(::UnityEngine::Bounds  value) ;

constexpr void __cordl_internal_set_m_center(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_size(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0x5d36844, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SimpleAABB() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SimpleAABB", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SimpleAABB(SimpleAABB && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SimpleAABB", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SimpleAABB(SimpleAABB const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4657};

/// [SerializeField]
/// @brief Field m_center, offset: 0x20, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_center;

/// [SerializeField]
/// @brief Field m_size, offset: 0x2c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_size;

/// @brief Field m_bounds, offset: 0x38, size: 0x18, def value: None
 ::UnityEngine::Bounds  ___m_bounds;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::SimpleAABB, ___m_center) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::SimpleAABB, ___m_size) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::SimpleAABB, ___m_bounds) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::SimpleAABB) == 0x50, "Size mismatch!");

} // namespace end def GorillaTag
