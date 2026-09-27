#pragma once
// IWYU pragma private; include "GorillaTag/StaticLodGroup.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(StaticLodGroup)
namespace GlobalNamespace {
class IGorillaSimpleBackgroundWorker;
}
// Forward declare root types
namespace GorillaTag {
class StaticLodGroup;
}
// Write type traits
MARK_REF_T(::GorillaTag::StaticLodGroup*);
DEFINE_IL2CPP_CLASS(::GorillaTag::StaticLodGroup*, "GorillaTag", "StaticLodGroup");
// [DefaultExecutionOrder(2000)]
// Dependencies UnityEngine.MonoBehaviour
namespace GorillaTag {
// Is value type: false
// CS Name: GorillaTag.StaticLodGroup
class CORDL_TYPE StaticLodGroup : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field collisionEnableDistance, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_collisionEnableDistance, put=__cordl_internal_set_collisionEnableDistance)) float_t  collisionEnableDistance;

/// @brief Field index, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_index, put=__cordl_internal_set_index)) int32_t  index;

/// @brief Field initialized, offset 0x2c, size 0x1 
 __declspec(property(get=__cordl_internal_get_initialized, put=__cordl_internal_set_initialized)) bool  initialized;

/// @brief Field uiFadeDistanceMax, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_uiFadeDistanceMax, put=__cordl_internal_set_uiFadeDistanceMax)) float_t  uiFadeDistanceMax;

/// @brief Convert operator to "::GlobalNamespace::IGorillaSimpleBackgroundWorker"
constexpr operator  ::GlobalNamespace::IGorillaSimpleBackgroundWorker*() noexcept;

static inline ::GorillaTag::StaticLodGroup* New_ctor() ;

/// @brief Method OnDestroy, addr 0x5d24344, size 0x6c, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x5d242d4, size 0x70, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5d2404c, size 0x9c, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method SimpleWork, addr 0x5d24594, size 0x74, virtual true, abstract: false, final true
inline void SimpleWork() ;

constexpr float_t const& __cordl_internal_get_collisionEnableDistance() const;

constexpr float_t& __cordl_internal_get_collisionEnableDistance() ;

constexpr int32_t const& __cordl_internal_get_index() const;

constexpr int32_t& __cordl_internal_get_index() ;

constexpr bool const& __cordl_internal_get_initialized() const;

constexpr bool& __cordl_internal_get_initialized() ;

constexpr float_t const& __cordl_internal_get_uiFadeDistanceMax() const;

constexpr float_t& __cordl_internal_get_uiFadeDistanceMax() ;

constexpr void __cordl_internal_set_collisionEnableDistance(float_t  value) ;

constexpr void __cordl_internal_set_index(int32_t  value) ;

constexpr void __cordl_internal_set_initialized(bool  value) ;

constexpr void __cordl_internal_set_uiFadeDistanceMax(float_t  value) ;

/// @brief Method .ctor, addr 0x5d24cd8, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GlobalNamespace::IGorillaSimpleBackgroundWorker"
constexpr ::GlobalNamespace::IGorillaSimpleBackgroundWorker* i___GlobalNamespace__IGorillaSimpleBackgroundWorker() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StaticLodGroup() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StaticLodGroup", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StaticLodGroup(StaticLodGroup && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StaticLodGroup", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StaticLodGroup(StaticLodGroup const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4615};

/// @brief Field k_monoDefaultExecutionOrder offset 0xffffffff size 0x4
static constexpr int32_t  k_monoDefaultExecutionOrder{static_cast<int32_t>(0x7d0)};

/// @brief Field index, offset: 0x20, size: 0x4, def value: None
 int32_t  ___index;

/// @brief Field collisionEnableDistance, offset: 0x24, size: 0x4, def value: None
 float_t  ___collisionEnableDistance;

/// @brief Field uiFadeDistanceMax, offset: 0x28, size: 0x4, def value: None
 float_t  ___uiFadeDistanceMax;

/// @brief Field initialized, offset: 0x2c, size: 0x1, def value: None
 bool  ___initialized;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::StaticLodGroup, ___index) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::StaticLodGroup, ___collisionEnableDistance) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::StaticLodGroup, ___uiFadeDistanceMax) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::StaticLodGroup, ___initialized) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::StaticLodGroup) == 0x30, "Size mismatch!");

} // namespace end def GorillaTag
