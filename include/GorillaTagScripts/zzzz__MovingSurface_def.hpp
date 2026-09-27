#pragma once
// IWYU pragma private; include "GorillaTagScripts/MovingSurface.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MovingSurface)
namespace GT_CustomMapSupportRuntime {
class MovingSurfaceSettings;
}
// Forward declare root types
namespace GorillaTagScripts {
class MovingSurface;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::MovingSurface*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::MovingSurface*, "GorillaTagScripts", "MovingSurface");
// [RequireComponent(typeof(UnityEngine.Collider))]
// Dependencies UnityEngine.MonoBehaviour
namespace GorillaTagScripts {
// Is value type: false
// CS Name: GorillaTagScripts.MovingSurface
class CORDL_TYPE MovingSurface : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field uniqueId, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_uniqueId, put=__cordl_internal_set_uniqueId)) int32_t  uniqueId;

/// @brief Method CopySettings, addr 0x5b81910, size 0x18, virtual false, abstract: false, final false
inline void CopySettings(::GT_CustomMapSupportRuntime::MovingSurfaceSettings*  movingSurfaceSettings) ;

/// @brief Method GetID, addr 0x5b81908, size 0x8, virtual false, abstract: false, final false
inline int32_t GetID() ;

static inline ::GorillaTagScripts::MovingSurface* New_ctor() ;

/// @brief Method OnDestroy, addr 0x5b817f8, size 0xb4, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method Start, addr 0x5b816f8, size 0xa0, virtual false, abstract: false, final false
inline void Start() ;

constexpr int32_t const& __cordl_internal_get_uniqueId() const;

constexpr int32_t& __cordl_internal_get_uniqueId() ;

constexpr void __cordl_internal_set_uniqueId(int32_t  value) ;

/// @brief Method .ctor, addr 0x5b81928, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MovingSurface() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MovingSurface", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MovingSurface(MovingSurface && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MovingSurface", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MovingSurface(MovingSurface const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3920};

/// [SerializeField]
/// @brief Field uniqueId, offset: 0x20, size: 0x4, def value: None
 int32_t  ___uniqueId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::MovingSurface, ___uniqueId) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::MovingSurface) == 0x28, "Size mismatch!");

} // namespace end def GorillaTagScripts
