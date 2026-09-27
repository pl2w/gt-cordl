#pragma once
// IWYU pragma private; include "Voxels/MemoryMonitor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MemoryMonitor)
// Forward declare root types
namespace Voxels {
class MemoryMonitor;
}
// Write type traits
MARK_REF_T(::Voxels::MemoryMonitor*);
DEFINE_IL2CPP_CLASS(::Voxels::MemoryMonitor*, "Voxels", "MemoryMonitor");
// Dependencies UnityEngine.MonoBehaviour
namespace Voxels {
// Is value type: false
// CS Name: Voxels.MemoryMonitor
class CORDL_TYPE MemoryMonitor : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field logInterval, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_logInterval, put=__cordl_internal_set_logInterval)) float_t  logInterval;

/// @brief Field nextLog, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_nextLog, put=__cordl_internal_set_nextLog)) float_t  nextLog;

/// @brief Method Collect, addr 0x5dc37d8, size 0x8c, virtual false, abstract: false, final false
inline void Collect() ;

static inline ::Voxels::MemoryMonitor* New_ctor() ;

/// @brief Method Update, addr 0x5dc37a0, size 0x38, virtual false, abstract: false, final false
inline void Update() ;

constexpr float_t const& __cordl_internal_get_logInterval() const;

constexpr float_t& __cordl_internal_get_logInterval() ;

constexpr float_t const& __cordl_internal_get_nextLog() const;

constexpr float_t& __cordl_internal_get_nextLog() ;

constexpr void __cordl_internal_set_logInterval(float_t  value) ;

constexpr void __cordl_internal_set_nextLog(float_t  value) ;

/// @brief Method .ctor, addr 0x5dc3864, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MemoryMonitor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MemoryMonitor", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MemoryMonitor(MemoryMonitor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MemoryMonitor", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MemoryMonitor(MemoryMonitor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5062};

/// @brief Field logInterval, offset: 0x20, size: 0x4, def value: None
 float_t  ___logInterval;

/// @brief Field nextLog, offset: 0x24, size: 0x4, def value: None
 float_t  ___nextLog;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Voxels::MemoryMonitor, ___logInterval) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Voxels::MemoryMonitor, ___nextLog) == 0x24, "Offset mismatch!");

static_assert(sizeof(::Voxels::MemoryMonitor) == 0x28, "Size mismatch!");

} // namespace end def Voxels
