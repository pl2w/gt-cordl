#pragma once
// IWYU pragma private; include "GorillaTagScripts/MovingSurfaceManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MovingSurfaceManager)
namespace GorillaTagScripts {
class MovingSurface;
}
namespace GorillaTagScripts {
class SurfaceMover;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GorillaTagScripts {
class MovingSurfaceManager;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::MovingSurfaceManager*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::MovingSurfaceManager*, "GorillaTagScripts", "MovingSurfaceManager");
// Dependencies UnityEngine.MonoBehaviour
namespace GorillaTagScripts {
// Is value type: false
// CS Name: GorillaTagScripts.MovingSurfaceManager
class CORDL_TYPE MovingSurfaceManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_instance, put=setStaticF_instance)) ::UnityW<::GorillaTagScripts::MovingSurfaceManager>  instance;

/// @brief Field movingSurfaces, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_movingSurfaces, put=__cordl_internal_set_movingSurfaces)) ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GorillaTagScripts::MovingSurface>>*  movingSurfaces;

/// @brief Field surfaceMovers, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_surfaceMovers, put=__cordl_internal_set_surfaceMovers)) ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::SurfaceMover>>*  surfaceMovers;

/// @brief Method Awake, addr 0x5b81938, size 0x198, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method FixedUpdate, addr 0x5b81fbc, size 0x144, virtual false, abstract: false, final false
inline void FixedUpdate() ;

static inline ::GorillaTagScripts::MovingSurfaceManager* New_ctor() ;

/// @brief Method RegisterMovingSurface, addr 0x5b81798, size 0x60, virtual false, abstract: false, final false
inline void RegisterMovingSurface(::GorillaTagScripts::MovingSurface*  ms) ;

/// @brief Method RegisterSurfaceMover, addr 0x5b81ad0, size 0xec, virtual false, abstract: false, final false
inline void RegisterSurfaceMover(::GorillaTagScripts::SurfaceMover*  sm) ;

/// @brief Method TryGetMovingSurface, addr 0x5b81f04, size 0xb8, virtual false, abstract: false, final false
inline bool TryGetMovingSurface(int32_t  id, ::by_ref<::GorillaTagScripts::MovingSurface*>  result) ;

/// @brief Method UnregisterMovingSurface, addr 0x5b818ac, size 0x5c, virtual false, abstract: false, final false
inline void UnregisterMovingSurface(::GorillaTagScripts::MovingSurface*  ms) ;

/// @brief Method UnregisterSurfaceMover, addr 0x5b81eac, size 0x58, virtual false, abstract: false, final false
inline void UnregisterSurfaceMover(::GorillaTagScripts::SurfaceMover*  sm) ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GorillaTagScripts::MovingSurface>>* const& __cordl_internal_get_movingSurfaces() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GorillaTagScripts::MovingSurface>>*& __cordl_internal_get_movingSurfaces() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::SurfaceMover>>* const& __cordl_internal_get_surfaceMovers() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::SurfaceMover>>*& __cordl_internal_get_surfaceMovers() ;

constexpr void __cordl_internal_set_movingSurfaces(::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GorillaTagScripts::MovingSurface>>*  value) ;

constexpr void __cordl_internal_set_surfaceMovers(::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::SurfaceMover>>*  value) ;

/// @brief Method .ctor, addr 0x5b82178, size 0xe4, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::GorillaTagScripts::MovingSurfaceManager> getStaticF_instance() ;

static inline void setStaticF_instance(::UnityW<::GorillaTagScripts::MovingSurfaceManager>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MovingSurfaceManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MovingSurfaceManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MovingSurfaceManager(MovingSurfaceManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MovingSurfaceManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MovingSurfaceManager(MovingSurfaceManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3921};

/// @brief Field surfaceMovers, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::SurfaceMover>>*  ___surfaceMovers;

/// @brief Field movingSurfaces, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GorillaTagScripts::MovingSurface>>*  ___movingSurfaces;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::MovingSurfaceManager, ___surfaceMovers) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::MovingSurfaceManager, ___movingSurfaces) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::MovingSurfaceManager) == 0x30, "Size mismatch!");

} // namespace end def GorillaTagScripts
